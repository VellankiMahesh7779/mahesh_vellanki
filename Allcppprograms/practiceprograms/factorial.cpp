#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"mahesh enter number: ";
    cin>>n;
    int results = 1;
    if(n == 1 || n == 0)
        cout<<"Factorial of "<<n<<" is: 1"<<endl;
        return 0;
    for(int i=2;i<=n;i++){
        results=results*i;
        
    }
    cout<<"Factorial of "<<n<<" is:"<<results<<endl;
}
