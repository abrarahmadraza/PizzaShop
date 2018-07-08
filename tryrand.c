#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

int t,h,po,pr,w;
    srand(time(NULL));printf("%d      ",rand()%6+5);
	   t = (rand()%40)-5;
	   if(t>25)
	   {
	   	h=rand()%40+40;
	   }
	   else if(t<=30)
	   {
	   	h=rand()%20+20;
	   }
       w=rand()%17+4;
       if(rand()%2+1==1)
       w+=rand()%3+1;
       else
       w-=rand()%3+1;
       po=2;
       if(rand()%2+1==1)
       {if(rand()%2+1==1)
       po-=1;
       else
	   po-=1;
       }
	   else if(rand()%2+1==2)
       {if(rand()%2+1==1)
       po-=1;
       else
       po=po;
	   }
       else
       {if(rand()%2+1==1)
       po-=1;
       else
	   po+=1;
}
    pr=rand()%90+10;
   
printf("%d  %d  %d  %d  %d",t,w,h,po,pr);
if(po>1)
printf("PREFER A FACE MASK, ITS POLLUTED EVERYWHERE");
else if(pr>50)
printf("TAKE YOUR UMBRELLA, IT MIGHT RAIN");
else if(t>28)
{
	printf("IT'S HOT OUTSIDE");
}
else if(t<7)
{
	printf("IT'S CHILLING OUTSIDE");
}
else if(w>12)
{
	printf("IT'S A WINDY DAY");
}
else
printf("ALL CALM AND FINE");
    return 0;//enum

}
