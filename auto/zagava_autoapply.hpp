#ifndef ZAGAVA_AUTOAPPLY_HPP
#define ZAGAVA_AUTOAPPLY_HPP

// #include <cstdint>
#include <iostream>
#include <string>
#include <curl/curl.h>
#include <curl/easy.h>

namespace starting_scarpping_operations {
    inline std::string zagava_base_url_details;
    inline std::string portal_url_details;
    inline std::string zagava_username_details;
    inline std::string zagava_password_details;

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
    inline void establishing_portal_url() {
        std::cout << "Enter the portal url : ";
        std::cin >> portal_url_details;
        CURL *portal_url_details_curl = curl_easy_init();
        if(portal_url_details_curl) {
            CURLcode portal_url_details_result;
            curl_easy_setopt(portal_url_details_curl, CURLOPT_URL, portal_url_details.c_str());
            portal_url_details_result = curl_easy_perform(portal_url_details_curl);
            curl_easy_cleanup(portal_url_details_curl);
        }
    }
    inline void establishing_zagava_credentials() {
        std::cout << "Enter the zagava username : ";
        std::cin >> zagava_username_details;
        std::cout << "Enter the zagava password : ";
        std::cin >> zagava_password_details;
        CURL *zagava_credentials_curl = curl_easy_init();
        if(zagava_credentials_curl) {
            CURLcode zagava_credentials_result;
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_URL, zagava_base_url_details.c_str());
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_USERNAME, zagava_username_details.c_str());
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_PASSWORD, zagava_password_details.c_str());
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_POST, 1L);
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_POSTFIELDS, zagava_username_details.c_str());
            curl_easy_setopt(zagava_credentials_curl, CURLOPT_POSTFIELDS, zagava_password_details.c_str());
            zagava_credentials_result = curl_easy_perform(zagava_credentials_curl);
            curl_easy_cleanup(zagava_credentials_curl);
        }
    }
}
#endif
