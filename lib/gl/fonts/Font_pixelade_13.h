#pragma once

#include "gl/Font.h"

namespace lcd {

  // helper so the user can just do 'new fontname' without having to know the parameters

  extern const struct FontChar FDEF_PIXELADE_CHAR[];

  class Font_PIXELADE13 : public Font {
    public:
      Font_PIXELADE13()
        : Font(32,95,13,0,FDEF_PIXELADE_CHAR) {
      }
  };
}
