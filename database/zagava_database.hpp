#ifndef ZAGAVA_DATABASE_HPP
#define ZAGAVA_DATABASE_HPP

#include <cstdlib>
#include <exception>
#include <iostream>
#include <pqxx/pqxx>
#include <string>

inline void open_database_configuration() {
    const char* host = std::getenv("PSQL_DATABASE_HOST_DETAILS");
    const char* port = std::getenv("PSQL_DATABASE_PORT_DETAILS");
    const char* db   = std::getenv("PSQL_DATABASE_NAME_DETAILS");
    const char* user = std::getenv("PSQL_DATABASE_USERNAME_DETAILS");
    const char* pass = std::getenv("PSQL_DATABASE_PASSWORD_DETAILS");

    if (!host || !port || !db || !user || !pass) {
        std::cerr << "Missing enivorment variables\n";
        return;
    }

    std::string connection_string =
        "host=" + std::string(host) +
        " port=" + std::string(port) +
        " dbname=" + std::string(db) +
        " user=" + std::string(user) +
        " password=" + std::string(pass);

    try {
        pqxx::connection conn(connection_string);

        if (conn.is_open()) {
            std::cout << "Connected to "
                      << conn.dbname()
                      << std::endl;
        } else {
            std::cout << "Cannot open database"
                      << std::endl;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: "
                  << e.what()
                  << std::endl;
    }
}

#endif
