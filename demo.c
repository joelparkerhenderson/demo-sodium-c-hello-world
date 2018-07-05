#include <sodium.h>

int main(void)
{
    if (sodium_init() < 0) {
      printf("Sodium library couldn't be initialized, it is not safe to use.\n");
      return 1;
    }
    printf("Sodium library is initialized.\n");
    return 0;
}
