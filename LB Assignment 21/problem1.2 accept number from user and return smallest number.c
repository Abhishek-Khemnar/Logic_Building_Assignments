#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iLength)
{
    int iMin = Arr[0];
    int iCnt =0;
    for(iCnt = 0 ;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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
    printf("Enter %d elements\n",isize);

    for(int iCnt =0 ;iCnt<isize;iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Minimum(p,isize);
    printf("smallest number is %d",iRet);
    
    free(p);

    return 0;
}
