#ifndef ZAGAVA_AUTOAPPLY_HPP
#define ZAGAVA_AUTOAPPLY_HPP

#include <iostream>
#include <string>
#include <curl/curl.h>
#include <curl/easy.h>

namespace starting_scarpping_operations {
    inline std::string zagava_base_url_details;
    inline void establishing_web_scarping_information() {
        std::cout << "Enter the base website url : ";
        std::cin >> zagava_base_url_details;
        CURL *zagava_scarp_details = curl_easy_init();
        if(zagava_scarp_details) {
            CURLcode zagava_scarpping_result;
            curl_easy_setopt(zagava_scarp_details, CURLOPT_URL, zagava_base_url_details.c_str());
            zagava_scarpping_result = curl_easy_perform(zagava_scarp_details);
            curl_easy_cleanup(zagava_scarp_details);
        }
    }
}
#endif
