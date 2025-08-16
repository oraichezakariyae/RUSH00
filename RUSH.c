
#include <unistd.h>

void rush00(int l,int c){


        int i=0;
        int j;
        while(i<l){
            j=0;
            while(j<c){
    
                if((i==0 && j==0) || ( i == l-1 && j== c-1 && l-1 > 0 && c-1 > 0))
                    write(1,"A",1);
                else if ((i == 0 &&   j == c - 1  ) ||  (i == l-1 &&  j == 0))
                    write(1,"C",1);
                
                else if(i==0|| i==l - 1)
                    write(1,"B",1);
    
                else if(j==0 || j==c - 1) 
                    write(1,"B",1);
                
                else
                    write(1," ",1);
                j++;
    
    
            } 
            write(1,"\n",1);   
            i++;
            
        }  
    }
    

int main (){
    rush00(5,5);
    return 0;
}
