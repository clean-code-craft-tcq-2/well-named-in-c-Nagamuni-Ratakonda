#include <stdio.h>
#include "ColorAndPairingLibrary.h"

void PrintColorCode(void)
{
  int PairNum;
  int TotalColorPairs = 25;
  ColorPair colorPair;
  
  printf("/***********************************\n");
  Printf("*********Color Code Manual**********\n");
  Printf("************************************/\n");
  printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
  
  for(PairNum = 1; PairNum <= TotalColorPairs; PairNum++)
  {
    colorPair = GetColorFromPairNumber(PairNum);
		printf("%d\t%s\t%s\n",PairNum,colorPair.majorColor,colorPair.minorColor);
  }
  
  
}
