
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//
int poww(int n, int m)
{
    int ans=1;
    for(int i=0;i<m;i++)
    {
        ans=ans*n;
    }
    return ans;
}
//
int find_digit_sum(int n)
{
    int ans=0;
    while(n>0)
    {
        ans=ans+n%10;
        n=n/10;
    }

    return ans;
}

int reverse_a_number(int n)
{
    int ans=0;
     while(n>0)
    {
        ans=ans+(n%10);
        n=n/10;
        if(n>0)
        {
            ans=ans*10;
        }
        

    }
    return ans;
}
int occurance_of_digits(int n,int m)
{
     int ans=0;
     int count=0;
     while(n>0)
    {
        ans=n%10;
        if(ans==m)
        {
            count++;
        }
        n=n/10;
      

    }
    return count;

}

bool is_palindrome(int n)
{
    int temp=n;
    int ans=0;

    while(n>0)
    {
        ans=(ans*10)+n%10;
        n=n/10;
       

    }
    if(temp==ans)
    {
        
        return true;
    }

    return false;

}


void generate_n_prime(int n)
{

    int m=0;
    int start=2;
    

  while(m<n)
  {
    int count=1;
    for(int i=2;i<=start;i++)
    {
       if(start%i==0)
       {
        count ++;
       }

       if(count>2)
       {

        break;
       }
    }

    if(count<=2)
    {
        printf("%d\t",start);
        m++;
    }
    start++;
    
  }
    
}


void series_and_sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        int temp=1;
        while(j<i)
        {
            temp=(temp*10)+1;
          
            
            j++;
            
        }
        printf("%d",temp);
        if(i!=n)
        {
            printf("+");
        }
        sum=sum+temp;
    }
    printf("\nsum %d\n",sum);
}

bool amstrong_number(int n)
{
    int ans=0;
    int temp=n;
    int temp2=n;
    int m=0;
    int power=0;

    while(temp2>0)
    {
        temp2=temp2/10;
        power++;
    }

    while(n>0)
    {
        m=n%10;
        ans=ans+poww(m,power);
        n=n/10;
     

    }

    

    if(ans==temp)
    {
        return true;
    }
   
    return false;

}


bool amicable_numbers(int a, int b)
{
    int sum1=0;
    int sum2=0;
    int count1=0;
    int count2=0;
    if(a>b)
    {
        return false;
    }

    for(int i=1;i<a;i++)
    {
        if(a%i==0) 
        {
             sum1=sum1+i;
        }
        
       
    }
     for(int i=1;i<b;i++)
    {
        if(b%i==0) 
        {
             sum2=sum2+i;
        }
        
       
    }

    if(sum1==b && sum2==a)
    {
        return true;
    }

    return false;


}

void menu_driven_calculator()
{

   while(true)
   {
     int v;
     int num1;
     int num2;
     printf("Enter two numbers\n");
     scanf("%d %d",&num1 ,&num2);
     printf("Choose operation\n");
     printf("1. Addition 2.Subtraction 3.Multiplication 4. Divison or Press any key for exit ");

     switch(v)
     {

        case 1:
            printf("Sum of two numbers\t");
            int sum=num1+num2;
            printf("%d",sum);
        case 2:
            printf("Difference of two numbers\t");
            int dif=num1-num2;
            printf("%d",dif);
        case 3:
            printf("Product of two numbers\t");
            int prod=num1*num2;
            printf("%d",prod);
            break;
        case 4:
            if(num2==0)
            {
                printf("Arithmatic error\n");
                break;
            }
            else{
                printf("Quotient of two numbers is\n");
                float quo=num1/num2;
                printf("%f", quo);
                break;
            }
        default :
            return;

     }
   }
}

void calculate_volume()
{

   while(true)
   {
     int v;
     int a;
     int b;
     int c;
     int volume;
   
     printf("Choose shape to calculate volume\n");
     printf("1. Cube 2.Cuboid 3.Sphere 4.Cylinder 5.Cone or Press any key for exit ");

     switch(v)
     {

        case 1:
            printf("Enter the side\t");
            scanf("%d",&a);
            volume=a*a*a;
            printf("Volume of cube: %d",volume);
            break;
        case 2:
            printf("Enter length, breadth and height\t");
            scanf("%d %d %d",&a,&b,&c);
            volume=a*b*c;
            printf("Volume of cuboid: %d",volume);
            break;
        case 3:
            printf("Enter radius\t");
            scanf("%d",&a);
            volume=(4/3)*(3.14)*(a*a*a);
            printf("Volume of sphere: %d",volume);
            break;
        case 4:
            printf("Enter radius and height\t");
            scanf("%d %d",&a,&b);
            volume=(3.14)*(a*a)*(b);
            printf("Volume of cylinder: %d",volume);
            break;
        case 5:
            printf("Enter radius and height\t");
            scanf("%d %d",&a,&b);
            volume=(1/3)*(3.14)*(a*a)*(b);
            printf("Volume of cylinder: %d",volume);
            break;    
        default :
            return;

     }
   }

}

int electricity_charges_calculator(int units)
{
    int ans;
   
        if(units>=200)
        {
            ans=ans+(200)*5;
        }
        else
        {
            ans=units*5;
            return ans;
        }
 

        units=units-200;
        if(units>=100)
        {
            ans=ans+(100)*7;
            units=units-100;
        }
        else
        {
           
            ans=ans+units*7;
            printf("Debug ** %d\n",ans);
            return ans;
        }
       
        if(units>0)
        {
            ans=ans+(units*10);
        }

        return ans;


    
}



