#include "header"

void setup() {
  //Configure IO
  if(ACTIVE_CHANNELS && 0x01) pinMode(CHANNEL_1, OUTPUT);
  if(ACTIVE_CHANNELS && 0x02) pinMode(CHANNEL_2, OUTPUT);
  if(ACTIVE_CHANNELS && 0x04) pinMode(CHANNEL_3, OUTPUT);
  if(ACTIVE_CHANNELS && 0x08) pinMode(CHANNEL_4, OUTPUT);
  if(ACTIVE_CHANNELS && 0x10) pinMode(CHANNEL_5, OUTPUT);
  if(ACTIVE_CHANNELS && 0x20) pinMode(CHANNEL_6, OUTPUT);
  if(ACTIVE_CHANNELS && 0x40) pinMode(CHANNEL_7, OUTPUT);
  if(ACTIVE_CHANNELS && 0x80) pinMode(CHANNEL_8, OUTPUT);

  analogWriteRange(ANALOG_RANGE);
  analogWriteFreq(ANALOG_FREQUENCY);
}

void loop() {
    // put your main code here, to run repeatedly:
}
