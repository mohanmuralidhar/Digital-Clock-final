#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
void main()
{
    int h=0,m=0,s=0,a,b,c;
    char ch;
    system("cls");
    printf("ENTER a OR b OR c OR d \n");
    printf(ANSI_COLOR_RED"******************************************************************************************************"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"\n\t\t\t\t\ta.GET TIME"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"\n\t\t\t\t\tb.SET ALARM"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"\n\t\t\t\t\tc.SET STOPWATCH"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"\n\t\t\t\t\td.SET TIMER\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"\n******************************************************************************************************\n"ANSI_COLOR_RESET);
    scanf("%c",&ch);
    if(ch=='a' || ch=='b' || ch=='c' || ch=='d' || ch=='A' || ch=='B' || ch=='C' || ch=='D')
    {
    switch(ch)
    {
        case 'a':
        printf(ANSI_COLOR_CYAN"ENTER CURRENT TIME IN THE FORMAT OF hh:mm:sss\n"ANSI_COLOR_RESET);

     printf(ANSI_COLOR_GREEN"ENTER HOURS - ");
     scanf("%d",&h);

     printf("\nENTER MINUTES - ");
     scanf("%d",&m);

     printf("\nENTER SECONDS - ");
     scanf("%d",&s);
     if(h>24 || m>60 || s>60)
	   {
	     printf(ANSI_COLOR_RED"ERROR!\n ENTER VALID PARAMETERS OF TIME\n"ANSI_COLOR_RESET);
	   }

     while(h<=24)
     {
        while(m<60)
        {
            while(s<59)
            {
                if(h>23)
                {
                    s=0;
                    m=0;
                    h=0;
                }
                system("cls");
                printf(ANSI_COLOR_YELLOW"\n\n\n\n\t\t\t\t\t\t\thh : mm : ss\n"ANSI_COLOR_RESET);
                s++;
                printf(ANSI_COLOR_RED"\t\t\t\t\t\t\t%d : %d : %d\n"ANSI_COLOR_RESET,h,m,s);
                sleep(1);
            }
            m++;
            s=0;
        }
        h++;
        m=0;
      }
      
     break;
     case 'b':
       printf(ANSI_COLOR_CYAN"ENTER CURRENT TIME IN THE FORMAT OF hh:mm:ss\n");

       printf(ANSI_COLOR_GREEN"ENTER HOURS - ");
       scanf("%d",&h);

       printf("\nENTER MINUTES - ");
       scanf("%d",&m);

       printf("\nENTER SECONDS - ");
       scanf("%d",&s);
       if(h>24 || m>60 || s>60)
	   {
	     printf(ANSI_COLOR_RED"ERROR!\n ENTER VALID PARAMETERS OF TIME");
	   }

       printf(ANSI_COLOR_CYAN"ENTER ALARM TIME IN THE FORMAT OF hh:mm:ss\n"ANSI_COLOR_RESET);
    
       printf(ANSI_COLOR_GREEN"ENTER HOURS - ");
       scanf("%d",&a);

       printf("\nENTER MINUTES - ");
       scanf("%d",&b);

       printf("\nENTER SECONDS - ");
       scanf("%d",&c);
       if(h>24 || m>60 || s>60)
	   {
	     printf(ANSI_COLOR_RED"ERROR!\n ENTER VALID PARAMETERS OF TIME"ANSI_COLOR_RESET);
	   }
       while(h<=24)
      {
        while(m<60)
        {
            while(s<59)
            {
                if(h>23)
                {
                    s=0;
                    m=0;
                    h=0;
                }
                system("cls");
                printf(ANSI_COLOR_YELLOW"\n\n\n\n\t\t\t\t\t\t\thh : mm : ss\n"ANSI_COLOR_RESET);
                s++;
                printf(ANSI_COLOR_RED"\t\t\t\t\t\t\t%d : %d : %d\n"ANSI_COLOR_RESET,h,m,s);
            if(a==h)
		    {
			 if(b==m)
			 {
			  if(c==s)
			  {
			   printf(ANSI_COLOR_MAGENTA"ALARM TIME REACHED "ANSI_COLOR_RESET);
               goto i;
			  } 
			 }
			}
                sleep(1);
            }
            m++;
            s=0;
        }
        h++;
        m=0;
        i:
        break;
      } 
      break;
      case 'c':

while(1) 
	   {  
          system("cls");
	      printf(ANSI_COLOR_RED"     \r \n\n\n\n\t\t\t\t\t\t\t%2d : %2d : %2d "ANSI_COLOR_RESET,h,m,s);
		  // HERE \r IS USED TO UPDATE THE VALUE IN A SINGLE LINE
		  s++;
		  sleep(1);
		  //IT IS APPROXIMATELY 1 SECOND
		  if(s==59)
		  {
		      m++;
			  s=0;
		  }
		  if(m==59)
		  {
		      h++;
			  m=0;
			  s=0;
		  }
		  if(h==24)
		  {
		     h=0;
			 m=0;
			 s=0;
		  }	
	  }
      break;
      case 'd':
      printf(ANSI_COLOR_MAGENTA"ENTER THE TIME IN HH::MM::SS(USING SPACE):\n"ANSI_COLOR_RESET);
		  printf(ANSI_COLOR_YELLOW"ENTER HOURS - ");
          scanf("%d",&h);

         printf("\nENTER MINUTES - ");
         scanf("%d",&m);

         printf("\nENTER SECONDS - ");
         scanf("%d",&s);
		  if(m>60 || s>60)
	   {
	     printf(ANSI_COLOR_RED"ERROR!\n ENTER VALID PARAMETERS OF TIME"ANSI_COLOR_RESET);
	   }
		  while(1)
		  {
            system("cls");
		     printf(ANSI_COLOR_RED"  \r\n\n\n\n\t\t\t\t\t\t\t%d:%d:%d"ANSI_COLOR_RESET,h,m,s);
			 sleep(1);
			 //IT IS APPROXIMATYLY 1 SECOND
			 if(s!=0)
			 {
			    s--;
			 }
			 if(s==0 && m!=0)
			 {
			     s=59;
				 m--;
			 }
			 if(s==0 && m==0 && h!=0)
			 {
			    h--;
				m=59;
				s=59;
			 }
			 if(h==0 && m==0 && s<=0)
			 {
                printf(ANSI_COLOR_RED"\n%d:%d:%d"ANSI_COLOR_RESET,h,m,s);
                printf(ANSI_COLOR_YELLOW"\nTIME IS UP"ANSI_COLOR_RESET);
                exit(0);
             }
        }
    } 
  } 
  else
  {
    printf("PLEASE ENTER ANY OF THESE :a,b,c,d,A,B,C,D");
  }
}