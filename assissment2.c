#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int a[n],max=0,i,j,min=0;
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(j=1;j<n;j++)
    {
        if(min>a[j])
        {
            min=a[j];
        }
    }
    printf("The max element is:%d\n",max);
    printf("The min element is:%d\n",min);

    return 0;
}