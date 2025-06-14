#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{

    int iCnt =0;
    int iCountE=0;
    int iCountO=0;
    int result=0;
    for( iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iCountE++;
        }
        else
        {
              iCountO++;
        }
    }
    result = iCountE-iCountO;
    return result;

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
    iRet=CountEven(p,isize);
    printf("Result is %d",iRet);
    free(p);

    return 0;
}
