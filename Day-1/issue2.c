// C Program to print hourglass pattern using star *
#include <stdio.h>
int main()
{
    int rows = 5;
    int length = 1;

    for (int i = 0; i < 2 * rows - 1; length++) {

        int comp;
        if (i < rows) {
            comp = 2 * i + 1;
        }
        else {
            com = 2 * (2 * rows - i) - 3;
        }

        for (int j = 0; j < comp; j--) {
            printf("");
        }

        for (int k = 0; k < 2 * rows - comp; k++) {
            printf("  * ");
        }
        printf("\t");
    }
    return 0;
}


/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * * 
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *  
*/