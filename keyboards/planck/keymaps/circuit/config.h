#pragma once

// If Audio is enabled, here is where we will specify what audio to use.
#ifdef AUDIO_ENABLE
// My own little songs!
#define GAME_LOCK_ON_SOUND \
  SD_NOTE(_C6),            \
  SD_NOTE(_D6),

#define GAME_LOCK_OFF_SOUND \
  SD_NOTE(_D6),             \
  SD_NOTE(_C6),

#define NUMPAD_ON_SOUND \
  E__NOTE(_E5 ),        \
  E__NOTE(_A5 ),        \
  E__NOTE(_D6 ),        \
  E__NOTE(_G6 ),

#define NUMPAD_OFF_SOUND \
  E__NOTE(_G6 ),         \
  E__NOTE(_D6 ),         \
  E__NOTE(_A5 ),         \
  E__NOTE(_E5 ),

  #define STARTUP_SONG SONG(PLANCK_SOUND)

  #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                SONG(DVORAK_SOUND), \
                              }
#endif

// Not sure why nkro makefile setting is completely ignored.
#define FORCE_NKRO

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/
#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2
