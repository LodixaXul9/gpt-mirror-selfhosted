// server.cpp — part of gpt-mirror-selfhosted.

#include "gptmirrorselfhosted/server.h"

#include <cstdio>

namespace gptmirrorselfhosted {

Server::Server(const std::string& config_path)
    : config_path_(config_path) {}

void Server::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Server::run() {
    if (verbose_) std::fprintf(stderr, "[gpt-mirror-selfhosted] server: run\n");
    // core logic lives here
    return true;
}

}  // namespace gptmirrorselfhosted
