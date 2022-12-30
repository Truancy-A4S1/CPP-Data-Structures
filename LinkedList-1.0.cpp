#include <iostream>
using namespace std;

// struct ay parang class lang pero struct siya hahah
struct node
{
    int data;
    node *next;
};

// extra node pointers for tracking the head and tail
    node *n;    // new node pointer
    node *t;    // temp node pointer
    node *h;    // head node pointer


void insertNode(int value);
void printList(node* head);

int main()
{
    cout << "Enter a data for head: ";
    int val;
    cin >> val;

    n = new node; // n pointing to a new node

    h = n; // point the head to the first node n

    n -> data = val; // insert the value inside 'int data' of the new node

    t = n; // set temp to point the same node n is pointing


    while(val != 0) // stop accepting if val = 0;
    {
        cout << "[0 = Exit] Enter new data: ";

        cin >> val;

        insertNode(val);

    }

    node *temp = h; // make a temp node pointer equal to the node h is pointing

    while (temp != NULL) // loop while temp is not pointing to a null node
    {
        printList(temp);  //print the data of the node where temp is pointing

        temp = temp -> next; // set temp equal to the next node temp is currently pointing at
    }
}

void insertNode(int value)
{
    n = new node; // n pointing to a new node

    n -> data = value; // insert the value inside 'int data' of the new node

    t -> next = n; // set the next node where t is pointing equal to the node n is pointing

    t = n; // set temp to point the same node n is pointing

    n -> next = NULL; // set the new node's next equal to NULL to it's the end of linked list

    cout << "NEW NODE CREATED!" << endl << endl;
}


void printList(node* head)
{
    node* temp = head;  // tig copy - paste ko lang ko hahah katamad kasi

    cout << temp -> data << " - ";  // tamang print lang ng data na pinopoint ng temp pointer
}

