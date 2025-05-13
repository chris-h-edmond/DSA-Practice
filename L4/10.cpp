#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n; 

    int i = 1 , j = 1; 
    char c = 'A' ;

    while (i<=n){
        j = 1 ; 
        c = 'A' + i - 1; 
        while(j<=i){
            cout<< c<< " " ;
            j++; 
        }

        cout << endl;
        i++;
    }
}