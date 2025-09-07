#include <stdio.h>


void show(int arr[], int n);
void bubbleSort(int arr[], int n);
void selectionSort(int arr[],int n);
void insertionSort(int arr[],int n);


int main(){
    int arr[5];
    int n= sizeof(arr)/sizeof(arr[0]);

    printf("Enter %d integers:\n",n);

    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    printf("The given integers are:\n");

    show(arr,n);

    /*
    printf("After bubble sort we get:\n");
    bubbleSort(arr,n);
    show(arr,n);
    */
    /*
    printf("After selection sort we get:\n");
    selectionSort(arr,n);
    show(arr,n);
    */
    printf("After insertsion sort we get:\n");
    insertionSort(arr,n);
    show(arr,n);
    


    
    return 0;

}

void show(int arr[], int n){
    for(int i=0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

void selectionSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j= i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex != i){
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex]= temp;
        }
    }
}

void insertionSort(int arr[],int n){
        for(int i=1; i<n ;i++){
            int temp=arr[i];
            int j=i-1;

            while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
        }
}
