#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int No)
{

    int iCnt =0;
    BOOL bFlag=FALSE;
    for( iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
           bFlag = TRUE;
           break;
        }
    }
    return bFlag;

}

int main()
{
    int isize = 0,iCnt=0;
    BOOL bRet =FALSE;
    int No = 0;
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&isize);

    printf("Enter No:\n");
    scanf("%d",&No);

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
    bRet=Check(p,isize,No);
    if(bRet==TRUE)
    {
        printf("Number is present");
    }
    else
    {
       printf("Number is not present");
    }
    free(p);

    return 0;
}
