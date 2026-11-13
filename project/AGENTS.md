# 项目课：模块规则

默认简体中文。这里写“项目课”这个模块的规则。整个仓库有哪些模块见仓库最外层的 [AGENTS.md](../AGENTS.md)，基础课件的规则见 [basics/AGENTS.md](../basics/AGENTS.md)。

## 现状

- 第一个项目：井字棋，5 关，网址 `https://lixuanan2.github.io/cpp-for-youth/project/`。仿照大学里分阶段做的项目：一个项目拆成几关，每关加一样东西，做完一关能跑、能测，再做下一关。
- 老师接受了试点的 14 条假设（棋盘是 9 个字符的 string、函数名、5 关、电脑怎么下等），原稿在仓库外的 `~/Documents/project-research/pilot-tictactoe/README.md`。
- 开头要先学完基础课第 17 课（`17-function`）。时间估计没有在课上试过。

## 不动 basics

- 做项目课不改 `basics/` 里的任何文件。项目课的课件直接读 `basics/` 的模板、字体和 IDE 设置（`page.html`、`theme.css`、`deck.js`、`site.json` 的 `ide`），只读不改；项目自己要的样式和页面放在 `project/template/`。
- 项目课的工具（`project/tools/`）和样式（`project/template/`）以 Python 课为准，从 `python-for-youth/project/` 同步过来。工具按 `site.json` 的 `language` 分 Python 和 C++，这里用的是 C++ 那一支。C++ 要的工具改动先在这里做好、检查通过，再告诉总控，由 Python 课并回去，免得下次同步时丢掉。
- `<项目>/stages.py` 两门课共用一种写法，C++ 的字段（`cpp_sig`、`cpp_body`、`needs_cpp`、`extra_cpp`、`note_cpp` 这些）只有 C++ 课用。

## 目录

下面的路径都从 `project/` 算起。每个项目一个文件夹（现在是 `tictactoe/`），这个项目的东西都放在里面；直接放在 `project/` 下的只有各个项目共用的工具、样式和生成结果。

- `site.json`：语言（`cpp`）、有哪些项目、基础课件的网址、页脚。
- `<项目>/stages.py`：每关的函数（名字、函数头、说明、占位、参考答案）、测试用例、要先学完哪几课，还有整个项目的标题、介绍、前端能玩什么、“想一想”、前端的试玩按键。改内容只改这里。`extra_cpp` 是这一关多发的补页，`note_cpp` 是写进开发文档这一关开头的一小段。
- `<项目>/slides.html`：课件里手写的页，每关只有“一起想”的在线 IDE 演示和小测。`<!-- @map -->`、`<!-- @run -->`、`<!-- @stage N -->` 的位置由构建生成项目地图、怎么运行测试、第 N 关的开头和要写的函数这几页。演示写在 `<pre class="code" data-demo>` 里，页面上只放 `main` 里面那几行，完整程序放在 `data-full`（“在 IDE 打开”带的就是它），输出写在同一页的 `<pre data-out>`。小测的 `data-right` 从 0 数，那一项的反馈以“答对了”开头。
- `<项目>/templates/`：老师给的文件。`play.cpp` 是终端版前端，`check.h` 是测试用的小工具，`extra-string-cell.md` 是第 2 关的补页。第 5 关另外发网页版前端：`api.cpp`（C++98，一行读一条命令，调用学生的函数，回一行 JSON）、`play_web.py`（Python 标准库，只开 127.0.0.1，把网页的每次点击转成一行命令交给编译好的 `api`）和 `web/`（网页和图片，和 Python 课的一模一样）。哪一关多发哪些文件，写在 `stages.py` 那一关的 `extra_cpp` 里。
- `<项目>/draw_assets.py`：用标准库画 `templates/web/assets/` 里的棋盘和棋子，和 Python 课的一样。
- `<项目>/answers/`：参考答案，构建生成，提交进仓库，给老师看，不进 `dist/`。
- `template/`：项目课共用的样式（`project.css` 给课件，`site.css` 给项目地图、开发文档和首页）。
- `tools/`：`build.py` 生成，`check.py` 和 `verify.py` 检查，`check_browser.mjs` 在 Chrome 里看课件和网页，`stagefiles.py` 生成每关的文件和开发文档。
- `dist/`：生成结果，提交进仓库，不要手改，发布到网站的 `/project/`。`dist/index.html` 是项目课首页；`dist/<项目>/` 里有项目地图 `index.html`、开发文档 `guide.html`、课件 `slides/index.html`，`download/` 是发给学生的每关文件夹和 zip（没有答案）。

## 学生拿到什么

- **开发文档是主要的东西**：一个项目一份，写清做什么、一共几关、每关的目标、要写的函数（名字、给什么、还什么、例子）、要先学完哪几课、怎么编译运行测试。由 `stages.py` 生成，每关的文件夹里都有同一份 `guide.md`，网站上是 `guide.html`。基础课没讲的小知识写在开发文档里，比如第 2 关“改 string 的一格”。
- **课件只给老师在大屏幕上讲**：项目地图、怎么运行测试、每关一页开头、要写的函数，再加“一起想”的在线 IDE（cpp.sh）演示和小测。
- **每关的文件夹**：`tictactoe.h`（学生写，里面已经带着前几关的参考答案）、`test_stageN.cpp`（老师的测试）、`check.h`、`play.cpp`（老师的前端）、`guide.md`，第 2 关多一个补页，第 5 关多网页版前端（`api.cpp`、`play_web.py`、`web/`）。网页版要先编译 `api.cpp`，再用 Python 运行 `play_web.py`；学生写的函数一行都不用改。
- **参考答案简洁**：照学生的水平写，短、好读，只用标准库，不用高级的包。`check.py` 查每个答案函数不超过 20 行（只有 `}` 的行不算）；`verify.py` 查答案只用到学过的语法，C++98 和 C++11 都能编译。

## 命令

都在 `project/` 里运行：

```sh
python3 tools/build.py          # 生成 dist/ 和 answers/
python3 tools/check.py          # dist 是不是最新、有没有答案、演示输出、小测、链接
python3 tools/verify.py         # 每关：起始程序编译后测试干净地不过、答案全过、只用学过的、前端能玩，网页前端自检
node tools/check_browser.mjs    # 真实 Chrome 逐页看课件，截图在 .preview/；后面写项目名只查那几个
```

`check.py` 和 `verify.py` 要 g++（或用 `CXX` 指定别的编译器）。`check.py` 和 `check_browser.mjs` 全部通过时只打一行，失败才打详细内容。`check_browser.mjs` 每次通过后，把截图和上次在本机通过时的比（存在 `.check-shots/`，不进 Git），画面变了的页列在 `.preview/changed.txt`，只看清单里的截图。

CI 在 Ubuntu 和 Windows 上用 g++ 跑 `check.py` 和 `verify.py`；网页前端用 `play_web.py --selftest` 自检：先编译 `api.cpp`，不开浏览器，在 127.0.0.1 上照网页用的接口下完几局，配答案要下完，配起始程序要回提示、不崩溃。只改了说明文字或首页时这一步跳过（规则在仓库最外层的 `AGENTS.md`）。浏览器按改动决定（规则在仓库最外层的 `.github/browser_plan.py`）：只改了某个项目的文件夹（`<项目>/`、`dist/<项目>/`），只查那个项目；改了 `template/`、`site.json`、`dist/index.html`、`tools/` 里的 `build.py`、`stagefiles.py`、`check_browser.mjs`，或者 basics 的模板、字体、`site.json`，查全部项目；只改了 `check.py`、`verify.py` 或说明，不开浏览器。都过了才发布到 `/project/`。

## 和基础课件的不同

- **代码在哪里跑：**项目代码在学生自己的电脑上编译和运行，编辑器不限（Dev-C++、VS Code 都行）。只有课件页上的演示用在线 IDE（cpp.sh）讲解。
- `basics/` 里说学生只用在线 IDE、不用 Dev-C++ 打开起始程序，那几条只管基础课件。项目课的代码在本地打开和运行。
- **谁写什么：**素材和显示画面的前端代码由老师提供，学生只写后端逻辑。
- **名字照抄：**开发文档里点名的函数（`can_put`、`put`、`line_owner`、`winner`、`is_full`、`turn`、`computer_move`），学生必须用老师给的名字，一个字母也不能改，因为测试按这些名字调用。
- **不用 class：**第一轮的项目只用函数，数据放在 string、数组、结构体或 vector 里。测试调用老师点名的函数。
- **每个阶段做对没有：**用老师提供的测试文件判断，全部通过才算这一关做完。第一轮是行为测试，比如“下在 4 号格以后，棋盘第 4 格是 X”。
- **怎么发给学生：**起始程序包由老师下载，用 U 盘发给学生，一关一个文件夹。上课时学生不用上网下载任何东西。上一关没做完也能接着做。U 盘里放解压好的文件夹，不放 zip。

## 测试怎么写

- 测试不能要求学生另外安装东西，所以用老师随包发的 `check.h`：几个检查函数，失败时打印“应该是”和“你的是”，最后打“通过 几 / 几”。按 C++98 写，Dev-C++ 自带的 g++ 和 VS Code 都能编译。
- 怎么运行：打开 `test_stageN.cpp` 编译运行（Dev-C++ 按 F11），或者在这个文件夹里 `g++ test_stageN.cpp -o test_stageN`，再运行 `test_stageN`。`tictactoe.h` 没有 `main`，不能单独编译。
- 测试文件只调用开发文档里点名的函数。说明用中文写清检查的是什么。
- Windows 控制台的中文：`check.h` 和 `play.cpp` 开头把控制台换成 UTF-8。教室电脑上显示对不对，还要老师现场确认。

## 先学哪些基础课

每关写明要先学完哪几节基础课，用基础课件的文件夹名。井字棋从 `17-function` 开始；第 2 关还要 `18-scope`（参数是副本），第 3 关要 `12-array`，第 4 关要 `09-tally`。以后的项目：

- 二维的格子地图，要先学 `14-2d-array`。
- 用结构体存角色、物品的，要先学 `19-struct`；东西个数会变、用 vector 装的，要先学 `23-vector`。

## 以后的升级

- 基础课 30 节讲了结构体（`19-struct`），还没有讲 class。等有了讲 class 的课，同一个项目再用 class 重做一轮，作为升级，就像老师大学里项目的第二部分那样。
- 那一轮才加 getter、setter 和 toString 这类功能测试。toString 在 C++ 里可以是 `toString()` 成员函数，也可以是 `operator<<`，用哪种由开发文档定。

## 规划资料

- 规划研究放在仓库外的 `~/Documents/project-research`，老师同意后才把内容搬进来。井字棋的试点已经搬进来了（`tictactoe/`），原稿不改。

## 共用的规则

- 文字一律用中文，一律用相对路径。
- 不写“必做”“选做”“作业”这类字样，题目也不分等级。
- 真实学生的姓名、联系方式和成绩不进 Git，也不写进 Issue、PR 和评论。
