#include "auto/zagava_autoapply.cpp"
#include "database/real_zagava_database.cpp"
#include "screenshot/zagava_screenshot.hpp"
#include "server/network_details.hpp"
#include <curl/curl.h>
#include <curl/easy.h>


int main() {
    open_database_file();
    scarping_server_details();
    screenshot_the_tab_details();
    execute_the_cron_condition();
    return 0;
}
