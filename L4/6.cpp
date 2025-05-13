#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n; 

    int i = 0 , j = n ; 

    while (i<n){
        j = 1+ i ;
        while(j>=1){
            cout<< j<< " " ;
            j-- ; 
        }
        cout << endl;
        i++;
    }
}