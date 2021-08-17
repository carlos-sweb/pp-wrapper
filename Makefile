BINARY = pp-wrapper
CFLAGS = `pkg-config webkit2gtk-4.0 --libs --cflags`
PKGCONFIG = `pkg-config gtkmm-3.0 --libs --cflags`
all: indexPHP resources compile launch
indexPHP:
	php7 ./public_html/run.php
resources:
	glib-compile-resources --target=resources.c --generate-source resources.xml
compile:
	g++ main.cpp -o bin/$(BINARY) $(PKGCONFIG) $(CFLAGS)  -std=c++11
launch:
		rm -rf ./public_html/index.html && ./bin/$(BINARY) 
