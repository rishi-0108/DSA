#include<iostream>
using namespace std;
void ls(){
    int arr[]={5,3,0,1,2,7,6,4,10,8,9};
    cout<<"Enter element to seach\n";
    int n;
    int c=0;
    cin>>n;
    for(int i=0;i<11;i++){
        if(n==arr[i]){
            cout<<"Element found at position : "<<i+1<<endl;
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"Element not in the list";
    }
}
int main(){
    ls();
}