import grpc

import simple_server_pb2       # structures 
import simple_server_pb2_grpc  # stub 

if __name__ == "__main__":
    
    # create channel
    with grpc.insecure_channel('localhost:9999') as channel:
        # create stub with channel
        stub = simple_server_pb2_grpc.HelloServiceStub(channel)

        # make calls
        response = stub.SayHello(simple_server_pb2.HelloRequest(greeting='you'))
        print(response)

        responses = stub.SayManyHellos(simple_server_pb2.HelloRequest(greeting='me'))
        print(type(responses))
        for r in responses:
            print(r)