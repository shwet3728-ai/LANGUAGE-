// #include <iostream>
// using namespace std;
// struct node {
//     int data; 
//     node *next;
// };
// void insert(node* &start, int item){
//     node *n = new node;
//     n->data = item;
//     n->next = start;
//     start = n;
// }
// void delete_first(node* &start){
//     if(start==NULL){ //empty list case
//         cout<<"UNDERFLOW ERROR!";
//         return;
//     }
//     //general case
//     node *temp = start;
//     start = start->next;
//     cout<<"Deleted first node: "<< temp->data << endl;
//     delete temp;
// }
// void delete_last(node* &start){
//     if(start==NULL){ //empty list case
//         cout<<"UNDERFLOW ERROR!";
//         return;
//     }
//     if(start->next==NULL){ //single node list case
//         cout<<"Deleting last node: "<< start->data << endl;
//         delete start;
//         start = NULL;
//     }
//     //general case
//     node* curr = start;
//     node* prev = NULL;
//     while(curr->next != NULL){
//         prev = curr;
//         curr = curr->next;
//     }
//     cout<<"Deleting last node: "<< curr->data << endl;
//     prev->next = NULL;
//     delete curr;
// }
// void delete_item(node* &start, int item){
//     if(start==NULL){ //empty list case
//         cout<<"UNDERFLOW ERROR!";
//         return;
//     }
//     if(start->data == item) { //first node list case
//         cout<<"Deleting item node: "<< item << endl;
//         node* temp = start;
//         start = start->next;
//         delete temp;
//         return;
//     }
//     //general case
//     node* curr = start;
//     node* prev = NULL;
//     while(curr->next != NULL && curr->data != item){
//         prev = curr;
//         curr = curr->next;
//     }
//     if(curr->data == item){ // reconfirm if loop broke due to item match
//         cout<<"Deleting item node: "<< item << endl;
//         prev->next = curr->next;
//         delete curr;
//     }
//     else
//         cout << item << " not found in list!" << endl;
// }
// void print(node* start){
//     node* ptr=start;
//     cout<<"START -> ";
//     while(ptr!=NULL){
//         cout<< ptr->data <<" -> ";
//         ptr = ptr->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main() 
// {
//     node *start = NULL;
//     insert(start, 10);
//     insert(start, 30);
//     insert(start, 20);
//     insert(start, 60);
//     insert(start, 80);
//     insert(start, 40);
//     print(start);
//     delete_item(start, 50); //not found
//     print(start) ;
//     delete_item(start, 40); //first node case
//     print(start);
//     delete_item(start, 10); //last node case
//     print(start);
//     delete_first(start);
//     print(start);
//     delete_last(start);
//     print(start);
//     return 0;
// }

#include <iostream>
using namespace std;
struct node {
    int data; 
    node *next;
};
void insert(node* &start, int item){
    node *n = new node;
    n->data = item;
    n->next = start;
    start = n;
}
void delete_first(node* &start){
    if(start==NULL){ //empty list case
        cout<<"UNDERFLOW ERROR!";
        return;
    }
    //general case
    node *temp = start;
    start = start->next;
    cout<<"Deleted first node: "<< temp->data << endl;
    delete temp;
}
void delete_last(node* &start){
    if(start==NULL){ //empty list case
        cout<<"UNDERFLOW ERROR!";
        return;
    }
    if(start->next==NULL){ //single node list case
        cout<<"Deleting last node: "<< start->data << endl;
        delete start;
        start = NULL;
        return;
    }
    //general case
    node* curr = start;
    node* prev = NULL;
    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }
    cout<<"Deleting last node: "<< curr->data << endl;
    prev->next = NULL;
    delete curr;
}
void delete_item(node* &start, int item){
    if(start==NULL){ //empty list case
        cout<<"UNDERFLOW ERROR!";
        return;
    }
    if(start->data == item) { //first node list case
        cout<<"Deleting item node: "<< item << endl;
        node* temp = start;
        start = start->next;
        delete temp;
        return;
    }
    //general case
    node* curr = start;
    node* prev = NULL;
    while(curr->next != NULL && curr->data != item){
        prev = curr;
        curr = curr->next;
    }
    if(curr->data == item){ // reconfirm if loop broke due to item match
        cout<<"Deleting item node: "<< item << endl;
        prev->next = curr->next;
        delete curr;
    }
    else
        cout << item << " not found in list!" << endl;
}
void print(node* start){
    node* ptr=start;
    cout<<"START -> ";
    while(ptr!=NULL){
        cout<< ptr->data <<" -> ";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}
int main() 
{
    node *start = NULL;
    insert(start, 10);
    insert(start, 30);
    insert(start, 20);
    insert(start, 60);
    insert(start, 80);
    insert(start, 40);
    print(start);
    delete_item(start, 50); //not found
    print(start) ;
    delete_item(start, 40); //first node case
    print(start);
    delete_item(start, 10); //last node case
    print(start);
    delete_first(start);
    print(start);
    delete_last(start);
    print(start);
    return 0;
}
