LDFLAGS = -L/usr/local/lib `pkg-config --libs protobuf grpc++`\
           -Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed\
           -ldl 

CXX = g++
CPPFLAGS += `pkg-config --cflags protobuf grpc`
CXXFLAGS += -std=c++11
CXXFLAGS += -I/home/anton/Documents/aws/gRPC_tutorial/grpc/third_party/protobuf/src/

GRPC_CPP_PLUGIN = grpc_cpp_plugin
GRPC_CPP_PLUGIN_PATH ?= `which $(GRPC_CPP_PLUGIN)`

all: client client_debug

client: route_guide.pb.o route_guide.grpc.pb.o client.o helper.o
	$(CXX) $^ $(LDFLAGS) -o $@

client_debug: route_guide.pb.o route_guide.grpc.pb.o client.o helper.o
	$(CXX) $^ $(LDFLAGS) -g -o $@

%.grpc.pb.cc: %.proto
	protoc --grpc_out=. --plugin=protoc-gen-grpc=$(GRPC_CPP_PLUGIN_PATH) $<

%.pb.cc: %.proto
	protoc --cpp_out=. $<

clean:
	rm -f *.o *.pb.cc *.pb.h client client_debug