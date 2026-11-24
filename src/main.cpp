// main.cpp — entry point. Wires config and subsystems together.

#include "gptmirrorselfhosted/settings.h"
#include "gptmirrorselfhosted/server.h"
#include "gptmirrorselfhosted/auth.h"
#include "gptmirrorselfhosted/quota.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gptmirrorselfhosted::Settings settings = gptmirrorselfhosted::Settings::load_default();
    gptmirrorselfhosted::Server server(settings.store_path);
    gptmirrorselfhosted::Auth auth(settings.store_path);
    gptmirrorselfhosted::Quota quota(settings.store_path);
    std::fprintf(stderr, "[gpt-mirror-selfhosted] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
