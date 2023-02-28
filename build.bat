@echo off
set RUST_BACKTRACE=full
rem set RUST_BACKTRACE=1
(hemtt.exe build) && (
	Echo Addons successfully built!
) || (
	Echo Addons failed to build!
	pause
)
