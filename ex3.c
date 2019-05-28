/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


int NchooseK(int n, int k)  {

    if (k == 0 || k == n ) return 1;

    return NchooseK(n-1, k-1) + NchooseK(n-1, k);
}

int main()
{
    int n = 1;
    int k = 1;
  
  while (1){
     if (n == 0 && k == 0) break;
      printf("Enter two integers (for n and k) separated by space:\n");
//     if (n == 0 && k == 0) break;
     scanf("%d%d", &n, &k);
    // printf("k is %d" , k);     
    printf("%d\n", NchooseK(n, k));

  }
}
