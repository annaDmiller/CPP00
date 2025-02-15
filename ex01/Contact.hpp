#ifndef CONTACT_H
# define CONTACT_H

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_num;
        std::string secret;

    public:
        Contact(void);
        ~Contact(void);
}

#endif