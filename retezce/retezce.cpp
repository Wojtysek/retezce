#include <stdio.h>
#include <string.h>

int main(void) {

	char text[] = "vojtisek";
	char druha[] = "hruby";
	printf("%s\n", text);
	printf("delka: %d\n", strlen(text));
	char buffer[1024];
	strcpy(buffer, text);
	strcat(buffer, druha);
	printf("%s\n", buffer);
}