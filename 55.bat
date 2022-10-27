@echo off
set dir1=%1
set dir2=%2
for /f "delims==" %%i in ('dir /b /a %dir1%') do (
if not exist "%dir2%\%%i" del "%dir1%\%%i"
)
for /f "delims==" %%i in ('dir /b /a %dir2%') do (
if not exist "%dir1%\%%i" xcopy /E "%dir2%\%%i" %dir1% 
)
pause
