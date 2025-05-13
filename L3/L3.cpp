#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;

    int sum = 0;
    int i = 1 ; 
    int j = 1 ; 

    // while (i <= n){
    //     if(i%2!=0){
    //         i++;
    //         continue;
    //     }
    //     sum += i;
    //     i++;
    // }

    // cout << sum << endl;
    // return 0;

    while(i<=n){
        j = 1 ;
        while(j<=n){
            cout<< "* " ;
            j++ ; 
        }
        cout << endl;
        i++;
    }
}