// 老师提供的小测试工具。学生不用改，也不用看懂。
// 不用安装任何东西：和测试程序放在同一个文件夹就行。C++98 也能编译。
//
//   check_bool(你的, 应该, "说明")   比较 true / false
//   check_char(你的, 应该, "说明")   比较一个字符
//   check_int(你的, 应该, "说明")    比较整数
//   check_text(你的, 应该, "说明")   比较字符串
//   return check_summary();          最后打“通过 几/几”，有错时返回 1
// 不一样时会把“应该是”和“你的是”都打出来。

#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

int check_total = 0;
int check_failed = 0;

int check_setup() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);   // 让 Windows 控制台按 UTF-8 显示中文（要在教室电脑上确认）
#endif
    return 0;
}
int check_setup_done = check_setup();

int check_report(bool ok, std::string what, std::string got, std::string want) {
    check_total++;
    if (ok) {
        std::cout << "[对] " << what << std::endl;
    } else {
        check_failed++;
        std::cout << "[错] " << what << std::endl;
        std::cout << "      应该是：" << want << std::endl;
        std::cout << "      你的是：" << got << std::endl;
    }
    return 0;
}

std::string check_show_bool(bool b) {
    return b ? "true" : "false";
}

std::string check_show_char(char c) {
    return std::string("'") + c + "'";
}

std::string check_show_int(int n) {
    if (n == 0) return "0";
    std::string s = "";
    bool neg = n < 0;
    if (neg) n = -n;
    while (n > 0) {
        s = char('0' + n % 10) + s;
        n = n / 10;
    }
    if (neg) s = "-" + s;
    return s;
}

int check_bool(bool got, bool want, std::string what) {
    return check_report(got == want, what, check_show_bool(got), check_show_bool(want));
}

int check_char(char got, char want, std::string what) {
    return check_report(got == want, what, check_show_char(got), check_show_char(want));
}

int check_int(int got, int want, std::string what) {
    return check_report(got == want, what, check_show_int(got), check_show_int(want));
}

int check_text(std::string got, std::string want, std::string what) {
    return check_report(got == want, what, "\"" + got + "\"", "\"" + want + "\"");
}

int check_summary() {
    std::cout << "------------------------------" << std::endl;
    std::cout << "通过 " << (check_total - check_failed) << " / " << check_total << std::endl;
    if (check_failed == 0) {
        std::cout << "全部通过！可以运行 play.cpp 玩一玩，然后进入下一关。" << std::endl;
    } else {
        std::cout << "还有没通过的，看上面打 [错] 的那几条。" << std::endl;
    }
    return check_failed == 0 ? 0 : 1;
}
