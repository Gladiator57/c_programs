#include<stdio.h>
int main(){
    
    int j,size;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements in Ascending Order: ");
    for(j=0;j<size;j++)
    {
        scanf("%d",&arr[j]);
    }
    printf("The Array Elements are : ");
    for(j=0;j<size;j++)
    {
        printf("%d\t",arr[j]);
    }
    printf("\n");
    
    
    int ele;
    int found=0;
    int mid;
    printf("Number of Elements in the array are : \n");
    int len = sizeof(arr)/sizeof(int);
    printf("%d\n",len);
    int low = 0, high=len-1;
    printf("Enter the Element to search : \n");
    scanf("%d",&ele);
    while(low<=high){
        mid = (low + high)/2;
        if(ele<arr[mid]){
            
            high=mid-1;
            
        }
        else if(ele>arr[mid]){
            low = mid+1;
            
        }
        else if(ele==arr[mid]){
            printf("Element found at loc %d",mid);
            found=1;
            break;
        }
    } 
    
    
}
