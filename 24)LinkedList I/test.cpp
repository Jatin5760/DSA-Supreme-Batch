// This is Insertion code at the begining
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     Node* Head;
//     Head = NULL;
//     int arr[] = {2,4,6,8,10};
//     for(int i = 0; i< 5; i++){
//         if(Head == NULL){
//             Head = new Node(arr[i]);
//         }
//         else{
//             Node* Temp;
//             Temp = new Node(arr[i]);
//             Temp->next = Head;
//             Head = Temp;
//         }
//     }
//     Node* Print = Head;
//     while(Print != NULL){
//         cout<< Print->data<<" ";
//         Print = Print->next;
//     }
//     return 0;
// }

// Insertion at end
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
//     Node* Head;
//     Head = NULL;
//     Node* Tail;
//     Tail = NULL;
//     int arr[] = {2,4,6,8,10};
//     for(int i = 0; i < 5; i++){
//         if(Head == NULL){
//             Head = new Node(arr[i]);
//             Tail = Head;
//         }
//         else{
//             Tail->next = new Node(arr[i]);
//             Tail = Tail->next;
//         }
//     }
//     Node* Temp = Head;
//     while(Temp){
//         cout<< Temp->data<<" ";
//         Temp = Temp->next;
//     }
//     return 0;
// }

// Create List using recurrsion
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// Node* CreateLLUsingRecurr(int arr[], int size, int index){
//     // Base Case
//     if(index == size){
//         return NULL;
//     }
//     Node* Temp;
//     Temp = new Node(arr[index]);
//     Temp->next = CreateLLUsingRecurr(arr, size, index+1);
//     return Temp;
// };
// int main(){
//     Node* Head;
//     Head = NULL;
//     int arr[] = {2,4,6,8,10};
//     int size = 5;
//     int index = 0;
//     Head = CreateLLUsingRecurr(arr, size, index);
//     Node* Temp = Head;
//     while(Temp!=NULL){
//         cout<<Temp->data<<" ";
//         Temp = Temp->next;
//     }
//     return 0;
// }

// Create List using recurrsion by adding elements in start
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;       
//     Node* next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// Node* CreateLLUsingRecurr(int arr[], int size, int index, Node* prev){
//     // Base Case
//     if(index == size){
//         return prev;
//     }
//     Node* Temp;
//     Temp = new Node(arr[index]);
//     Temp->next = prev;
//     return CreateLLUsingRecurr(arr, size, index + 1, Temp);
// };
// int main(){
//     Node* Head;
//     Head = NULL;
//     int arr[] = {2,4,6,8,10};
//     int size = 5;
//     int index = 0;
//     Head = CreateLLUsingRecurr(arr, size, index, Head);
//     Node* Temp = Head;
//     while(Temp!=NULL){
//         cout<<Temp->data<<" ";
//         Temp = Temp->next;
//     }
//     return 0;
// }

// Insert at particular point
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node* Create(int arr[], int size, int index){
        // Base Case
        if(index ==  size){
            return NULL;
        }
        Node* Temp;
        Temp = new Node(arr[index]);
        Temp->next = Create(arr,size, index + 1);
        return Temp;
};
int main(){
    Node* Head;
    Head = NULL;
    int arr[] = {2,4,6,8,10};
    Head = Create(arr, 5, 0);

    // Insert at Particular position
    int x = 3;
    int value = 30;
    Node* temp = Head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    


    Node* Temp = Head;
    while(Temp){
        cout<<Temp->data<<" ";
        Temp = Temp->next;
    }
    return 0;
}
