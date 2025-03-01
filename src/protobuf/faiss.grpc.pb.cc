// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: faiss.proto

#include "faiss.pb.h"
#include "faiss.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace faiss {

static const char* FaissService_method_names[] = {
  "/faiss.FaissService/Heartbeat",
  "/faiss.FaissService/Search",
  "/faiss.FaissService/SearchById",
};

std::unique_ptr< FaissService::Stub> FaissService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FaissService::Stub> stub(new FaissService::Stub(channel, options));
  return stub;
}

FaissService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Heartbeat_(FaissService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Search_(FaissService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchById_(FaissService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FaissService::Stub::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::faiss::HeartbeatResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::faiss::HeartbeatResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Heartbeat_, context, request, response);
}

void FaissService::Stub::async::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::faiss::HeartbeatResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, std::move(f));
}

void FaissService::Stub::async::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::faiss::HeartbeatResponse, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Heartbeat_, context, request);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHeartbeatRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FaissService::Stub::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::faiss::SearchResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::faiss::SearchRequest, ::faiss::SearchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Search_, context, request, response);
}

void FaissService::Stub::async::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::faiss::SearchRequest, ::faiss::SearchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, std::move(f));
}

void FaissService::Stub::async::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::faiss::SearchResponse, ::faiss::SearchRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Search_, context, request);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::AsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSearchRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status FaissService::Stub::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::faiss::SearchByIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SearchById_, context, request, response);
}

void FaissService::Stub::async::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, std::move(f));
}

void FaissService::Stub::async::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::PrepareAsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::faiss::SearchByIdResponse, ::faiss::SearchByIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SearchById_, context, request);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::AsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSearchByIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

FaissService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::google::protobuf::Empty, ::faiss::HeartbeatResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FaissService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::faiss::HeartbeatResponse* resp) {
               return service->Heartbeat(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchRequest, ::faiss::SearchResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FaissService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::faiss::SearchRequest* req,
             ::faiss::SearchResponse* resp) {
               return service->Search(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](FaissService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::faiss::SearchByIdRequest* req,
             ::faiss::SearchByIdResponse* resp) {
               return service->SearchById(ctx, req, resp);
             }, this)));
}

FaissService::Service::~Service() {
}

::grpc::Status FaissService::Service::Heartbeat(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace faiss

