// Workaround per bug nelle macro ufficiali EX-RAIL (folder non definito)
#define folder 0


// =====================================================================
// HARDWARE CONFIGURATION
// =====================================================================
HAL(DFPlayer, 11000, 2, 0x48) 
HAL(DFPlayer, 12000, 1, 0x4D)
HAL(PCA9685, 200, 16, 0x40)

HAL_IGNORE_DEFAULTS

// CAMBIA QUESTO VPIN CON QUELLO DEL TUO SETUP
ALIAS(MY_PLAYER, 12000)

// =====================================================================
// GROUP 10-19: PLAYBACK CONTROLS
// =====================================================================

AUTOMATION(10, "PLAY TRACK 1 VOL 30")
  // Sintassi: PLAY_TRACK(vpin, track, volume)
  PLAY_TRACK(MY_PLAYER, 1, 30)
DONE

AUTOMATION(11, "PLAY MUSIC TRACK 9")
  PLAY_TRACK(MY_PLAYER, 9, 30)
DONE

AUTOMATION(12, "FOLDER 1")
  // Sintassi: PLAY_FOLDER(vpin, folder)
  PLAY_FOLDER(MY_PLAYER, 1)
DONE

AUTOMATION(13, "FOLDER 2")
  PLAY_FOLDER(MY_PLAYER, 2)
DONE

AUTOMATION(14, "REPEAT TRACK 1")
  // Sintassi: PLAY_REPEAT(vpin, track, volume)
  PLAY_REPEAT(MY_PLAYER, 1, 30)
DONE

AUTOMATION(15, "STOP")
  // Sintassi: PLAY_STOP(vpin)
  PLAY_STOP(MY_PLAYER)
DONE

AUTOMATION(16, "PAUSE")
  // Sintassi: PLAY_PAUSE(vpin)
  PLAY_PAUSE(MY_PLAYER)
DONE

AUTOMATION(17, "RESUME")
  // Sintassi: PLAY_RESUME(vpin)
  PLAY_RESUME(MY_PLAYER)
DONE

// =====================================================================
// GROUP 20-29: VOLUME CONTROLS
// =====================================================================

AUTOMATION(20, "VOL 10")
  // Sintassi: PLAY_VOL(vpin, volume)
  PLAY_VOLUME(MY_PLAYER, 10)
DONE

AUTOMATION(21, "VOL 20")
  PLAY_VOLUME(MY_PLAYER, 20)
DONE

AUTOMATION(22, "VOL 30")
  PLAY_VOLUME(MY_PLAYER, 30)
DONE

// =====================================================================
// GROUP 30-35: EQUALIZER
// =====================================================================

AUTOMATION(30, "EQ NORMAL")
  // Sintassi: PLAY_EQ(vpin, eq_type)
  PLAY_EQ(MY_PLAYER, NORMAL)
DONE

AUTOMATION(31, "EQ POP")
  PLAY_EQ(MY_PLAYER, POP)
DONE

AUTOMATION(32, "EQ ROCK")
  PLAY_EQ(MY_PLAYER, ROCK)
DONE

AUTOMATION(33, "EQ JAZZ")
  PLAY_EQ(MY_PLAYER, JAZZ)
DONE

AUTOMATION(34, "EQ CLASSIC")
  PLAY_EQ(MY_PLAYER, CLASSIC)
DONE

AUTOMATION(35, "EQ BASS")
  PLAY_EQ(MY_PLAYER, BASS)
DONE

// =====================================================================
// GROUP 90: STRESS TEST
// =====================================================================

AUTOMATION(90, "STRESS TEST 1-8")
  PLAY_TRACK(MY_PLAYER, 1, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 2, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 3, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 4, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 5, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 6, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 7, 30)
  WAITFOR(MY_PLAYER)
  PLAY_TRACK(MY_PLAYER, 8, 30)
  WAITFOR(MY_PLAYER)
DONE

AUTOMATION(99, "STOP ALL")
  PLAY_STOP(MY_PLAYER)
DONE