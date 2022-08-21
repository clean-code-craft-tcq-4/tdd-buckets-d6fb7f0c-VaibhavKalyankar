#include <assert.h>
#include "RangeCapture.h"

int main()
{
  int CurrentSamples[] = {3,3,5,4,10,11,12};
  int CurrentSamplesSize = sizeof(CurrentSamples) / sizeof(CurrentSamples[0]);
  
  int *CheckRange;
  
  CheckRange = DetectRange(CurrentSamples,CurrentSamplesSize);
  
  assert(*(CheckRange+4)) == 3);
  
  return 0;
}
  

