
#include <iostream>

using namespace std;

int main()
{
    int a,b,max,less;
    
    cout<<"Find the gcf of 2 numbers"<<endl;
    cout<<"Enter num1 and num2: "<<endl;
    cin>>a>>b;
    
    if(a>b){
        max=a;
        less=b;
    }
    else{
        max=b;
        less=a;
    }
    
    for(int i=0;i<max;i++){
        if(a==b){
            cout<<" Their gcf is: " << b<<endl;
            if(a==1){
                cout<<"both numbers are relatively prime";
            }
            
            break;
        }
        if(a>b) a-=b;
    else b-=a;
    
        
    }
    return 0;
}

