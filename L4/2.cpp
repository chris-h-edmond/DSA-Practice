#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n; 

    int i = 1 , j = 1 ; 
    int k = 1 ; 

    while (i<=n){
        j = 1 ;
        while(j<=n){
            cout<< k<< " " ;
            j++ ; 
            k++ ; 
        }
        cout << endl;
        i++;
    }
}