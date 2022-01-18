#include <stdio.h>
#include "ColorAndPairingLibrary.h"

void PrintColorCode(void)
{
  int PairNum;
  int TotalColorPairs = 25;
  ColorPair colorPair;
  char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
  
  printf("/***********************************\n");
  printf("*********Color Code Manual**********\n");
  printf("************************************/\n");
  printf("Pair no.\t Major color\t Minor color\n");
  
  for(PairNum = 1; PairNum <= TotalColorPairs; PairNum++)
  {
    colorPair = GetColorFromPairNumber(PairNum);
    ColorPairToString(&colorPair, colorPairNames);
    printf("%d%s\n",PairNum,colorPairNames);
  }
  
  
}
