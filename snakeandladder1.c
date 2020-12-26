#include<stdio.h>
#include<stdlib.h>
//#include<time.h>
static int person1=0,person2=0;
void broad();
int dice();
int check(int);
int main()
{ 
  broad();
  printf("\n              ****WELCOME TO SNAKE & LADDER****\n");
  printf("\nSNAKES AT:93 TO 22,64 TO 23,88 TO 32,78 TO 3\n");
  printf("\nLADDERS AT:4 TO 35,12 TO 47,36 TO 82,56 TO 87,51 TO 93\n");
  int f,k;
  char name1[20],name2[20];
  printf("enter the players name\n");
  scanf("%s%s",name1,name2);
  printf("player1 and symbol :%s  %c\nplayer2 and symbol :%s %c\n",name1,'#',name2,'*');
  // srand(time(0));
  while(1)
  { //srand(time(0));
    f=dice();
     person1+=f;
      printf("%d\n",person1);
    person1=check(person1);
    // srand(time(0));
    k=dice();
    person2+=k;
      printf("%d\n",person2);
     person2=check(person2);
     printf("%d %d %d %d\n",f,k,person1,person2);
     if(person1>100)
      person1-=f;
    if(person2>100)
     person2-=k;
    printf("%d %d %d %d\n",f,k,person1,person2);
    if(person1==100)
     {  printf("\n\n---final board---\n\n");
         broad();
      printf("player1 %s won!!\n",name1);
        break;
     }
     if(person2==100)
     {  printf("\n\n---final board---\n\n"); 
       broad();
       printf("player2 %s won!!\n",name2);
        break;
     }
   
     broad();

    printf("\n");
  }
  return 0;
}
void broad()
{  int t;
  for(int i=10;i>0;i--)
    {for(int j=0;j<10;j++)
     {
        if(i%2==0)
         { t=(i*10)-j;
           if (t==person1)
              printf("%4c",'#');
           else if(t==person2)
              printf("%4c",'&');
           else
           printf("%4d",(i*10)-j);
         }
         else
         { t=((i-1)*10)+(j+1);
           if (t==person1)
              printf("%4c",'#');
           else if(t==person2)
              printf("%4c",'&');
           else
           printf("%4d",((i-1)*10)+(j+1));
         }
     }
     printf("\n");
    }
}
int dice()
{   //int t;
     //time_t t=1;
     
   
   return ( rand() % 7);
}
int check(int n)
{
   n==4?printf("\nkudos!! u reached from 4 to 35\n"),n=35:n;
   n==12?printf("\nkudos!! u reached from 12 to 47\n"),n=47:n;
   n==25?printf("\nkudos!! u reached from 25 to 82\n"),n=82:n;
   n==51?printf("\nkudos!! u reached from 51 to 93\n"),n=93:n;
   n==56?printf("\nkudos!! u reached from 56 to 87\n"),n=87:n;
   n==98?printf("\noosp!! u falled from 98 to 22\n"),n=22:n;
   n==64?printf("\noops!! u falled from 64 to 23\n"),n=23:n;
   n==78?printf("\noops!! u falled from 78 to 3\n"),n=3:n;
   n==88?printf("\noops!! u falled from 88 to 32\n"),n=32:n;
  return n;
}
