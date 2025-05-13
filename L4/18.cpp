#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int i = 1 , j = 1; 
    

    while (i<=n){
        j = 1 ; 

        while(j<=n - i + 1){
            cout << j ; 
            j++; 
        }
        int k = 0 ; 

        while(k < pow(2,i-1 ) && i > 1 ){
            cout << "*" ; 
            k++; 
        }


        while(j){
            cout << j ; 
            j-- ; 
        }
        

        cout << endl;
        i++;
    }
}