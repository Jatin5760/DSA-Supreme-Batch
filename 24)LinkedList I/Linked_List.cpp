// Node creation
#include<iostream>
using namespace std;
class Node
    {
        public:

        int data;
        Node* next;

        // Agar node create hi karna hai toh constructor ki madat se kar lete hai, Isko karne ke baad hame na toh static se allocate karna na hi dynamic se.
        Node(int value)
            {
                data = value;
                next = NULL;
            }
    };
int main()
    {
        //Static way to assign data

            // Node A1;
            // A1.data = 4;
            // A1.data = NULL;
        

        /* Dynamic way to allocate memory

            Node * Head;
            Head = new Node();
            Head -> data = 4;
            Head -> next = NULL;       
        */

        /* Constructor calls
        
            Node *head;
            head = new Node(4);
        */
       
        
        return 0;
    }