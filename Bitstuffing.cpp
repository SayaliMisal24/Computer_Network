#include<stdio.h>
int main()
{
    int i, j=0, n, counter=0;
    printf("Enter Size of Frame1: ");
    scanf("%d",&n);
    int frame1[n],frame2[n];
    printf("Enter the bits for frame1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&frame1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(frame1[i]==1)
        {
            counter++;
            frame2[j]=frame1[i];
            j++;
        }
        else
        {
            counter=0;
            frame2[j]=frame1[i];
            j++;
        }
        if(counter==5)
        {
             counter=0;
             frame2[j]=0;
             j++;
        }
    }
    printf("Frame1: ");
    for(i=0;i<n;i++)
    {
        printf("%d",frame1[i]);
    }
    printf("\nFrame2: ");
    for(j=0;j<=n;j++)
    {
        printf("%d",frame2[j]);
    }
    return 0;
}            
