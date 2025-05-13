#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n; 

    int i = 1 , j = 1; 
    

    while (i<=n){
        j = 1 ; 
        
        while(j<= i -1 ){
            cout << " " ; 
            j++; 
        }
        
        while(j<=n){
            cout<< "*";
            j++; 
        }

        cout << endl;
        i++;
    }
}