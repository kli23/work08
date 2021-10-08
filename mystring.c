#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen( char *s ) {
	int sum = 0;
	while (*(s + sum) != 0) {
		sum++;
	}
	return sum;
}

char * mystrcpy( char *dest, char *source ) {
	int i = 0;
	for (i = 0; i <= mystrlen(source); i++)
		*(dest + i) = *(source + i);
	return dest;
}

char * mystrncpy( char *dest, char *source, int n) {
	int i;
	if (mystrlen(source) >= n) {
		for (i = 0; i < n; i++) {
			*(dest + i) = *(source + i);
		}
	}
	else {
		mystrcpy(dest,source); // if size of source < n, copy all of source into dest then add n - source nulls so n bytes are written total
		for (i = 0; i < n - mystrlen(source); i++)
			*(dest + mystrlen(dest) + i) = 0;
	}
	return dest;
}

char * mystrcat( char *dest, char *source ) {
	mystrcpy( dest + mystrlen(dest) , source);
	return dest;
}

char * mystrncat( char *dest, char *source, int n) {
	mystrncpy(dest + mystrlen(dest), source, n);
	if (mystrlen(source) >= n)
		*(dest + mystrlen(dest) + n) = 0; // adds terminating null if length of source >= n, guarantees terminating null
	return dest;
}

int mystrcmp( char *s1, char *s2 ) {
	int sum = 0;
	int sum2 = 0;
	int i;
	for (i = 0; i < mystrlen(s1); i++)
		sum += (int)(*(s1 + i));
	for (i = 0; i < mystrlen(s2); i++)
		sum2 += (int)(*(s2 + i));
	return sum - sum2;
}

char * mystrchr( char *s, char c ) {
	int i;
	for (i = 0; i <= mystrlen(s) ; i++)
		if (*(s + i) == c)
			return s + i;
	return NULL;
}
