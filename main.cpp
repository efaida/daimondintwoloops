#include <iostream>

using namespace std;

int main()
{
    char star = '*';
    char space = ' ';
    int value;
    cin>>value;
    int outerLoop;
    outerLoop = (2 * value)-1;
    int i = 0;
    int j = 0;
    int s = 0;
    int sc = value-1;
    int fc =1;
    int f = 0;
    int starCheck;
    starCheck=value;
  
    while(i<outerLoop){
        
        if(i>=value){
                sc=i-value;
                s=-1;
            }
        
        
        while(j<outerLoop){
            
            if(s<sc){
                cout<<space;
                s++;
                
                
            }else if(f<fc){
                cout<<star;
                f++;
            }
            
            
         j++;   
        }
        if(fc<(2*starCheck)-1){
            fc=fc+2;
        }else{
            fc=fc-2;
            starCheck = 0;
        }
        cout<<endl;
        i++;
        j=0;
        f=0;
        s=i;
            
    }
    
  
    return 0;
}
