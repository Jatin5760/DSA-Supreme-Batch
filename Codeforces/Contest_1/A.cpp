#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int num;
        cin>>num;
       
        if(num == 2){
            cout<< 2 << endl;
        }
        else if (num == 3) {
            cout << 3 << endl;
        }
        else if(num % 2 == 0){
            cout<< 0 <<endl;
        }
        else {
            cout<< 1 <<endl;
        }
    }
   return 0;
}