#include <iostream>

using namespace std;

int main()
{
    cout<<"size";
    int n,key;
    bool flag=false;
    cout<<"size";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        out<<"enter "<<i<<"th element \t";
        cin>>arr[i];
    }
    cout<<"enter elements to be searched in the array:- ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<key<<" found at Position "<<i+1<<endl;
            flag=true;
        }
    }
    if(!flag)
        cout<<key<<" not found.";
    return 0;
}
