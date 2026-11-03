# C++ 青少年编程

零基础 C++ 课。课件是可以离线双击打开的网页：学生看着能自学，老师照着能讲课，代码能一键带到在线 IDE 里运行。学生平时仍用 Dev-C++。

在线看：<https://lixuanan2.github.io/cpp-for-youth/>

## 上课

双击 `dist/index.html`，选一节课。

| 按键 | 作用 |
| --- | --- |
| `→` `空格` | 下一步，有分步的页面先走完步骤 |
| `←` | 上一步 |
| `T` | 显示或收起左侧缩略图 |
| `G` | 输入页码跳转 |
| `R` | 带着本页代码打开 IDE |
| `F` | 全屏，全屏时动一下鼠标显示控制条 |
| `B` | 黑屏，按任意键回来 |
| `1`–`4` | 小测选答案 |
| `?` | 查看快捷键 |

底部时间轴一格一页，颜色表示这页的任务，可以拖动，旁边是章节跳转。

上课时把整个 `dist/` 复制到教室电脑，里面有课件、PDF 和起始程序，没有答案。IDE 按钮要联网，其余功能离线可用。

## 课程

| 课 | 主题 | 页数 | 状态 |
| --- | --- | --- | --- |
| [01](dist/01-input-output/index.html) | 输入输出 | 30 | macOS Chrome 已验证，Windows 教室待试讲 |
| [02](dist/02-arithmetic/index.html) | 变量与计算 | 25 | macOS Chrome 已验证，Windows 教室待试讲 |
| [03](dist/03-if-else/index.html) | 比较与 if/else | 30 | macOS Chrome 已验证，Windows 教室待试讲 |
| [04](dist/04-branches/index.html) | 多分支判断 | 30 | macOS Chrome 已验证，Windows 教室待试讲 |
| [05](dist/05-logic/index.html) | 逻辑运算与复合条件 | 28 | macOS Chrome 已验证，Windows 教室待试讲 |
| [06](dist/06-for-loop/index.html) | for 循环 | 30 | macOS Chrome 已验证，Windows 教室待试讲 |
| [07](dist/07-while-loop/index.html) | while 循环 | 30 | macOS Chrome 已验证，Windows 教室待试讲 |
| [08](dist/08-loop-filter/index.html) | 循环条件筛选 | 25 | macOS Chrome 已验证，Windows 教室待试讲 |
| [09](dist/09-tally/index.html) | 累加和计数 | 29 | macOS Chrome 已验证，Windows 教室待试讲 |
| [10](dist/10-max-min/index.html) | 最大值与最小值 | 24 | macOS Chrome 已验证，Windows 教室待试讲 |
| [11](dist/11-nested-loop/index.html) | 嵌套循环与图形 | 28 | macOS Chrome 已验证，Windows 教室待试讲 |
| [12](dist/12-array/index.html) | 一维数组入门 | 27 | macOS Chrome 已验证，Windows 教室待试讲 |
| [13](dist/13-array-search/index.html) | 数组遍历与简单查找 | 24 | macOS Chrome 已验证，Windows 教室待试讲 |
| [14](dist/14-2d-array/index.html) | 二维数组入门 | 24 | macOS Chrome 已验证，Windows 教室待试讲 |
| [15](dist/15-char/index.html) | 字符与 ASCII 入门 | 23 | macOS Chrome 已验证，Windows 教室待试讲 |
| [16](dist/16-string/index.html) | string 字符串入门 | 24 | macOS Chrome 已验证，Windows 教室待试讲 |
| [17](dist/17-function/index.html) | 函数定义与调用 | 24 | macOS Chrome 已验证，Windows 教室待试讲 |

其余 4 节还没有新版，上课仍用旧仓库的 PPT。课号是新路线的：旧 PART_01 拆成第 1 到 3 课，旧 PART_02 是综合复习，内容已包含在后面的循环课里，旧 PART_03 到 PART_07 课号比 PART 编号大 1，旧 PART_08、PART_09 合成第 9 课，旧 PART_10 起课号和 PART 编号相同。

## 做新课

在 Claude Code 里说“做下一课：函数参数与作用域”，会走 [cpp-lesson](.claude/skills/cpp-lesson/SKILL.md) 流程。用别的 AI 时，把 [PROMPT.md](PROMPT.md) 发过去。

一节课页面太多时分成上下集，规则见 [PROMPT.md](PROMPT.md)。手动改课后，在仓库根目录运行：

```sh
python3 tools/build.py --pdf
python3 tools/check.py
node tools/check_browser.mjs
```

需要装 Chrome、Node 和 C++ 编译器。

## 目录

```text
lessons/    每节课的页面、题目和测试，唯一内容源
template/   所有课共用的外壳、样式和脚本
tools/      构建和检查，C++ 按 C++11 真实编译
dist/       生成结果，复制它去上课
vendor/     字体和舞台样式，含许可
docs/       旧课内容摘要
site.json   网站名称、语言和 IDE 平台
PROMPT.md   做课提示词和教学要求
AGENTS.md   项目规则
```

## 教学设计

每节课按“讲一点、练一点”推进，最后留一个没有标准答案的小项目，再和同桌互相试玩、改一版。课堂结构以 [PROMPT.md](PROMPT.md) 为准，和 Python 课共用。

## 已知限制

- IDE 用公开网站 [cpp.sh](https://cpp.sh/)，是第三方个人站点。它默认按 C++20 编译，课堂和检查用 C++11，个别新语法在网页上能运行、在 Dev-C++ 上不能。
- 页面上的报错文字按 GCC 写，Dev-C++ 显示的样子可能略有不同。
- Windows 字体、投影和教室网络都还没有实测。

## 参与

欢迎提意见和改进，怎么提看 [CONTRIBUTING.md](CONTRIBUTING.md)。

## 许可

课件内容用 CC BY-NC-SA 4.0，代码用 MIT，详见 [LICENSE.md](LICENSE.md)。

## 致谢

- 固定舞台样式来自 [Frontend Slides](https://github.com/zarazhangrui/frontend-slides)（MIT）。
- 字体 [JetBrains Mono](https://www.jetbrains.com/lp/mono/)（SIL OFL 1.1）。
