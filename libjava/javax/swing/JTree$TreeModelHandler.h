
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JTree$TreeModelHandler__
#define __javax_swing_JTree$TreeModelHandler__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class JTree;
        class JTree$TreeModelHandler;
      namespace event
      {
          class TreeModelEvent;
      }
    }
  }
}

class javax::swing::JTree$TreeModelHandler : public ::java::lang::Object
{

public: // actually protected
  JTree$TreeModelHandler(::javax::swing::JTree *);
public:
  virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent *);
  virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent *);
  virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent *);
  virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent *);
public: // actually package-private
  ::javax::swing::JTree * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_JTree$TreeModelHandler__
