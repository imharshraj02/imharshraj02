#include<stdio.h>  
#include<conio.h>
void swap_elements(int* first, int* second)  
{  
 	int temp = *first;   	*first = *second;   	*second = temp;  
}  
 
int partition_function(int arr[], int l, int h)  
{  
 	int p = arr[h];   	int i = (l - 1);   
 	int j; 
 	for (j = l; j <= h- 1; j++)  
 	{  
 	 	if (arr[j] < p)  
 	 	{   	 	 	i++;  
 	 	 	swap_elements(&arr[i], &arr[j]); 
 	 	}  
 	}  
 	swap_elements(&arr[i + 1], &arr[h]);   	return (i + 1);    
}  
 
void quick_sort(int arr[], int l, int h)  
{  if (l < h)  
 	{  
 	 	int p_index = partition_function(arr, l, h);   	 
 quick_sort(arr, l, p_index - 1);   
 quick_sort(arr, p_index + 1, h);  
 	}  
}  
 
 
void print_Array(int arr[], int len)  
{  
 	int i;  
 	for (i=0; i < len; i++)   
   printf(" jhinku %d ", arr[i]);   
}  
 
int main()  
{  
 	int n,i; 
 	printf("Write the size of the  Array:");
 scanf("%d",&n); 
 	int arr[n];  
 printf("Enter %d elements in an array :",n);  	for(i=0;i<n;i++) 
 	{ 
 	 	scanf("%d",&arr[i]); 
 	} 
 	printf("Elements before Sorting: "); 
 print_Array(arr, n);
 printf("\n");  
 printf("See the sorted Array: "); 
    quick_sort(arr, 0, n-1);  
 	print_Array(arr, n);  
 return 0;  
} 

