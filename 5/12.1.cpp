#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows.";
    cin>>n;
    int tld = 'A' + n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            char s = tld - j;
            cout<<s;
        }
        cout<<"\n";
    }
    return 0;
}