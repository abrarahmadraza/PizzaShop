#define pf printf
#define sf scanf
#include<stdio.h>
int totalamount(int,int);
void main()
{
	int a,c,d,e,g,k,l,s=0,ch,f,u,v;
	char n[30],o[30],q[30],t,x;
	int i,j;
	int p[31]={0,300,500,250,600,900,700,500,650,1500,2500,2000,1100,600,900,750};
	int h[7]={0,50,30,20,60,20,30};
	pf("\t\t\t__________________________\n");
	pf("\t\t\t   WELCOME TO PIZZA HUT    \n");
	pf("\t\t\t__________________________\n");
	pf("\nPLEASE ENTER YOUR DETAIL\n");
	pf("\nENTER YOUR NAME		  	-->");
	gets(n);
	strupr(n);
	pf("\nENTER YOUR MOBILE NUMBER 	-->");
	gets(o);
	strupr(o);
	pf("\nENTER YOUR ADDERSS	  	-->");
	gets(q);
	strupr(q);
	pf("\nTHANK YOU ! FOR GIVING YOUR DETAIL\n");
	pf("\nCHOOSE YOUR PIZZA\n");
	do{ 
	do{
	f=-1;
	
	pf("\nPRESS 1  FOR VEG PIZZA");  
	pf("\n      2  FOR NON VEG PIZZA");
	pf("\n      3  FOR NEAPOLITAN PIZZA");
	pf("\n      4  FOR MARINARO PIZZA");
	pf("\n      5  FOR MARGHERITA PIZZA");
	pf("\n      6  FOR FRANCE STYLE PIZZA");
	pf("\n      7  FOR CHICAGO PIZZA");
	pf("\n      8  FOR NEW YORK STYLE PIZZA");
	pf("\n      9  FOR SICILIAN PIZZA");
	pf("\n      10 FOR GREEK PIZZA");
	pf("\n      11 FOR CALIFORNIA PIZZA");
	pf("\n      12 FOR TOMATO PIE PIZZA");
	pf("\n      13 FOR CHEESE PIZZA");
	pf("\n      14 FOR MIX PIZZA");
	pf("\n      15 FOR PUDINA PIZZA\n\n Your order-->");
	sf("%d",&i);
	switch(i)
	{
		case 1:
			pf("\nYOU HAVE SELECTED VEG PIZZA");
			break;
		case 2:
			pf("\nYOU HAVE SELECTED NON VEG PIZZA");
			break;	
		case 3:
			pf("\nYOU HAVE SELECTED NEAPOLITAN PIZZA");
			break;
		case 4:
			pf("\nYOU HAVE SELECTED MARINARO PIZZA");
			break;	
		case 5:
			pf("\nYOU HAVE SELECTED MARGHERITA PIZZA");
			break;	
		case 6:
			pf("\nYOU HAVE SELECTED FRANCE STYLE PIZZA");
			break;	
		case 7:
			pf("\nYOU HAVE SELECTED CHICAGO PIZZA");
			break;
		case 8:
			pf("\nYOU HAVE SELECTED NEW YORK STYLE PIZZA");
			break;
		case 9:
			pf("\nYOU HAVE SELECTED SICILIAN PIZZA");
			break;	
		case 10:
			pf("\nYOU HAVE SELECTED GREEK PIZZA");
			break;
		case 11:
			pf("\nYOU HAVE SELECTED CALIFORNIA PIZZA");
			break;
		case 12:
			pf("\nYOU HAVE SELECTED TOMATO PIE PIZZA");
			break;
		case 13:
			pf("\nYOU HAVE SELECTED CHEESE PIZZA");
			break;
		case 14:
			pf("\nYOU HAVE SELECTED MIX PIZZA");
			break;
		case 15:
			pf("\nYOU HAVE SELECTED PUDINA PIZZA");
			break;
		default :
			pf("\nINVALID INPUT");f=0;
			break;
	}
}while(f==0);
	do
	{f=-1;
	pf("\n\nWHICH SIZE OF PIZZA DO YOU WANT\n");
	pf("\nPRESS L FOR LARGE SIZE PIZZA"); 
	pf("\nPRESS M FOR MEDIUM SIZE PIZZA");
	pf("\nPRESS S FOR SMALL SIZE PIZZA\n\n Your Selecton-->");
	x=getche();	
	if((x=='l')||(x=='L'))
	{
		c=p[i];
		pf("\nPRICE OF EACH LARGE PIZZA=%d",c);
	}
	else if((x=='m')||(x=='M'))
	{
		c=0.8*p[i];
		pf("\nPRICE OF EACH MEDIUM PIZZA=%d",c);
	}
	else if((x=='s')||(x=='S'))
	{
		c=0.5*p[i];
		pf("\nPRICE OF EACH SMALL PIZZA=%d",c);	
	}
	else
	{
		pf("INVALID INPUT");f=0;
	}
}while(f==0);
	pf("\n\nHOW MANY PIZZA DO YOU WANT TO ORDER\n Number Of pizza/s--->");
	sf("%d",&d);
	e=c*d;
	pf("\nTOTAL AMOUNT OF PIZZA=%d\n",e);
	pf("\nSIR DO YOU ALSO WANT BEVERAGE\nPRESS Y FOR BEVERAGE\nPRESS N FOR COMPLETION \n\n Your choice--->");
	ch=getche();
	if((ch=='y')||(ch=='Y'))
	{
		do
		{f=-1;
		
		pf("\nPRESS 1 FOR COFFEE");
		pf("\nPRESS 2 FOR TEA");
		pf("\nPRESS 3 FOR COLD DRINKS");
		pf("\nPRESS 4 FOR SODA");
		pf("\nPRESS 5 FOR MILK SHAKE");
		pf("\nPRESS 6 FOR WATER\n\n Your Choice--->");
		sf("%d",&j);
		switch(j)
		{
			case 1:
				pf("\nYOU HAVE SELECTED COFFEE");
				break;
			case 2:
				pf("\nYOU HAVE SELECTED TEA");
				break;
			case 3:
				pf("\nYOU HAVE SELECTED COLD DRINKS");
				break;
			case 4:
				pf("\nYOU HAVE SELECTED SODA");
				break;
			case 5:
				pf("\nYOU HAVE SELECTED MILK SHAKE");
				break;
			case 6:
				pf("\nYOU HAVE SELECTED WATER");
				break;
			default:
				pf("INVALID INPUT");f=0;
				break;
		}
		}while(f==0);
		pf("\nPRICE OF EACH BEVERAGE=%d",h[j]);
		pf("\n\n\nHOW MANY BEVERAGE YOU WANT\n\n Your Input--->");
		sf("%d",&g);
		k=g*h[j];
		pf("\nTOTAL AMOUNT OF BEVERAGE=%d",k);
	}
	pf("\n\nSIR THEIR IS A QUESTION FOR YOU\nIF YOU WILL ANSWER CORRECTLY YOU WILL GET A *DISCOUNT* OF 20%%\n");
	pf("QUESTION IS : PIZZA IS ORIGINATED IN WHICH COUNTRY?\n\t\tA.EUROPE\n\t\tB.ITALY\n\t\tC.USA\n\t\tD.CHINA\nCHOOSE THE CORRECT OPTION-->");
	t=getche();
	if((t=='b')||(t=='B'))
	{
		pf("\n                                                            *********");
		pf("\nCONGRATULATION ! YOUR ANSWER IS RIGHT YOU GET A DISCOUNT OF *  20%%  *");
		pf("\n                                                            *********\n");

		u=.8*e;
		v=.8*k;
	}
	else
	{
		pf("\nYOUR ANSWER IS NOT RIGHT\n\n");
		u=e;
		v=k;
	}
	l=totalamount(u,v);
	s+=l;
	pf("\nTOTAL AMOUNT=%d\n",s);
	pf("\n\nSIR IF YOU WANT TO PURCHASE MORE PIZZA AND BEAVERAGE\nPRESS 'Y' else 'N'\n\n Your Choice--->");
	ch=getche();
	}
	while(ch=='y'||ch=='Y');
	
	pf("\n\nYOUR ORDER WILL BE DELIVERED SOON ON YOUR DETAIL AS GIVEN\nNAME-->%s\nMOBILE_NUMBER-->%s\nADDRESS-->%s",n,o,q);
	
	pf("\n\t\t\t**** THANK YOU ! HAVE A NICE DAY ****");
}
int totalamount(int e,int k)
{
	int m;
	m=e+k;
	return m;
}

