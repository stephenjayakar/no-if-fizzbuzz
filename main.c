#include <stdio.h>

void fizzBuzzReference(int N) {
  for (int i = 1; i < N+1; ++i) {
    if (i % 15 == 0) {
        printf("fizzbuzz\n");
    } else {
      if (i % 3 == 0) {
        printf("fizz\n");
      } else if (i % 5 == 0) {
        printf("buzz\n");
      }
    }
  }
}

#define EMPTY_STRING ""
#define FIZZ "fizz\n"
#define BUZZ "buzz\n"
#define FIZZBUZZ "fizzbuzz\n"

const char *jump[] = {
    EMPTY_STRING, EMPTY_STRING, FIZZ, EMPTY_STRING, BUZZ, FIZZ,
    EMPTY_STRING, EMPTY_STRING, FIZZ, BUZZ, EMPTY_STRING, FIZZ,
    EMPTY_STRING, EMPTY_STRING, FIZZBUZZ
};

// constants & jump table
void fizzBuzzJump(int N) {
  for (int i = 1; i < N+1; ++i) {
    printf(jump[(i-1) % 15]);
  }
}

int main() {
  // fizzBuzzReference(10000000);
  fizzBuzzJump(10000000);
  return 0;
}
