#include <assert.h>
#include "RangeCapture.h"

int main()
{
  int CurrentSamples[] = {3,3,5,4,10,11,12};
  int CurrentSamplesSize = sizeof(CurrentSamples) / sizeof(CurrentSamples[0]);
  
  int *CheckRange;
  
  CheckRange = DetectRange(CurrentSamples,CurrentSamplesSize);
  printf("CheckRange = %d\n",CheckRange);
  assert(*(CheckRange+4)) == 3);
  
  printf("TestCase2:\n");
  int CurrentSamples2[] = {3,30,5,7,10,15,12,20};
  int CurrentSamplesSize2 = sizeof(CurrentSamples2) / sizeof(CurrentSamples2[0]);
  
  CheckRange = DetectRange(CurrentSamples2,CurrentSamplesSize2);
  printf("CheckRange = %d\n",CheckRange);
  assert(*(CheckRange+3)) == 0);
  
  printf("TestCase3:\n");
  int CurrentSamples3[] = {-2,-1,0,1,2,3,4,5};
  int CurrentSamplesSize3 = sizeof(CurrentSamples3) / sizeof(CurrentSamples3[0]);
  CheckRange = DetectRange(CurrentSamples3,CurrentSamplesSize3);
  printf("CheckRange = %d\n",CheckRange);
   assert(*(CheckRange+4)) == -2);
   assert(*(CheckRange+5)) == 5);
  assert(*(CheckRange+6)) == 8);
  
  printf("TestCase4:\n");
  int CurrentSamples4[] = {-2,-1,0,1,2,3,4,5};
  int CurrentSamplesSize4 = sizeof(CurrentSamples4) / sizeof(CurrentSamples4[0]);
  CheckRange = DetectRange(CurrentSamples4,CurrentSamplesSize4);
  printf("CheckRange = %d\n",CheckRange);
  assert(*(CheckRange+3)) == 0);

  //Test Case for A2D Conversion
   assert(ConvertA2DData(8,258,10) == 2);
  assert(ConvertA2DData(10,1146,12) == 3);
  assert(ConvertA2DData(10,4095,12) == -1);
  assert(ConvertA2DData(10,4094,12) == 10);
 
  
  
  return 0;
}
  

