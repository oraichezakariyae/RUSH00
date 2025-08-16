void ft_putchar(char c);

void rush04(int x,int y){

    int i=0;
    int j;
    while(i<x){
        j=0;
        while(j<y){

            if((i==0 && j==0) || ( i == x-1 && j== y-1 && x-1 > 0 && y-1 > 0 ))
              ft_putchar('A');


            else if ((i == 0 &&   j == y - 1  ) ||  (i == x-1 &&  j == 0))
            ft_putchar('C');
            
            else if(i==0|| i==x - 1)
            ft_putchar('B');

            else if(j==0 || j==y - 1) 
            ft_putchar('B');
            
            else
            ft_putchar(' ');

            j++;


        } 
       ft_putchar('\n');
        i++;
        
    }  
}
