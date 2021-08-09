BINARY = pp-wrapper
CFLAGS = `pkg-config webkit2gtk-4.0 --libs --cflags`
PKGCONFIG = `pkg-config gtkmm-3.0 --libs --cflags`
all: resources compile launch
resources:
	glib-compile-resources --target=resources.c --generate-source resources.xml
compile:
	g++ main.cpp -o bin/$(BINARY) $(PKGCONFIG) $(CFLAGS)  -std=c++11
launch:
		./bin/$(BINARY)
