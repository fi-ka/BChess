#include "stdio.h"
#include "bchess.h"
#include "bitboard.h"
#include "utils.h"

void PrintBitBoard(U64 bb){
	U64 square = 1;

	int rank, file, sq, sq64;

	printf("\n");

	for(rank = RANK_8; rank >= RANK_1; --rank){
		for(file = FILE_A; file <= FILE_H; ++file) {
			sq = fileRankToSquare(file, rank);
			sq64 = convertTo64(sq);

			if(bb & (square << sq64)){
				printf("X");
			}else{
				printf("-");
			}
		}
		printf("\n");
	}
	printf("\n");
}