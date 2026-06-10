#include "auto/zagava_autoapply.cpp"
#include "database/real_zagava_database.cpp"
#include "screenshot/zagava_screenshot.hpp"
#include "server/network_details.hpp"
#include <curl/curl.h>
#include <curl/easy.h>
#include <iostream>

int main() {
    open_database_file();
    scarping_server_details();
    screenshot_the_tab_details();
    execute_the_cron_condition();

    CURL *website_scarpping_app = curl_easy_init();
    if(website_scarpping_app) {
        curl_easy_setopt(website_scarpping_app, CURLOPT_URL, "https://www.psckjobs.go.ke/");
        CURLcode website_response_details = curl_easy_perform(website_scarpping_app);
        if(website_response_details != CURLE_OK) {
            std::cerr << "Request Failed : " << curl_easy_strerror(website_response_details) << std::endl;
        }
        curl_easy_cleanup(website_scarpping_app);
    }
    return 0;
}
