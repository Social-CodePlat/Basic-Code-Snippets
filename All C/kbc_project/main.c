#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void start_ques();
void ques2();
void end();

int main()
{

    int option;
    char a[50];

    printf("\n\n\n           WELCOME TO THE BIGGEST SHOW OF INDIA            \n");
    printf("\n\n\n                  KAUN BANEGA CROREPATI                    \n\n\n");
    printf("Enter Your Good Name Please\n");
    gets(a);
    printf("Welcome %s to the KBC\n",a);
    printf("Are You ready to play???\n\n");
    printf("Let's get started\n\n");
    printf("Press\n 1 to play\n 2 to exit\n");
    scanf("%d",&option);
    if(option==1)
       start_ques();
    else
        exit(0);
return 0;
}

  void start_ques()
{
    int ans;
    int y;
    system("cls");

    printf("\n\n\n");
    printf("\t\t\tHere is Your First Question\n");
    printf("\t\t\tIn Which of these sports are a 'ball' , 'gloves' and 'helmet' part of playing equipment??\n1.Hockey 2.volleyball 3.tennis 4.Badminton\n\n");

    scanf("%d",&ans);
    if(ans==1)
          {
              printf("You Won Rs 10000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number.\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);
       }
       else
       {
           ques2();
       }
          }
     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void end()
{
printf("\n You Entered 0 \n");
printf("\n The program is ending !\n");
printf("\n Thank you for playing\n");
printf("\n For playing again,, Do run the program again\n");
 }

 void ques2()
{
    system("cls");
int ans;
int y;
printf("\n Your second question for Rs 20000 is:-\n");
printf("\n The first women Prime Minister of India is-\n");
printf("\n 1. Sonia Gandhi "  "\t"  " 2.Indira Gandhi\n");
printf("\n 3. Shushma Swaraj"  "\t"  " 4.Annie Besent \n");

scanf("%d",&ans);
if(ans==2)
          {
              printf("You Won Rs 20000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques3();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }
  }
  void ques3()
{
    system("cls");
    int ans;
    int y;
printf("\n Your next question for Rs 50,000 is -\n");
printf("\n Which is the currency of Pakistan ?\n");
printf("\n 1). Rouble"  "\t"  " 2). Rupee\n");
printf("\n 3). Peso "  "\t"  " 4). Pakistani Rupee\n");
  scanf("%d",&ans);
  if(ans==2)
          {
              printf("You Won Rs 50,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques4();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }
  }
void ques4()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 1,20,000 is-\n");
printf("\n The Painter of the famous painting of ' MONALISA ' is?\n");
printf("\n 1). Columbus "  "\t"  " 2). Alexander \n");
printf("\n 3). Holmes "  "\t"  " 4). Leonardo da vinci\n");
  scanf("%d",&ans);
  if(ans==4)
          {
              printf("You Won Rs 1,20,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques5();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques5()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 2,40,000 is-\n");
printf("\n The H.Q. of UNICEF is located at?\n");
printf("\n 1).New York "  "\t"  " 2). Geneva \n");
printf("\n 3).Dubai "  "\t"  " 4). Berlin \n");
  scanf("%d",&ans);
if(ans==2)
{
              printf("You Won Rs 2,40,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques6();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques6()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 3,60,000 is-\n");
printf("\n The First Governar General of Free India was ?\n");
printf("\n 1). Joseph Simon "  "\t"  " 2). H.Rodrigues \n");
printf("\n 3). Warren Hastings"  "\t"  " 4). Lord Mountbatten\n");
  scanf("%d",&ans);
if(ans==4)
{
              printf("You Won Rs 2,60,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques7();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques7()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 7,20,000 is-\n");
printf("\n The Historic 'Troyan War' was fought between?\n");
printf("\n 1). Italy and Arab "  "\t"  " 2). Troy and Italy \n");
printf("\n 3). Troy and Greece "  "\t"  " 4). Greece and Italy\n");
  scanf("%d",&ans);
if(ans==3)
{
              printf("You Won Rs 7,20,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques8();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques8()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 12,50,000 is-\n");
printf("\n The historic day when man entered the space was\n ");
printf("\n 1). 12th April 1961 "  "\t"  " 2). 26th May 1964\n");
printf("\n 3). 9th August 1957 "  "\t"  " 4). 1st December 1958\n");
  scanf("%d",&ans);
if(ans==1)
    {
              printf("You Won Rs 12,50,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques9();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques9()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 25,00,000 is-\n");
printf("\n The title of 'Mahatma' was given to Ghandi Ji by?\n");
printf("\n 1). Queen Elizabeth "  "\t"  " 2). Rabindranath Tagore \n");
printf("\n 3). Lord Mountbatten "  "\t"  " 4). Nelson Mandela \n");
  scanf("%d",&ans);
if(ans==2)
   {
              printf("You Won Rs 25,00,000\ncongrats\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques10();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}
void ques10()
{
int ans,y;
system("cls");
printf("\n Your next question for Rs 50,00,000 is-\n");
printf("\n The Oldest living creature on the Earth is ?\n");
printf("\n 1). Plyctyomos "  "\t"  " 2). Horseshoe Crab \n");
printf("\n 3). Plasmodium "  "\t"  " 4). Tortoise \n");
scanf("%d",&ans);
if(ans==2)
 {
              printf("You Won Rs 50,00,000\ncongrats\n");
              printf("\n The moment has come when you are going to be one of the Billioneres !!!!!\n");
printf("\n You are yust a step behind this great milestone !!!!\n");

       printf("\n Do you want to exit? If yes then press 0 else press other Number .\n");
       scanf("%d",&y);
       if(y==0)
       {
           end();
           exit(0);

       }
       else
       {
           ques11();
          }
          }

     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getche();
  }

}

  void ques11()
{
int ans,y;
system("cls");

printf("\n Your last question for Rs 1,00,00,000 is-\n");
printf("\n Which Number when Multiplied by itself gives 123456787654321?\n");
printf("\n 1). 111111 "  "\t"  " 2). 1111111 \n");
printf("\n 3). 11111111 "  "\t"  " 4).111111111 \n");
scanf("%d",&ans);
if(ans==3)
 {
              printf("You Won Rs 1,00,00,000\ncongrats\n");
               printf("\n ******** *** ** Congratulations ! You win Rs 1,00,00,000 ** *** ********\n");
printf("\n ******** ** You has become the Lucky player to achieve this feet ** ******\n");
             printf("Thanks For Playing\n");
             getche();
 }
     else

       {printf("Your Answer is Wrong\n It is very sad to announce that You are out of the game\n");

        printf("Thanks For playing\n");
        getch();
  }

}



