//4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<stdio.h>
void RotateArray(int a[],int size)
{   int c;
    printf("How u wanna ratate array   : \nEnter no.\n1.left\n2.right\n");
    scanf("%d",&c);
    int n;
        printf("how many position u wanna rotate array :");
        scanf("%d",&n);
    switch (c)
    {
    case 1:
        for (int i = 1; i <= n; i++)
        {   int temp=a[0];
            for (int j = 0; j < (size-1); j++)
            {
                a[j]=a[j+1];
            }
            a[size-1]=temp;
        }
        printf("Array After left rotation by %d position : ",n);
        for (int i = 0; i < size; i++)
        {
            printf("%d ",a[i]);
        }
        break;
        case 2:
        
        for (int i = 1; i <=n; i++)
        {   int temp=a[size-1];
            for (int j = size-1; j >=0; j--)
            {
                a[j]=a[j-1];
            }
            a[0]=temp;
        }
        printf("Array After right rotation by %d position : ",n);
        for (int i = 0; i < size; i++)
        {
            printf("%d ",a[i]);
        }
        break;
    }

}

int main(){
    int a[10];
    printf("Enter 10 integer : \n");
    for (int i = 0; i < 10; i++)
    scanf("%d",&a[i]);
    RotateArray(a,10);
    return 0;
}