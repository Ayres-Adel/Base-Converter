#include<stdio.h>
#include<math.h>
/*ladoui adel g11*/
int main()
{
	int n,number,p,p1,decimal,reverse,sum,i,binary,octal,count,a,hexadecimal,i1,i2,j2;
	char bs[8];
	reverse=0;
	do
	{
	    printf("input a number: ");
		scanf("%d",&number);
		printf("what is the base of this number\n");
		printf("type'1'if the number is base decimal\n");
		printf("type'2'if the number is base binary\n");
		printf("type'3'if the number is base octal\n");
		printf("type'4'if the number is base hexadicmal\n");
		printf("type'5'if the number is bs\n");
		scanf("%d",&p);
		/*______________________________________________________________________*/
		if(p==1)
		{
			printf("%d\n",number);   /*decimal*/
		}
		/*_______________________________________________________________________*/
		if(p==2) /*the number is on decimal*/
		{
		i=0;
	    sum=0;
		while(number!=0)
	    {
		binary=(number%10)*pow(2,i);
		sum=sum+binary;
		i=i+1;
		number=number/10;
	    }
        number=sum;
		}
		/*__________________________________________________________________________*/
		if(p==3)  /*octal*/
		{
			/*the number is on decimal*/
		binary=0;
	    i=0;
	    sum=0;
		while(number!=0)
	    {
	    binary=(number%10)*pow(8,i);
		sum=sum+binary;
		i=i+1;
		number=number/10;
	    }
	    number=sum;
		}
		/*__________________________________________________________________________*/
		if(p==4)
		{
		i=0;
		sum=0;
		while(number!=0)
	    {
	    binary=(number%10)*pow(16,i);
		sum=sum+binary;
		i=i+1;
		number=number/10;
	    }
	    number=sum;
        }
        /*__________________________________________________________________________*/
        if(p==5)
        {
        printf("                 --<<this programe convet to compleamnt two>>--\n");
	    printf("                             --<<input a number: ");
	    scanf("%s",&bs);	
		}
        /*__________________________________________________________________________*/
        printf("which base do you want to convert it\n");
		printf("type'1'if the number is base decimal\n");
		printf("type'2'if the number is base binary\n");
		printf("type'3'if the number is base octal\n");
		printf("type'4'if the number is base hexadicmal\n");
		printf("type'5'if the number on complemant one\n");
		printf("type'6'if the number on complemant two\n");
		scanf("%d",&p1);
		/*__________________________________________________________________________*/
		if(p1==1)   /*decimal*/ /*the number is on decimal*/
		{
			printf("\n                      --<<the number on decimal is : %d>>--\n\n"                               ,number);
		}
		/*__________________________________________________________________________*/
		if(p1==2)   /*binary*/
		{
			/*the number is decimal*/
		reverse=0;
		count=1;
		while(number!=0)
	    {
		decimal=number%2;
		number=number/2;
		reverse=reverse+(decimal*count);
		count=count*10;
	    }
        printf("\n                      --<<the number on binary is : %d>>--\n\n"                               ,reverse);
        }
       /*__________________________________________________________________________*/
        if(p1==3)   /*octal*/ /*the number is on decimal*/
        {
        octal=0;
        i=0;
        count=0;
        a=number;
        while(number!=0)
        {
		count=count+1;
		number=number/8;
        }
        while(i<count)
        {
   		octal=octal+(a%8)*pow(10,i);
		i++;
		a=a/8;
        }
        printf("\n                      --<<the number on octal is : %d>>--\n\n"                               ,octal);
		}
		/*__________________________________________________________________________*/
		if(p1==4)  /*hexadecimal*//*the number is on decimal*/
        {
 
        long a1,quotient,remainder;
        a1=number;
	    int i,j;
	    i=0;
	    j=0;
	    char hexadecimal[100];
        quotient=a1;
        while(quotient!=0)
        {
   	    remainder=quotient%16;
   	    if(remainder<10)
   	    {
   	    hexadecimal[j++]=48+remainder;	
	    }
	    else
   	   {
	   hexadecimal[j++]=55+remainder;	
	   }
	   quotient=quotient/16;
       }
   	   printf("\n                --<<the number on hexadecimal system is:--<<"                              );
       for(i=j;i>=0;i--)
       {
   	   printf("%c",hexadecimal[i]);
       }
	   }
	   /*__________________________________________________________________________*/
	   if(p1==5)
	   {
	   if(bs[0]=='1')
       {
	   for(i1=1;i1<=7;i1++)
	   {
	   if(bs[i1]=='0')
	   {
	   bs[i1]='1';
	   }
	   else
	   if(bs[i1]=='1')
	   {
	   bs[i1]='0';
	   }
	   }
	   }
	   printf("                   --<<the number on complement two is:%s>>--",bs);
	   }
	   /*__________________________________________________________________________*/
	   if(p1==6)
	   {
	   	for(i2=7;i2>=1;i2--)
	{
		if(bs[i2]=='1')
		{
			break;
		}
	}
	if(bs[0]=='1')
	{
		for(j2=1;j2<i2;j2++)
		{
			if(bs[j2]=='0')
			{
				bs[j2]='1';
			}
			else
			if(bs[j2]=='1')
			{
				bs[j2]='0';
			}
		}
	}
	printf("                   --<<the number on complement one is:%s>>--",bs);
	   }
	   /*__________________________________________________________________________*/	
	   printf("\nif you want to exit type -1 otherwise give a number to convert: ");	
	   scanf("%d",&n);	
	   }	
	   while(n!=-1);
}
