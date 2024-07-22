#include <stdio.h>
#include <main.h>

/**
 * Exervices en C 
 *
 */

void print_rev(char *s);
{
  if (s)
  {
    char * end = s + strlen(str) - 1;

    // swap the values in the two given variables
    // XXX: fails when a and b refer to same memory location
#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    // walk inwards from both ends of the string, 
    // swapping until we get to the middle
    while (s < end)
    {
      XOR_SWAP(*str, *end);
      s++;
      end--;
    }
#   undef XOR_SWAP
  }
}
