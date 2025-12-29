#include<iostream>
using namespace std;
int main(){
    for(int i='A';i<='E';i++){
        for(int j='A';j<=i;j++){
            cout<<(char)i ;
        }
        cout<<endl;
    }
    return 0;
}