#include <stdio.h>

#define ARR_SIZE 5

void windowsSort(int arr[], int size);
void linuxSort(int arr[], int size);
void macSort(int arr[], int size);
void otherSort(int arr[], int size);


void main(){
    int arr[5] = {8, 25, 1, 4, 3};
    int size = 5;

    #ifdef _WIN32
    printf("Windows specific code \n");
    windowsSort(arr, size);
    #elif defined __linux__
    printf("Linux specific code \n");
    linuxSort(arr, size);
    #elif defined __APPLE__
    printf("Mac OS specific code \n");
    macSort(arr, size);
    #else
    printf("This is some other OS code \n");
    otherSort(arr, size);
    #endif

    // windowsSort(arr, size);
    // linuxSort(arr, size);
    // macSort(arr, size);
    // otherSort(arr, size);

     for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void windowsSort(int arr[], int size){
    // Bubble Sort
    int op = 1;
    while (op != 0)
    {
        op = 0;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
                op = 1;
            }
            
        }
    }

}

void linuxSort(int arr[], int size){
    // метод на пряката селекция
    for (int j = 0; j < size-1; j++)
    {
        for (int i = j+1; i < size; i++)
        {
            if (arr[j] > arr[i])
            {
                int a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
            
        }
        
    }
}

void macSort(int arr[], int size){
    // метода на прякото вмъкване
    int op = 1;
    while (op != 0)
    {
        op = 0;
        for (int i = 1; i < size; i++)
        {
            int index = arr[i];
            int dec = i;
            while(dec>0 && arr[dec-1]>=index)
            {
                arr[dec]=arr[dec-1];
                --dec;
            }
            arr[dec]=index;
        }
    }
}

void otherSort(int arr[], int size){
    // обръща масива
    int middle = size / 2;
    for (int i = 0; i < middle; i++)
    {
        int a = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = a;
    }
}