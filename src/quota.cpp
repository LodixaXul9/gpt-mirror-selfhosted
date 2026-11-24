// quota.cpp — part of gpt-mirror-selfhosted.

#include "gptmirrorselfhosted/quota.h"

#include <cstdio>

namespace gptmirrorselfhosted {

Quota::Quota(const std::string& config_path)
    : config_path_(config_path) {}

void Quota::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Quota::run() {
    if (verbose_) std::fprintf(stderr, "[gpt-mirror-selfhosted] quota: run\n");
    // core logic lives here
    return true;
}

}  // namespace gptmirrorselfhosted
