extends Node2D

func _ready() -> void:
	test_plugin_functionality()

func test_plugin_functionality()->void:
	var my_class:Test = Test.new()
	
	my_class.say_hello()
	
	
	
	
