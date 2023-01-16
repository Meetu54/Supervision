#include<stdio.h>
#include<string.h>

main () {
	
	FILE *P;
	
char name [100];

P = fopen ("meet.txt","w");

if (P == NULL) {
		printf("ERROR");
}
else {
	int i;
	
	printf("enter Text : ");
	gets(name);
	
	for ( i=0; i<strlen(name); i++) {
		fputc (name[i],P);
	}
	fclose(P);
}

}
