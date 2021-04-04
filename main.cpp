#include <iostream>
#include <vector>
#include <string>
#include "core.h"
#include "miner.h"
#include "wallet.h" 
#include "network.h"

#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

using namespace ab::bitcoin::network;
using namespace ab::bitcoin::wallet;
using namespace ab::bitcoin::core;

int main()
{

    Network theNet;

   LOG(INFO) << "Starting network...";

    //register a wallet
    auto w = new LightweightWallet();
    std::shared_ptr<ActorInterface> wallet(w);
    theNet.registerActor(wallet);

    //publish a transaction
    Transaction t;
    theNet.TransChannel().Publish(t);

   LOG(INFO) << "Done...";
}
