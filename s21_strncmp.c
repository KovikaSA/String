#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  if (str1 && str2 && n > 0) {
    while (n-- && !result) {
      result = (unsigned char)*str1 - (unsigned char)*str2;
      if (*str1 == '\0' || *str2 == '\0') break;
      str1++;
      str2++;
    }
  }
  return result;
}