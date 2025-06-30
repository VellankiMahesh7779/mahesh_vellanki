#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int results = 1;
    for(int i=1;i<=n;i++){
        results=results*i;
        
    }
    cout<<"Factoroal of "<<n<<"is:"<<results<<endl;
}
