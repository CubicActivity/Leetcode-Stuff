#include <iostream>

using namespace std;

int main()
{
    int t,count=0;
    cin>>t;
    string s;
    
    //t Test cases
    for(int i=0;i<t;i++){
        count=0;
        //string of name
        cin>>s;
         
        
        if(s.length()==1){
            if(s[0]=='_')count=2;
            else count=1;
        }else if(s.length()==2){
            if(s[0]=='_' && s[1]=='_'){
                count=3;
            }else if(s[0]=='_' && s[1]=='^'){
                count=1;
            }else if(s[0]=='^' && s[1]=='_'){
                count=1;
            }
        }else {
             
            //edge case 
            if(s[0]=='_' && s[1]=='^'){
                count=1;
            } else if(s[0]=='_' && s[1]=='_'){
                count=2;
            }
            
            for(int j=2;j<s.length()-1;j++){
             
            if(s[j-1]=='_'&& s[j]=='_'){
                count++;
                
            }
        }
        if(s[s.length()-1]=='_' && s[s.length()-2]=='_'){
            count+=2;
        }else if(s[s.length()-1]=='_'){
            count++;
        }
         
    }
        
        cout<<endl<<count<<endl;
    }

    

    return 0;
}
