#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<n-i;
        }
        cout<<"\n";
    }
    return 0;
}