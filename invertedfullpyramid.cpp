#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<2*n-1;j++){
            if(j<i){
                cout<<" ";      
            }
            else if(k<n*2-(2*i)-1){
                          
            cout<<"*";
            k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}