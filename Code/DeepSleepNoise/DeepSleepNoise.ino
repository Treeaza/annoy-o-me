#include <LowPower.h>

#include "pitches.h"

/*
 * We Wish You a Merry Christmas
 * 
int pitches[] = {
  NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_FS4, NOTE_D4, NOTE_D4,
  NOTE_B4, NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4,
  NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4,
  NOTE_E4, NOTE_A4, NOTE_FS4,
  NOTE_G4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_FS4, NOTE_FS4,
  NOTE_G4, NOTE_FS4, NOTE_E4,
  NOTE_D4, NOTE_A4,
  NOTE_B4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4,
  NOTE_D5, NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_E4, NOTE_A4, NOTE_FS4,
  NOTE_G4
};

int durations[] = {
  2,
  2, 1, 1, 1, 1,
  2, 2, 2,
  2, 1, 1, 1, 1,
  2, 2, 2,
  2, 1, 1, 1, 1,
  2, 2, 1, 1,
  2, 2, 2,
  4, 2,
  2, 2, 2,
  4, 2,
  2, 2, 2,
  4, 2,
  2, 1, 1, 1, 1,
  2, 2, 1, 1,
  2, 2, 2,
  4
};
*/

/*
 * Grandma Got Run Over by a Reindeer
 * 
int pitches[] = {
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_G5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_E5,
  NOTE_F5, 0,
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_F5,
  NOTE_G5, NOTE_E5, 0, NOTE_E5,
  NOTE_D5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4,
  NOTE_C5, 0
};

int durations[] = {
  1, 1, 1, 1, 1, 1, 1, 1,
  2, 6,
  1, 1, 1, 1, 1, 1, 1, 1,
  6, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
  2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
  4, 4
};
*/
/* Auld Lang Syne
int pitches[] = {
  NOTE_C3,
  NOTE_F3, NOTE_F3, NOTE_F3, NOTE_A3,
  NOTE_G3, NOTE_F3, NOTE_G3, NOTE_A3,
  NOTE_F3, NOTE_F3, NOTE_A3, NOTE_C4,
  NOTE_D4, NOTE_F4,
  NOTE_C4, NOTE_A3, NOTE_A3, NOTE_F3,
  NOTE_G3, NOTE_F3, NOTE_G3, NOTE_A3,
  NOTE_F3, NOTE_D3, NOTE_D3, NOTE_C3,
  NOTE_F3, NOTE_D4,
  NOTE_C4, NOTE_A3, NOTE_A3, NOTE_F3,
  NOTE_G3, NOTE_F3, NOTE_G3, NOTE_D4,
  NOTE_C4, NOTE_A3, NOTE_A3, NOTE_C4,
  NOTE_D4, NOTE_F4,
  NOTE_C4, NOTE_A3, NOTE_A3, NOTE_F3,
  NOTE_G3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_G3,
  NOTE_F3, NOTE_D3, NOTE_D3, NOTE_C3,
  NOTE_F3
};

int durations[] = {
  2,
  3, 1, 2, 2,
  3, 1, 2, 2,
  3, 1, 2, 2,
  6, 2,
  3, 1, 2, 2,
  3, 1, 2, 2,
  3, 1, 2, 2,
  6, 2,
  1, 3, 2, 2,
  3, 1, 2, 2,
  1, 3, 2, 2,
  6, 2,
  3, 1, 2, 2,
  3, 1, 2, 1, 1,
  1, 3, 2, 2,
  6
};
*/

int pitches[] = {
  NOTE_C3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_A3, NOTE_A3, NOTE_G3, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_G3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_D3, NOTE_G3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_F3, NOTE_G3, NOTE_E3, NOTE_D3, NOTE_C3, NOTE_C3,
  NOTE_G3, NOTE_F3, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_A3, NOTE_A3, NOTE_G3, NOTE_C3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_C4, NOTE_E3, NOTE_F3, NOTE_E3, NOTE_D3, NOTE_G3, NOTE_D3, NOTE_F3, NOTE_D3,
  NOTE_F3, NOTE_G3, NOTE_E3, NOTE_D3, NOTE_C3, NOTE_C3,
  NOTE_G3, NOTE_F3
};

int durations[] = {
  1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1,
  3, 3, 3, 1, 2, 1, 1, 1, 1,
  4, 2, 3, 1, 4, 2,
  4, 8, 1, 1, 1, 1,
  3, 3, 6, 1, 1, 1, 1,
  4, 2, 3, 1, 2, 1, 1, 1, 1,
  4, 2, 3, 1, 4, 2,
  4, 8
};

#define DURATION_PER_SIXTEENTH 132
#define NOTE_COUNT 56
#define OUTPUT_PIN 9

void playTune(int notes[], int durations[], int pin);
void waitMinutes(unsigned int minutes);

void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);

  // wait 8 seconds
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
}

void loop() {
  playTune(pitches, durations, NOTE_COUNT, OUTPUT_PIN);

  //Wait 8 hours
  waitMinutes(8 * 60);
}

void waitMinutes(unsigned int minutes){
  for(unsigned int i = 0; i < minutes * 7.5; i++){
    LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  }
}

void playTune(int notes[], int durations[], int len, int pin) {
  for(int index = 0; index < len; index++) {
    //Serial.println(index);
    if(notes[index] != 0)
      tone(pin, notes[index]);
    delay(durations[index] * DURATION_PER_SIXTEENTH);
    noTone(pin);
  }
}


