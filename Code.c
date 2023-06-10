#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *merge_sorted(int *a,int *b,int m,int n);

int main()
{
 /* ?\n;||(or) e &&(and),\\*/
 int a[] = {1, 2, 3, 4, 5, 6};
 int b[] = {2, 4};
 int m = sizeof(a)/sizeof(int);
 int n = sizeof(b)/sizeof(int);
 int *v = merge_sorted(a,b,m,n);


 for (int i = 0; i < m+n; i++)
 {
  printf("%d", v[i]);
 }

 return 0;
}



int* merge_sorted(int* a, int* b,int m,int n)
{
 // assume that the array b is smaller than a
 int *v = malloc((m+n)*sizeof(int));

 int c = 0;
 int y = b[0];
 int j = 0;
 int k = 0;
 while(c < m){
    if(y >= a[c]){
        v[k] = a[c];
        k++;
        c++;
    }
    else{
        v[k] = b[j];
        j++;
        k++;
        if(j >= n){
            break;
        }
        y = b[j];
    }
 }
 //completing v
 printf("%d\n",a[c]);
  printf("%d\n",k);
 for(int i = c;i < m;i++){
    v[k] = a[i];
    k++;
 }

 return v;
}
