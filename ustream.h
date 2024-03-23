#ifndef USTREAM_H
#define USTREAM_H
#include <iostream>
#include <fstream>
#include<chrono>
#include<thread>

class unifiedStream{
  private:
    // std::ostream& os1;
    // std::ostream& os2;
    int size = 0;
    std::ostream** streams = nullptr;
    

  public:
    //uStream(std::ostream& os1, std:: ostream& os2): os1(os1), os2(os2){}

template<typename... Args>
    unifiedStream(Args&... args) : size(sizeof...(args)), streams(new std::ostream*[size]) {
int i = 0;
        int transit[] = {(streams[i++] = &args, 0)...}; 
    }
      

    ~unifiedStream(){
      delete[] streams;
    }


  unifiedStream(const unifiedStream&) = delete;

  // Copy assignment operator (deleted to prevent copying)
  unifiedStream& operator=(const unifiedStream&) = delete;

  // Move constructor
  unifiedStream(unifiedStream&& other) noexcept :  size(other.size), streams(other.streams) {
      other.streams = nullptr;
      other.size = 0;
  }

  template<typename T>
  unifiedStream& operator << (const T& x){
    for(int i = 0; i < size; ++i){
      (*streams[i]) << x;
    }


    return *this;
  }
};



#endif