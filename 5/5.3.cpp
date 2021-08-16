#include <iostream>
using namespace std;

int main(){
    unsigned short int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    int k = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
    return 0;
}