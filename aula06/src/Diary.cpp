#include "../include/Diary.h"

#include <iostream>

Diary::~Diary()
{
    delete[] messages;
}

Diary::Diary(const std::string& filename) : 
    filename(filename),
    messages(nullptr),
    messages_size(0), 
    messages_capacity(10)
{
    messages = new Message[messages_capacity];   
}

void Diary::add(const std::string& message){
    
    if (messages_size == messages_capacity) {
        return;
    }

    Message m;
    Date d;
    d.set_from_string()
    m.content = message;
    messages[messages_size] = m;
    messages_size++;
}

void Diary::write()
{
}