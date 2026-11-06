# C++ 青少年编程

Free, open C++ courseware in Chinese for beginners, written for roughly ages 9 to 12. Each lesson is a web page that opens offline with a double-click, reads well enough for self-study, and sends any code on the page to an online compiler in one click. Teachers, schools and anyone who wants to collaborate are welcome to get in touch through GitHub Discussions.

这是一套零基础 C++ 课件，免费、开源。每节课是一个网页，老师拿来上课，学生也能照着自学。

- 在线看：<https://lixuanan2.github.io/cpp-for-youth/>
- 第一课：<https://lixuanan2.github.io/cpp-for-youth/basics/01-input-output/>

## 适合谁

- 学生：零基础起步，按大约 9 到 12 岁的理解能力来写。平时在 Windows 上用 Dev-C++ 写程序。
- 老师：学校、机构和兴趣班的老师。课件里的句子写得完整、口语化，老师照着读就能讲，不用另备讲稿。
- 自学的孩子和家长：只看页面也能看懂，每讲一点就有一道题马上练。

## 有什么不一样

- **离线双击就能打开。** 每节课是一个网页文件，样式、脚本和字体都在里面，不用装软件，不用联网。只有打开在线 IDE 和官方文档时要联网。
- **学生能照着自学。** 每节课按“讲一点、练一点”推进：先猜结果再揭晓，选择小测点了马上解释，点出报错的那一行，最后做一个自己定主题的小程序，再和同桌换着玩。
- **代码一键进 cpp.sh。** 页面上的代码点一下就带到在线编译器 [cpp.sh](https://cpp.sh/) 里运行，动手题带着起始程序打开，不用复制粘贴。
- **黄色框能在页面上直接改值。** 只改一个数、结果一眼能看到的地方，学生在页面上改，结果马上变，省掉打开 IDE 的时间。
- **每个程序和页面说法都有自动检查。** 页面上的程序都由工具检查过：按 C++11 真实编译，页面说的输出和报错用真实编译器运行核对，在 Windows 和 Linux 上用 GCC 各查一遍，个别停不下来的示例只编译、不运行；题目答案用测试数据跑过，动手题和挑战的答案不会出现在学生拿到的文件里。每次改动后，每一页还会在真实的 Chrome 里打开，检查排版、小测、黄色框和 IDE 链接。

## 怎么用

- **在线：** 打开 <https://lixuanan2.github.io/cpp-for-youth/>，选一节课。
- **教室电脑：** 在这个仓库的页面点 Code → Download ZIP，解压后把 `basics/dist` 文件夹整个复制到教室电脑，双击里面的 `index.html`。这个文件夹里有课件、PDF 和起始程序，没有答案。起始程序用 Dev-C++ 打开就能写。

放映时按 `→` 或空格翻页，`R` 带着本页代码打开 IDE，`F` 全屏，`?` 查看全部快捷键。更多用法见 [basics/README.md](basics/README.md)。

## 模块和进度

| 模块 | 内容 | 进度 |
| --- | --- | --- |
| [基础课件](basics/README.md) | 从输入输出、变量讲起，经过判断、循环、数组、字符串、函数、结构体，到 vector、引用、指针，再到递归、排序、枚举、递推、前缀和、二分查找这些算法入门 | 30 节已完成，[在线看](https://lixuanan2.github.io/cpp-for-youth/basics/) |

以后会继续加别的模块，比如项目课。

## 关于 cpp.sh

cpp.sh 是第三方的公开网站，默认按 C++20 编译。课件和检查都按 C++11 写，个别新写法在网页上能运行、在 Dev-C++ 上不能。页面上的报错按 GCC 的文字写，Dev-C++ 显示的样子可能略有不同。

## 想合作或交流

来 [Discussions](https://github.com/lixuanan2/cpp-for-youth/discussions) 留言。在学校或机构里用了这套课、想一起做新模块、发现哪里讲得不好，都欢迎来说。具体的错误和建议可以开 Issue，怎么提见 [CONTRIBUTING.md](CONTRIBUTING.md)。

## 许可

课件内容用 CC BY-NC-SA 4.0，可以免费用在课堂上、修改和分享；想用在收费课程里，先开一个 Issue 问一下。代码用 MIT。详见 [LICENSE.md](LICENSE.md)。
