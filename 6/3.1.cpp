#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    int k = n;
    for(int i = 1; i <= n; i++){
        for(int j = k; j >= 1; j--){
            cout<<"*";
        }
        cout<<"\n";
        k--;
    }
    return 0;
}