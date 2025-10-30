#include <stdio.h>

int main() {
	char chaine[50];
	int a;

	printf("Quel est votre prénom ?\n");
	scanf("%s", chaine);

	printf("Quel age avez vous ? \n");
	scanf("%d", &a);

	printf("Prénom : %s, Age: %d \n", chaine, a);
}