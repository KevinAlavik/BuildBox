#include <BuildBox.hpp>

void showHelp() {
    std::cout << BLUE_COLOR << "Usage: " << APP_NAME << " [options] <recipe>" << RESET_COLOR << std::endl;
    std::cout << "\n" << BLUE_COLOR << "Version: " << APP_VERSION << "\n" << APP_DESC << "\n\n" << RESET_COLOR;

    std::cout << YELLOW_COLOR << "Options:\n" << RESET_COLOR;
    std::cout << "  -h, --help       Display this help message\n";
    std::cout << "  -v, --version    Show version information\n";
}

void showVersion() {
    std::cout << APP_NAME << " version: " << APP_VERSION << std::endl;
}

int main(int argc, char** argv) {
    if (argc == 1) {
        std::cerr << RED_COLOR << "Error: No arguments provided. Usage:\n  " << argv[0] << " [options] <recipe>\n" <<
            "For more information, use -h or --help." << RESET_COLOR << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "-h" || arg == "--help") {
            showHelp();
            return 0;
        }
        if (arg == "-v" || arg == "--version") {
            showVersion();
            return 0;
        }
    }

    std::string recipe = argv[argc - 1];
    std::cout << "Processing recipe: " << recipe << std::endl;

    return 0;
}
