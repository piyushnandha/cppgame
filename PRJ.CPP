#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void cost();
void ram();
void processor();
void battery_capacity();
void size();
void camera();
//void print();
void rules();
void result();
void back1();
void back2();


#define n 10
int sel[n],k;
int *p_sel,filter=0,*a;

struct paby
{
   char name[30];   // Name of phone
    int ram;         // Ram size
   char pcer[30];      //processor like snapdragon
     int batry;       // battery capcity in Mah
   float size;     // size of phone in inches
   long   cst;        // cost of phone
   int cam;   // Back Camera
   int pcer1;
   char cam1[30];
}p[50];



int main(void)
{
  // 1st
  int ans;
  strcpy(p[0].name,"Nokia G20");
  p[0].ram=4;
  strcpy(p[0].pcer,"Mediatek Hello G35");
  p[0].batry=5050;
  p[0].size=6.52;
  p[0].cst=12990;
  p[0].pcer1=2;
  strcpy(p[0].cam1,"48MP + 5MP + 2MP + 2MP");
  p[0].cam=48;

  // 2nd
  strcpy(p[1].name,"Nokia 5.4");
  p[1].ram=4;
  strcpy(p[1].pcer,"Snapdragon 662 ");
  p[1].batry=4000;
  p[1].size=6.39;
  p[1].cst=13000;
  p[1].pcer1=1;
  p[1].cam=48;
  strcpy(p[1].cam1,"48MP + 5MP + 2MP + 2MP");

  //3rd
  strcpy(p[2].name,"Nokia 5.3");
  p[2].ram=6;
  strcpy(p[2].pcer,"Qualcomm snapdragon 655");
  p[2].batry=4000;
  p[2].size=6.55;
  p[2].cst=13300;
  p[2].pcer1=1;
  p[2].cam=13;
  strcpy(p[2].cam1,"13MP + 5MP + 2MP + 2MP");

  //4th
  strcpy(p[3].name,"Nokia C3");
  p[3].ram=2;
  strcpy(p[3].pcer,"Spreatrun SC 9863A, Octa Core");
  p[3].batry=3040;
  p[3].size=5.99;
  p[3].cst=7250;
  p[3].cst=3;
  p[3].pcer1=3;
  p[3].cam= 8;
  strcpy(p[3].cam1,"8MP");

  //5th
  strcpy(p[4].name,"Nokia 2.3");
  p[4].ram=2;
  strcpy(p[4].pcer,"Mediatek Helio A22 Processor");
  p[4].batry=4000;
  p[4].size=6.2;
  p[4].cst=9000;
  p[4].pcer1=2;
  p[4].cam=13;
  strcpy(p[4].cam1,"13MP + 2MP ");

  //6th
 strcpy(p[5].name,"Realme Narzo 30A");
 p[5].ram=8;
 strcpy(p[5].pcer,"Helio G85, Octa core, 2GHz");
 p[5].batry=6000;
 p[5].size=6.51;
  p[5].cst=10000;

 //7
 strcpy(p[6].name,"Realme Narzo 30");
 p[6].ram=4;
 strcpy(p[6].pcer,"Helio G95, Octa core, 2.05GHz");
 p[6].batry=5000;
 p[6].size=6.5;
  p[6].cst=12400;

 //8
 strcpy(p[7].name,"Realme 8 5G");
 p[7].ram=8;
 strcpy(p[7].pcer,"Dimensity 700 5G, Octa core, 2.2 GHz processor" );
 p[7].batry=5000;
 p[7].size=6.5;
  p[7].cst=16099;

 //9
 strcpy(p[8].name,"Xiaomi Redmi 9");
 p[8].ram=4;
 strcpy(p[8].pcer,"Mediatek Helio G35 processor");
 p[8].batry=5000;
 p[8].size=6.53;
 p[8].cst=8999;

 //10
 strcpy(p[9].name,"Xiaomi Redmi Note 10 Pro");
 p[9].ram=8;
 strcpy(p[9].pcer,"octa-core Qualcomm Snapdragon 732G processor");
 p[9].batry=5020;
 p[9].size=6.67;
 p[9].cst=21999;

 clrscr();
// print();
 rules();
 printf("YOU CAN APPLY FOLLOWING FILTERS:\n");
 printf("0)Exit\n1)Cost\n2)RAM\n3)Processor\n4)Battery Capacity\n5)Size\n6)Primary Camera\n");
 do
 {
   repeat:
    scanf("%d",&ans);
   if(ans!=1&&ans!=2&&ans!=3&&ans!=4&&ans!=5&&ans!=6&&ans!=0)
   {
     printf("You have entered a wrong input:)\n Please check again\n");
     goto repeat ;
   }
   switch(ans)
   {
    case 1:
      {
	cost();
	break;
      }
    case 2:
      {
	ram();
	break;
      }
    case 3:
      {
	processor();
	break;
      }
    case 4:
      {
	battery_capacity();
	break;
      }
    case 5:
      {
	size();
	break;
      }
    case 6:
      {
	camera();
	break;
      }
  }
 }while(ans);
    system("cls");
    result();
    system("cls");
    printf("Thankyou for using PABY's Review  ");
    getch();


 return 0;
}

void ram()
{
  int ans,cice,j=0,l=0,i,pqr;
  int r[]={0,2,4,6,8};
  printf("SELECT YOUR CHOICE:  ");
  printf("1)2GB\t2)4GB\t3)6GB\t4)8GB\n ");
  repeat:
   scanf("%d",&ans);
  if(ans!=1&&ans!=2&&ans!=3)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
   cice=r[ans];
  if(filter>0)
  {
    int *a=p_sel;
    for( i=a[j];j<k;j++)
    {
      i=a[j];
      if(p[i].ram==cice)
      {
	sel[l]=i;
	l++;
      }
    }
  }
  else
  {
    for( i=0;i<n;i++)
    {
       if(p[i].ram==cice)
	 {
	  sel[l]=i;
	  l++;
	 }
    }
  }
  p_sel=sel;
  k=l;
  filter++;
  for( i=0;i<k;i++)
       {
	 printf("%d)%s  ",i+1,p[sel[i]].name);
       }

}

void battery_capacity()
{
  int choice,*a,l,b1[n],b2[n],b3[n],x=0,y=0,z=0,i;
  if(filter>0)
  {
    a=p_sel;
    l=k;
    for(i=0;i<l;i++)
     {
       if(p[a[i]].batry<4000)
	 {
	   b1[x]=a[i];
	    x++;
	 }
	else if(p[a[i]].batry>=4000&&p[a[i]].batry<=5000)
	 {
	   b2[y]=a[i];
	   y++;
	 }
	 else
	 {
	   b3[z]=a[i];
	   z++;
	 }
     }

  }
  else
  {
    for(i=0;i<n;i++)
    {
      if(p[i].batry<4000)
      {
	b1[x]=i;
	x++;
      }
      else if(p[i].batry>=4000&&p[i].batry<=5000)
      {
	b2[y]=i;
	y++;
      }
      else
      {
	b3[z]=i;
	z++;
      }
    }
  }
  printf("\nENTER YOUR CHOICE: ");
  printf("1)Below 4000\t2)4000-5000\t3)Above 5000\n ");
  repeat:
   scanf("%d",&choice);
  if(choice!=1&&choice!=2&&choice!=3)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
  if(choice==1)
    {
      p_sel=b1;
      k=x;
    }
  else if(choice==2)
    {
      p_sel=b2;
      k=y;
    }
  else
    {
      p_sel=b3;
      k=z;
    }

  for(i=0;i<k;i++)
  {
    printf("%d)%s  ",i+1,p[p_sel[i]].name);
  }
  filter++;
}

void cost()
{
  int choice,*a,l,b1[n],b2[n],b3[n],b4[n],w=0,x=0,y=0,z=0,i;
  if(filter>0)
  {
    a=p_sel;
    l=k;
    for(i=0;i<l;i++)
     {
       if(p[a[i]].cst<10000)
	 {
	   b1[x]=a[i];
	    x++;
	 }
	else if(p[a[i]].cst>=10000&&p[a[i]].cst<=20000)
	 {
	   b2[y]=a[i];
	   y++;
	 }
	 else if(p[a[i]].cst>20000&&p[a[i]].cst<=50000)
	 {
	   b3[z]=a[i];
	   z++;
	 }
	 else
	 {
	   b4[w]=a[i];
	   w++;
	 }
     }

  }
  else
  {
    for(i=0;i<n;i++)
    {
      if(p[i].cst<10000)
      {
	b1[x]=i;
	x++;
      }
      else if(p[i].cst>=10000&&p[i].cst<=20000)
      {
	b2[y]=i;
	y++;
      }
      else if(p[i].cst>20000&&p[i].cst<=50000)
      {
	b3[z]=i;
	z++;
      }
      else
      {
	b4[w]=i;
	w++;
      }
    }
  }
  printf("ENTER YOUR CHOICE:  ");
  printf("1)Below 10k\t2)10-20k\t3)20-50k\t4)Above 50k\n");
  repeat:
   scanf("%d",&choice);
  if(choice!=1&&choice!=2&&choice!=3&&choice!=4)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
  if(choice==1)
    {
      p_sel=b1;
      k=x;
    }
  else if(choice==2)
    {
      p_sel=b2;
      k=y;
    }
  else if(choice==3)
    {
      p_sel=b3;
      k=z;
    }
  else
    {
      p_sel=b4;
      k=w;
    }

  for(i=0;i<k;i++)
  {
    printf("%d)%s  ",i+1,p[p_sel[i]].name);
  }
  filter++;
}

void size()
{
  int choice,*a,l,b1[n],b2[n],b3[n],b4[n],b5[n],w=0
  ,v=0,x=0,y=0,z=0,i;
  if(filter>0)
  {
    a=p_sel;
    l=k;
    for(i=0;i<l;i++)
     {
       if(p[a[i]].size>5.5&&p[a[i]].size<5.7)
	 {
	   b1[x]=a[i];
	    x++;
	 }
	else if(p[a[i]].size>=5.7&&p[a[i]].size<=6)
	 {
	   b2[y]=a[i];
	   y++;
	 }
	 else if(p[a[i]].size>6&&p[a[i]].size<=6.3)
	 {
	   b3[z]=a[i];
	   z++;
	 }
	 else if(p[a[i]].size>6.3&&p[a[i]].size<=6.6)
	 {
	   b4[w]=a[i];
	   w++;
	 }
	 else
	 {
	   b5[v]=a[i];
	   v++;
	 }
     }

  }
  else
  {
    for(i=0;i<l;i++)
     {
       if(p[i].size>5.5&&p[i].size<5.7)
	 {
	   b1[x]=i;
	    x++;
	 }
	else if(p[i].size>=5.7&&p[i].size<=6)
	 {
	   b2[y]=i;
	   y++;
	 }
	 else if(p[i].size>6&&p[i].size<=6.3)
	 {
	   b3[z]=i;
	   z++;
	 }
	 else if(p[i].size>6.3&&p[i].size<=6.6)
	 {
	   b4[w]=i;
	   w++;
	 }
	 else
	 {
	   b5[v]=i;
	   v++;
	 }
     }

  }
  printf("ENTER YOUR CHOICE:  ");
  printf("1)5.5-5.7 inch\t2)5.7-6 inch\t3)6-6.3 inch\t4)6.3-6.6 inch\t5)Above 6.6 inch\n");
  repeat:
    scanf("%d",&choice);
  if(choice!=1&&choice!=2&&choice!=3&&choice!=4&&choice!=5)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
  if(choice==1)
    {
      p_sel=b1;
      k=x;
    }
  else if(choice==2)
    {
      p_sel=b2;
      k=y;
    }
  else if(choice==3)
    {
      p_sel=b3;
      k=z;
    }
  else if(choice==4)
    {
      p_sel=b4;
      k=w;
    }
  else
    {
      p_sel=b5;
      k=v;
    }


  for(i=0;i<k;i++)
  {
    printf("%d)%s  ",i+1,p[p_sel[i]].name);
  }
  filter++;
}

void camera()
{
    int choice,*a,l,b1[n],b2[n],b3[n],x=0,y=0,z=0,i;
    if(filter>0)
  {
    a=p_sel;
    l=k;
    for(i=0;i<l;i++)
     {
       if(p[a[i]].cam>8&&p[a[i]].cam<=13)
	 {
	   b1[x]=a[i];
	    x++;
	 }
	else if(p[a[i]].cam>=13&&p[a[i]].cam<=21)
	 {
	   b2[y]=a[i];
	   y++;
	 }
	 else
	 {
	   b3[z]=a[i];
	   z++;
	 }
     }

  }
  else
  {
    for(i=0;i<n;i++)
    {
      if(p[a[i]].cam>8&&p[a[i]].cam<=13)
      {
	b1[x]=i;
	x++;
      }
      else if(p[a[i]].cam>=13&&p[a[i]].cam<=21)
      {
	b2[y]=i;
	y++;
      }
      else
      {
	b3[z]=i;
	z++;
      }
    }
  }
  printf("ENTER YOUR CHOICE:  ");
  printf("1)8-13 MP\t2)13.1-21 MP\t3)21.1 MP and above\n");
  repeat:
   scanf("%d",&choice);
  if(choice!=1&&choice!=2&&choice!=3)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
  if(choice==1)
    {
      p_sel=b1;
      k=x;
    }
  else if(choice==2)
    {
      p_sel=b2;
      k=y;
    }
  else
    {
      p_sel=b3;
      k=z;
    }

  for(i=0;i<k;i++)
  {
    printf("%d)%s  ",i+1,p[p_sel[i]].name);
  }
  filter++;
 }

void processor()
{
  int ans,j=0,l=0,i;
  int r[]={0,2,4,6,8};
  printf("SELECT YOUR CHOICE:  ");
  printf("1)Snapdragon\t2)Mediatek\t3)Other\n ");
  repeat:
    scanf("%d",&ans);
  if(ans!=1&&ans!=2&&ans!=3)
  {
    printf("It looks Like you have put a wrong input!\nPLease check it and Enter again\n");
    goto repeat;
  }
  if(filter>0)
  {
    int *a=p_sel;
    for( i=a[j];j<k;j++)
    {
      i=a[j];
      if(p[i].pcer1==ans)
      {
	sel[l]=i;
	l++;
      }
    }
  }
  else
  {
    for( i=0;i<n;i++)
    {
       if(p[i].pcer1==ans)
	 {
	  sel[l]=i;
	  l++;
	 }
    }
  }
  p_sel=sel;
  k=l;
  filter++;
  for( i=0;i<k;i++)
       {
	 printf("%d)%s  ",i+1,p[sel[i]].name);
       }
}

/*void print()
{
  int gdriver=DETECT,gmode;
  initgraph(&gdriver,&gmode,"C://TurboC4//TC//BGI//");
  settextstyle(8,0,5);
  outtextxy(150,150,"prasad");
  getch();
  int x,y,i,font,direction,font_size;
	x=150;
	y=150;
	font=8;

	 direction=0;
	font_size=5;
    //	settextstyle(font,direction,font_size);
   //	settextstyle(x,y,"GEEKS");
	getch();
  textcolor(RED);
  cprintf("WELCOME TO PABY'S REVIEW\n (ENTER ANY KEY TO CONTINUE)");
  getch();
  system("cls");

} */

void rules()
{// textcolor(GREEN);
  printf("Some Basic Instructions\n\n");
  printf("->In this user will get the ideas of suitable mobile phones according to their choices\n");
  printf("->You can apply filters according to your choice\n");
  printf("->You can select onyl one filter at a time\n");
  printf("->After applying every filter avaailble device name will be displayed\n");
  printf("->After applying all the filters name of phones will be displayed accordingly with their features\n");
  printf("\n\n     Press any key to continue....");
  getch();
  system("cls");
}

void result()
{
  int i,j;
  for(i=0;i<k;i++)
  {
    j=p_sel[i];
    printf("%d) %s\n",i,p[j].name);
    printf("Processor - %s\n",p[j].pcer);
    printf("Ram - %d GB\n",p[j].ram);
    printf("Back Camera - %s\n",p[j].cam1);
    printf("Screen Size - %.2f Inch\n",p[j].size);
    printf("Cost - %ld Rs\n\n",p[j].cst);
  }
  getch();
}








