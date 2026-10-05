#include <stdio.h>

//function declaration 

void sum ();
void min ();
void max ();
void CheckEvenOdd();


int main(){
    int option ;
    printf("CLI UTILITY TOOL KIT\n");

    do{
         printf("Choose your operation : \nPress 1.Sum\n 2. Max\n 3.Min\n 4.Check Even or odd\n 5.Exit\n");
         scanf("%d",&option);

         switch (option)
         {
        case 1:
        sum();
            break;
        
        case 2:
        max();  
            break;

        case 3:
         min() ; 
            break;

        case 4:
        CheckEvenOdd() ;  
            break;
        
         case 5:
            break;


         default :
         printf("Wrong input!!\n");
            break;
         }
    }while(option != 5);
   return 0;
}

//function implementation

void sum (){

    int a , b ;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Sum of %d and %d = %d\n",a,b,a+b);
}
void min (){
     int a , b ;
    printf("Enter two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Min number between %d and %d = %d\n",a,b,a<b ? a:b);
}
void max (){
    int a , b ;
    printf("Enter two numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Max number between %d and %d = %d\n",a,b, a>b ? a:b);
}
void CheckEvenOdd(){
     int a;
    printf("Enter your numbers : ");
    scanf("%d",&a);
    printf(a %2==0 ? "Even" : "Odd\n");
}  