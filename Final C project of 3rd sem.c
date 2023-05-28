#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9
int wd;
int main()
{
     welcome();
     login();
     mainT();
}
int mainT()
{
     system("cls");
     system("color 0b");
     int n;
     char c;
printf("\n\n\n\n\n\n\t\t\t\t\t|=============================================================================|\n");
     printf("\t\t\t\t\t|=============================================================================|\n");
     printf("\t\t\t\t\t|                       STORE MANAGEMENT SYSTEM                               |\n");
     printf("\t\t\t\t\t|=============================================================================|\n");
     printf("\t\t\t\t\t|=============================================================================|\n");
     while(1)
     {
     printf("\n\n\n\n\t\t1. Customer Section\n\n\t\t2. Assistant Section\n\n\t\t3. Product Section\n\n\t\t4. Dealer Section\n\n\t\t5. Monthly Evaluation\n\n\t\t6. Important Instructions\n\n\t\t7. Exit\n");
     printf("\n\tEnter a choice : ");
     scanf("%d", &n);
     if(n==1)
     {
        customer_section();
     }
     else if(n==2)
     {
       maine();
     }
     else if(n==3)
     {
          enu();
     }
     else if(n==4)
     {
          mainx();
     }
     else if(n==5)
     {
          mainrt();
     }
     else if(n==6)
     {
          system("cls");
          printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
     printf("\n\n\n--------------------------------------------------------------------------------------------------------------------------------------------");
     printf("\n\t*** EVERYONE PLEASE MAINTAIN THE COMMANDS GIVEN BELOW OTHERWISE YOU WILL NOT ABLE FOR ACCESS THE SYSTEM......[[Thank You ]]..... ");
     printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
     printf("\n\t *** Press 1 if you want to organize customer information and data.\n");
     printf("\n\n\t *** Press 2 for access the Assistants information : \n\n\t      1. Here you can calculate the amount of expenses behind the assistants. \n\n\t      2. Add , delete and search assistant information.     \n");
     printf("\n\n\t *** Press 3 for product information : \n\t    Here you can add, delete, search, read or edit a product and you will also get notification alert if any product decrease below 11 .\n");
     printf("\n\n\t *** Press 4 for access the dealer information : \n\n\t     1. Here you can see the priority list of the dealers based on the product’s demand and supply \n\n\t     2. You can add, delete and display dealers information \n");
     printf("\n\n\t *** Press 5 to know about your monthly profit and loss \n\n ");
     printf("\n\n\t *** If you want to go back to the sections home page just click any key of your keyboard. \n");
     int H;
     printf("\n\n\n\n--------------------------------------------------------------------------------------------------------------------------------------------------------");
     printf("\n\t\t Even then, if there is any problem to understand or any technical problem you face you can contact with us on Instagram directly.");
     printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------");
     printf("\n\n\n\t 1. If you want to contact with us.\n\n\t 2. Continue to Main Menu\n\n\t Enter Choice : ");
     scanf("%d", &H);
     if(H==1)
     {
           system("explorer https://www.instagram.com/chowa243/");
           printf("\nPress any key to go back to the Main Menu......");
           getch();
           mainT();
     }
     else if(H==2)
     {
        mainT();
     }

     }
     else if(n==7)
     {
          system("cls");
          system("color 6");
          printf("\n\n\n\n\n\n\n\n\t\t============================== The system has been ended. Thank You. ==============================\n\n\n\n\n\n\n");
          exit(1);
     }
}
     }

          void welcome(void)
{
     system("color 0b");
	time_t t;
	time(&t);
	printf("                                                                                                          \n\n\n\n\n\n\n\n");
	printf("\t\t\t|-------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t\t|\t\t\t\t\t%s",ctime(&t));
	printf("\t\t\t|-------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                 |--------------------------------|                                    |\n");
	printf("\t\t\t|                                 |           WELCOME TO           |                                    |\n");
	printf("\t\t\t|                                 |        FASHION TERMINAL        |                                    |\n");
	printf("\t\t\t|                                 |--------------------------------|                                    |\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                                                                                       |\n");
	printf("\t\t\t|                                                                                                       |\n");
     printf("\t\t\t|-------------------------------------------------------------------------------------------------------|\n");
	printf("\t\t\t|Press any key to continue.........                                                                     |\n");
	printf("\t\t\t|-------------------------------------------------------------------------------------------------------|\n");

getch();
system("cls");
}

void login()
{
int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char terminate[20]="terminators";
    char pass[10]="cdjrsz";
do
{
system("cls");
printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     LOGIN TO THE SYSTEM                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");

     printf(" \n\n\n                        USERNAME : ");
	scanf("%s", &uname);
       printf(" \n\n                        PASSWORD : ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"terminate")==0 && strcmp(pword,"cdjrsz")==0)
	{
	     system("cls");
	printf("  \n\n\n\n\n\n\n\n\n\n\n\n\t====================================== LOGIN IS SUCCESSFUL !!!! WELCOME TO STORE MANAGEMENT SYSTEM =====================================\n\n\n\n\n\n\n\n");
	printf("\n\n\n\t\t\t\t\t\t\tPress any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
		printf("\n\n\n\n\t\n   SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		getch();//holds the screen

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong user-name and password for four times!!!");
		getch();
		}
		system("cls");
		mainT();
}
struct list
{
    double data;
    char c;
    struct list *next;
}np;
typedef struct list node;

     struct item
{
	char productname[40],productcomp[40],c;
	int productid;
	int price;
	int Qnt;
}st;

void title(void);
struct assistant
{
	char assistantname[40],c;
	int assistantid;
	char number[50];
	int salary, sal_sum;
}as;

struct delers
{
    char deler_code[20],deler_name[20], c;
    char deler_phone_num[20],de_product_name[20];
    int deal_pro;
    struct delears * next;
}ap;

struct delers* delear_head=NULL;
struct delers* arrange_head=NULL;


struct customer
{
     int a, j, c, wholesum, whole_sum;
     char g;
}cn;

customer_section()
{
          system("cls");
		FILE *fp, *rp, *dp, *fpp, *rpp;
          cn.whole_sum='\0';
          int k,z,sum=0, i,b, n,count=0, sum1=0, counter[2000];

      int r[1000];// r[1000] is for product price
      while(1)
     {
          system("cls");
          system("color 0b");
printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     CUSTOMER SECTION                     |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
      printf("\n\n\n\n\t\t\t\t1. Customer Management\n\n\t\t\t\t2. Help Center\n\n\t\t\t\t3. Exit");
      printf("\n\n\n   Enter A Choice |1-3| : ");
      scanf("%d", &b);//choice for pressing integer number in order to stop or go on
      system("cls");
          if(b==3)
          {
               mainT();
          }
          else if(b==2)
          {
            help();
          }
          else if(b==1)
          {
                     system("color 0b");

          printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                      CUSTOMER MANAGEMENT                 |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
          printf("\n         ");
     printf("\n\n\n\tToken number of customer is : ");
     scanf("%i", &cn.a);// a means token number
for(i=0; i<=2000;i++)
     {
          counter[i]= 0;// count the number of code
     }
     printf("\n\n\tHow many products have bought : ");
     scanf("%i", &cn.j);//number of product
for(i=0;i<cn.j; i++)
     {
     if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("\n   NO RECORD ADDED.");
		printf("\n\n\tPress any key to go to add product from product section......");
		getch();
		enu();
	}
          else
	{
		rp = fopen("TempFile.dat","a");
		//system("cls");
          printf("\n\n\n\tCode no of product is : ");
          scanf("%i", &cn.c);
		counter[cn.c]++;
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)

			if(cn.c==st.productid)
               {
                    printf("\n\tPrice of product is : %i",  st.price);
                    r[i]=st.price;
               }
  fclose(rp);
  fclose(fp);
	}
     }

     for(i=1; i<=2000;i++)
     {

         if(counter[i]>0)

              {
                   printf("\n\n\t\t\t\t\t|---------------------------------------------------|");
                     printf("\n\t\t\t\t\t| Number of buying product code ||%d|| is : ||%d||  |\n", i, counter[i]);//i means the code number, counter[i] means number of product according to the code
                       printf("\t\t\t\t\t|---------------------------------------------------|\n");

              }

//==================================================================================================================
	long int size=sizeof(st);
	if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("\n\tNO RECORD ADDED....");
		enu();
	}
	else
	{
      dp = fopen("Temp_Fiile.dat","a");
		//system("cls");
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(i==st.productid)
			{

                    for( z=1; z<=counter[i]; z++)
                    {
                         st.Qnt-=1;
                         if(st.Qnt<=10)
                         {
                              printf("\n\n\t|-------------------------------|");
                              printf("\n\t|Alert!! Product %d is limited.|\n", i, system("color 4b"));
                              printf("\t|-------------------------------|\n");
                         }
                    }
				fprintf(dp,"\t%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
                    fflush(stdin);
               }

			else
			{
				fprintf(dp,"\t%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
				fflush(stdin);
			}

		}
		fclose(dp);
		fclose(fp);
		remove("NextFile.dat");
		rename("Temp_Fiile.dat","NextFile.dat");
	}
     }
//===========================================================================================================================================
  for(i=0, sum1=0; i<cn.j;i++)
     {
            sum1+=r[i];//r[i] means price of product
     }

  int x;
  n:
  printf("\n\n\t\t\t\t\t\t Do you want to give discount?\n\t\t\t\t\t\t-------------------------------\n\n\t1. If Yes\n\n\t2. If No\n\n\t**Press : ");

  scanf("%d", &x);
  switch(x)
  {
  case (1):

   if(sum1>=50 && sum1<=49999)
   {
         sum=sum1-((sum1*3)/100);
          printf("\n\n\n\t\t\t\t   [Discount price is BDT : %i TK]\n", sum);
   }
   else if(sum1>=50000 && sum1<=100000)
   {
       sum=sum1-((sum1*5)/100);
          printf("\n\n\n\t\t\t\t   [Discount price is BDT : %i TK]\n", sum);
   }
   else if(sum1>100000)
   {
        sum=sum1-((sum1*7)/100);
          printf("\n\n\n\t\t\t\t   [Discount price is BDT : %i TK]\n", sum);
   }
break;

  case (0):

            if(sum1>0 && sum1<=4999)
  {
       sum = sum1;
       printf("\n\n\n\t\t\t\t   [Price is : %i TK]\n", sum);
  }
  else if(sum1>=5000 && sum1<=49999)// token number
   {
         sum=sum1;
         printf("\n\n\n\t\t\t\t   [Price is : %i TK]\n", sum);
   }
   else
   {
        sum=sum1;
        printf("\n\n\n\t\t\t\t   [Price is : %i TK]\n", sum);
   }
   break;

  default:
     printf("\n\n\n\tPress right key.......");
     goto n;
  }
     }

 //=========================================================================================
FILE *fpp;
   fpp = fopen("NextsumFile.dat","a+");
   cn.wholesum+=sum;//wholesum means full sum of money by selling products
   printf("\n\n\n\t\t\t||----------------------------------------------------||\n\t\t\t|| Total income from selling products have been : %i\n\t\t\t||----------------------------------------------------||\n", cn.wholesum);
		fpp=fopen("NextsumFile.dat","a");
		fprintf(fpp,"\n\t%i", cn.wholesum);
		fclose(fpp);

		printf("\n\n\tPress any other key to go to menu.........\n\n");
getch();
          }
mainT();

}

help()
{
      system("cls");
               system("color 0b");
               printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
          printf("\n\n\n\t1. Token Number: This means how many time the customer buy a product from your shop.\n\n\t2. Discount Issue: If you want to give discount to your desired customer you can do that by pressing '1'.\n\n\t3. Applied Discount: If customer buy below \n\n\t\t*50,000 \t : will get 3 percent discount\n\n\t\t*50,000 to 100000 : will get 5 percent discount \n\n\t\t* above 100000\t : will get 7 percent discount\n");
          getch();
          customer_section();
}
void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void enu()
{
     system("color 0b");
	int choice;
	system("cls");
	mainT:
printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                      PRODUCT SECTION                     |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
	printf("                                                                                          ");
	printf("\n\n\t\t1. Add Products");
	printf("\n\n\t\t2. Delete Products");
	printf("\n\n\t\t3. Search Products");
	printf("\n\n\t\t4. Read Items");
	printf("\n\n\t\t5. Edit Items");
	printf("\n\n\t\t6. Alert Section!!");
	printf("\n\n\t\t7. Help Center");
	printf("\n\n\t\t8. Exit");

	printf("\n\n\t\tEnter your choice |1-8| : ");
	scanf("%i", &choice);

	system("cls");

	switch(choice)
	{
		case 1:
			add_item();
			break;
		case 2:
			deleteproduct();
			break;
		case 3:
		     search_item();
			break;
		case 4:
		     read_item();
			break;
		case 5:
			edit_item();
			break;
		case 6:
		     noti_sec();
		     break;
          case 7:
               system("cls");
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
               printf("\n\n\n\t 1. To add items you have to put code(example: 201), product name, products company name, products price and quantity.\n\n\t 2. To delete product just type products code.\n\n\t 3. Just give products code to search.\n\n\t 4. Here you can see all details of your product\n\n\t 5. Search by product code, then just put the new product details to upgrade the existing product\n\n\t 6. Give product code to know about the quantity state of the product\n");
               getch();
               enu();
               break;
          case 8:
		printf("System Exit");
		mainT();
		break;

		default:
		printf("Invalid Choice! System Exit\n");
		mainT();
			getch();
	}
}

void add_item()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;


	do
	{
		system("cls");
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     Add Product Details                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
		int ID;
		fp = fopen("NextFile.dat","a+");

		if((fp = fopen("NextFile.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\n\n\tProduct Code\t : ");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
			{

				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.....\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else
		{
			printf("\n\tProduct Code\t : ");
			scanf("%i",&st.productid);
		}
			fflush(stdin);
			printf("\n\tProduct Name\t : ");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);


			char productcomp[40];
			fflush(stdin);
			printf("\n\tProduct Company  : ");
			gets(st.productcomp); // get input string
			st.productcomp[0]=toupper(st.productcomp[0]);

				printf("\n\tPrice TK\t : ");
				scanf("%i",&st.price);

				printf("\n\tQuantity\t : ");
				scanf("%i",&st.Qnt);


		fp=fopen("NextFile.dat","a");
		fprintf(fp,"\n\t%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\n\n\tPress any other key to go to menu......");
	}
	while((c = getch()) =='\r');
	enu();
}
void search_item()
{
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                   Search Product Details                 |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
	int target;
	int found=0;
	FILE *sfile;
	sfile=fopen("NextFile.dat","r");
	printf("\n\n\tEnter product code to search : ");
	scanf("%d", &target);
	while(!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
		if(target==st.productid)
		{
			found=1;
		}
	}

	if(found)
	{
		printf("\n\n\t\t\t\t\tRecord Found.....\n\n");
		printf("\n\tProduct Name\t\t : %s\n\n\tProduct Company\t\t :%s\n\n\tProduct Price\t\t : %i\n\n\tProduct ID\t\t : %i\n\n\tProduct Quantity\t : %i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);

	}
	else
		printf("\n\t\t\t\t\tNo Record found......");
		fclose(sfile);
		printf("\n\n\tPress any key to go to Main Menu!!!!");
		while((st.c = getch()) =='\r');
		enu();

}

void deleteproduct(void)
{
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                   Delete Product Details                 |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");

	int target;
	int found=0;
	FILE *sfile, *tfile;
	sfile=fopen("NextFile.dat","r");
	tfile=fopen("TempFile.dat","w+");
	printf("\n   Enter code to Delete : ");
	fflush(stdin);
	scanf("%d", &target);
	while (fscanf(sfile,"%s %s %i %i %i\n",st.productname,st.productcomp, &st.price,&st.productid,&st.Qnt)!=EOF)
	{
		if(target==st.productid)
		{
			found=1;
		}
		else
		{
			fprintf(tfile,"%s %s %i %i %i\n", st.productname,st.productcomp, st.price,st.productid,st.Qnt);
		}
	}
			if(!found)
			{
				printf("\n\n\t\t\t\t\tRecord not Found.....\n\n");
				getch();
				enu();
			}
			else
			{
				printf("\n\n\t\t\t\t\tRecord deleted....\n\n");
			}
			fclose(sfile);
			fclose(tfile);


			remove("NextFile.dat");
			rename("TempFile.dat","NextFile.dat");

			printf("\n   Press any key to go to Main Menu!!!!");
		while((st.c = getch()) =='\r');
		enu();
}

void read_item()
{
printf("\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                  View All Product Details                |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n\n");

	FILE *f;
	int i, q;
	if((f=fopen("NextFile.dat","r"))==NULL)
	{

		gotoxy(10,3);
		printf("\n\n\n\n\tNO RECORDS....");
		printf("\n\n\t\tPress any key to go back to Menu!!!");
		getch();
		enu();
	}
	else
	{
		gotoxy(0,5);
			for(i=0;i<100;i++)
		{
			printf("-");
		}
		gotoxy(5,6);
		printf("Product Name");
		gotoxy(25,6);
		printf("Product Price");
		gotoxy(40,6);
		printf("Product Company");
		gotoxy(60,6);
		printf("Product CODE");
		gotoxy(80,6);
		printf("Product Quantity\n");

		for(i=0;i<100;i++)
		{
			printf("-");
		}
		q=8;
		while(fscanf(f,"\t%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			gotoxy(5,q);
			printf("%s",st.productname);
			gotoxy(25,q);
			printf("%i",st.price);
			gotoxy(40,q);
			printf("%s",st.productcomp);
			gotoxy(60,q);
			printf("%i",st.productid);
			gotoxy(80,q);
			printf("%i",st.Qnt);

			q++;
		}
		printf("\n");
		for(i=0;i<100;i++)
			printf("-");
	}
	fclose(f);

	printf("\n\n\tPress any key to go to Main Menu!!!!");

		getch();
		enu();
}
void noti_sec()
{
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                    Notification Alert!!                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
     int i,id, n;
     FILE *fp, *rp;
     if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("\n\tNO RECORD ADDED....");
		enu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		printf("\n\n\n\tEnter Product Code : ");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
               {
                    if(st.Qnt<=10)
                    {
                         printf("\n\t\t\t\t\t|-------|");
                         printf("\n\t\t\t\t\t|Alert!!|", system("COLOR 4b"));
                         printf("\n\t\t\t\t\t|-------|");
                         printf("\n\n   Press 'Enter' for returning Menu\n");

                    }
                    else{
                         printf("\n\t\t\t\t\t|-------------|");
                         printf("\n\t\t\t\t\t|Good Position|");
                         printf("\n\t\t\t\t\t|-------------|");
                         printf("\n\n\tPress any key for returning Menu!!!");
                    }
               }
}
	}
	fclose(rp);
     fclose(fp);
     getch();
enu();
}
void edit_item()
{
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                    Edit Product Details                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("\n\tNO RECORD ADDED....");
		enu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		printf("\n\n\tEnter Product Code for edit : ");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{

				a=1;
				printf("\n\n\n\t\t\t\t\t======  Record Found  ======");
				printf("\n\tProduct Name\t\t: %s",st.productname);
				printf("\n\tProduct Company\t\t: %s",st.productcomp);
				printf("\n\tPrice\t\t\t: %i",st.price);
				printf("\n\tProduct Code\t\t: %i",st.productid);
				printf("\n\tProduct Quantity\t: %i",st.Qnt);

				printf("\n\n\t\t\t\t\t==== New Record ====");
			do
				{

					fflush(stdin);
					printf("\n\n\tNew Product Name      : ");
					gets(st.productname);
					st.productname[0]=toupper(st.productname[0]);

					for (index=0; index<strlen(st.productname); ++index)
					{
						if(isalpha(st.productname[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n\t Name contain invalid character. Please 'Enter' again");
						getch();


					}
				}while(!valid);
				do
				{
					char productcomp[40];
					fflush(stdin);
                    printf("\n\tNew Product Company   : ");
					gets(st.productcomp); // get input string
					st.productcomp[0]=toupper(st.productcomp[0]);
					//iterate for every character in string
					for (index=0; index<strlen(st.productcomp); ++index)
					{	//check if character is valid or not
						if(isalpha(st.productcomp[index]))
							valid = 1;
						else
						{
							valid = 0;
							break;
						}
					}
					if (!valid)
					{
						printf("\n\t Name contain invalid character. Please 'Enter' again");
						getch();
					}
				}while(!valid);


				printf("\n\tNew Price TK          : ");
                    scanf("%i",&st.price);

				printf("\n\tEnter New Product Code: ");
				scanf("%i",&st.productid);
				printf("\n\tNew Quantity          : ");
				scanf("%i",&st.Qnt);


				printf("\n\n\tPress 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
				}
			}
			else
			{
				fprintf(rp,"\t%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
				fflush(stdin);
			}

		}
		if(!a)
		{
			printf("\n\n\tTHIS PRODUCT DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("NextFile.dat");
		rename("TempFile.dat","NextFile.dat");
		getch();
	}
	enu();
}

int maine()
{
     int n;
     system("cls");

printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                      ASSISTANT SECTION                   |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
     printf("\n\n\n\t1. Add Assistant Information\n\n\t2. Search Information\n\n\t3. Delete Information\n\n\t4. Assistant evaluaton\n\n\t5. Help Center\n\n\t6. Exit\n\n");
     printf("\n\nEnter a choice |1-6| : ");
     scanf("%d", &n);
     system("cls");
     if(n==1)
     {
        assistant();
     }
     else if(n==2)
     {
          search_ass_details();
     }
     else if(n==3)
     {
          delete_ass();
     }
     else if(n==4)
     {
          assistant_evaluation();
     }
     else if(n==5)
     {
          system("cls");
          printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
          printf("\n\n\n\t1. To add assistant information give assistant id, name, phone number and salary.\n\n\t2. Give assistant ID to search for assistant details.\n\n\t3. Give assistant ID to delete the whole details of a assistant.\n\n\t4. Here 1st you have to put name of running month and name of holiday( like month: april, holiday: saturday),\n\t    Then put the number of days that a assistant absent,\n\t    Give the assistant id,\n\t Then the system will automatically calculate the cut salary\n");
          printf("\n\t If any give assistant absent more than 4 days then 75 percent salary from the absent days will be cut.\n");
          getch();
          maine();
     }
     else if(n==6)
     {
          mainT();
     }

}
assistant()
{
     int index, valid;
	char c;
	int a=0;

	FILE *fb;

		system("cls");
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                  Enter Assistant Details                 |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
		int ID;
		fb = fopen("Next_File.dat","a+");

		if((fb = fopen("Next_File.dat","a+"))!=NULL)
		{
			I:
			printf("\n\n\tAssistant ID     : ");

			scanf("%i",&ID);
			while(fscanf(fb,"%s %i %s %i", as.assistantname, &as.assistantid,&as.number, &as.salary)!=EOF)
			{

				if(ID == as.assistantid)
				{
					printf("\n\tTHE CODE ALREADY EXIST....\n");
					goto I;
				}
			}
			as.assistantid = ID;
		}
		else
		{
             printf("\n\n\tAssistant ID     : ");

			scanf("%i",&as.assistantid);		}
			fflush(stdin);

			printf("\n\tAssistant Name   : ");
			gets(as.assistantname);
			as.assistantname[0]=toupper(as.assistantname[0]);

               printf("\n\tAssistant number : 0");
				fflush(stdin);
				gets(as.number);

				printf("\n\tAssistant salary : ");
				scanf("%i", &as.salary);


		fb=fopen("Next_File.dat","a");
		fprintf(fb,"\n\t%s %i %s %i\n", as.assistantname, as.assistantid,as.number, as.salary);
		fclose(fb);
          printf("\n\n\n\t\tPress any other key to go to main menu!!!");
	while((as.c = getch()) =='\r');
	maine();
	}


void delete_ass(void)
{
	int target;
	int found=0;
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |               Delete Assistant Information               |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n");
	FILE *s_file, *tf;
	s_file=fopen("Next_File.dat","r");
	tf=fopen("Temp_File.dat","w+");
	printf("\n\t Enter assistant id to Delete : ");
	fflush(stdin);
	scanf("%d",&target);
	while (fscanf(s_file,"%s %i %s %i\n",as.assistantname,&as.assistantid,as.number, &as.salary)!=EOF)
	{
		if(target==as.assistantid)
		{
			found=1;
		}
		else
		{
			fprintf(tf,"%s %i %s %i\n", as.assistantname,as.assistantid,as.number, as.salary);
		}
	}
			if(!found)
			{
				printf("\n\t Record not Found....");
				getch();
				maine();
			}
			else
			{
				printf("\n\n\t\t\t\t\t Record deleted....");
			}
			fclose(s_file);
			fclose(tf);
			remove("Next_File.dat");
			rename("Temp_File.dat","Next_File.dat");

			printf("\n\n\t Press any key to go to Main Menu!");

	while((as.c = getch()) =='\r');
	maine();
}

	void search_ass_details()
{
     int count=0;

    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                  Search Assistant Details                |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
	int target;
	int found=0;
	FILE *s_file;
	s_file=fopen("Next_File.dat","r");
	while (fscanf(s_file,"%s %i %s %i\n",as.assistantname,&as.assistantid,as.number, &as.salary)!=EOF)
	{
	     count++;
	}
	printf("\n\n\n\tYou have %d assistants in store", count);
	printf("\n-----------------------------------------------");
	s_file=fopen("Next_File.dat","r");
	printf("\n\n\tEnter assistant id to search : ");
	fflush(stdin);
	scanf("%d", &target);
	while (!feof(s_file) && found==0)
	{
		fscanf(s_file,"%s %i %s %i", as.assistantname, &as.assistantid,&as.number, &as.salary);
		if(target==as.assistantid)
		{
			found=1;
		}
	}

	if(found)
	{
		printf("\n\tRecord found........");
		printf("\n\n\tAssistant Name\t\t: %s \n\tAssistant ID\t\t: %i \n\tAssistant number\t: 0%s \n\tAssistant salary\t: %i", as.assistantname, as.assistantid, as.number, as.salary);

	}
	else

		printf("\n\n\tNoo Record found....");
		fclose(s_file);
		printf("\n\n  Press any key to go to Main Menu!!!");
	while((as.c = getch()) =='\r');
	maine();
}

working_day()
{
          char d[20], m[20];
     printf("\n\n\t\tEnter the month                : ");
     scanf("%s", &m);
     m[0]=tolower(m[0]);

     printf("\n\t\tEnter the holiday of your shop : ");
     scanf("%s", &d);
     d[0]=tolower(d[0]);

     if((strcmp(m, "january")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "january")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }
      else if((strcmp(m, "february")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "friday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "february")==0) && (strcmp(d, "saturday")==0))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "march")==0) && ((strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "march")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0) || (strcmp(d, "saturday")==0) ))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "april")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "friday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "april")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "may")==0) && ((strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0) || (strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) ))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "may")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "june")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "june")==0) && ((strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "july")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "july")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "august")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "august")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "september")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "friday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

     else if((strcmp(m, "september")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }



     else if((strcmp(m, "october")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

      else if((strcmp(m, "october")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }
   else if((strcmp(m, "november")==0) && ((strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }
     else if((strcmp(m, "november")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "tuesday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }

 else if((strcmp(m, "december")==0) && ((strcmp(d, "wednesday")==0) || (strcmp(d, "thursday")==0) || (strcmp(d, "tuesday")==0)))
     {
          wd= 31-5;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }
     else if((strcmp(m, "december")==0) && ((strcmp(d, "saturday")==0) || (strcmp(d, "sunday")==0) || (strcmp(d, "monday")==0) || (strcmp(d, "friday")==0)))
     {
          wd= 31-4;
          printf("\n\n\t\tWorking Days of th shop is : %d", wd);
     }
}


assistant_evaluation()
{
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                   Assistant Evaluations                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
    int i,a , v, b, c, sal=0, m, sum;
I:
     {

        working_day();
        printf("\n\n\t\tHow many days have not been presented by assistant : ");
        scanf("%d", &b);// b means absent number of assistant
              FILE *fb, *np;
     if((fb=fopen("Next_File.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED....");
		maine();
	}
          else
	{
		np = fopen("Temp_File.dat","a");
		 printf("\n\n  ID no of assistant is  : ");

          scanf("%i", &a);

	while (fscanf(fb,"%s %i %s %i\n",as.assistantname,&as.assistantid,as.number, &as.salary)!=EOF)

			if(a==as.assistantid)
               {
                    printf("\n  Salary of assistant is : %i", as.salary);
                    sal=as.salary;
               }
	}
         m = (sal/wd);//m means per day income
  if(b>wd)
        {
             printf("\n\t\t\t\t**Wrong input. Try again**\n\n\n");

        }
       else if(b>=5 && b<=15)
        {
              c = (b*(m -(m*.75)));// cs means how many salary will be got after cutting 75%
            v= sal - ((b*m)-c);// updated salary
  printf("\n\n\t\t\t\t____________________________________________________\n");
  printf("\t\t\t\tAfter cutting 75 percent, salary have become : %d\n\n\n", v);// v means final salary
        }
       else if(b>15 && b<=wd)//b means absent day, wd means working day
        {
             v= m*(wd-b);// v means final salary
             printf("\n\n\t\t\t\t_____________________________");
             printf("\n\t\t\t\t||Salary have become : %d||\n\n\n", v);// v means final salary
        }
        }

  printf("\n\n  Press any other key to go to main menu!!!");
	while((as.c = getch()) =='\r');
	maine();
}



struct delers* insert_last(char code[],char name[],char phone_num[],char pro_name[])
{
    struct delers *temp=delear_head,* new_node=(struct delers*)malloc(sizeof(struct delers));
    strcpy(new_node->deler_code,code);
    strcpy(new_node->deler_name,name);
    strcpy(new_node->deler_phone_num,phone_num);
    strcpy(new_node->de_product_name,pro_name);
    new_node->next=NULL;

    if (temp==NULL)
    {
        delear_head=new_node;
        return new_node;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    return temp;
    system("cls");
}



struct delers* arrange_delers(char str[],int num)
{
    struct delers *temp=delear_head,* new_node=(struct delers*)malloc(sizeof(struct delers));
    while(temp!=NULL)
    {
        if (!strcmp(temp->deler_code,str))
        {
            strcpy(new_node->deler_code,temp->deler_code);
            strcpy(new_node->deler_name,temp->deler_name);
            strcpy(new_node->deler_phone_num,temp->deler_phone_num);
            strcpy(new_node->de_product_name,temp->de_product_name);
            new_node->deal_pro=num;
            new_node->next=NULL;
            break;
        }
        temp=temp->next;
    }
    temp=arrange_head;
    if (temp==NULL)
    {
        arrange_head=new_node;
        return new_node;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    return temp;

}

void generate_()
{
    insert_last("25sd","Mr.hafiz","123450","Pant       ");
    insert_last("26sd","Mr.kalam","186425","Shirt      ");
    insert_last("27sd","Mr.abdul","014563","Socks      ");
    insert_last("28sd","Mr.alam ","023654","Kurti      ");
    insert_last("29sd","Mr.jitu ","104563","Baby Dress ");
    insert_last("23sd","Mr. Rafi","563215","Saree      ");
}

void print_star()
{
printf("\n______________________________________________________________________________________________________________________________________________________\n");
}
void print_dot()
{
    printf("-------------------------------------------------------------------------------\n");
}

void display_delers()
{
    struct delers *tem=delear_head;
    while(tem!=NULL)
    {
         printf("\n______________________________________________________________________________________________________________________________________________________\n");

        printf("\t||Dealer code : %s||\t||Dealer Name : %s||\t",tem->deler_code,tem->deler_name);
        printf("\t||Dealer phone number : %s||\t||Dealing Product name : %s||\t",tem->deler_phone_num,tem->de_product_name);
        print_star();
        tem=tem->next;
    }
    print_dot();
    print_dot();
    printf("\n");
}
void display_arrange()
{
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                   Display Dealer Details                 |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n");
        printf("\n\n%-25.50s", " ");

    printf("\n_______________________________________________________________________________________________________________________________________________________\n");

    struct delers *tem=arrange_head;
    if ( tem==NULL)
    {
     printf(" \n              NO dealer arrange!      \n\n");

    }
    while(tem!=NULL)
    {
        printf("\n\n\tDealer code                : %s\n\n\tDealer Name                : %s\n",tem->deler_code,tem->deler_name);
        printf("\n\tDealer phone number        : %s\n\n\tDealing Product name       : %s\n",tem->deler_phone_num,tem->de_product_name);
        printf("\n\tNumber of dealing products : %d\n\n",tem->deal_pro);
        print_star();
        tem=tem->next;
    }
    print_dot();
    print_dot();
    printf("\n");
    while((ap.c = getch()) =='\r');
	mainx();
}

void print_main_meneu()
{
     system("cls");
    printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                       DEALER SECTION                     |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
    printf("\n\n\n\t1.Add dealer information\n\n\t2.display dealer information\n");
    printf("\n\t3.star pointer dealer\n\n\t4.delete dealer information\n\n\t5.Help Center\n\n\t6.Exit\n");
    printf("\n\n\n\tEnter any choice |1-6| : ");


}
void add_deler_inf()
{
    int n;
    printf("\n\n");
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                   Add Dealers information                |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n");
    display_delers();
    printf("\n\tHow many dealers do you want to add : ");
    scanf("%d",&n);

    for ( int i=0; i<n; i++)
    {
        printf("\n\n\tChoose any Dealer Code (25sd/26sd/27sd/28sd/29sd/23sd) : ");
        char str[20];
        scanf("%s",&str);
          printf("\n\n\tNumber of dealing products                             : ");
        int num;
        scanf("%d",&num);
        arrange_delers(str,num);
    }
    print_dot();
    printf("\n\n               Added Dealers Details Successfully!\n\n\n");
  while((ap.c = getch()) =='\r');
	mainx();
}
void star_pointer()
{
printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     Star Pointer Dealer                  |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n");
    struct delers* new_node=(struct delers*)malloc(sizeof(struct delers));
    int maxx=0;
    struct delers *tem=arrange_head;
    if( tem== NULL)
    {
        printf(" \n              NO dealer arranged!      \n\n");
        getch();
        return;
    }
    while(tem!=NULL)
    {
        if ( tem->deal_pro>maxx)
            new_node=tem,maxx=tem->deal_pro;
        tem=tem->next;
    }
    printf("\n\tDealer code                : %s\n\n\tDealer Name                : %s\n\n",new_node->deler_code,new_node->deler_name);
    printf("\tDealer phone number        : %s\n\n\tDealing Product name       : %s\n\n",new_node->deler_phone_num,new_node->de_product_name);
    printf("\tNumber of dealing products : %d\n\n",new_node->deal_pro);
    printf("\n\n\n");
    printf("\t\t\t ============       Dealer code     : ", " ");
    printf("%s =============\n",new_node->deler_code);
    printf("\t\t\t ============ The number of product : ", " ");
    printf("%d  =============\n\n\n",new_node->deal_pro);
   // system("cls");
while((ap.c = getch()) =='\r');
	mainx();
}
void delate_deler(struct delers** head_ref, char str[])
{
        struct delers* temp = *head_ref;
    struct delers* prev = NULL;

    if (temp != NULL && (!strcmp(temp->deler_code,str)))
    {
        *head_ref = temp->next;
        printf("\n\n            Deleted dealer information successfully!\n");
        getch();
        return;
    }

    while (temp != NULL && (strcmp(temp->deler_code,str)))
    {
        prev = temp;
        temp = temp->next;
    }
       if (temp==NULL)
        {
            printf("\n           NO DEALER CODE FOUND!\n");
            getch();
            print_main_meneu();
        }
        else
        {
            printf("\n\n           Deleted dealer information successfully!\n");
        }
    prev->next = temp->next;
}
void delate_inf()
{
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                  Delete Dealer Information               |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n");
    char str[20];
    printf("Dealer Code : ");
    scanf("%s",&str);
delate_deler(&arrange_head,str);
printf("\n\n");

}
int mainx()
{
   system("cls");
    generate_();

    while(1)
    {
        print_main_meneu();
            int n;
        scanf("%d",&n);
        system("cls");
        if (n==1)
        {
            add_deler_inf();
        }
        else if (n==2)
        {
            display_arrange();
        }
        else if (n==3)
        {
            star_pointer();
        }
        else if (n==4)
        {
            delate_inf();
        }
        else if(n==5)
        {
             system("cls");
    printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
             printf("\n\n\n\t 1. To add dealer information give dealer code from the dealer catalog and give the quantity of product that you want to get from the dealer\n\n\t 2. Give dealer code to display the dealer information\n\n\t 3. it will show the dealer information from whom you take the most product\n\n\t 3. To delete a dealer information just give the dealers code\n");
             getch();
             mainx();
        }
        else if (n==6)
        {
            mainT();
        }
    }
}

int mainrt()
{
     system("cls");
     system("color 0b");
     int n;
printf("\n\n\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     MONTHLY EVALUATION                   |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n");
          printf("\n\t 1. Evaluation Section.\n\t 2. Help Center.\n\t 3. Exit\n");
          printf("\n\tEnter any choice |1-3| : ");
          scanf("%d", &n);
     if(n==2)
     {
          system("cls");
          printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                         HELP CENTER                      |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|");
          printf("\n\n\n\t 1. Total income: it is the income that will come from customer section.\n\n\t 2. Total investment: it means the investment for product\n\n\t 3. Employee salary: it means the amount that is investing for all employee's of your store.\n\n\t 4. Electricity bill of your store.\n\n\t 5. Rent of your store.\n");
          getch();
          mainrt();
     }

     else if(n==3)
     {
          mainT();
     }
     else if(n==1)
     {
        system("cls");
        system("color 0b");
     printf("\n\n\n\t\t\t\t\t |----------------------------------------------------------|\n");
          printf("\t\t\t\t\t |                     EVALUATION SECTION                   |\n");
          printf("\t\t\t\t\t |----------------------------------------------------------|\n\n");
    node *Ti,*prev,*Tinv,*Es,*Eb,*Sr;

    Ti=(node*)malloc(sizeof(node));

    FILE *cr, *fpp, *rpp;

    cr = fopen("tempfile.dat","a");
    if((fpp=fopen("NextsumFile.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		printf("\n\n\t\tNo income is added....");
		getch();
		mainT();
	}
          else
	{
		rpp = fopen("TempsumFile.dat","a");
          fflush(stdin);
		while(fscanf(fpp,"%i\n", &cn.wholesum)!=EOF);
          printf("\n\n\t\n\n\n Total Income : %i", cn.wholesum);

  fclose(rpp);
  fclose(fpp);
  	}

    Ti->data=cn.wholesum;
    Ti->next=NULL;
    prev=Ti;

    Tinv=(node*)malloc(sizeof(node));
    printf("\n\n Enter the total investment : ");
    scanf("%lf",&Tinv->data);
    Tinv->next=NULL;
    prev->next=Tinv;
    prev=Tinv;

    Es=(node*)malloc(sizeof(node));
    printf("\n Enter the Employee's Salary : ");
    scanf("%lf",&Es->data);
    Es->next=NULL;
    prev->next=Es;
    prev=Es;

    Eb=(node*)malloc(sizeof(node));
    printf("\n Enter the Electricity Bill : ");
    scanf("%lf",&Eb->data);
    Eb->next=NULL;
    prev->next=Eb;
    prev=Eb;

    Sr=(node*)malloc(sizeof(node));
    printf("\n Enter the Store Rent : ");
    scanf("%lf",&Sr->data);
    Sr->next=NULL;
    prev->next=Sr;
    prev=Sr;

    double Mcal = Ti->data -(Tinv->data + Eb->data + Es->data + Sr->data);

    if(Mcal<0){

        printf("\n\n\n\t\t\t\t\t***The store has seen the face of Loss***\n", system("COLOR 4b"));
        printf("\t\t\t\t\t------------------------------------------\n");
        printf("\n\t\t\t\t\tThe Monthly Loss is: %.2lf\n",(-1)*Mcal);// Mcal means full calculation of a month

    }
    else if (Mcal==0){
    printf("\n\n\n\t\t\t\t\t------------------------------------------------");
        printf("\n\t\t\t\t\t***The store has no profit or loss this month***\n");
    }
    else {
    printf("\n\n\n\t\t\t\t\t-------------------------------------------");
        printf("\n\t\t\t\t\t***The store has seen the face of Profit***\n");
        printf("\t\t\t\t\tThe Monthly Profit is: %.2lf\n",Mcal);
    }
    fclose(cr);
while((np.c = getch()) =='\r');
system("cls");
mainrt();
     }
}



