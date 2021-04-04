#pragma once


#include "core.h"

#include <memory>

namespace ab::bitcoin::network 
{

using namespace ab::bitcoin::core;

class Channel
{
public:
    Channel() {}
    void Publish(const Transaction & trans) {}
    
};

class ActorInterface 
{
virtual void OnTrans(const Transaction & trans) = 0;
};


class Network
{
public:
    Network() {}
    Channel & TransChannel() {return transChannel_;}
    void registerActor(std::shared_ptr<ActorInterface> actor) {actors.emplace_back(actor);}
private:   
    Channel transChannel_;
    std::vector<std::shared_ptr<ActorInterface>> actors; 

        
};

}
 