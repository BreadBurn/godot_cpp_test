#pragma once
#include <godot_cpp/classes/wrapped.hpp>
#include <godot_cpp/classes/node.hpp>

class Test: public godot::Node{
    GDCLASS(Test, Node);
protected:
    static void _bind_methods();
private:
    void say_hello();

};
