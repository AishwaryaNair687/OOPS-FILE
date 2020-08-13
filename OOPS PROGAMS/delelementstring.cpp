#include<stdio.h>

int main(){
    int n=10;
    int ar[n],val,pos,i;
    printf("enter elements");

    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);

    for(i=0;i<n;i++){
        printf("%d, ",ar[i]);
        }
    
    printf("\nelement to delete: ");
    scanf("%d",&val);
    for(int i=0;i<n;i++){
        if(ar[i]==val)
        {
            pos=i;
            for(int j=pos;j<n;j++){
                ar[j]=ar[j+1];
            }
            printf("\n deleted %d at position %d",val,pos);
            printf("\nresultant array is:\n");
        
            for(int k=0;k<n-1;k++){
            printf("%d, ",ar[k]);
            }
           
        }
    }
}
