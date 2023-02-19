@echo off
setlocal
set RUST_BACKTRACE=full
rem set RUST_BACKTRACE=1
set hemtt_exe=P:\Tools\hemtt\hemtt.exe
if "%1"=="-p" set should_pause=1
%hemtt_exe% build
if "%should_pause%"=="1" pause
endlocal