CFLAGS = -std=c++17 
LFDFLAGS = -lglfw -lvulkan -ldl -lpthread -lwayland-egl -lwayland-client -lXxf86vm -lXrandr -lXi 

engine: engine.cpp
	g++ $(CFLAGS) -o engine engine.cpp $(LFDFLAGS)

.phony: test clean

test: engine
	./engine

clean:
	rm -f engine
