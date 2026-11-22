# C 语言循环边界

这份示例集中观察三个问题：什么时候进入循环，最后一次执行用的是什么值，以及退出后计数器停在哪里。

## 先预测，再运行

| 场景 | 观察点 |
| --- | --- |
| 从 1 数到 3 | `i <= 3` 时最后打印哪个数 |
| 从 1 累加 | `i <= 5` 和 `i < 5` 的结果相差多少 |
| 从 1 数到 4 | 最后打印的值与退出时的值有什么区别 |
| 初始值已经到达边界 | `i = 3` 时 `while (i < 3)` 会执行几次 |
| 从 5 倒数到 1 | 最后打印的值和循环退出时的值各是多少 |

## 编译运行

在仓库根目录执行，需可运行的 GCC。

Windows PowerShell

```powershell
gcc -std=c11 -Wall -Wextra -Werror -pedantic c/loops/loops.c -o loops.exe
if ($LASTEXITCODE -eq 0) { .\loops.exe }
```

Linux

```sh
gcc -std=c11 -Wall -Wextra -Werror -pedantic c/loops/loops.c -o /tmp/study-loops
/tmp/study-loops
```

将终端的五行输出与 [expected.txt](expected.txt) 对照。

## 独立练习

1. 先写出把 `i <= 5` 改为 `i < 5` 后预计会出现的第二行，以及你认为最后一次进入循环时的 `i`。
2. 修改 `loops.c` 中第一段累加的条件，再编译运行。对照你自己的预测。
3. 如果将改动作为新提交，同步更新 `expected.txt`，并在提交说明里记录预测、实际结果和原因。也可以保留原示例，另交一份自己写的验证记录。

示例基于此前用于 C 语言复习的演示代码，由 Codex 整理。
