# VNote
![CI-Windows](https://github.com/vnotex/vnote/workflows/CI-Windows/badge.svg) ![CI-Linux](https://github.com/vnotex/vnote/workflows/CI-Linux/badge.svg) ![CI-MacOS](https://github.com/vnotex/vnote/workflows/CI-MacOS/badge.svg)

个人定制版本主要改动：
1. Vnote配置数据的两个文件夹缺省保存在应用程序当前目录下。

2. 编辑器的文本之间的行间距拉大，并可配置调整，空白行则不作拉大。
  文本行间距，缺省为0.5；代码行间距，缺省为0.2。  

3. 快速创建笔记，缺省创建笔记并打开，关闭时自动提醒重命名笔记。
  工具栏图标按钮、Ctrl+N、tab空白处双击、无笔记打开时双击背景都可快速创建并打开。
  原有模式保留，可通过热键Ctrl+Alt+N激活，选择模板来创建笔记。  

4. 当前tab页的笔记文件名加粗体字体显示，其他tab页正常字体。
  存在分割窗口的时候，不同窗口内的笔记文件名均加粗，不在当前窗口内的斜体显示。  

5. 回车换行的查找替换功能。
  正则表达式模式下，支持`\n`代表的回车换行符的查找和替换。

6. 部分防盗链网页图片下载功能。
  在文档头部手工填写referer信息，例如：@@https://cloud.tencent.com/，再拷贝图片链接，即可下载相关图片。  

7. 修正快捷键在中文输入法状态下的问题
  中文输入法，输入前导键之后，允许字母热键输入。修正片段插入、界面导航存在的小问题。

8. Vnote界面图标和界面的微调。
  基于开源免费svg调整了界面图标。  



[简体中文](README_zh_CN.md)

A pleasant note-taking platform.

For more information, please visit [**VNote's Home Page**](https://vnotex.github.io/vnote) or [Home Page on Gitee](https://tamlok.gitee.io/vnote).

![VNote](pics/vnote.png)

## Description
**VNote** is a Qt-based, free and open source note-taking application, focusing on Markdown now. VNote is designed to provide a pleasant note-taking platform with excellent editing experience.

VNote is **NOT** just a simple editor for Markdown. By providing notes management, VNote makes taking notes in Markdown simpler. In the future, VNote will support more formats besides Markdown.

Utilizing Qt, VNote could run on **Linux**, **Windows**, and **macOS**.

![Main](pics/main.png)

## Downloads
Continuous builds on `master` branch could be found at the [Continuous Build](https://github.com/vnotex/vnote/releases/tag/continuous-build) release.

Latest stable builds could be found at the [latest release](https://github.com/vnotex/vnote/releases/latest). Alternative download services are available:

* [Tianyi Netdisk](https://cloud.189.cn/t/Av67NvmEJVBv)
* [Baidu Netdisk](https://pan.baidu.com/s/1Fou1flmBsQUQ8Qs9V_M6Aw) with the code `note`

## Supports
* [GitHub Issues](https://github.com/vnotex/vnote/issues);
* Email: `tamlokveer at gmail.com`;
* [Slack](https://join.slack.com/t/vnote/shared_invite/enQtNDg2MzY0NDg3NzI4LTVhMzBlOTY0YzVhMmQyMTFmZDdhY2M3MDQxYTBjOTA2Y2IxOGRiZjg2NzdhMjkzYmUyY2VkMWJlZTNhMTQyODU);
* [Telegram](https://t.me/vnotex);
* WeChat Public Account: vnotex;

## Donate
You could help VNote's development in many ways.

* Keep monitoring VNote and sending feedback for improvement.
* Spread and promote VNote to your friends. Popularity is a strong power to drive developers.
* Participate in the development of VNote and send [Pull Request](https://github.com/vnotex/vnote/pulls) to make VNote perfect.
* Last, really appreciate your donations to VNote if VNote does help.

**PayPal**: [PayPal.Me/vnotemd](https://www.paypal.me/vnotemd)

**Alipay**: `tamlokveer@gmail.com`

<img src="pics/alipay.png" width="256px" height="256px" />

**WeChat**

<img src="pics/wechat_pay.png" width="256px" height="256px" />

Thank [users who donated to VNote](https://github.com/vnotex/vnote/wiki/Donate-List)!

## License
VNote is licensed under [GNU LGPLv3](https://opensource.org/licenses/LGPL-3.0). Code base of VNote could be used freely by VNoteX.
