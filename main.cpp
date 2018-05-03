#include "spdlog/spdlog.h"

#include <iostream>
#include <memory>

namespace spd = spdlog;
int main(int, char*[])
{
        // Console logger with color
        auto console = spd::stdout_color_mt("console");
        console->info("WG, welcome to spdlog!");
        console->error("Some error message with arg{}..", 1);
    return 0;
}