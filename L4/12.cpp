#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n; 

    int i = 1 , j = 1; 
    

    while (i<=n){
        j = 1 ; 
        char c = 'A' ;
        while(j<=i){
            cout<< c<< " " ;
            c++;
            j++; 
        }

        cout << endl;
        i++;
    }
}