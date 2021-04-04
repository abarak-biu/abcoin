#include "core.h"

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
};

class TransListenerInterface
{
public:
virtual void OnTrans(const Transaction & trans) = 0;
};

class Network
{
public:
    Network() {}
    Channel & TransChannel() {return transChannel_;}
private:   
    Channel transChannel_;    
};

}
 