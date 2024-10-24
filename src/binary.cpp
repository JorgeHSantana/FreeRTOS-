#include "binary.hpp"

using namespace freertos;

heap::binary::binary(void) : abstract::semaphore(semaphore::type::binary) {
    if (this->handle != nullptr){
        return;
    }
    
    this->handle = xSemaphoreCreateBinary();
}

stack::binary::binary(void) : abstract::semaphore(semaphore::type::binary) {
    if (this->handle != nullptr){
        return;
    }
    
    this->handle = xSemaphoreCreateBinaryStatic(&this->buffer);
}