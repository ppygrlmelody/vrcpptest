windows:
	scons	platform=windows	target=template_debug

all:
	scons	platform=windows	target=template_debug
	scons	platform=windows	target=template_release
	scons	platform=linux 		target=template_debug
	scons	platform=linux 		target=template_release
	scons	platform=web 			target=template_debug		threads=no
	scons	platform=web 			target=template_release	threads=no
	
clean:
	-rm -v \
		.sconsign.dblite \
		src/*.o \
		src/*.os \
		project/bin/*.so \
		project/bin/*.wasm \
		project/bin/*.dll

	scons	--clean platform=windows  target=template_debug
	scons --clean platform=windows  target=template_release
	scons --clean platform=linux 	  target=template_debug
	scons --clean platform=linux 	  target=template_release
	scons --clean platform=web 		  target=template_debug		threads=no
	scons --clean platform=web 		  target=template_release	threads=no
