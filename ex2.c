/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */


#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */



int main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);
   
//   length = (strlen(Strings));
  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */

   for (int i = 0; i < NUM; i++) {
     fgets(Strings[i], LEN, stdin);
   }


  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */

  for (int i = 0; i < NUM; i++) {
    printf("%s" , Strings[i]);
  }

//  puts("finishes loop");

  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Use the function my_compare_strings() to compare two strings.  If they are out of order,
     use the function my_swap_strings() to swap their contents.

  */

  for (int r = 0; r < NUM-1; r++) {
  //    puts("outter loop start");
    //int didSwap = 0;
    for (int s = r; s < NUM; s++){
    //    puts("inner loop start");
        
//        int retVal = my_compare_strings(Strings[s], Strings[r]);
      if (strcmp(Strings[s], Strings[r]) < 0) {
      //    puts("swapping!");
        char temp[LEN];

         strcpy(temp, Strings[s]);
         strcpy(Strings[s], Strings[r]);
         strcpy(Strings[r], temp);

         //didSwap = 1;
      }
    }
    //if (didSwap == 0) break;
  }
  
  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for (int n = 0; n < NUM; n++) {
    printf("%s" , Strings[n]);
  }
}
