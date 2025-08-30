#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];

    }
    int e = 0;
    for(int i =0 ; i < n ; i++){
       e += arr[i];
        cout<< e <<endl;
    }
}
