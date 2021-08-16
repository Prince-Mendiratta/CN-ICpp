#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            int k = i;
            cout<<k+j;
        }
        cout<<"\n";
    }
    return 0;
}