#include <iostream>
using namespace std;

int main(){
    int t, a, b, c;
    cin>>t;
    
    if(t%10 != 0){
        cout<<"-1";
    }
    else{
        a = t/300;
        t = t%300;
        b = t/60;
        t = t%60;
        c = t/10;
        
        cout<<a<<" "<<b<<" "<<c;
    }
    return 0;
}