/*
 ============================================================================
 Name        : SelectionSort.c
 Author      : Somnath Sarkar
 Version     :
 Copyright   : Public access
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 10


//--------------------------------------------------------------------
void arraydisplay(int* a)
{
    int i;
    printf("\n");
    for(i=0; i<ARR_SIZE; i++) printf("%d, ", a[i]);
    printf("\n");
}
//--------------------------------------------------------------------
void getinput(int* a)
{
    int i;
    for(i=0; i<ARR_SIZE; i++)
    {
        printf("\nEnter number %d: ", i+1);
        fflush(stdout);
        scanf("%d", &a[i]);
    }
}
//--------------------------------------------------------------------
void swap(int* a, int x, int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
//--------------------------------------------------------------------
void nondecreasesort(int* a)
{
    int i, j, key, min, cell;
    for(i=0; i<ARR_SIZE-1; i++)
    {
        key = min = a[i];
        cell = i;
        for(j=i+1; j<ARR_SIZE; j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                cell = j;
            }
        }
        if(key != min) swap(a, i, cell);
        printf("\nSelection Sort: Iteration %d, key = %d", i+1, key);
        arraydisplay(a);
    }
    printf("\nExiting Sort area...");
}
//--------------------------------------------------------------------

int main(void)
{
    int n[ARR_SIZE], *m;
    m = n;
    getinput(m);
    printf("\nOriginal Array");
    arraydisplay(m);
    nondecreasesort(m);
    arraydisplay(m);

return EXIT_SUCCESS;
}

