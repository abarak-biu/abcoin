#include "network.h"

namespace ab::bitcoin::wallet 
{
using namespace ab::bitcoin::core;

class LightweightWallet : public ab::bitcoin::network::ActorInterface
{
public:
virtual void OnTrans(const Transaction & trans) override;
 
};


}