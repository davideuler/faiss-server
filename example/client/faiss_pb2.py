# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: faiss.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from google.protobuf import empty_pb2 as google_dot_protobuf_dot_empty__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0b\x66\x61iss.proto\x12\x05\x66\x61iss\x1a\x1bgoogle/protobuf/empty.proto\"$\n\x11HeartbeatResponse\x12\x0f\n\x07message\x18\x01 \x01(\t\"\x1b\n\x06Vector\x12\x11\n\tfloat_val\x18\x05 \x03(\x02\"=\n\rSearchRequest\x12\x1d\n\x06vector\x18\x01 \x01(\x0b\x32\r.faiss.Vector\x12\r\n\x05top_k\x18\x02 \x01(\x04\"%\n\x08Neighbor\x12\n\n\x02id\x18\x01 \x01(\x04\x12\r\n\x05score\x18\x02 \x01(\x02\"4\n\x0eSearchResponse\x12\"\n\tneighbors\x18\x02 \x03(\x0b\x32\x0f.faiss.Neighbor\".\n\x11SearchByIdRequest\x12\n\n\x02id\x18\x01 \x01(\x04\x12\r\n\x05top_k\x18\x02 \x01(\x04\"L\n\x12SearchByIdResponse\x12\x12\n\nrequest_id\x18\x01 \x01(\x04\x12\"\n\tneighbors\x18\x02 \x03(\x0b\x32\x0f.faiss.Neighbor2\xc7\x01\n\x0c\x46\x61issService\x12=\n\tHeartbeat\x12\x16.google.protobuf.Empty\x1a\x18.faiss.HeartbeatResponse\x12\x35\n\x06Search\x12\x14.faiss.SearchRequest\x1a\x15.faiss.SearchResponse\x12\x41\n\nSearchById\x12\x18.faiss.SearchByIdRequest\x1a\x19.faiss.SearchByIdResponseb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'faiss_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _HEARTBEATRESPONSE._serialized_start=51
  _HEARTBEATRESPONSE._serialized_end=87
  _VECTOR._serialized_start=89
  _VECTOR._serialized_end=116
  _SEARCHREQUEST._serialized_start=118
  _SEARCHREQUEST._serialized_end=179
  _NEIGHBOR._serialized_start=181
  _NEIGHBOR._serialized_end=218
  _SEARCHRESPONSE._serialized_start=220
  _SEARCHRESPONSE._serialized_end=272
  _SEARCHBYIDREQUEST._serialized_start=274
  _SEARCHBYIDREQUEST._serialized_end=320
  _SEARCHBYIDRESPONSE._serialized_start=322
  _SEARCHBYIDRESPONSE._serialized_end=398
  _FAISSSERVICE._serialized_start=401
  _FAISSSERVICE._serialized_end=600
# @@protoc_insertion_point(module_scope)