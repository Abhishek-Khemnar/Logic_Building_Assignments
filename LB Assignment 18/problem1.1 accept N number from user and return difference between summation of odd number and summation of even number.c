#include<stdio.h>
#include<stdlib.h>
int difference(int Arr[],int iLength)
{
    int iSumEven =0;
    int iSumOdd = 0;
    int res = 0;
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iSumEven= iSumEven + Arr[i];
        }
        else
        {
            iSumOdd= iSumOdd + Arr[i];
        }
    }
    res = iSumEven-iSumOdd;
    return res;

}

int main()
{
    int isize = 0,iRet=0,iCnt=0;
    int *p = NULL;
    printf("Enter the number of elements\n");
    scanf("%d",&isize);
    p = (int*)malloc(isize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",isize);

    for(int iCnt =0 ;iCnt<isize;iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }


    iRet = difference(p,isize);
    printf("result is %d",iRet);
    free(p);

    return 0;
}
