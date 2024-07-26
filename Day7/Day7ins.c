#include <stdio.h>
#include <stdlib.h>


void allot_memory(int *arr,int size)
{

     arr = (int *)malloc(size * sizeof(int));
}


void add_elements(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        *(arr+i)=i+1;
    }
    
}

int search_element(int *arr,int n,int size)
{
    for(int i=0;i<size;i++)
    {
       if(*(arr+i)==n)
       {
        return 1;
       }
       return 0;
    }
}

void max_min(int *arr,int size, int *mx, int *mn)
{
    int max=0;
    int min=9999;
    for(int i=0;i<size;i++)
    {
       if(*(arr+i)>max)
       {
        max=*(arr+i);
       }
       if(*(arr+i)<min)
       {
        min=*(arr+i);
       }
    }
     *mx=max;
     *mn=min;

   
}

// int min(int *arr,int size)
// {
//     int min=9999;
//     for(int i=0;i<size;i++)
//     {
//        if(*(arr+i)<min)
//        {
//         min=*(arr+i);
//        }
//     }

//     return min;
// }

int sum(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
       sum=sum+*(arr+i);
    }

    return sum;
}

int even_sum(int *arr,int size)
{
    int esum=0;
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)==1 || *(arr+i)%2==1)
        {
           esum=esum+*(arr+i);
        }
        else
        {
            
        }

      
    }

    return esum;
}

int odd_sum(int *arr,int size)
{
    int osum=0;
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)%2==0)
        {
           osum=osum+*(arr+i);
        }
      
    }

    return osum;
}

int is_palindrome(int *arr,int size)
{

    if(size%2==0)
    {
        for(int i=0;i<size/2;i++)
        {
            if(*(arr+i)!=*(arr+(((size/2)-1)-i)))
            {
                return 0;
            }
        }
        return 1;
    
    }
    else
    {
        int temp=(size/2)+1;
      for(int i=0;i<temp;i++)
        {
            if(*(arr+i)!=*(arr+(((temp)-1)-i)))
            {
                return 0;
            }
        }
        return 1;


    }
}

void valid_subset(int *arr, int size,int m, int *x, int *y)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(*(arr+i)+*(arr+j)==m)
            {
                *x=*(arr+i);
                *y=*(arr+j);
                return;
            }
        }
    }

}

void free_memory(int *arr)
{
    free(arr);
}









