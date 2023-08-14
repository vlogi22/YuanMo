#ifndef __YUANMO_APP_PLAYER_STATS_MESSAGE_H__
#define __YUANMO_APP_PLAYER_STATS_MESSAGE_H__

#include <string>

namespace yuan_mo::app::player::stats::message {

    static std::string player_stat(std::string type, int val) {
        return ">> " + type + " points: " + std::to_string(val);
    }

}

#endif