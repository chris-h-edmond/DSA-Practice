#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    int col = n*2-1 ;

    int i = 1 , j = 1; 
    

    while (i<=n){
        j = 1 ; 
        int k = 1;

        while(j< (col/2) - i + 2  ){
            cout << " " ; 
            j++; 
        }
        
        while(j<(col/2) + 1 ){
            cout<<k;
            k++ ; 
            j++; 
        }
        while(k>=1){
            cout<< k;
            k-- ; 
        }

        cout << endl;
        i++;
    }
}