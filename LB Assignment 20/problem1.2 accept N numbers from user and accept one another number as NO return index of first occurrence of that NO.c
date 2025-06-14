#include<stdio.h>
#include<stdlib.h>
int FirstOcc(int Arr[],int iLength,int No)
{

    int iCnt =0;
    for( iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==No)
        {
             return iCnt;
        }
    
    }
    return -1;

}

int main()
{
    int isize = 0,iRet=0,iCnt=0;
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
    iRet=FirstOcc(p,isize,No);
    if(iRet==-1)
    {
        printf("there is no such number");
    }
    else
    {
    printf("First Occurrence of number is %d",iRet);
    }
    free(p);

    return 0;
}
