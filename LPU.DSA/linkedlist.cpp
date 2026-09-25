#include <iostream>
using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// int main()
// {
// node a, b, c;
// a.data = 37;
// b.data = 21;
// c.data = 48;
// node *start;
// start = &a;
// a.next = &b;
// b.next = &c;
// c.next = NULL;
// node *ptr;
// ptr = start;
// cout<<"START ";
// while (ptr != NULL)
// {
//     cout <<"->"<< ptr->data;
//     ptr = ptr->next;
// }
// cout<<"-> NULL";

// return 0;
// node *a, *b, *c;
// a=new node;
// b=new node;
// c=new node;
// a->data = 37;
// b->data = 21;
// c->data = 48;
// node *start;
// start =a;
// a->data = b;
// b->data = c;
// c->data = NULL;

// struct Node
// {
//     int data;
//     Node *next;
// };

// Node *convertToCircular(Node *head)
// {
//     if (head == nullptr)
//         return nullptr;

//     Node *current = head;
//     while (current->next != nullptr)
//     {
//         current = current->next;
//     }
//     current->next = head;
//     return head;
// }


struct node{
    int data ;
    node *next;
};
void print_list(node* start){
    node* ptr = start;
    cout<<"Start -> ";
    while (ptr != NULL){
        cout<<ptr-> data <<" -> ";
        ptr = ptr ->next;
    }
    cout <<"NULL"<<endl;

}
void insert_beg(node** start,int item){
    node *n=new node;
    n->data =25;
    n->next = *start;
    *start =n;

    
}
int main()
{
    node *start = NULL;
    print_list(NULL);
    insert_beg(&start,25);
    print_list(start);
    insert_beg(&start,25);
    print_list(start);
    insert_beg(&start,25);
    print_list(start);
    
    return 0;
}