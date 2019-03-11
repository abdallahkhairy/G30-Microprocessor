#ifndef SEVSEGMENTS_H_
#define SEVSEGMENTS_H_

typedef unsigned char u8;

void SevSegment1_Enable();
void SevSegment2_Enable();
void SevSegment3_Enable();
void SevSegment1_Disable();
void SevSegment2_Disable();
void SevSegment3_Disable();
void SevSegment1_DisplayNo( u8 No );
void SevSegment2_DisplayNo( u8 No );
void SevSegment3_DisplayNo( u8 No );

#endif /* SEVSEGMENTS_H_ */