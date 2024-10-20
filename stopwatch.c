#include <stdio.h>
#include <time.h>

int main() {
    char choice;
    clock_t start, end;
    
    printf("Press 's' to start the stopwatch...\n");
    scanf(" %c", &choice);

    if (choice == 's') {
        start = clock();
        printf("Stopwatch started. Press 'e' to stop...\n");
        
        do {
            scanf(" %c", &choice);
        } while (choice != 'e');

        end = clock();
        double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Elapsed time: %.2f seconds\n", time_taken);
    }

    return 0;
}
