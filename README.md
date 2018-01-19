# myProtobufDemo

1. hello.proto 定义了消息内容，**repeated**类型实现类似数组的功能
2. buildR.sh 和 buildW.sh分别是reader.cpp 和 writer.cpp 的编译脚本
3. 添加了序列化之后用socket传输

***
CMake我尝试过了，但是目前还是用不了的，主要是因为pkg-config没配置成功。
