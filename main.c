#include <stdio.h>
int main(void)
{
 int choice;
 float num1,num2,sum;
  printf("\nMENU \n");   
  printf("  1. Add (+)\n");     
  printf("  2. Subtract (-) \n");  
  printf("  3. Multiply (*) \n");  
  printf("  4. Divide (/) \n");  
  printf("  5. Modulo (%%) \n\n");        

  printf("Enter Number 1 : ");  
  scanf("%f",&num1);    
  printf("Enter Number 2 : ");   
  scanf("%f",&num2);    
 
  printf("Select choice : ");
  scanf("%d",&choice);

      switch(choice)
      {
        case 1:
        sum=num1+num2;
        printf("Answer is %.3f + %.3f = %.3f \n",num1,num2,sum);
        break;

        case 2:
        sum=num1-num2;
        printf("Answer is %.3f - %.3f = %.3f \n",num1,num2,sum);
        break;
        
        case 3:
        sum=num1*num2;
        printf("Answer is %.3f * %.3f = %.3f \n",num1,num2,sum);
        break;

        case 4:
        
        if(num2==0.0)
          if(num1==0.0){
          printf("zero/zero is undefined");
          }
          else{
          printf("Divide by Zero!!!");
          }
          else{
          sum=num1/num2;
          printf("Answer is %.3f / %.3f = %.3f \n",num1,num2,sum);
          }
        break;

        case 5:
          if(num2==0.0){
          printf("Divide by Zero!!!");
          }
          else{
          sum=(int)num1%(int)num2;
          printf("Answer is %.3f %% %.3f = %.3f \n",num1,num2,sum);
          }
        
        break;

        default:
        printf("Please select choice 1-5 ");
      
      }
  return 0;
}
