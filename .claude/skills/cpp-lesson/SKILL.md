---
name: cpp-lesson
description: 做或修改 C++ 少儿编程网页课件。老师说“做下一课”“做第几课”“做一节 XX 课”“改第几页”“迁移旧模块”时使用。
---

# 做一节 C++ 课

先读 [PROMPT.md](../../../basics/PROMPT.md)，那里是全部教学要求。这里只规定操作顺序。一次只做一节课。

课都在“基础课件”模块 `basics/` 里。下面的路径都从 `basics/` 算起，命令也都在 `basics/` 里运行（从仓库最外层先 `cd basics`）。模块规则见 [basics/AGENTS.md](../../../basics/AGENTS.md)。

## 1. 定设计

读 `course.json` 和上一节课的 `slides.html`，确认学生已经学过什么。再读 [模块内容摘要](../../../basics/docs/module-baseline.md) 里这一节，需要细节时读旧仓库的这一个 `习题/PART_xx`，实际进度看旧仓库的 `教学记录/`。给老师一份大纲：每页一句话，标出小测、预测、追踪、找错和项目放在哪里。

大纲超过约 30 页时，主动提出在哪里分上下集。

大纲定好后直接做，不用等老师审核，交付时把大纲和成品一起给老师。只改错字或单页时跳过这步。

## 2. 写程序和测试

新建 `lessons/<编号-英文名>/`，复制上一节的结构，在 `course.json` 给这节课补上 `id`、`tag` 和 `file`。编号用新课号，比如 `04-branches`。分集时用 `05a-for-loop`、`05b-for-loop`，标题写“for循环（上集）”，每集占一行。

- `solutions/`：答案，每个都要有测试。只阅读的错误程序叫 `demo_*.cpp`。
- `starter/`：起始程序。小改写放例题程序，新题只留框架和英文 TODO。
- `tests/contracts.json`：普通和边界数据。
- `tests/claims.json`：页面上说过的输出和报错，含小测的每个选项。报错写 `"error": {"gcc": "…", "clang": "…"}`。
- `tasks.json`：题目、角色（语法小演示、基础例题、学生小改写、独立迁移、创作项目）和页码。

## 3. 写页面

只在 `slides.html` 写 `<section class="slide">`。先从 `lessons/04-branches/slides.html` 找现成写法，组件都在那里：

| 需要 | 写法 |
| --- | --- |
| 编辑器 | `.editor` + `.tab` + `pre.code data-file` + `.ln` |
| 只显示关键几行 | `pre.code data-file="…" data-lines="7-13" style="counter-reset:ln 6"`，IDE 带完整程序 |
| 代码只是片段 | 页面只放几行、不是完整程序时，在 `tests/claims.json` 里给这页那条完整程序加 `"ide": true`，“本页代码进 IDE”就带它。读报错页也这样，学生在 IDE 里看到的是页面讲的同一个报错。停不下来的程序只写 `page`、`ide`、`code`，检查只编译不运行。`check.py` 会查每页进 IDE 的代码是不是完整、能运行的程序 |
| 语法高亮 | `.f` 函数，`.k` 关键字，`.s` 字符串，`.m` 数字 |
| 分步揭晓 | 页面加 `data-steps="3" data-at="3"`，元素加 `.step .s2`、`.only1`，行加 `.l1` |
| 选择小测 | `.quiz data-right="序号"`，选项加 `data-fb`，后面放 `.fb` |
| 点行找错 | `pre.code.pick data-bug data-yes data-no`，后面放 `.fb` |
| 黄色框 | 代码行里放 `input.slot data-var="名字" value="默认值"`，数字框加 `maxlength="4" inputmode="numeric"`，文字框加 `data-kind="text"`。结果放 `.live-out` 里的 `b data-eval`，写好默认结果：`a / b` 这样的运算，或者只写一个名字。几次运算从左往右算，页面代码要用括号写成同样的顺序。一页最多 2 个框，`data-eval` 按 `cout` 的顺序写。`check_browser` 会把所有组合拿真实 C++ 跑一遍。只改一个值、结果一眼能看到时才用；小改写和独立迁移的程序不要做成黄色框。例子见第 1、2、3 课 |
| IDE 按钮 | `a.ide`，默认带本页程序；`data-code-file="starter/…"` 带起始程序 |
| 章节跳转 | 每章第一页的 `<section>` 加 `data-chapter="名字"` |
| 满版颜色 | `.dark` 听讲，`.band` 动手，`.clay` 挑战，`.olive` 复盘 |

页面用绝对定位，以 1920×1080 为准。放不下就拆页，不缩小字号。

## 4. 构建和检查

在 `basics/` 里运行：

```sh
python3 tools/build.py --pdf
python3 tools/check.py
node tools/check_browser.mjs
```

然后看 `.preview/` 里的截图，每页和每个分步都要看。自动检查量不出丑不丑。

## 5. 交给老师

打开 `dist/<课>/index.html`，说明验证了什么、没验证什么。Windows 和投影只有老师现场能确认。更新 `basics/README.md` 的课程表；课数变了，同时改仓库最外层宣传 `README.md` 和 `home/index.html` 里的节数。提交并推送，看 CI 的 Windows 和 GCC 结果。老师的修改意见如果是通用的，写回 PROMPT.md，下节课就不会再犯。
