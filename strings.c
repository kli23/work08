#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen( char *s ) {

}

char * mystrncpy( char *dest, char *source, int n) {

}

char * mystrncat( char *dest, char *source, int n) {

}

int mystrcmp( char *s1, char *s2 ) {
}

char * mystrchr( char *s, char c ) {
}


int main() { // testing string functions
	char s2[100] = "hello";
	char s3[100] = "goodbye";
	printf("%ld\n", strlen(s2));
	printf("%s\n", strcat(s2, s3));
	printf("%s\n", strncat(s2, s3, 3));
	printf("%s\n", strcpy(s2, s3));
	char s4[100] = "sup";
	printf("%s\n", strncpy(s2, s4,2));


}
