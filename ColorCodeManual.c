#include <stdio.h>
#include "ColorAndPairingLibrary.h"

void PrintColorCode(void)
{
  int PairNum;
  int TotalColorPairs = 25;
  ColorPair colorPair;
  
  printf("/***********************************\n");
  printf("*********Color Code Manual**********\n");
  printf("************************************/\n");
  printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
  
  for(PairNum = 1; PairNum <= TotalColorPairs; PairNum++)
  {
    colorPair = GetColorFromPairNumber(PairNum);
    printf("%d\t%d\t%d\n",PairNum,colorPair.majorColor,colorPair.minorColor);
  }
  
  
}
