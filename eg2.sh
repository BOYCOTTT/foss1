echo "OS version, release number, kernel version:"
echo $(uname -a)
echo "available shells:"
echo $(cat /etc/shells)
echo "Computer CPU information like processor type, speed etc:"
echo $(more /proc/cpuinfo)
echo "Memory information:"
echo $(more /proc/meminfo)
echo "Hard disk information like size of hard-disk, cache memory, model etc:"
echo $(lsblk)
echo "File system (Mounted):"
echo $(more /proc/mounts)
