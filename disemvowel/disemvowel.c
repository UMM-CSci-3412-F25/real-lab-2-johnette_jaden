#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "disemvowel.h"

char* disemvowel(char* str) {
	if (str == NULL) {
		return NULL;
	}

	int length = strlen(str);
	char* new_str = (char*)malloc(length + 1);
	if (new_str == NULL) {
		return NULL;
	}

	int new_index = 0;
	for (int i = 0; i < length; i++) {
		if (!is_vowel(str[i])) {
			new_str[new_index] = str[i];
			new_index++;
		}
	}

	new_str[new_index] = '\0';

	char* final_str = (char*)realloc(new_str, new_index + 1);

	if (final_str == NULL) {
		free(new_str);
		return NULL;
	}
  return final_str;
}

int is_vowel(char c) {
	char lower_c = tolower(c);
	return (lower_c == 'a' ||
	       	lower_c == 'e' ||
	       	lower_c == 'i' ||
	       	lower_c == 'o' ||
	       	lower_c == 'u');
	}
