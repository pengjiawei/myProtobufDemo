#!/usr/bin/env bash
g++ hello.pb.cc writer.cpp -o writer `pkg-config --cflags --libs protobuf`