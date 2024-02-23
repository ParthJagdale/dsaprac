#include <bits/stdc++.h>
using namespace std;
class dictionary;
class node
{

    string word, meaning;
    node *left;
    node *right;

public:
    friend class dictionary;
    node()
    {
        left = NULL;
        right = NULL;
    }
    node(string word, string meaning)
    {
        this->word = word;
        this->meaning = meaning;
        left = NULL;
        right = NULL;
    }
};
class dictionary
{
    node *root;

    
public:
    dictionary()
    {
        root = NULL;
    }
    void insert()
    {

        int n, i;
        string wordI, meaningI;
        cout << "Enter the Number of insertions :";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "Enter the word :";
            cin >> wordI;
            cout << "ENter the meaning :";
            cin >> meaningI;
            node *p = new node(wordI, meaningI);
            if (root == NULL)
            {
                root = p;
                break;
            }
            node *cur = root;
            node *par = root;
            while (cur != NULL)
            {
                if (wordI > cur->word)
                {
                    par = cur;
                    cur->right;
                }
                else if (wordI < cur->word)
                {
                    par = cur;
                    cur->left;
                }
                else
                {
                    cout << "Word is already in Dictionary" << endl;
                }
            }
            if (wordI > par->word)
            {
                par->right = p;
            }
            else
            {
                par->left = p;
            }
        }
    }
    void inorder()
    {
        inorder_re(root);
    }
    void inorder_re(node *rnode)
    {
        inorder_re(rnode->left);
        cout << rnode->word << "    " << rnode->meaning << endl;
        inorder_re(rnode->right);
    }
};

int main()
{
    int cho;
    int j = 0;
    char dec;
    dictionary d;
    do
    {
        cout << "1.insert\n2.display inorder\n3.exit\n\n";
        cin >> cho;
        switch (cho)
        {
        case 1:
            d.insert();
            break;

        case 2:
            d.inorder();
            break;

          

        default:
            cout << "Wrong choice";
            break;
        }

    } while (j < 2);
    return 0;
}