# C++ 青少年编程：仓库规则

默认简体中文。仓库 `lixuanan2/cpp-for-youth` 按模块分文件夹，每个模块有自己的说明，各自独立构建和检查。这里只写模块之间的事。

## 模块

| 文件夹 | 页面上叫 | 说明 | 网址 |
| --- | --- | --- | --- |
| `basics/` | 基础课件 | [basics/AGENTS.md](basics/AGENTS.md) | `https://lixuanan2.github.io/cpp-for-youth/basics/` |

- 做课、改课先读 `basics/AGENTS.md`，命令都在 `basics/` 里运行。教学要求在 `basics/PROMPT.md`。
- 每个模块自带模板、工具和字体（`template/`、`tools/`、`vendor/`），不和别的模块共用。以后的模块要不要共用，等老师定了再改。

## 跨课程的规则

这门课和 Python 课（仓库 `lixuanan2/python-for-youth`）用同一套课堂结构和模板。下面这些两门课都守，单独 clone 这个仓库也能看到：

- 一律用相对路径：课件、文档和给老师的命令都不写绝对路径。
- 课件是上课讲的，不写“必做”“选做”“作业”这类字样，题目也不分等级。课后作业老师另外布置。
- 只改一个值、结果一眼能看到的地方，用黄色框让学生直接在页面上改，省掉打开 IDE 的时间。写法见 `.claude/skills/cpp-lesson/SKILL.md` 的“黄色框”。多行输出、循环、改结构、读报错、运行完整程序，或者做起来复杂、容易出错的，都用 IDE，不勉强。
- 共用文件只在 Python 仓库改：`basics/template/`、`basics/tools/`、`basics/vendor/` 和 Python 课 `basics/` 里的相同，以 `lixuanan2/python-for-youth` 为准。这里需要改动时提到那边，改好并通过检查后由维护者同步过来，再在 `basics/` 里跑检查。课程内容（`basics/lessons/`、`course.json`、`site.json`、文档）在本仓库改。

老师本机把几门课放在同一个主文件夹里，那里的 `AGENTS.md`（从这里算是 `../AGENTS.md`）另外写了怎么派活、怎么用 rsync 同步共用文件。它只是老师本机的补充，上面的规则不依赖它。

## 最外层

- `README.md`：宣传门面，写给老师、机构和逛 GitHub 的人。最上面两三句英文，正文中文。改了要同步 `home/index.html`，两者内容一致。
- `home/index.html`：网站首页 `https://lixuanan2.github.io/cpp-for-youth/`，手写，不经过构建。用到的字体由发布步骤从 `basics/vendor/fonts/` 复制到网站的 `fonts/`。
- `.github/workflows/check.yml` 先在 Windows 和 Linux 上跑各模块的检查，两个都通过后才发布网站（`deploy` 这一步）：把 `home/` 和各模块的 `dist/` 组装起来，首页在最外层，`basics/dist/` 放到 `/basics/`。推到 `main` 和手动运行都会发布，PR 只检查不发布。新增模块时在检查里加一步，在发布里加一行复制。
- `CONTRIBUTING.md`、`LICENSE.md`、`.github/` 的模板管整个仓库。
- 联系方式只写 GitHub Discussions，不公开邮箱。

## 新增模块

1. 新建 `<英文名>/` 文件夹，写它自己的 `AGENTS.md`、`CLAUDE.md`（内容 `@AGENTS.md`）和 `README.md`。
2. 在上面的表格、宣传 `README.md` 和 `home/index.html` 的“模块和进度”里加上它。
3. 在 `.github/workflows/check.yml` 里加上它的检查，在发布那一步加上它的 `dist/`。
4. 下面这些地方现在写死了 `basics/`，要一起改：`.claude/skills/cpp-lesson/SKILL.md`（或者给新模块另写一个 skill）、`.github/pull_request_template.md` 的自查清单、`CONTRIBUTING.md` 的“想直接改”和共用文件说明。
