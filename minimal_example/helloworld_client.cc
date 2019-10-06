#include <grpcpp/grpcpp.h>
#include "simple_server.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using helloworld::HelloRequest;
using helloworld::HelloResponse;
using helloworld::HelloService;


class SimpleClient {

public: 
    SimpleClient(std::shared_ptr<Channel> channel) 
    : stub_(HelloService::NewStub(channel)) 
    {}

    std::string SayHello(const std::string& user) {
        HelloRequest request;
        request.set_greeting(user);

        HelloResponse reply;
        ClientContext context; 

        Status status = stub_->SayHello(&context, request, &reply);

        if (status.ok()) {
            return reply.reply();
        } else {
            std::cout << status.error_code() << ": " << status.error_message()
                      << std::endl;
            return "RPC failed";
        }
    }

private:
    std::unique_ptr<HelloService::Stub> stub_;
};

int main(int argc, char const *argv[])
{
    std::shared_ptr<Channel> channel = grpc::CreateChannel("localhost:9999", grpc::InsecureChannelCredentials());

    SimpleClient client(channel);

    std::string user("you c++");
    std::string reply = client.SayHello(user);

    std::cout << reply << std::endl;
    return 0;
}
