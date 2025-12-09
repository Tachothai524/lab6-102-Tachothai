#include<iostream>
using namespace std;

int main(){
    int x = -1;
    int i = 0;
    int j = 0;
    while(x != 0){
    cout << "Enter an integer: ";
    cin >> x ;
    
    if(x % 2 == 0){
        i++ ;
    }
    else{
        j++ ;
    }
    
    if(x == 0){
        i = i - 1;
    }
    
}
    cout << "#Even numbers = " << i << "\n" ;
    cout << "#Odd numbers = " << j ;
    return 0;
}