#include<stdio.h>
#include<string.h>

main () {
	
	FILE *P;
	
char name;

P = fopen ("meet.txt","r");

if (P == NULL) {
		printf("ERROR");
}
else {
	
	while (name != EOF) {
			name = fgetc(P);
		printf("%c",name);
	}
	
	fclose(P);
}

}
