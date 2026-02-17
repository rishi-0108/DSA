int main(){
    // int n;
    // cout<<"Enter The length of the array\n";
    // cin>>n;
    vector<int> arr={57,33,345,75,35,765,3,564,6,75,3,57,2,6};
    int n=arr.size();
    mergesort(arr,0,n);
    cout<<"Sorted array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}