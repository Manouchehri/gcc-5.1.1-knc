
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_Highlighter$Highlight__
#define __javax_swing_text_Highlighter$Highlight__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class Highlighter$Highlight;
          class Highlighter$HighlightPainter;
      }
    }
  }
}

class javax::swing::text::Highlighter$Highlight : public ::java::lang::Object
{

public:
  virtual jint getEndOffset() = 0;
  virtual jint getStartOffset() = 0;
  virtual ::javax::swing::text::Highlighter$HighlightPainter * getPainter() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_swing_text_Highlighter$Highlight__