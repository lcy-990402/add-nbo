#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h>

int main(int argc, char* argv[]){

	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");
	
	uint32_t n1, n2;
	fread(&n1, sizeof(n1), 1, fp1);
	fread(&n2, sizeof(n2), 1, fp2);
	n1 = ntohl(n1);
	n2 = ntohl(n2);
	printf("%d(%#06x) + %d(%#06x) = %d(%#06x)\n", n1, n1, n2, n2, n1 + n2, n1 + n2);
		fclose(fp1);
	fclose(fp2);
	return 0;
}

