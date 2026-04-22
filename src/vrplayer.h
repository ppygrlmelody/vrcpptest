#ifndef PLAYER_H
#define PLAYER_H

#include <godot_cpp/classes/xr_origin3d.hpp>

namespace godot{
  class VRPlayer : public XROrigin3D{
    GDCLASS(VRPlayer, XROrigin3D)

    private:

    protected:
      static void _bind_methods();

    public:
      VRPlayer();
      ~VRPlayer();

      void _ready() override;
      void _process(double delta) override;
  };
}

#endif
