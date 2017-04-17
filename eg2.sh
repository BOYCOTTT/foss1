echo "OS version, release number, kernel version:"
echo $(uname -a)
echo ""
echo "available shells:"
echo $(cat /etc/shells)
echo ""
echo "Computer CPU information like processor type, speed etc:"
echo $(more /proc/cpuinfo)
echo ""
echo "Memory information:"
echo $(more /proc/meminfo)
echo ""
echo "Hard disk information like size of hard-disk, cache memory, model etc:"
echo $(lsblk)
echo ""
echo "File system (Mounted):"
echo $(more /proc/mounts)
echo ""
