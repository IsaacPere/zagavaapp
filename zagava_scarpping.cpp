#include "auto/zagava_autoapply.hpp"

using namespace starting_scarpping_operations;

int main() {
    establishing_web_scarping_information();
    std::cout << "Base website url entering: " << starting_scarpping_operations::zagava_base_url_details << '\n';
    establishing_portal_url();
    std::cout << "Portal url entering: " << starting_scarpping_operations::portal_url_details << '\n';
    establishing_zagava_credentials();
    std::cout << "Zagava username entering: " << starting_scarpping_operations::zagava_username_details << '\n';
    std::cout << "Zagava password entering: " << starting_scarpping_operations::zagava_password_details << '\n';
    return 0;
}
