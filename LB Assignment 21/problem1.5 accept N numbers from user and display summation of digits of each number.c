#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int iCnt =0;
    int sum = 0;
    int iDigits = 0;
    int iNo = 0;
    for(iCnt = 0 ;iCnt<iLength;iCnt++)
    {
         iNo = Arr[iCnt];
         sum = 0; 
        while(iNo!=0)
        {
             iDigits = iNo%10;
             sum = iDigits+sum;
            iNo =iNo/10;
        }
        printf("%d\t",sum);
    }

}
int main()
{
    int isize = 0,iCnt=0;
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
    Display(p,isize);
    
    free(p);

    return 0;
}
