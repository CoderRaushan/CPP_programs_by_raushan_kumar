#include <iostream>
#define SPACE 10
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    Node(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
    bool IsEmpty()
    {
        if (root == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insert(Node *n)
    {
        if (root == NULL)
        {
            root = n;
            cout << "Value Inserted as root node";
            return;
        }
        else
        {
            Node *temp = root;
            while (temp != NULL)
            {
                if (n->value == temp->value)
                {
                    cout << "Value Already exist,"
                         << "Insert another value!" << endl;
                    return;
                }
                else if (n->value < temp->value && temp->left == NULL)
                {
                    temp->left = n;
                    cout << "Value Inserted to the left!" << endl;
                    return;
                }
                else if (n->value < temp->value)
                {
                    temp = temp->left;
                    return;
                }
                else if (n->value > temp->value && right == NULL)
                {
                    temp->right = n;
                    cout << "Value Inserted to the right!" << endl;
                    return;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
    }
    void print2D(Node *r, int space)
    {
        if (r == NULL)
        {
            return;
        }
        else
        {
            space += space;
            print2D(r->right, space);
            cout << endl;
            for (int i = space; i < space; i++)
                cout << " ";
            cout << r->value << "\n";
            print2D(r->left, space);
        }
    }
};
int main()
{
    BST obj;
    int option, val;

    do
    {
        cout << "What operation do you want to perform? "
             << " Select Option number. Enter 0 to exit." << endl;
        cout << "1. Insert Node" << endl;
        cout << "4. Print/Traversal BST values" << endl;
        cout << "6. Clear Screen" << endl;
        cout << "0. Exit Program" << endl;

        cin >> option;
        Node *n = new Node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "INSERT" << endl;
            cout << "Enter VALUE of TREE NODE to INSERT in BST: ";
            cin >> val;
            n->value = val;
            obj.root = obj.print2D(obj.root,);
            // obj.insertNode(new_node);
            cout << endl;
            break;
        case 4:
            cout << "PRINT 2D: " << endl;
            obj.print2D(obj.root, 5);
            cout << endl;
            cout << "Print Level Order BFS: \n";
            obj.printLevelOrderBFS(obj.root);
            cout << endl;
            //	      cout <<"PRE-ORDER: ";
            //	      obj.printPreorder(obj.root);
            //	      cout<<endl;
            //	      cout <<"IN-ORDER: ";
            //	      obj.printInorder(obj.root);
            //	      cout<<endl;
            //	      cout <<"POST-ORDER: ";
            //	      obj.printPostorder(obj.root);
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "Invalid Input:" << endl;
        }
    } while (option != 0);
    return 0;
}
