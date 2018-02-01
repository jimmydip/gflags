#include <iostream>
#include <gflags/gflags.h>
namespace gflags = google;

#define VERSION "1.0.1"

DEFINE_string(name, "jimmy", "name");
DEFINE_int32(age, 20, "age");
DEFINE_string(mail, "jimmy_dip@aliyun.com", "mail");

int main(int argc, char **argv)
{
    gflags::SetVersionString(VERSION);
    // Usage message.
    gflags::SetUsageMessage("./none");

    gflags::ParseCommandLineFlags(&argc, &argv, true);

    std::cout << "Your name is : " << FLAGS_name << std::endl;
    std::cout << "age is       : " << FLAGS_age << std::endl;
    std::cout << "mail is      : " << FLAGS_mail << std::endl;
    return 0;
}
