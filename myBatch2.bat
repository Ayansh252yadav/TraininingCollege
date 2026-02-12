@echo off
D:\training\firstDay\hello.exe
D:\training\secondDay\minConditonal.exe

@if %ERRORLEVEL% == 0 goto success

@echo "unsuccessfull"
calc
goto end

:success
@echo "successfull"
time
date
notepad

:end
