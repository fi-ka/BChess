#include "bchess.h"

int toSq64[BRD_SQ_NUM]; //Array with conversion from 120 to 64 based indexes 
int toSq120[64];  		//Array with conversion from 64 to 120 based indexes

int fileRankToSquare(int file, int rank){
	return 21 + file + rank * 10;

}

void initSquareConversion(){
	int file = FILE_A;
	int rank = RANK_1;
	int sq = A1;
	int sq64 = 0;
 
	int index;
	for(index = 0; index < BRD_SQ_NUM; ++index){
		toSq64[index] = 65;
	}

	for(index = 0; index < 64; ++index){
		toSq120[index] = 120;
	}

	for(rank = RANK_1; rank <= RANK_8; ++rank) {
		for(file = FILE_A; file <= FILE_H; ++file) {
			sq = fileRankToSquare(file, rank);
			toSq120[sq64] = sq;
			toSq64[sq] = sq64;
			++sq64;
		}
	}
}

int convertTo64(int sq){
	return toSq64[sq];
}

int convertTo120(int sq64){
	return toSq120[sq64];
}



