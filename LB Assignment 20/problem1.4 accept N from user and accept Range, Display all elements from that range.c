#include<stdio.h>
#include<stdlib.h>
void Range (int Arr[],int iLength,int No1,int No2)
{
    int iCnt =0;
    for( iCnt=0;iCnt<iLength;iCnt++)
    {
        if(No1<=Arr[iCnt]&&No2>=Arr[iCnt])
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int isize = 0,iCnt=0;
    int No1 = 0,No2 = 0;
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&isize);

    printf("Enter the starting point:\n");
    scanf("%d",&No1);

    printf("Enter the ending point:\n");
    scanf("%d",&No2);

    p = (int*)malloc(isize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n",isize);

    for(int iCnt =0 ;iCnt<isize;iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Range(p,isize,No1,No2);

    free(p);

    return 0;
}
