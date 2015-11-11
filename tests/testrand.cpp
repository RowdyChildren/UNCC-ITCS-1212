    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    int main ()
     {
        srand (time(NULL));
        printf ("Random number: %d\n", rand() % 100);
        srand (1);
        return 0;
     }