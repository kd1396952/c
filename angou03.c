#include<stdio.h>
#include<stdlib.h>
#include<timeapi.h>

main()
{
	char s[21];
	int	k[20], i, n;

	srand(time(0));

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢„");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
}	