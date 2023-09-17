#include <stdio.h>

int main() {
  int farh, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 30;

  for(int i=lower; i<=upper; i=i+step) {
    farh = i;
    celsius = farhToCelsius(farh);
    printf("Celsius: %d Fahr: %d\n", celsius, farh);
  }
}

int farhToCelsius(int farh) {
  return (farh - 32)*5/9;
}