#include <iostream>

using namespace std;
/* long collatzLength(long n); */

int cache[1000001];
int main() {
  int limit = 1000000, start = 1, maxStart = -1, maxLength = -1;
  for(int i = 0; i < 1000001; i++) {cache[i] = -1;}
  /* while(start < limit) { */
  /*   long length = collatzLength(start); */
  /*   if (length > maxLength) { */
  /*     maxStart = start; */
  /*     maxLength = length; */
  /*   } */
  /*   start++; */
  /* } */ 
  /* cout << maxStart << ": " << maxLength << endl; */
  cache[1] = 1;
  for(int i = 2; i < limit; i++) {
    long sequence = i;
    int k = 0;
    while (sequence != 1 && sequence >= i) {
      if (sequence % 2 == 0) {
        sequence >>= 1;
      } else {
        sequence = 3*sequence + 1;
      }
      k++;
    }
    cache[i] = k + cache[sequence];
    if (cache[i] > maxLength) {
      maxLength = cache[i];
      maxStart = i;
    }
  }
  cout << maxStart << endl;
  return 0;
}

/* long collatzLength(long n) { */
/*   long result; */
/*   if (n == 1) { */
/*     result = 1; */
/*   } else if (n % 2 == 0) { */
/*     n >>= 1; */
/*     result = 1 + collatzLength(n); */ 
/*   } else { */
/*     n = 3*n + 1; */
/*     result = 1 + collatzLength(n); */ 
/*   } */
/*   return result; */ 
/* } */

