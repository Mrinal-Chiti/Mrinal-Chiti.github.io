# include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int F[n];
    F[0]=0;
    F[1]=1;
    for(int i=2;i<n;i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
    printf("the sequence is : \n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",F[j]);
    }
    return 0;
}