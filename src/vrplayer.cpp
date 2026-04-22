#include "vrplayer.h"

namespace godot{
  void VRPlayer::_bind_methods(){
    //ClassDB::bind_method(D_METHOD("get_speed"), &VRPlayer::get_speed);
    //ClassDB::bind_method(D_METHOD("set_speed", "p_speed"), &VRPlayer::set_speed);
    //ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "speed"), "set_speed", "get_speed");

    //Add signal
    //ADD_SIGNAL(
    //    MethodInfo(
    //      "hit"/*,
    //      PropertyInfo(Variant::OBJECT, "node"),
    //      PropertyInfo(Variant::VECTOR2, "new_pos")*/
    //      )
    //    );
  }

  VRPlayer::VRPlayer(){
  }

  VRPlayer::~VRPlayer(){
  }

  void VRPlayer::_ready(){
  }

  void VRPlayer::_process(double delta){
  }
}
