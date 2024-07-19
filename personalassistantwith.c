#include<stdio.h>
#include<windows.h>
#include<windowsx.h>
#include<mmsystem.h>
#include<time.h>


int main()
{
int choice,n;
char x[100];
printf("********************************************YOUR PERSONAL ASSISTANT ***************************************************\n");
while(1)
{
   gets(x);

   //hello

 if(strcmp(x,"hi")==0||strcmp(x,"hello")==0)
{
   PlaySound(TEXT("D:\\c project\\Hello (2).wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
}

    //notepad


else if (strcmp(x,"open notepad")==0||strcmp(x,"can you open notepad")==0)

{
   PlaySound(TEXT("D:\\c project\\Sure Opening notepad.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
   ShellExecute(NULL,"open","C:\\Windows\\notepad.exe",NULL,NULL,SW_SHOWNORMAL);//put your notepad path here
}


     //youtube

 else if (strcmp(x,"can you open youtube")==0||strcmp(x,"open youtube")==0)
{
    PlaySound(TEXT("D:\\c project\\youtube1.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
    ShellExecute(NULL,"open","https://www.youtube.com/",NULL,NULL,SW_SHOWNORMAL);//put your youtube path here
}

     //chrome

else if (strcmp(x,"open chrome")==0)
{
   PlaySound(TEXT("D:\\c project\\chrome.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
   ShellExecute(NULL,"open","C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe",NULL,NULL,SW_SHOWNORMAL);//put your chrome path here
}

   //google

else if (strcmp(x,"open google")==0)
{
    PlaySound(TEXT("D:\\c project\\google.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
        ShellExecute(NULL,"open","https://www.google.com/",NULL,NULL,SW_SHOWNORMAL);//put your google path here
}


//songs
 else if (strcmp(x,"play songs")==0)
{
    PlaySound(TEXT("D:\\c project\\Tell me what kind of.wav"),NULL,SND_SYNC);//add sound
    printf(" 1.romantic songs\n 2.sad songs\n 3.travel songs\n 4.Happyx\n");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
             PlaySound(TEXT("D:\\c project\\Select any one of th.wav"),NULL,SND_SYNC);
             printf("1.Satranga\n 2. Subhanallah\n 3.Pehla pyar\n");//romantic
             scanf("%d",&n);
             if(n==1)
             {
              PlaySound(TEXT("D:\\c project\\satranga animal movie.wav"),NULL,SND_SYNC);//add sound

             }
             else if(n==2)
             {

                PlaySound(TEXT("D:\\c project\\subhananllah.wav"),NULL,SND_SYNC);//add sound

             }
             else if(n==3)
             {

             PlaySound(TEXT("D:\\c project\\pehla pyar.wav"),NULL,SND_SYNC);//add sound

             }
             break;

    case 2:  PlaySound(TEXT("D:\\c project\\Select any one of th.wav"),NULL,SND_SYNC);
             printf("1.Agar tum sath ho\n 2.lag ja gale\n"); //sad songs
             scanf("%d",&n);
             if(n==1)
             {
               ;
               PlaySound(TEXT("D:\\c project\\agar tum sath ho.wav"),NULL,SND_SYNC);//add sound

             }
             else if(n==2)
             {

              PlaySound(TEXT("D:\\c project\\lag ja gale.wav"),NULL,SND_SYNC);//add sound

             }
             break;

    case 3: PlaySound(TEXT("D:\\c project\\Select any one of th.wav"),NULL,SND_SYNC);
             printf("1.Ilahi\n 2.Ek junoon\n 3.Love You Zindagi\n");//travel songs
             scanf("%d",&n);
             if(n==1)
             {

               PlaySound(TEXT("D:\\c project\\ilahi.wav"),NULL,SND_SYNC);//add sound

             }
             else if(n==2)
             {

               PlaySound(TEXT("D:\\c project\\ek junoon.wav"),NULL,SND_SYNC);//add sound

             }
              else if(n==3)
             {

               PlaySound(TEXT("D:\\c project\\love you zindgi.wav"),NULL,SND_SYNC);//add sound

             }

             break;
    case 4:  PlaySound(TEXT("D:\\c project\\Select any one of th.wav"),NULL,SND_SYNC);
             printf("1.Hai Apna Dil To Aawara\n 2.Hai tu\n 3.Bye \n ");//Happy
             scanf("%d",&n);
             if(n==1)
             {

               PlaySound(TEXT("D:\\c project\\hai apna dil to awara.wav"),NULL,SND_SYNC);//add sound
             }
             else if(n==2)
             {
               PlaySound(TEXT("D:\\c project\\hai tu.wav"),NULL,SND_SYNC);//add sound

             }
              else if(n==3)
             {

               PlaySound(TEXT("D:\\c project\\bye.wav"),NULL,SND_SYNC);//add sound

             }

             break;
    } break;


}
//show date and time


else if(strcmp(x,"date")==0||strcmp(x,"time")==0)
    {

    PlaySound(TEXT("D:\\c project\\day and time .wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
     time_t mytime;
     mytime=time(NULL);
     printf(ctime(&mytime));

}

//exit
if(strcmp(x,"bye")==0)
{
    PlaySound(TEXT("D:\\c project\\byeday.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
    exit(0);
}
if(strcmp(x,"no thank you")==0)
{
    PlaySound(TEXT("D:\\c project\\byewelcome.wav"),NULL,SND_SYNC);//put your audiofile path here in wav format
    exit(0);
}
}
}

