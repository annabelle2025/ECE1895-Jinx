#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup() {
  // put your setup code here, to run once:
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  if(!SD.begin(SD_ChipSelectPin)){
    Serial.println("SD fail");
    return;
  }

  tmrpcm.setVolume(5);
  tmrpcm.play("jinxed.wav");
}

void loop() {
  // put your main code here, to run repeatedly:
}
