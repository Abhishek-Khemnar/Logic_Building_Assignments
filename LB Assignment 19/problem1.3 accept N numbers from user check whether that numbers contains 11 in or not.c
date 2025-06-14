#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{

    int iCnt =0;
    BOOL bFlag = FALSE;
    for( iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            bFlag =TRUE;
            break;
        }
    }
    return bFlag;

}

int main()
{
    int isize = 0,bRet=0,iCnt=0;
    int *p = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&isize);
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
    bRet=Check(p,isize);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    { 
        printf("11 is absent");
    }

    free(p);

    return 0;
}
