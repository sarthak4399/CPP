#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void DisplayTableHeader() {
    std::cout << "+-----------------+-----------------+" << std::endl;
    std::cout << "|       Type      |      Details    |" << std::endl;
    std::cout << "+-----------------+-----------------+" << std::endl;
}

void DisplayTableRow(const std::string& type, const std::string& details) {
    std::cout << "| " << type;
    std::cout << std::string(17 - type.length(), ' ') << "| ";
    std::cout << details;
    std::cout << std::string(17 - details.length(), ' ') << "|" << std::endl;
}
void DisplayTableFooter() {
    std::cout << "+-----------------+-----------------+" << std::endl;
}
void DisplaySystemUsers() {
    DisplayTableHeader();
    FILE* usersFile = popen("cut -d: -f1 /etc/passwd", "r");
    if (usersFile) {
        char buffer[128];
        while (fgets(buffer, sizeof(buffer), usersFile) != nullptr) {
            buffer[strcspn(buffer, "\n")] = '\0';
            DisplayTableRow("User", buffer);
        }
        pclose(usersFile);
    }
    DisplayTableFooter();
}

void DisplayNetworkInformation() {
    DisplayTableHeader();
    FILE* networkFile = popen("ip addr show", "r");
    if (networkFile) {
        char buffer[256];
        std::string details;
        while (fgets(buffer, sizeof(buffer), networkFile) != nullptr) {
            details += buffer;
        }
        pclose(networkFile);
        DisplayTableRow("Network", details);
    }
    DisplayTableFooter();
}

void DisplayPasswordInformation() {
    DisplayTableHeader();
    FILE* passwordFile = popen("cat /etc/passwd", "r");
    if (passwordFile) {
        char buffer[256];
        std::string details;
        while (fgets(buffer, sizeof(buffer), passwordFile) != nullptr) {
            details += buffer;
        }
        pclose(passwordFile);
        DisplayTableRow("Password", details);
    }
    DisplayTableFooter();
}

void DisplayUserPermissions() {
    DisplayTableHeader();
    FILE* permissionsFile = popen("ls -l /home", "r");
    if (permissionsFile) {
        char buffer[256];
        std::string details;
        while (fgets(buffer, sizeof(buffer), permissionsFile) != nullptr) {
            details += buffer;
        }
        pclose(permissionsFile);
        DisplayTableRow("Permissions", details);
    }
    DisplayTableFooter();
}

int main() {
    std::cout << "System Users:" << std::endl;
    DisplaySystemUsers();

    std::cout << "\nNetwork Information:" << std::endl;
    DisplayNetworkInformation();

    std::cout << "\nPassword Information:" << std::endl;
    DisplayPasswordInformation();

    std::cout << "\nUser Permissions:" << std::endl;
    DisplayUserPermissions();

    return 0;
}
