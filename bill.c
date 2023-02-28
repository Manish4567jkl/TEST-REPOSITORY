#include<stdio.h>
void main()
{

    printf("                             STARBUCKS\n");
    printf("                        HANDCRAFTED ESPRESSO\n");
    printf("                                MENU\n");
    printf(" _______________________________________________________________\n");
    printf("| NAME                            SHORT        TALL       GRANDE|\n");
    printf("|_______________________________________________________________|\n");
    printf("|FLAT WHITE                        250          275         310 |\n");
    printf("|_______________________________________________________________|\n");
    printf("|CARAMEL MACCHIATO                 250          275         300 |\n");
    printf("|_______________________________________________________________|\n");
    printf("|CAFFE MOCHA/WHITE MOCHA           230          260         285 |\n");
    printf("|_______________________________________________________________|\n");
    printf("|CAFFE LATTE                       200          225         250 |\n");
    printf("|_______________________________________________________________|\n");

    





  int bill,price,total1=0,total2=0,total3=0,total4=0;
  int quantity1=0,quantity2=0,quantity3=0,quantity4=0;
  int code,size;
  int totalamount,gst;
L1: printf("ENTER 1 FOR FLAT WHITE\n");
 printf("ENTER 2 FOR CARAMEL MACCHIATO\n");
 printf("ENTER 3 FOR CAFFE MOCHA/WHITE MOCHA\n");
 printf("ENTER 4 FOR CAFFE LATTE\n");
 
 printf("ENTER YOUR SELECTION:");
 scanf("%d",&code);

 switch(code)
{
 case 1:
 printf("FLAT WHITE\n");
 printf("ENTER QUANTITY:");
 scanf("%d",&quantity1);
 printf("ENTER THE SIZE:\n");
 printf("ENTER 1 FOR SHORT\n");
 printf("ENTER 2 FOR TALL\n");
 printf("ENTER 3 FOR GRANDE\n");
 scanf("%d",&size);
 switch(size)
 {
  case 1:
  price=250;
  total1=price*quantity1;
  printf("price:%d\n",total1);
  break;
  case 2:
  price=280;
  total1=price*quantity1;
  printf("price:%d",total1);
  break;  
  case 3:
  price=310;
  total1=price*quantity1;
  printf("price:%d",total1);
  break;
 }
 
 break;
 case 2:
  printf("CARAMEL MACCHIATO\n");
  printf("ENTER QUANTITY:");
  scanf("%d",&quantity2);
 printf("ENTER THE SIZE:\n");
 printf("ENTER 1 FOR SHORT\n");
 printf("ENTER 2 FOR TALL\n");
 printf("ENTER 3 FOR GRANDE\n");
 scanf("%d",&size);
    switch(size)
 {
  case 1:
  price=250;
  total2=price*quantity2;
  printf("price:%d",total2);
  break;
  case 2:
  price=275;
  total2=price*quantity2;
  printf("price:%d",total2);
  break;  
  case 3:
  price=300;
  total2=price*quantity2;
  printf("price:%d",total2);
  break;
 }
 break;
 case 3:
 printf("CAFFE MOCHA/WHITE MOCHA\n");
 printf("ENTER QUANTITY:");
 scanf("%d",&quantity3);
 printf("ENTER THE SIZE:\n");
 printf("ENTER 1 FOR SHORT\n");
 printf("ENTER 2 FOR TALL\n");
 printf("ENTER 3 FOR GRANDE\n");
 scanf("%d",&size);
  switch(size)
 {
  case 1:
  
  price=230;
  total3=price*quantity3;
  printf("price:%d",total3);
  break;
  case 2:
  price=260;
  total3=price*quantity3;
  printf("price:%d",total3);
  break;  
  case 3:
  price=285;
  total3=price*quantity3;
  printf("price:%d",total3);
  break;
 }
 break;
 case 4:
  printf("CAFFE LATTE\n");
  printf("ENTER QUANTITY:");
  scanf("%d",&quantity4);
 printf("ENTER THE SIZE:\n");
 printf("ENTER 1 FOR SHORT\n");
 printf("ENTER 2 FOR TALL\n");
 printf("ENTER 3 FOR GRANDE\n");
 scanf("%d",&size);
  switch(size)
 {
  case 1:
  price=200;
  total4=price*quantity4;
  printf("price:%d",total4);
  break;
  case 2:
  price=225;
  total4=price*quantity4;
  printf("price:%d",total4);
  break;  
  case 3:
  price=250;
  total4=price*quantity4;
  printf("price:%d",total4);
  break;
 }
 break;
 default:
 {
 printf("invalid input");
 }
 }
 int  choice;
 printf("\nWANT TO ORDER MORE?");
 printf("\nIF YES TYPE 1,IF NO TYPE 2\n ");
 scanf("%d",&choice);
 if(choice == 1)
 {
   goto L1;
 }
 else if(choice == 2)
 {
   printf("the bill is :\n");
 }


totalamount=total1+total2+total3+total4;
gst=(totalamount*5)/100;
int finalamount=totalamount+gst;

printf("     NAME                        QTY               COST \n ");     
printf("___________________________________________________________\n");
printf("1)FLAT WHITE                       %d               %d     \n",quantity1,total1);
printf("                                                           \n");
printf("2)CARAMEL MACCHIATO                %d               %d     \n",quantity2,total2);
printf("                                                           \n");
printf("3)CAFFE MOCHA/WHITE MOCHA          %d               %d     \n",quantity3,total3);
printf("                                                           \n");
printf("4)CAFFE LATTE                      %d               %d     \n",quantity4,total4);
printf("___________________________________________________________\n");

printf("TOTAL AMOUNT                                        %d\n",totalamount);
printf("GST                                                 %d\n",gst);
printf("FINAL AMOUNT                                        %d\n",finalamount);


   
   
}