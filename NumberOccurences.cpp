#include <iostream>
#include <stdio.h>
using namespace std;

int count_occur(int a[], char exists[], int num_elements, int value);
void print_array(int a[], int num_elements);

int main(void)
{
	
	int a[5];
    char exists[5] = {0}; 
    int num_occ, i;
    
    cout << "Enter 5 Integer Values:" << endl;
    
    for(int i=0;i<5;i++)
	{
	cin>>a[i];
	}
	
  
    cout << "Entered Values      Number Occurences" << endl;

    for (i = 0; i < 5; i++)
    {
        num_occ = count_occur(a, exists, 5, a[i]);
        if (num_occ) {
            exists[i] = 1; 
            printf("          %d              %d\n", a[i],num_occ);
        }
    }
}

int count_occur(int a[], char exists[], int num_elements, int value)

{
    int i, count = 0;

    for (i = 0; i < num_elements; i++)
    {
        if (a[i] == value)
        {
            if (exists[i] != 0) return 0;
            ++count; /* it was found */
        }
    }
    return (count);
}

void print_array(int a[], int num_elements)
{
    int i;
    for (i = 0; i<num_elements; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

