#include<iostream>
using namespace std;
int main(){
    for(int i='E';i>='A';i--){
        for(int j=i;j<='E';j++){
            cout<<(char)j;
        }
        cout<<endl;
    }
    return 0;
}