#include<stdio.h>

int secondlarest(int a[] , int n){
    int i;
    int large= a[0];
    int SL = a[1];
    
    if(large < SL){
        int temp = large;
        large = SL ;
        SL = temp;
    }
    
    for(i=2;i<n;i++){
        if(a[i] > large){
            SL = large;
            large = a[i];
        }
        else if(a[i] > SL){
            SL = a[i];
        }
    }
    return SL;
}

int main()
{   int n,i;
    printf("Enter Number Of Elements In The Array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Second Largest is : %d",secondlarest(a,i));
}
