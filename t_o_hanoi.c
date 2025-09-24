#include <stdio.h>
#include <unistd.h>  // for sleep function

void towerOfHanoi(int n, char source, char target, char auxiliary, unsigned int delay) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, target);
        sleep(delay);  // delay in seconds
        return;
    }

    towerOfHanoi(n - 1, source, auxiliary, target, delay);
    printf("Move disk %d from %c to %c\n", n, source, target);
    sleep(delay);  // delay in seconds
    towerOfHanoi(n - 1, auxiliary, target, source, delay);
}

int main() {
    int n;
    unsigned int delay;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("Enter delay time in seconds (e.g., 1, 2): ");
    scanf("%u", &delay);

    printf("\nSteps to solve Tower of Hanoi:\n");
    towerOfHanoi(n, 'A', 'C', 'B', delay);

    return 0;
}