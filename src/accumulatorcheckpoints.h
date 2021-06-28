// Copyright (c) 2015-2018 The PIVX developers
// Copyright (c) 2019-2021 The MasterWin developers
// Copyright (c) 2020-2021 The The Masternode Hype Coin Exchange developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MasternodeHypeCoinExchange_ACCUMULATORCHECKPOINTS_H
#define MasternodeHypeCoinExchange_ACCUMULATORCHECKPOINTS_H

#include <libzerocoin/bignum.h>
#include <univalue/include/univalue.h>

namespace AccumulatorCheckpoints
{
    typedef std::map<libzerocoin::CoinDenomination, CBigNum> Checkpoint;
    extern std::map<int, Checkpoint> mapCheckpoints;

    UniValue read_json(const std::string& jsondata);
    bool LoadCheckpoints(const std::string& strNetwork);
    Checkpoint GetClosestCheckpoint(const int& nHeight, int& nHeightCheckpoint);
}

#endif //MasternodeHypeCoinExchange_ACCUMULATORCHECKPOINTS_H
