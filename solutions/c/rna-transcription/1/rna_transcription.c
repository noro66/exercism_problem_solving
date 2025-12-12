#include "rna_transcription.h"

char *to_rna(const char *dna)
{
	char *res;
	int i;

	i = 0;
	res = malloc(13);
	if (res == NULL)
		return NULL;
	while (dna[i])
	{
		if (dna[i] == 'G')
			res[i] = 'C';
		else if (dna[i] == 'C')
			res[i] = 'G';
		else if (dna[i] == 'T')
			res[i] = 'A';
		else if (dna[i] == 'U')
			res[i] = 'U';

	}
	res[i] = '\0';
	return (res);
}

