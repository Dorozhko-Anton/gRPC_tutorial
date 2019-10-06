import grpc

import simple_server_pb2
import simple_server_pb2_grpc

from concurrent import futures

import time 
_ONE_DAY_IN_SECONDS = 60* 60*24

# implement server 
class Server(simple_server_pb2_grpc.HelloServiceServicer):

    def SayHello(self, request, context):
        return simple_server_pb2.HelloResponse(reply=f'Hello, {request.greeting}')

    def SayManyHellos(self, request, context):
        for i in range(5):
            yield simple_server_pb2.HelloResponse(reply=f'Hello #{i}, {request.greeting}')


if __name__ == "__main__":
    
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))

    simple_server_pb2_grpc.add_HelloServiceServicer_to_server(Server(), server)

    server.add_insecure_port('[::]:9999')
    server.start()
    # server.wait_for_termination() # feature merged but not yet released 
    try:
        while True:
            time.sleep(_ONE_DAY_IN_SECONDS)
    except:
        server.stop(0)