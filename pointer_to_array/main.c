#include <conio.h>

int sort(int *p,int n)
{
    int i,j,temp;
     for(i=0; i<n-1; i++)
    {

        for(j=0; j<n-i-1; j++)
        {
           if(p[j]>p[j+1])
           {
           	temp=p[j];
           	p[j]=p[j+1];
           	p[j+1]=temp;
		   }

        }

    }



 }
 print(int *p,int n)
{

    int i;
    for(i=0; i<n; i++)
    {
       printf("%d ",p[i]);
    }


 }


int main()
{
    int a[10000],i,n,key;
    int *p;
    p=a;


    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

   sort(p,n);
   print(p,n);

return 0;

}
