# Demo Sodium C hello world

Demonstration of:

  * [Sodium](https://libsodium.org): The Sodium crypto library
  * [C programming language](https://en.wikipedia.org/wiki/C_(programming_language)): a simple program that uses sodium
  * [GCC](https://gcc.gnu.org/): the GNU Compiler Collection


## Get Sodium

Visit https://download.libsodium.org/libsodium/releases/

We choose the most-recent stable version, which is `libsodium-stable-2018-07-05.tar.gz`

Download:

```sh
curl -O https://download.libsodium.org/libsodium/releases/libsodium-stable-2018-07-05.tar.gz 
```

Install:

```sh
./configure
make && make check
sudo make install
```

## Write the demo

Create a file `demo.c` with this C code:

```c
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
```


## Run the demo

Compile:

```sh
gcc -lsodium demo.c -o demo
```

Run:

```sh
./demo
```

Output:

```sh
Sodium library is initialized.
```
