#include <avr/pgmspace.h>
#include "Font.h"

namespace lcd {

  // byte definitions for HAPPY_SANS_32

  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_33[] PROGMEM={ 143,0,76,90,71,0,0,2,80,0,0,0,127,101,178,25,155,1,2,4,5,6,0,0,6,30,6,24,192,1,224,223,224,255,6,34,0,96,4,10,8,192,254,0,56,4,10,8,160,253,4,12,40,128,220,4,12,8,32,179,4,12,8,192,145,5,200,32,3,4,10,86,4,16,8,128,60,4,10,102,4,16,8,160,101,4,10,118,4,16,8,192,150,4,12,8,224,183,4,18,166,4,6,8,4,6,118,4,6,8,4,4,102,4,24,24,6,16,4,2,104,4,14,134,4,40,6,4,4,118,4,8,184,4,14,24,4,14,56,6,30,6,28,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_44[] PROGMEM={ 90,0,76,90,71,0,0,2,80,0,0,0,74,76,159,16,41,1,1,2,3,4,0,0,4,31,4,31,4,31,4,16,128,60,224,255,160,253,2,10,6,4,34,2,6,10,192,150,3,200,192,254,0,56,2,10,24,2,6,8,0,0,160,101,3,72,32,179,2,10,58,2,8,22,0,0,224,183,2,10,6,160,101,128,220,2,6,4,4,29,4,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_46[] PROGMEM={ 70,0,76,90,71,0,0,2,6,0,0,0,54,76,180,12,10,1,1,2,3,4,0,0,4,31,4,31,4,30,4,22,128,60,224,255,160,253,2,8,4,4,34,3,200,192,150,3,198,192,254,0,56,0,0,160,101,2,10,20,2,6,22,0,96,2,20,78,4,30,4,4};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_65[] PROGMEM={ 33,1,76,90,71,0,0,6,166,0,0,1,17,155,79,58,208,1,2,4,5,6,0,0,6,31,6,27,6,1,32,99,4,27,23,6,11,192,1,224,223,0,96,4,27,27,6,9,160,101,224,255,32,179,4,27,27,6,7,4,2,82,224,255,160,253,4,27,29,6,7,4,2,82,6,34,4,28,132,4,5,82,6,34,4,28,132,4,7,82,4,28,132,4,9,82,4,28,132,4,5,82,160,253,224,183,6,226,192,145,4,26,36,4,6,82,32,179,5,238,128,220,4,26,38,5,220,192,254,0,56,32,3,4,6,2,4,22,36,4,6,82,4,4,74,4,27,132,6,1,4,44,96,4,27,132,4,7,82,4,38,48,4,27,132,4,41,96,4,6,120,4,24,132,4,44,96,6,42,4,18,132,4,10,82,6,44,4,16,132,4,24,82,5,168,4,13,132,4,6,82,4,6,64,4,4,170,4,20,132,4,88,110,192,150,4,16,132,4,8,172,4,78,62,4,80,226,4,8,82,4,16,246,128,60,4,14,108,4,8,82,4,48,82,4,36,154,4,76,226,4,120,128,4,8,112,4,14,156,192,57,4,16,38,4,40,22,4,124,110,6,1,4,36,14,4,124,110,6,3,4,56,40,6,31,6,31,6,29,6,4};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_66[] PROGMEM={ 226,0,76,90,71,0,0,5,52,0,0,0,210,84,160,40,128,1,2,4,5,6,0,0,6,31,6,31,6,27,0,128,60,224,255,6,50,0,96,4,27,28,6,39,32,179,5,220,32,3,4,24,28,224,255,192,145,5,92,192,1,224,223,4,10,8,6,2,160,101,4,6,28,160,253,4,22,28,4,8,122,192,254,0,56,5,72,224,183,4,29,28,6,4,4,6,12,4,4,100,0,0,192,150,4,12,28,4,6,8,6,34,4,6,210,4,7,28,222,4,10,202,4,10,62,4,12,48,6,42,4,10,116,4,22,28,6,34,4,38,102,4,26,28,4,39,62,4,5,28,4,6,44,4,40,58,5,156,4,3,246,4,14,28,6,6,4,42,12,4,22,28,4,38,194,4,2,248,4,6,40,4,14,28,4,38,100,4,24,28,4,72,44,4,18,28,4,78,38,0,96,4,40,240,6,52,4,34,100,4,27,28,5,190,4,91,128,4,39,202,6,31,6,31,6,27,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_67[] PROGMEM={ 208,0,76,90,71,0,0,4,234,0,0,0,192,111,173,39,17,1,2,4,5,6,0,0,6,31,6,30,6,28,6,9,224,183,224,255,6,42,192,145,4,10,22,160,101,4,12,22,6,38,0,96,4,27,24,6,35,32,179,0,0,32,3,4,8,8,128,220,5,106,128,60,4,11,64,4,9,120,4,6,76,4,8,142,192,254,0,56,4,8,58,4,12,146,5,220,5,108,4,6,124,160,253,4,12,24,4,2,118,4,2,124,0,0,192,150,4,8,138,6,20,4,6,126,4,14,92,4,29,26,4,27,94,4,7,128,4,16,162,224,183,4,4,80,4,40,22,4,12,96,5,208,5,76,192,1,224,223,4,16,28,4,40,128,5,156,4,5,96,6,54,4,12,62,6,48,4,4,186,4,42,180,6,44,4,36,194,6,2,4,20,64,4,46,28,4,12,66,4,56,24,6,31,6,31,6,30,6,27,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_68[] PROGMEM={ 229,0,76,90,71,0,0,5,52,0,0,0,213,51,169,39,81,1,2,4,5,6,0,0,6,31,6,31,6,29,6,18,32,3,224,255,192,145,4,27,27,0,192,1,224,223,224,255,6,44,192,254,0,56,4,27,28,6,39,32,179,4,16,28,128,220,4,14,40,128,220,4,16,28,5,202,128,60,4,9,110,4,3,162,4,8,28,4,18,84,160,253,4,12,8,4,10,214,4,8,68,0,96,4,22,28,0,0,224,183,4,8,14,4,34,24,4,8,42,6,8,192,150,4,8,122,4,6,28,4,47,12,4,9,28,4,6,114,4,14,28,4,6,100,5,92,160,101,4,10,186,6,6,4,12,158,4,6,76,4,38,22,6,4,4,6,50,4,4,86,4,6,76,4,10,28,4,8,192,4,2,98,4,50,58,4,6,60,4,6,62,4,8,42,4,2,112,4,42,126,4,6,12,4,16,14,6,42,4,6,82,4,6,170,6,48,4,40,74,4,6,170,4,22,24,6,31,6,31,6,30};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_69[] PROGMEM={ 170,0,76,90,71,0,0,4,234,0,0,0,154,203,12,39,40,1,2,4,5,6,0,0,6,31,6,30,6,20,224,183,224,255,160,253,4,6,6,192,150,224,255,6,50,192,254,0,56,5,218,160,101,4,20,26,224,255,0,96,5,218,128,60,5,200,128,220,4,14,36,4,6,26,192,1,224,223,5,218,4,12,132,6,10,4,2,144,4,10,146,6,16,4,4,164,4,28,26,253,4,4,138,4,18,34,4,12,154,4,8,222,6,8,4,6,198,4,6,180,6,16,4,30,26,6,34,192,145,4,22,26,4,6,162,4,29,26,6,10,4,54,214,6,36,32,179,4,28,26,4,37,144,6,54,4,22,116,32,3,4,6,26,4,24,252,6,31,6,31,6,31};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_70[] PROGMEM={ 165,0,76,90,71,0,0,4,12,0,0,0,149,15,51,31,252,1,2,4,5,6,0,0,6,31,6,31,6,16,160,101,192,145,4,10,8,128,60,224,255,6,40,32,179,224,223,4,10,8,4,12,20,192,150,4,22,20,128,220,160,101,4,22,20,160,253,4,6,92,128,220,4,16,136,4,26,20,32,3,4,24,20,192,1,4,4,162,4,29,20,4,6,20,160,253,4,34,4,5,66,4,40,8,4,6,20,6,40,4,16,20,5,112,4,26,76,6,14,4,6,188,4,30,20,6,2,4,38,44,4,18,20,4,38,128,192,254,0,56,4,14,20,4,38,184,4,18,20,224,183,4,25,20,223,4,34,246,4,14,14,6,31,6,28,6,9};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_71[] PROGMEM={ 236,0,76,90,71,0,0,5,126,0,0,0,220,5,20,44,211,1,2,4,5,6,0,0,6,31,6,31,6,29,6,8,224,183,224,255,6,38,160,253,4,27,26,6,43,32,179,4,8,26,192,1,224,223,4,18,28,6,36,192,145,4,26,64,4,12,70,128,60,4,6,10,128,220,4,14,120,4,8,106,4,16,10,6,2,160,101,224,255,192,254,0,56,5,198,32,3,5,220,4,8,10,4,8,32,4,8,48,4,6,104,4,8,102,6,18,4,2,82,4,10,194,6,20,192,150,4,29,30,6,18,128,60,4,2,170,4,24,30,4,6,170,4,34,164,4,6,144,4,10,182,4,6,50,4,8,18,4,10,42,4,10,62,0,96,4,38,28,4,34,8,4,40,188,4,14,108,4,6,56,0,96,5,70,4,38,116,4,78,36,5,208,4,6,14,4,40,192,4,8,32,4,6,102,4,50,194,6,48,4,42,176,4,88,88,4,4,140,6,8,4,18,72,4,50,98,4,10,74,4,59,244,6,31,6,31,6,28};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_72[] PROGMEM={ 218,0,76,90,71,0,0,4,12,0,0,0,202,160,44,47,210,1,2,4,5,6,0,0,6,31,6,29,6,4,192,150,224,255,224,255,160,253,4,10,6,224,255,192,145,4,27,20,6,1,160,101,5,132,254,0,56,4,8,6,4,27,20,255,0,96,5,70,128,60,4,10,20,5,198,224,255,32,179,4,24,20,5,216,32,3,4,16,62,6,46,4,28,20,4,5,90,224,223,4,10,20,4,4,174,4,12,118,4,6,104,4,10,20,4,38,2,4,6,20,4,4,174,4,4,216,4,14,20,128,220,4,16,20,192,1,4,4,112,5,212,4,45,86,4,5,20,5,200,5,212,5,224,6,2,224,183,4,8,20,5,196,4,14,20,4,4,176,4,4,104,4,14,20,4,6,246,6,12,4,44,200,4,29,20,4,6,246,6,12,4,38,228,4,8,122,4,16,20,4,6,234,4,18,20,192,254,4,16,20,4,40,200,4,16,20,6,31,6,20};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_73[] PROGMEM={ 152,0,76,90,71,0,0,2,80,0,0,0,136,61,167,27,199,1,2,4,5,6,0,0,6,30,6,28,6,3,192,150,224,255,6,36,32,179,5,72,160,101,4,12,8,128,60,4,6,8,192,145,5,72,32,3,4,6,8,0,96,4,10,8,192,254,0,56,5,72,192,1,224,223,4,10,8,0,0,224,183,5,72,160,253,4,6,106,5,200,128,220,4,27,8,4,5,118,4,24,8,4,4,134,4,16,8,4,7,120,4,28,8,6,2,4,6,184,4,6,88,4,6,232,4,14,8,4,6,152,4,38,24,4,6,200,4,6,8,4,8,232,4,6,14,4,36,24,6,30,6,29,6,4};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_74[] PROGMEM={ 197,0,76,90,71,0,0,3,120,0,0,0,181,167,234,37,21,1,2,4,5,6,0,0,6,31,6,29,0,0,192,1,224,223,192,145,4,10,10,160,101,224,255,6,36,32,179,4,10,16,32,3,4,20,16,0,0,224,183,5,208,128,220,4,12,16,4,6,66,160,253,4,12,16,4,6,66,192,254,0,56,4,10,16,4,2,132,4,18,16,5,18,150,5,234,0,96,4,12,16,128,60,5,208,4,12,186,4,8,90,4,14,162,4,6,90,4,14,162,4,6,90,4,14,162,4,6,188,4,16,138,4,6,212,4,26,138,4,4,126,4,4,124,4,6,16,5,70,4,10,246,4,6,16,4,2,138,4,38,88,4,2,126,4,42,76,4,6,4,6,42,5,80,4,40,138,6,40,4,36,2,4,14,18,4,10,232,4,6,70,4,16,204,6,31,6,29,6,6};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_75[] PROGMEM={ 252,0,76,90,71,0,0,4,234,0,0,0,236,248,120,50,89,1,2,4,5,6,0,0,6,31,6,31,0,0,160,101,224,255,224,255,160,253,4,22,24,32,3,5,88,6,34,32,179,4,20,26,192,150,4,27,24,4,7,58,128,220,4,20,24,0,0,224,183,5,88,192,254,0,56,4,10,8,4,8,142,128,60,5,200,192,145,4,6,42,4,4,174,4,6,26,192,1,224,223,4,14,90,4,6,12,4,4,78,5,232,4,8,90,6,4,4,6,178,0,96,4,6,38,4,14,188,4,6,96,192,145,4,6,36,4,8,124,6,4,4,6,214,160,181,4,38,32,4,46,68,4,6,84,6,42,4,14,62,4,6,234,6,40,4,22,164,5,82,160,149,5,194,4,12,166,4,6,164,5,80,4,40,174,0,96,4,18,26,5,78,4,6,74,4,10,168,4,6,12,4,36,66,4,8,62,4,40,82,4,40,44,4,12,8,4,8,134,4,46,198,4,8,62,5,220,4,44,146,4,10,44,4,6,58,4,20,182,6,10,4,12,194,4,29,26,6,31,6,30,6,28,6,5};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_76[] PROGMEM={ 190,0,76,90,71,0,0,4,160,0,0,0,174,222,91,36,11,1,2,4,5,6,0,0,6,31,6,31,6,27,6,1,128,60,224,255,6,38,128,220,4,16,24,32,3,4,8,24,32,179,4,16,24,192,1,224,223,4,6,24,192,145,4,29,24,4,12,24,0,96,4,26,24,192,254,0,56,4,26,24,160,253,4,16,22,4,10,184,4,18,214,4,10,24,4,18,214,4,27,24,6,3,4,40,56,4,18,214,4,10,24,4,18,214,0,0,160,101,4,26,214,0,0,192,150,4,26,214,4,8,24,4,20,214,0,0,224,183,4,26,182,4,42,118,6,40,4,8,68,4,42,246,6,48,160,253,4,74,54,6,48,4,14,108,4,6,132,6,38,4,52,42,4,8,32,4,22,24,6,2,4,2,146,4,26,24,6,31,6,28,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_77[] PROGMEM={ 130,1,76,90,71,0,0,6,240,0,0,1,114,175,123,82,47,1,2,4,5,6,0,0,6,31,6,31,6,28,0,128,60,0,96,4,27,25,6,13,128,60,224,255,224,255,192,145,4,27,29,6,9,160,101,5,104,5,42,254,0,56,4,27,33,6,5,4,6,40,224,255,4,28,144,6,1,192,150,4,20,40,192,1,224,223,5,208,128,220,4,10,16,224,183,4,6,40,4,12,188,4,4,208,4,14,40,4,8,62,224,255,32,179,4,10,40,4,8,112,4,10,40,32,3,4,6,14,4,24,16,160,253,4,8,16,4,8,110,4,12,16,4,8,254,4,24,16,4,42,74,4,8,206,4,24,16,4,40,26,4,10,134,4,10,16,4,10,230,6,34,4,6,234,4,4,228,192,254,160,149,4,12,40,4,10,182,6,34,4,4,234,4,6,62,128,220,4,39,244,4,37,98,4,10,182,5,144,4,3,162,4,6,62,192,145,4,6,2,4,6,112,4,6,182,32,179,4,6,2,4,2,66,4,6,134,0,56,4,6,40,4,36,26,4,8,206,0,96,4,6,98,32,179,4,8,134,4,8,26,4,4,112,4,74,146,4,8,18,4,6,220,4,2,124,4,40,8,4,2,234,4,76,72,4,44,82,5,218,4,8,40,4,6,186,4,2,92,5,196,4,12,244,4,38,204,4,6,62,4,76,156,4,12,198,4,10,24,4,70,110,4,114,70,4,43,252,4,37,106,4,72,158,4,112,170,4,10,138,4,38,202,4,8,12,4,16,138,4,8,214,4,8,118,4,8,40,5,12,6,15,4,6,118,4,74,186,6,26,4,46,248,6,27,6,1,4,2,138,4,16,160,6,31,6,30,6,29};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_78[] PROGMEM={ 240,0,76,90,71,0,0,4,234,0,0,0,224,90,230,44,55,1,2,4,5,6,0,0,6,31,6,31,6,2,192,150,224,255,6,34,0,96,4,22,26,224,183,5,88,160,253,4,22,24,32,3,5,250,128,220,4,22,26,128,60,5,218,192,145,0,0,192,1,224,223,5,198,5,8,254,0,56,5,218,160,101,4,8,126,4,10,26,4,8,78,4,4,160,4,6,42,4,4,140,6,38,4,2,80,4,14,160,4,13,26,5,48,4,6,80,4,6,74,4,12,26,5,114,4,6,194,32,179,4,12,26,32,179,4,6,2,192,222,4,10,106,4,10,26,4,6,52,4,12,140,4,8,26,5,72,4,6,222,4,24,26,4,12,142,4,20,26,4,38,70,4,8,10,4,40,42,4,38,190,4,8,62,4,22,26,4,8,132,4,12,26,4,40,140,4,8,202,5,218,4,6,8,4,8,26,6,14,4,27,26,6,3,4,6,180,4,88,70,4,6,144,4,24,26,4,70,170,4,88,104,4,27,26,6,31,6,30,6,28,6,6};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_79[] PROGMEM={ 254,0,76,90,71,0,0,6,18,0,0,0,238,194,238,46,244,1,2,4,5,6,0,0,6,31,6,31,6,8,192,1,224,223,224,255,192,145,4,26,28,32,3,224,255,6,44,4,20,40,192,150,4,14,32,5,164,254,0,56,4,24,32,0,96,4,12,12,4,6,8,6,2,160,101,4,20,60,5,208,4,8,12,4,4,188,4,16,56,5,148,4,3,80,128,220,4,14,74,4,6,10,6,8,4,6,222,5,250,224,183,4,7,116,4,17,228,5,214,32,179,4,44,20,4,14,116,6,2,4,4,106,160,253,0,0,128,60,4,20,198,4,12,34,5,84,4,28,34,4,5,104,4,28,34,4,5,34,4,10,160,4,18,202,4,42,120,4,8,244,4,2,218,6,12,4,38,100,4,4,104,4,54,154,6,2,4,6,20,4,36,98,4,10,120,4,34,6,6,8,4,9,188,4,5,144,4,74,24,4,8,36,4,8,32,4,8,12,4,42,242,6,50,4,42,138,4,26,36,4,48,10,4,8,252,4,22,72,6,8,4,14,82,4,48,46,6,31,6,31,6,31,6,27,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_80[] PROGMEM={ 208,0,76,90,71,0,0,4,234,0,0,0,192,75,109,38,242,1,2,4,5,6,0,0,6,31,6,31,6,29,0,0,192,1,224,223,224,255,224,255,128,220,4,27,26,5,26,6,48,192,145,4,27,26,4,9,28,4,27,26,254,0,56,4,8,26,160,253,4,12,118,224,183,5,78,0,96,4,8,26,5,232,6,8,128,60,4,6,96,4,22,26,160,101,5,78,32,179,4,22,26,4,7,14,5,60,32,3,4,10,142,6,4,4,6,12,4,14,26,4,16,204,5,238,4,4,138,6,52,4,36,8,4,24,26,4,38,76,4,4,172,6,44,4,2,186,6,8,192,150,5,206,4,14,230,6,8,4,36,52,4,24,26,4,40,142,4,46,110,6,6,4,8,242,4,22,26,4,8,194,4,22,26,4,6,160,4,24,26,4,6,160,4,24,26,6,6,192,150,4,27,26,6,31,6,30,6,27,6,2};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_81[] PROGMEM={ 15,1,76,90,71,0,0,6,18,0,0,0,255,159,154,55,124,1,2,4,5,6,0,0,6,31,6,31,6,10,160,101,224,255,160,253,4,27,27,5,156,6,42,192,254,0,56,4,16,30,32,3,4,12,30,6,38,32,179,4,28,32,4,17,36,4,14,32,160,253,128,60,4,10,8,192,145,4,6,34,192,150,4,18,58,192,1,224,223,5,204,4,6,168,4,10,56,4,12,142,4,9,36,4,3,78,4,8,74,4,16,228,4,38,6,128,220,4,10,48,4,16,224,4,8,22,5,124,4,10,198,0,96,4,14,34,4,8,106,0,96,4,8,158,4,52,96,4,6,120,4,30,34,4,8,34,4,28,160,4,5,160,4,68,42,224,183,4,7,78,4,39,132,4,34,176,4,10,22,4,36,14,4,72,58,4,72,100,4,4,140,128,220,6,228,4,6,144,4,42,74,4,6,78,4,76,120,4,40,96,4,42,200,4,8,164,4,38,66,4,76,206,4,10,60,5,250,4,10,98,4,12,228,4,76,96,6,48,4,44,16,4,74,118,4,44,18,4,80,10,6,16,4,2,100,4,123,120,6,9,224,183,4,50,138,6,31,6,31,6,29,6,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_82[] PROGMEM={ 11,1,76,90,71,0,0,5,126,0,0,0,251,204,99,48,13,1,2,4,5,6,0,0,6,31,6,29,6,10,224,255,6,52,128,220,4,28,30,6,35,192,145,4,7,30,223,5,72,0,96,4,8,48,32,3,4,7,30,254,0,56,5,204,192,150,4,12,46,4,12,32,32,179,5,202,128,60,4,16,126,0,0,224,183,5,222,160,253,4,10,48,4,8,84,6,2,192,1,4,4,128,4,8,30,4,6,48,4,8,146,4,8,104,4,10,92,4,4,146,32,179,6,228,6,44,4,8,52,160,101,4,16,22,6,36,4,10,204,4,4,184,6,46,4,6,214,6,6,4,6,128,4,6,50,4,50,20,4,8,30,4,6,54,5,200,4,46,20,4,6,30,4,8,238,4,59,98,4,7,202,4,4,162,4,8,46,4,12,30,4,41,214,4,35,60,4,10,186,4,8,30,4,8,54,4,38,22,4,40,40,4,42,2,4,6,14,4,38,156,4,44,178,4,16,210,4,38,130,4,14,228,6,12,4,8,90,4,46,88,6,10,4,72,16,4,48,90,6,10,4,42,246,4,24,30,4,11,206,6,31,6,31,6,30,6,29,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_83[] PROGMEM={ 253,0,76,90,71,0,0,4,160,0,0,0,237,253,67,47,125,1,2,4,5,6,0,0,6,31,6,28,6,7,160,101,192,254,0,56,4,18,18,192,150,224,255,6,42,32,179,4,10,22,224,183,4,12,22,6,34,4,8,66,160,101,5,202,160,253,0,0,32,3,4,10,28,0,96,0,0,192,1,224,223,4,6,22,6,2,4,6,8,4,6,58,128,60,4,14,106,5,202,4,6,88,4,6,24,128,220,4,12,136,4,2,84,4,10,24,4,8,10,5,76,4,8,4,4,14,104,6,16,4,6,184,4,12,60,6,10,4,8,92,4,8,192,6,12,4,8,94,4,12,196,4,22,28,4,10,198,6,10,4,40,56,4,22,26,4,8,132,192,145,4,8,6,4,10,212,4,38,196,5,122,4,18,174,4,6,232,5,108,4,18,24,4,6,56,5,152,4,37,242,4,8,88,4,8,190,5,108,4,8,134,4,6,236,4,72,66,5,202,4,82,52,6,36,4,36,100,4,76,42,6,40,4,8,248,4,18,26,4,46,22,4,76,184,4,52,190,6,31,6,30,6,28,6,7};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_84[] PROGMEM={ 203,0,76,90,71,0,0,6,18,0,0,0,187,209,36,39,68,1,2,4,5,6,0,0,6,31,6,31,6,30,6,28,6,5,224,183,224,255,192,145,4,26,26,192,1,224,223,224,255,6,36,4,22,34,192,150,4,6,26,6,38,0,96,4,22,60,4,16,34,4,16,54,6,42,160,253,4,26,96,6,34,32,179,4,12,134,6,2,4,2,208,6,36,4,2,172,4,6,6,4,19,34,223,5,28,254,0,56,5,198,160,101,4,24,34,4,10,130,0,0,128,60,5,226,128,220,4,16,34,6,12,4,6,246,4,12,56,6,20,4,4,162,4,8,136,6,24,4,38,4,4,44,98,4,26,34,4,59,224,4,11,34,4,28,204,4,6,76,4,27,162,4,10,34,4,27,120,6,3,4,40,172,4,27,120,4,92,138,6,6,32,3,4,52,194,6,31,6,31,6,31,6,28,6,3};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_85[] PROGMEM={ 199,0,76,90,71,0,0,4,160,0,0,0,183,129,118,32,72,1,2,4,5,6,0,0,6,31,6,31,32,3,224,255,6,36,192,254,0,56,4,29,24,0,0,128,60,4,6,24,160,253,4,16,22,4,27,24,6,3,160,101,4,6,24,128,220,4,27,24,255,32,179,4,18,24,192,150,4,14,24,192,1,224,223,4,8,74,4,8,24,192,145,4,14,24,5,106,224,183,4,28,24,6,35,0,96,4,14,24,192,145,4,8,4,4,27,24,5,68,4,39,54,4,8,12,0,96,4,50,86,4,6,24,5,74,4,50,54,4,27,24,6,1,4,6,76,5,74,4,8,24,4,8,88,4,38,74,4,34,22,4,8,120,4,38,120,4,9,138,4,35,8,4,40,56,6,44,4,8,104,4,40,26,6,42,4,38,6,4,10,106,4,16,52,6,31,6,31,6,27,6,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_86[] PROGMEM={ 7,1,76,90,71,0,0,4,160,0,0,0,247,53,135,50,231,1,2,4,5,6,0,0,6,31,6,31,6,18,192,1,224,223,32,179,4,24,24,128,60,224,255,6,36,4,20,24,160,101,4,27,24,0,224,183,5,214,160,253,4,18,22,4,2,118,5,216,4,4,124,32,3,224,255,192,254,0,56,4,6,24,4,9,118,96,4,6,2,4,6,36,6,2,4,6,118,4,2,86,4,8,130,4,8,100,192,150,4,10,42,4,6,132,4,2,70,4,12,118,192,145,4,12,102,4,8,134,5,150,4,7,138,4,6,72,4,4,90,4,6,106,128,220,4,6,104,4,6,42,4,4,90,4,12,118,6,4,4,6,124,32,179,4,8,118,4,4,134,6,4,4,6,124,160,253,4,16,118,6,2,4,8,46,160,181,4,14,118,6,4,4,6,110,4,12,196,6,8,4,8,222,6,36,4,4,244,6,8,4,8,90,4,16,118,6,4,4,10,90,4,50,208,4,40,130,4,16,150,6,2,4,40,30,4,16,150,6,2,4,10,122,4,42,20,6,8,4,38,62,4,18,150,6,2,128,148,4,18,14,6,31,6,27,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_87[] PROGMEM={ 124,1,76,90,71,0,0,7,132,0,0,1,108,243,12,73,169,1,2,4,5,6,0,0,6,31,6,31,6,30,6,28,6,3,128,60,224,255,224,255,0,96,4,8,10,192,1,32,147,4,8,6,32,3,5,88,6,36,32,179,5,22,150,4,6,6,192,145,4,10,62,160,253,4,20,44,0,96,4,10,6,4,10,44,224,183,4,10,112,4,4,128,6,34,4,4,66,5,86,4,8,110,4,10,80,4,8,8,160,101,4,12,28,4,8,8,128,220,4,6,28,4,4,168,4,8,150,4,8,184,4,4,116,4,14,112,5,26,1,224,223,5,72,192,254,0,56,4,12,44,4,14,26,4,8,28,4,8,62,4,6,218,4,6,184,4,8,130,4,8,202,4,4,114,4,8,8,5,220,4,9,78,4,39,30,4,8,202,5,108,4,43,66,4,3,114,4,8,44,4,50,66,4,2,64,4,4,180,192,222,4,8,10,4,6,62,4,52,170,32,179,4,6,76,0,96,4,4,154,4,2,150,4,6,76,4,8,198,4,10,116,128,220,4,4,160,4,2,74,4,8,2,4,6,44,4,42,236,4,42,68,4,4,86,4,10,138,0,96,4,6,232,4,74,136,4,10,254,5,170,4,11,242,32,179,4,5,218,4,39,166,4,18,44,4,70,44,4,70,6,6,228,4,10,198,6,2,4,40,50,4,10,124,4,20,66,6,6,4,42,140,4,40,74,4,12,66,4,12,250,4,42,50,4,10,20,4,10,66,4,14,250,5,174,4,37,50,4,10,226,4,11,66,4,13,250,6,22,4,10,44,4,42,252,6,27,4,71,166,4,14,248,6,31,6,31,6,31,6,30,6,8};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_88[] PROGMEM={ 3,1,76,90,71,0,0,5,52,0,0,0,243,196,204,50,91,1,2,4,5,6,0,0,6,31,6,31,6,27,0,192,150,224,255,6,38,160,253,4,22,30,224,183,4,8,30,192,145,4,20,28,192,1,224,223,4,14,66,32,3,5,170,254,0,56,4,6,30,128,60,4,14,66,4,8,84,4,8,120,160,101,4,10,12,4,8,6,128,220,4,10,106,4,9,50,181,4,20,26,4,6,122,6,42,4,14,26,6,2,4,8,90,4,12,128,6,12,4,8,104,4,10,202,6,12,4,8,216,4,60,32,4,23,98,4,42,142,224,255,32,179,4,16,26,4,42,64,4,20,138,4,8,242,128,148,4,7,2,4,13,244,4,6,202,4,2,128,4,8,108,4,10,178,4,40,18,0,96,4,10,76,4,8,178,4,8,130,4,6,86,4,40,32,4,4,178,4,10,234,5,126,4,12,46,4,10,178,4,2,102,4,8,156,4,10,48,4,50,174,6,4,4,42,36,4,6,86,6,14,4,42,38,4,55,108,4,9,102,224,255,4,20,28,4,6,102,4,2,96,128,60,4,22,28,6,31,6,29,6,14};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_89[] PROGMEM={ 221,0,76,90,71,0,0,4,160,0,0,0,205,248,221,41,4,1,2,4,5,6,0,0,6,31,6,30,6,20,224,255,6,36,160,253,4,21,24,183,4,6,26,192,145,4,18,24,192,1,224,223,5,216,128,220,4,6,12,160,101,4,10,44,128,60,4,6,6,0,96,4,12,76,4,6,42,192,150,5,200,32,179,5,70,32,3,4,14,40,4,6,10,4,4,156,4,6,86,4,8,104,4,8,58,4,2,104,4,4,86,192,254,0,56,4,8,24,4,6,58,128,220,4,6,2,4,4,100,6,8,4,6,140,160,181,4,16,54,6,2,4,8,190,4,18,54,4,42,0,4,54,68,4,6,156,4,54,66,4,6,208,4,54,130,4,6,24,4,16,148,6,4,4,7,252,4,21,24,4,40,194,4,38,80,6,10,4,10,184,4,18,24,4,40,142,4,20,184,4,27,24,6,1,4,42,56,4,48,54,4,2,214,4,22,240,6,31,6,31,6,27,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_90[] PROGMEM={ 175,0,76,90,71,0,0,4,160,0,0,0,159,250,242,34,43,1,2,4,5,6,0,0,6,31,6,31,192,1,224,223,224,255,160,253,4,27,24,255,6,52,5,110,32,3,4,22,22,5,216,160,101,4,24,24,128,220,5,56,99,4,12,104,4,10,72,192,145,4,24,134,192,254,0,56,4,14,22,5,24,150,4,8,114,6,16,4,6,132,4,2,112,6,16,128,60,4,26,22,4,6,144,4,20,22,4,6,144,4,54,64,4,4,144,4,20,172,4,8,144,4,16,232,6,2,4,28,144,6,35,0,96,4,16,22,4,40,40,4,21,176,4,37,40,4,22,116,4,58,182,4,2,198,4,26,24,4,59,246,4,5,24,6,20,5,238,4,54,38,6,31,6,30,6,28,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_97[] PROGMEM={ 184,0,76,90,71,0,0,3,194,0,0,0,168,141,119,41,103,1,2,4,5,6,0,0,6,31,6,31,6,30,6,16,32,3,224,255,6,34,160,253,4,8,12,192,1,224,223,5,206,6,36,192,254,0,56,5,80,128,60,4,10,14,6,36,32,179,4,5,44,150,5,200,192,145,4,6,54,128,220,4,8,70,4,6,4,0,0,224,183,4,10,100,192,57,4,8,110,4,12,18,4,8,12,4,14,152,4,8,126,192,145,4,2,110,5,210,4,6,192,5,78,4,10,70,4,16,216,4,6,18,160,101,4,10,212,4,6,238,5,82,4,4,196,4,8,42,5,252,4,8,44,6,46,5,172,4,45,44,4,12,110,4,9,192,221,5,224,4,14,226,5,122,160,221,6,161,150,4,16,18,6,31,6,29,6,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_98[] PROGMEM={ 192,0,76,90,71,0,0,4,12,0,0,0,176,38,181,35,22,1,2,4,5,6,0,0,6,31,6,30,6,24,32,3,224,255,32,179,4,16,16,224,223,224,255,6,34,4,19,20,183,4,24,20,160,101,4,24,20,128,60,4,24,20,4,2,128,6,34,192,145,4,28,20,6,9,192,1,4,4,162,4,18,20,4,6,162,4,27,20,5,20,192,150,4,4,88,4,8,146,4,8,10,6,42,4,4,64,4,20,20,160,253,5,84,4,4,246,128,220,4,5,62,4,5,148,224,255,0,96,4,6,20,4,8,132,4,10,206,4,14,20,4,6,50,4,2,136,4,22,48,4,18,20,4,38,146,4,2,104,4,4,160,5,212,4,8,130,4,4,148,4,18,188,4,6,174,4,6,60,4,14,16,4,10,20,4,10,12,6,31,6,30,6,27,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_99[] PROGMEM={ 156,0,76,90,71,0,0,3,194,0,0,0,140,185,152,31,72,1,2,4,5,6,0,0,6,31,6,31,6,30,6,14,192,150,224,255,6,34,160,253,4,10,14,32,3,5,206,6,40,192,145,4,20,16,4,6,50,4,6,64,128,220,0,0,128,60,4,8,44,4,6,42,32,179,4,8,106,5,234,5,222,4,10,112,192,1,32,147,6,226,160,101,4,6,66,6,14,4,4,94,4,8,68,6,8,4,24,44,4,6,134,0,96,4,6,10,224,183,4,4,114,192,1,224,223,4,10,150,5,252,5,198,4,6,200,4,16,226,4,6,56,6,42,4,36,22,6,2,4,44,26,4,8,108,6,31,6,31};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_100[] PROGMEM={ 211,0,76,90,71,0,0,4,86,0,0,0,195,200,192,44,157,1,2,4,5,6,0,0,6,31,6,30,192,1,192,222,0,56,4,24,22,224,223,224,255,224,255,4,20,22,32,3,5,84,4,29,22,6,4,128,60,4,29,22,4,14,22,192,254,4,20,22,160,101,5,86,128,220,4,26,22,32,179,4,26,22,192,145,4,20,22,192,150,5,86,0,96,4,10,6,6,40,192,222,4,3,140,56,4,40,46,224,255,160,253,4,6,76,4,5,170,5,86,4,5,48,4,8,94,4,4,200,5,100,4,6,50,5,68,6,6,5,204,4,2,200,4,38,74,4,10,212,5,204,4,27,22,4,3,230,4,8,140,4,6,184,4,10,22,4,10,198,4,38,20,4,4,142,5,198,4,6,84,6,46,4,6,188,4,8,86,4,18,22,4,12,58,32,179,4,37,184,4,54,94,4,3,68,4,22,22,6,31,6,30,6,18};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_101[] PROGMEM={ 193,0,76,90,71,0,0,4,12,0,0,0,177,182,124,38,140,1,2,4,5,6,0,0,6,31,6,31,6,31,6,8,192,1,224,223,224,255,6,38,192,145,4,16,18,5,76,224,183,5,66,160,253,4,7,20,150,5,72,0,96,5,198,32,3,5,246,5,72,5,196,4,6,34,4,10,86,0,96,160,101,6,226,128,220,4,10,44,4,6,36,4,4,74,5,84,4,6,18,32,179,4,12,102,128,220,4,12,84,5,146,1,5,212,6,36,4,4,82,6,4,4,2,170,128,60,4,6,18,4,8,68,4,4,124,224,255,4,6,146,4,11,70,4,5,68,4,8,2,4,8,48,4,4,250,5,148,4,7,204,4,36,38,4,6,168,4,4,66,4,8,208,6,42,4,38,80,4,44,102,4,12,90,4,14,54,4,42,132,6,31,6,30,6,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_102[] PROGMEM={ 192,0,76,90,71,0,0,2,154,0,0,0,176,169,124,40,109,1,2,4,5,6,0,0,6,30,6,29,6,2,192,1,224,223,224,255,6,36,32,179,5,74,160,101,4,6,8,6,36,0,96,4,14,10,128,220,4,6,10,160,181,6,162,192,254,0,56,128,60,5,210,5,122,224,183,4,2,66,4,4,82,5,202,128,60,0,96,6,226,192,150,5,44,253,4,10,120,5,240,5,214,4,10,138,4,4,132,6,6,5,112,4,8,118,4,12,174,4,3,120,4,7,174,4,8,48,4,6,28,4,10,104,128,148,4,16,104,32,3,4,12,48,6,2,224,183,4,14,160,4,4,122,4,10,48,4,4,106,4,10,48,4,4,84,4,10,48,4,4,84,4,10,48,4,6,142,4,27,160,4,3,120,5,176,4,11,10,4,10,118,6,30,6,26};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_103[] PROGMEM={ 247,0,76,90,71,0,0,4,12,0,0,0,231,59,163,51,18,1,2,4,5,6,0,0,6,31,6,31,6,31,6,20,32,3,224,255,128,220,4,14,14,160,101,224,255,6,36,4,12,20,192,150,4,6,16,6,34,192,254,0,56,4,5,16,1,224,223,5,8,145,5,198,224,183,5,86,160,253,4,8,44,32,179,4,6,58,128,60,5,244,0,96,4,4,116,4,8,60,4,8,20,4,2,64,4,4,122,5,94,4,12,114,5,74,5,212,4,6,76,4,6,46,4,4,104,4,2,76,6,48,4,6,64,4,12,184,4,6,100,6,6,4,8,238,4,8,182,6,10,224,183,4,10,38,6,10,4,2,248,128,148,4,16,104,6,2,4,16,138,4,8,84,4,8,136,4,34,0,4,4,120,4,12,192,4,42,120,4,2,226,6,230,4,14,180,4,2,68,4,10,48,4,12,20,160,101,6,228,4,36,146,4,42,108,5,76,6,228,4,8,160,4,36,82,4,2,204,5,34,6,5,4,36,218,6,40,4,12,60,5,154,4,3,196,4,50,48,6,14};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_104[] PROGMEM={ 202,0,76,90,71,0,0,4,12,0,0,0,186,204,224,42,252,1,2,4,5,6,0,0,6,31,6,30,6,29,0,0,192,150,224,255,6,34,0,96,4,16,20,160,101,4,24,20,128,60,4,24,20,32,3,4,24,20,192,1,224,223,4,29,20,6,4,224,183,4,10,20,32,3,128,220,4,18,20,5,194,224,255,192,254,0,56,5,212,4,4,218,192,97,4,4,84,6,36,32,179,4,11,20,222,4,8,18,224,255,160,253,5,212,4,6,246,6,42,4,6,78,4,6,20,5,228,4,12,232,4,44,46,4,6,204,192,145,4,8,20,4,6,90,4,6,20,4,4,134,4,4,132,4,6,20,4,6,194,4,4,222,4,20,20,5,200,4,14,20,5,200,4,4,162,4,20,20,4,4,134,4,10,60,4,10,20,4,2,134,4,14,20,128,100,4,38,70,6,31,6,30,6,22};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_105[] PROGMEM={ 123,0,76,90,71,0,0,2,6,0,0,0,107,49,250,26,52,1,2,4,5,6,0,0,6,31,192,150,224,255,224,255,160,253,5,132,1,224,223,4,8,6,4,6,20,0,96,4,17,46,57,4,10,6,160,101,5,96,4,6,48,4,6,6,32,179,4,8,60,4,6,62,5,198,192,254,0,56,4,8,6,128,220,5,254,224,183,4,8,46,4,6,6,192,145,5,160,4,5,144,4,5,60,5,134,4,7,60,5,134,4,6,170,32,3,4,10,74,4,26,6,6,31,6,10};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_106[] PROGMEM={ 196,0,76,90,71,0,0,2,80,0,0,0,180,109,159,46,222,1,2,4,5,6,0,0,6,31,6,27,0,192,150,224,255,224,255,0,96,4,12,8,128,220,4,7,8,1,224,223,224,255,192,145,4,15,48,1,0,56,4,9,6,5,46,5,220,32,3,5,120,6,34,32,179,5,212,224,183,5,200,4,6,76,160,101,5,200,160,253,4,6,66,4,2,90,5,56,254,4,6,74,4,4,124,4,8,142,128,60,5,200,4,8,126,4,4,76,4,6,90,4,6,76,4,8,174,4,4,126,4,6,90,4,6,42,4,8,90,4,6,42,4,8,240,4,4,92,4,8,74,5,250,4,2,74,224,183,5,222,5,122,160,253,4,2,148,4,4,80,5,200,4,8,228,4,4,90,4,6,246,4,6,220,4,6,180,4,8,252,4,40,26,4,10,152,6,28,6,3};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_107[] PROGMEM={ 219,0,76,90,71,0,0,3,120,0,0,0,203,3,157,53,20,1,2,4,5,6,0,0,6,31,6,28,6,1,192,150,224,255,6,34,32,179,4,28,16,6,1,160,101,5,208,192,145,4,12,16,128,60,4,28,16,6,9,32,3,4,27,16,255,0,96,4,6,10,160,181,6,162,192,1,224,223,4,10,16,4,2,152,5,116,4,12,16,4,6,150,128,220,5,208,192,254,0,56,4,8,124,5,234,224,183,5,208,4,7,122,5,156,4,6,16,192,57,4,4,72,128,220,4,6,120,5,208,5,206,4,10,166,5,80,4,14,164,4,8,16,160,253,4,10,12,4,10,40,4,8,82,4,8,16,160,221,4,12,214,4,6,208,128,220,4,6,158,4,38,128,4,6,16,4,41,82,4,3,184,4,8,16,4,8,254,5,110,5,208,4,7,54,4,37,206,192,254,4,4,80,4,40,214,224,183,4,4,64,32,3,4,46,234,6,31,6,28,6,9};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_108[] PROGMEM={ 116,0,76,90,71,0,0,1,114,0,0,0,100,125,203,26,246,1,2,4,5,6,0,0,6,30,6,2,192,150,6,162,224,183,224,255,192,254,0,0,160,101,224,255,224,255,160,253,4,10,2,192,150,5,66,128,220,4,6,2,32,179,4,10,2,5,114,5,52,145,4,16,2,0,96,192,1,224,223,4,10,2,192,254,0,56,4,8,2,32,3,4,6,90,4,18,2,128,60,4,12,2,4,2,120,4,8,2,4,4,150,4,22,2,6,30,6,6};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_109[] PROGMEM={ 38,1,76,90,71,0,0,5,200,0,0,1,22,126,175,58,144,1,2,4,5,6,0,0,6,31,6,31,6,31,6,30,6,24,192,1,32,147,4,27,25,6,1,160,101,224,255,224,255,160,253,0,0,224,183,5,66,224,255,192,145,4,18,32,224,223,5,214,6,42,0,96,5,82,192,150,4,6,8,128,220,4,6,72,6,44,5,80,4,6,86,4,6,92,192,1,4,8,74,4,2,64,5,88,192,254,192,182,4,12,50,4,2,144,4,6,74,5,126,6,2,4,8,66,192,254,0,56,5,198,5,96,32,3,4,12,32,4,6,48,32,179,5,70,4,4,104,5,96,4,6,170,4,14,32,4,4,198,4,4,88,5,224,128,60,4,6,84,4,8,32,4,2,108,4,14,32,4,4,84,4,6,18,4,38,8,4,37,22,4,9,112,4,6,180,5,210,4,6,192,4,4,152,4,4,100,4,6,140,5,252,5,210,6,6,160,149,4,2,88,4,18,180,4,6,6,6,10,4,4,86,4,6,18,4,4,86,4,8,180,6,6,4,38,44,4,6,98,5,224,4,40,4,6,6,4,44,68,4,16,8,6,6,4,12,204,4,40,4,4,6,248,6,4,4,40,244,4,84,100,6,12,4,2,100,4,28,32,6,31,6,30,6,28,6,10};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_110[] PROGMEM={ 192,0,76,90,71,0,0,3,194,0,0,0,176,153,161,44,57,1,1,2,4,5,0,0,5,31,5,31,5,30,5,6,224,223,224,255,128,220,4,196,128,60,224,255,224,255,192,145,4,198,224,183,4,70,160,253,160,101,5,226,5,38,0,96,0,0,192,150,2,10,10,5,38,192,254,0,56,2,10,36,2,10,34,192,145,2,4,84,2,6,16,0,0,32,3,4,198,32,179,2,8,2,2,4,112,2,27,18,4,136,128,220,2,24,18,2,6,96,2,6,18,2,6,8,2,8,18,2,12,230,2,2,218,2,14,18,2,6,190,2,8,244,2,14,18,192,254,2,6,210,160,253,2,14,18,2,36,48,2,8,18,2,7,252,254,4,200,5,8,2,40,64,2,28,18,5,5,2,4,86,2,6,136,5,10,128,148,2,16,12,5,31,5,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_111[] PROGMEM={ 171,0,76,90,71,0,0,4,86,0,0,0,155,105,32,32,147,1,2,4,5,6,0,0,6,31,6,31,6,31,6,8,160,101,224,255,6,40,192,145,4,10,20,224,183,4,10,20,6,34,160,253,4,6,20,192,150,4,14,20,4,8,24,32,3,4,8,10,32,179,4,10,40,5,70,4,8,106,0,96,4,12,128,192,254,0,56,4,6,80,4,12,130,4,4,74,192,145,5,244,5,96,4,10,22,192,1,224,223,4,2,84,128,60,4,12,156,4,10,52,32,179,5,222,4,14,52,4,5,74,145,4,10,2,6,6,4,4,72,4,6,160,4,36,6,4,6,24,4,6,190,128,220,4,6,38,4,58,38,4,10,70,4,18,216,6,31,6,31,6,29,6,18};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_112[] PROGMEM={ 226,0,76,90,71,0,0,4,12,0,0,0,210,177,113,48,226,1,2,4,5,6,0,0,6,31,6,31,6,30,6,28,0,192,150,224,255,224,255,128,220,32,3,6,226,6,36,32,179,5,82,128,60,4,8,10,6,42,192,145,0,0,4,10,38,224,255,0,96,4,6,40,192,254,0,56,0,0,224,183,5,208,5,198,4,8,96,5,114,4,4,104,5,196,6,6,5,114,128,220,0,0,160,101,5,82,160,253,4,10,152,4,6,20,4,4,134,4,4,146,6,6,5,104,5,84,4,4,134,4,10,74,4,4,124,4,20,20,4,4,94,4,8,190,4,8,76,5,200,4,4,174,4,6,218,4,8,212,6,34,4,2,74,4,14,246,4,12,228,4,18,20,5,252,4,16,20,4,42,24,4,4,90,4,10,10,6,8,4,26,20,4,4,198,4,8,92,6,10,4,50,100,6,6,4,39,156,4,15,20,192,1,224,223,5,212,4,44,102,5,212,4,18,124,6,30,6,16};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_113[] PROGMEM={ 221,0,76,90,71,0,0,4,160,0,0,0,205,253,6,39,111,1,2,4,5,6,0,0,6,31,6,31,6,31,6,29,6,2,160,101,224,255,0,96,4,14,14,32,3,224,255,6,36,160,181,6,228,192,145,4,14,18,6,44,5,216,192,150,4,10,8,4,10,36,4,2,92,4,6,22,128,220,4,8,98,5,204,192,254,0,56,4,6,38,5,68,4,18,24,4,2,162,4,14,54,0,0,224,183,5,76,160,253,4,20,86,4,18,24,5,68,4,14,24,5,108,4,6,88,4,42,8,192,1,224,223,5,74,32,179,4,16,198,0,0,128,60,4,6,8,5,88,4,10,58,6,46,4,38,54,4,4,102,4,24,24,6,2,4,6,96,4,2,160,4,6,4,4,48,154,6,4,4,4,122,4,44,42,4,29,24,4,46,10,6,10,4,4,202,4,44,74,4,28,24,6,7,4,36,108,4,36,22,4,29,24,6,2,128,148,4,22,18,6,29,0,0};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_114[] PROGMEM={ 137,0,76,90,71,0,0,2,154,0,0,0,121,100,179,31,66,1,1,2,4,5,0,0,5,31,5,30,5,28,5,1,32,3,224,255,5,36,32,179,5,162,160,181,2,6,8,224,255,192,145,224,223,4,194,128,220,0,0,224,183,192,254,0,56,224,183,4,146,4,2,4,118,128,148,0,0,192,150,4,176,253,2,8,76,160,101,2,14,10,128,60,2,20,10,2,6,64,5,2,2,6,130,0,96,2,27,10,2,5,146,2,24,10,2,4,82,2,2,200,2,14,10,2,2,190,5,4,160,101,2,10,132,5,31,5,28,5,1};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_115[] PROGMEM={ 190,0,76,90,71,0,0,3,46,0,0,0,174,63,19,42,55,1,2,4,5,6,0,0,6,31,6,31,6,10,128,60,224,255,224,255,32,179,4,10,12,160,101,5,76,6,36,128,220,4,6,14,224,183,4,8,14,224,255,160,253,5,76,192,1,224,223,224,255,192,254,0,56,5,236,4,4,64,4,8,14,5,110,4,8,58,192,150,4,6,74,32,3,0,96,4,6,14,32,3,4,14,98,6,4,4,4,146,4,6,98,6,8,4,6,150,4,6,40,32,3,5,194,4,6,16,192,145,5,70,4,2,166,4,4,92,4,4,110,5,126,4,4,186,4,6,48,5,198,0,96,4,6,208,5,240,5,254,0,96,4,4,188,4,6,40,5,92,4,4,200,4,46,0,4,40,50,4,40,46,4,16,194,4,44,88,6,31,6,28,6,7};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_116[] PROGMEM={ 217,0,76,90,71,0,0,2,228,0,0,0,201,36,104,54,210,1,2,4,5,6,0,0,6,31,6,24,192,57,4,7,2,1,192,222,128,100,224,255,192,254,0,56,4,8,12,224,223,224,255,224,255,160,253,4,8,42,32,3,5,74,224,255,128,220,4,8,12,128,60,5,204,192,145,4,16,12,0,96,4,8,12,160,101,5,158,254,0,56,160,101,4,6,76,5,204,6,36,32,179,5,204,192,150,4,8,12,0,96,4,4,124,4,8,8,5,90,224,183,4,14,10,5,204,192,222,4,12,168,4,2,74,4,4,130,4,10,168,4,6,110,4,6,104,4,8,56,4,12,168,4,4,248,4,42,10,4,6,248,4,42,10,4,6,90,4,12,70,4,5,228,145,5,126,4,6,56,5,204,4,2,90,192,150,4,6,136,4,4,228,32,179,5,212,4,4,80,4,42,12,4,6,138,4,38,112,4,50,134,4,42,112,6,30,6,28,6,9};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_117[] PROGMEM={ 205,0,76,90,71,0,0,4,12,0,0,0,189,8,79,43,12,1,2,4,5,6,0,0,6,31,6,31,6,30,6,28,6,9,224,183,224,255,6,34,160,253,4,16,20,160,101,4,24,20,32,3,5,212,192,254,0,56,4,6,12,192,1,192,222,5,198,4,6,78,0,96,5,134,4,11,34,128,60,5,200,32,179,4,16,20,4,6,78,128,220,4,16,20,4,6,78,5,200,5,212,4,6,90,4,8,164,192,145,4,14,118,4,12,78,192,150,4,8,32,4,4,172,224,223,4,6,78,4,12,146,4,8,106,5,102,4,6,32,4,40,4,4,42,50,4,6,78,4,4,106,4,6,104,5,138,4,7,232,5,242,4,6,46,5,212,4,12,8,5,222,5,202,5,84,4,6,50,6,38,0,96,160,149,4,41,102,4,5,108,4,8,112,6,12,4,34,10,4,6,222,6,31,6,28,6,9};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_118[] PROGMEM={ 202,0,76,90,71,0,0,3,194,0,0,0,186,211,219,46,187,1,2,4,5,6,0,0,6,31,6,31,6,29,6,10,32,3,192,145,4,18,14,224,255,224,255,32,179,4,14,16,224,223,5,80,224,255,128,220,4,14,18,160,101,4,14,18,128,60,160,253,6,226,192,1,5,238,5,198,5,138,150,5,72,0,96,4,6,2,192,254,0,56,5,80,4,4,110,5,148,5,54,4,5,2,5,30,4,8,86,4,2,138,4,6,72,5,210,224,183,4,10,110,5,198,4,2,202,5,248,4,6,82,4,6,58,5,184,4,4,108,4,7,238,5,226,128,220,4,4,118,4,8,158,4,6,136,128,220,5,244,4,42,32,4,6,36,4,2,104,4,10,42,4,8,150,4,50,56,4,4,150,4,8,180,4,16,18,4,12,68,4,10,18,4,48,106,4,6,22,4,48,158,6,31,6,29};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_119[] PROGMEM={ 7,1,76,90,71,0,0,5,52,0,0,0,247,232,218,65,108,1,2,4,5,6,0,0,6,31,6,31,6,31,6,31,6,4,192,1,128,180,4,27,25,6,1,128,60,192,254,0,56,4,27,27,0,160,101,224,255,192,145,5,196,224,183,224,255,6,34,5,196,32,179,4,6,28,5,80,128,220,5,66,32,3,5,218,192,254,6,230,4,4,88,5,208,5,198,4,2,74,6,34,128,220,6,228,224,255,4,4,66,128,60,5,198,4,2,102,192,150,5,196,0,96,4,6,38,160,253,5,92,4,6,16,128,220,192,1,224,223,4,6,16,4,6,4,5,244,4,6,158,192,254,128,100,4,10,88,4,8,112,4,4,134,32,147,5,110,192,222,4,6,98,5,92,4,8,66,160,181,4,4,168,4,6,70,4,8,196,4,8,126,4,4,70,4,10,8,4,4,254,4,10,198,4,6,120,4,6,118,4,6,134,4,12,102,4,4,120,4,8,44,4,38,106,4,10,102,4,4,250,4,38,90,4,6,170,6,4,4,8,212,4,10,80,4,44,214,4,6,28,4,10,84,6,20,192,1,4,91,14,6,31,6,30,6,7};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_120[] PROGMEM={ 232,0,76,90,71,0,0,4,86,0,0,0,216,119,39,48,184,1,2,4,5,6,0,0,6,31,6,31,6,30,6,29,0,0,192,150,224,255,6,34,32,179,4,16,20,32,3,5,212,160,253,4,8,4,224,255,192,145,4,10,50,192,254,0,56,5,70,128,60,4,8,36,4,8,38,4,6,36,4,8,96,0,96,4,6,4,128,220,4,10,100,224,183,5,204,5,242,4,6,78,6,6,4,6,14,192,182,4,12,78,6,6,4,6,86,4,6,120,6,12,192,1,224,223,4,8,118,6,16,160,101,4,16,136,6,8,4,4,146,4,18,80,4,8,238,4,50,56,4,8,110,4,18,114,4,5,252,180,5,220,4,12,116,4,6,78,0,96,4,6,208,4,41,64,4,5,78,5,106,4,6,32,4,40,38,4,4,194,5,232,4,8,120,4,4,148,4,39,140,4,5,38,4,2,84,4,8,174,4,4,222,4,8,10,160,101,4,44,94,4,4,82,4,48,114,6,8,192,1,4,44,172,6,31};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_121[] PROGMEM={ 220,0,76,90,71,0,0,4,12,0,0,0,204,69,96,42,149,1,2,4,5,6,0,0,6,31,6,31,6,30,6,29,0,0,192,1,160,221,4,22,20,128,60,224,255,6,36,0,96,4,14,20,160,101,5,210,160,253,0,0,4,14,30,192,150,5,200,32,179,4,8,4,128,220,5,146,1,224,223,4,8,36,4,6,6,192,254,0,56,0,0,32,3,4,8,74,6,2,4,6,8,5,126,4,6,130,5,68,4,10,120,5,100,4,6,90,4,10,156,224,183,5,74,192,145,6,228,4,6,74,6,4,4,4,68,160,221,4,4,116,4,8,74,4,10,50,4,20,238,4,40,8,4,12,74,4,12,50,4,14,74,6,2,4,38,38,4,48,64,4,6,224,4,18,74,4,6,106,4,18,74,4,6,240,4,18,74,4,40,20,6,8,4,8,206,4,16,74,4,10,236,4,14,74,4,6,178,4,38,158,6,10,4,4,178,4,18,122,6,29,6,8};
  const uint8_t __attribute__((progmem)) FDEF_HAPPY_SANS_32_122[] PROGMEM={ 140,0,76,90,71,0,0,3,46,0,0,0,124,45,181,31,225,1,2,3,4,5,0,0,5,31,5,31,5,30,5,18,192,57,5,229,150,224,255,5,40,128,220,192,1,224,223,3,10,10,3,22,14,160,253,0,0,128,60,224,255,192,254,0,56,4,62,4,152,4,196,5,8,3,4,84,0,96,3,10,12,4,108,4,34,145,3,11,32,4,182,128,220,3,10,12,3,26,54,32,179,3,11,32,3,9,116,160,101,3,4,150,0,0,224,183,3,14,190,160,253,3,6,22,3,12,212,3,2,194,3,12,68,3,16,132,5,31,5,27,5,3};

  // character definitions for HAPPY_SANS_32

  extern const struct FontChar __attribute__((progmem)) FDEF_HAPPY_SANS_CHAR[] PROGMEM={
    { 32,7,(const uint8_t *)0 },
    { 33,8,FDEF_HAPPY_SANS_32_33 },
    { 44,8,FDEF_HAPPY_SANS_32_44 },
    { 46,7,FDEF_HAPPY_SANS_32_46 },
    { 65,23,FDEF_HAPPY_SANS_32_65 },
    { 66,18,FDEF_HAPPY_SANS_32_66 },
    { 67,17,FDEF_HAPPY_SANS_32_67 },
    { 68,18,FDEF_HAPPY_SANS_32_68 },
    { 69,17,FDEF_HAPPY_SANS_32_69 },
    { 70,14,FDEF_HAPPY_SANS_32_70 },
    { 71,19,FDEF_HAPPY_SANS_32_71 },
    { 72,14,FDEF_HAPPY_SANS_32_72 },
    { 73,8,FDEF_HAPPY_SANS_32_73 },
    { 74,12,FDEF_HAPPY_SANS_32_74 },
    { 75,17,FDEF_HAPPY_SANS_32_75 },
    { 76,16,FDEF_HAPPY_SANS_32_76 },
    { 77,24,FDEF_HAPPY_SANS_32_77 },
    { 78,17,FDEF_HAPPY_SANS_32_78 },
    { 79,21,FDEF_HAPPY_SANS_32_79 },
    { 80,17,FDEF_HAPPY_SANS_32_80 },
    { 81,21,FDEF_HAPPY_SANS_32_81 },
    { 82,19,FDEF_HAPPY_SANS_32_82 },
    { 83,16,FDEF_HAPPY_SANS_32_83 },
    { 84,21,FDEF_HAPPY_SANS_32_84 },
    { 85,16,FDEF_HAPPY_SANS_32_85 },
    { 86,16,FDEF_HAPPY_SANS_32_86 },
    { 87,26,FDEF_HAPPY_SANS_32_87 },
    { 88,18,FDEF_HAPPY_SANS_32_88 },
    { 89,16,FDEF_HAPPY_SANS_32_89 },
    { 90,16,FDEF_HAPPY_SANS_32_90 },
    { 97,13,FDEF_HAPPY_SANS_32_97 },
    { 98,14,FDEF_HAPPY_SANS_32_98 },
    { 99,13,FDEF_HAPPY_SANS_32_99 },
    { 100,15,FDEF_HAPPY_SANS_32_100 },
    { 101,14,FDEF_HAPPY_SANS_32_101 },
    { 102,9,FDEF_HAPPY_SANS_32_102 },
    { 103,14,FDEF_HAPPY_SANS_32_103 },
    { 104,14,FDEF_HAPPY_SANS_32_104 },
    { 105,7,FDEF_HAPPY_SANS_32_105 },
    { 106,8,FDEF_HAPPY_SANS_32_106 },
    { 107,12,FDEF_HAPPY_SANS_32_107 },
    { 108,5,FDEF_HAPPY_SANS_32_108 },
    { 109,20,FDEF_HAPPY_SANS_32_109 },
    { 110,13,FDEF_HAPPY_SANS_32_110 },
    { 111,15,FDEF_HAPPY_SANS_32_111 },
    { 112,14,FDEF_HAPPY_SANS_32_112 },
    { 113,16,FDEF_HAPPY_SANS_32_113 },
    { 114,9,FDEF_HAPPY_SANS_32_114 },
    { 115,11,FDEF_HAPPY_SANS_32_115 },
    { 116,10,FDEF_HAPPY_SANS_32_116 },
    { 117,14,FDEF_HAPPY_SANS_32_117 },
    { 118,13,FDEF_HAPPY_SANS_32_118 },
    { 119,18,FDEF_HAPPY_SANS_32_119 },
    { 120,15,FDEF_HAPPY_SANS_32_120 },
    { 121,14,FDEF_HAPPY_SANS_32_121 },
    { 122,11,FDEF_HAPPY_SANS_32_122 },
  };

}