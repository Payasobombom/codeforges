#include <stdio.h>
int main ()

{
int t,h,m;
scanf("%d",&t);
t=t-1;
    for (int i=0;i<=t;i++)
    {
        scanf("%d %d",&h,&m);
     
           
                h= 23 - h;
                m= 60 - m;
                    if (h==0)
                     { 
                        
                       printf("%d\n",m);
                    }  
                    else
                    {
                        h=(h*60)+m;
                        printf("%d\n",h);
                     }
            }
   return 0;
    }
