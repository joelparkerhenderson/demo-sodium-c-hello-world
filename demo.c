#include <sodium.h>

int main(void)
{

  /* Initialize the Sodium library */
  if (sodium_init() < 0) {
    puts("Sodium library couldn't be initialized, it is not safe to use.");
    exit(1);
  }
  puts("Sodium library is initialized.");

  /* Generate random bytes */
  unsigned int buf_len = 16;
  unsigned char buf[buf_len];
  randombytes_buf(buf, buf_len);

  /* Format bytes as a hexadecimal string */
  unsigned int hex_str_len = buf_len * 2 + 1;
  char hex_str[hex_str_len];
  sodium_bin2hex(hex_str, hex_str_len, buf, buf_len);
  puts(hex_str);

  exit(0);
}
