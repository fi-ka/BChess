#include <stdio.h>
#include "bchess.h"
#include "bitboard.h"
#include "utils.h"

int main()
{
	//initiate board representation arrays and more.
	allInit();

	//prints 120 board representation	
	int index;
	for(index = 0; index < BRD_SQ_NUM; ++index){
		if(index % 10 == 0)
			printf("\n");
		printf("%5d", convertTo64(index));
	}

	printf("\n\n");

	//prints 64 board representation	
	for(index = 0; index < 64; ++index){
		if(index % 8 == 0)
			printf("\n");
		printf("%5d", convertTo120(index));
	}

	printf("\n");

	S_BOARD b;
	printf("Start:\n\n");
	PrintBitBoard(b.posKey);

	b.posKey |= (1 << convertTo64(D2));

	printf("D2 added:\n\n");
	PrintBitBoard(b.posKey);

	return 0;
}