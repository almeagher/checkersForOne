#include <iostream>
#include <cstdlib>
#include <vector>
#include "Checkerboard.h"

using namespace std;

RGB** lightBoard(vector<vector<int>> board){
	
	
	RGB** lightBoard;
	lightBoard = new RGB*[8];
	
	RGB black = { 0, 0, 0}
	RGB green = { 0, 255, 0}
	
	for(unsigned r = 0; r < board.size(); r++){
		for(unsigned c = 0; c < board.size(); c++){
			if(board[r][c] == 1)
				lightBoard[r][c] = green;
			else
				lightBoard[r][c] = black;
		}
	}
	return lightBoard;
}

int main(int argc, char *argv[]) {
	Driver driver;
	while(1){
		int** reedBoard = driver.getPositions();
		driver.writeToLeds(lightBoard(reedBoard));
		
	}
	
}