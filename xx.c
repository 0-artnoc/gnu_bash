#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
	size_t	wstrlen, n, n1;
#ifdef BUG
	size_t	n, n1;
#else
	int	n, n1;
#endif

	wstrlen = 4;

	for (n = 0; n < wstrlen; n++) {
		for (n1 = wstrlen; n1 >= n; n1--) {
			fprintf(stderr, "n = %lu n1 = %lu wstrlen = %lu\n", n, n1, wstrlen);
			if (n1 > wstrlen) {
				fprintf(stderr, "n1 (%lu) > wstrlen (%lu)\n", n1, wstrlen);
				break;   
			}
		}
	}
	exit (0);
}
