#include<iostream>
using namespace std;

int main()
    {
        //int arr[4] = {12,14,16,18};

        // In teno me same address print hoga, array ke case me ye base address ko dikhayega.
        // cout<< arr << endl;
        // cout<< &arr << endl;
        // cout<< &arr[0] << endl;


        // int* p  = arr;
        // cout<<p<<endl;
        // cout<<&p<<endl;


        // cout<< *arr <<endl;
        // cout<<*arr + 1 <<endl;

        // cout<<*(arr + 1)<<endl;
        // cout<<arr[1]<<endl;

        // cout<<*(arr + 2)<<endl;
        // cout<<arr[2]<<endl;

        // cout<<*(arr + 3)<<endl;
        // cout<<arr[3]<<endl;


        // Ye dono expression internally ayese resolve hote hai and dono hi valid index hote hai.
        // arr[i]  = *(arr + i);
        // i[arr] = *(i + arr);


        // int arr[5];
        // cout<<sizeof(arr)<<endl; // 5 * 4 =  20 bytes size.

        // int* p = arr;
        // cout<<sizeof(p)<<endl; // always 8 size because it is pointer.


        // char ch[10] = "Jatin";
        // char* c = ch;

        // cout<< c << endl; // Here address will not print, a full string will print.

        
        // int * aur char * dono ki implementation alg alg hoti hai cout mai


        // char ch[10] = "Jatin";
        // char* c = ch;

        // cout<<ch<<endl;

        // cout<<&ch<<endl;

        // cout<<ch[0]<<endl;

        // cout<<&c<<endl;

        // cout<<*c<<endl; // *(c + 0) = c[0];

        // cout<<c<<endl;






        // char ch[9] = "SherBano";

        // char* c  = &ch[0]; 

        // cout<<ch<<endl; // Sherbano

        // cout<<&ch<<endl; //Address of 1st location in ch array.

        // cout<<*(ch+3)<<endl; // 4 th character will print.

        // cout<<c<<endl; // Full string printed

        // cout<<*c<<endl; // First character will print *(c+0) = c[0];
 
        // cout<<&c<<endl; // Pointer address printed.

        // cout<<*(c+3)<<endl; // c[3] = r;

        // cout<<c+2<<endl; // String will print from 2nd index to rest of the index till string terminates.  

        // cout<<c+8<<endl;




        // char ch = 'k';
        // char* ctr = &ch;

       //cout<<ctr<<endl; // String will print until it get null character.


       char name[10] = "Jatin";  // Isme ek temp place par string ko rakh lenge then memeory allot karte hai copy to name array ki storage, ye good practice hai.
       char * c = "Jatin"; // Isme string temp place par store hoti hai memeoy me hamne usi place par point karwa diya, so ye ek bad practice hai.

       cout<<name<<endl;
       cout<<c<<endl;








    }