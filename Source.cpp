#include<iostream>  
using namespace std;

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
node* head = NULL;
node* tail = NULL;
class list{
public:
    void insertNode(int data)
    {
        node* newNode = new node();
        newNode->data = data;
        if (head == NULL)
        {
            head = tail = newNode;
            head->prev = NULL;
            tail->next = NULL;
        }
        else
        {
            tail->prev = newNode;
            newNode->next = tail;
            tail = newNode;
        }
    }

    void display()
    {
        node* temp = head;
        if (head == NULL)
        {
            cout << "List is Empty " << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};
int main()
{
    list l;
    l.insertNode(1);
    l.insertNode(2);
    l.insertNode(4);
    l.insertNode(6);
    cout << "Circular doubly lnk list is " << endl;
    l.display();
    system("pause");
    return 0;
}