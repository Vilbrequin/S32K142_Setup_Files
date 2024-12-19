#include <stdint.h>

int main(void) {
    __asm volatile ("mov r4, #0xFFFFFFFF"); // Set r4 to 0xFFFFFFFF
    while (1) {
        // Infinite loop to keep the program running
    }
    return 0;
}
