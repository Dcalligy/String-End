#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *s, char *t);

int main() {

	// declare both char's s and t
	char *s = "abcedfSix";
	char *t = "six";

	printf("String 1: %s\n", s);
	printf("String 2: %s\n", t);
	printf("The return value of strend is %d\n", strend(s, t));
	return 0;
}

// function returns 1 if the string t occurs
// at the end of the string s, and zero otherwise
int strend(char *s, char *t) {

	// find the length of both strings
	int slen = strlen(s);
	int tlen = strlen(t);

	// iterate through length of t
	for (int i = 0; i < tlen; i++) {
		// compare strings
		if (s[slen - i] != t[tlen - i])
			return 0;
	}
	printf("String found.\n");
	return 1;
}
