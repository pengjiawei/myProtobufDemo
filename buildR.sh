#!/usr/bin/env bash
g++ hello.pb.cc reader.cpp -o reader `pkg-config --cflags --libs protobuf`