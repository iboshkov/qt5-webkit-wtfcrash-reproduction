# qt5-webkit-wtfcrash-reproduction
Simple reproduction code for a strange bug I encountered.
Here's the output from WinDbg:
```
ASSERTION FAILED: !needsLayout()
c:\work\build\qt5_workdir\w\s\qtwebkit\source\webcore\rendering\RenderView.cpp(409) : WebCore::RenderView::paint
1   10FF6537
2   10172BF9
3   10193BE8
4   10192AC5
5   104ABEA8
6   104A8F8B
7   104F13E6
8   10A71F15
9   10A76465
10  10A67E8F
11  104622EE
12  10461774
13  10461687
14  1046172F
15  1046172F
16  1046172F
17  1046172F
18  1046172F
19  1046172F
20  1046172F
21  1046172F
22  1046172F
23  1046172F
24  101BCA64
25  100886C0
26  10088AE0
27  0FBE87D5
28  10238AE9
29  10A58B2A
30  10A58A16
31  10C94722
(1b14.1a20): Access violation - code c0000005 (first chance)
First chance exceptions are reported before any exception handling.
This exception may be expected and handled.
*** WARNING: Unable to verify checksum for F:\gsoc\BuildmLearn-Toolkit\install\Qt5WebKitd.dll
Qt5WebKitd!WTFCrash+0x17:
10ff6537 c705efbeadbb00000000 mov dword ptr ds:[0BBADBEEFh],0 ds:002b:bbadbeef=????????
```
