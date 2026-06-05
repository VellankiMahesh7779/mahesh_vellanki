1. 🐧 Linux Introduction
2. 
Linux is an open-source operating system similar to Unix.

It is widely used in servers, DevOps, cloud, networking, containers.

Everything in Linux is treated as a file (hardware, processes, configs).

Structure:

/bin → basic commands (ls, cp, mv)

/etc → system configs

/home → user files

/var → logs, spool

/tmp → temporary files

👉 For DevOps engineers, Linux is the foundation for tools like Docker, Kubernetes, and Jenkins agents.

********************************************************************************************

2. ⚙️ System Commands

These commands give system information:

uname -a → Kernel & OS info

hostname → Show/change system name

uptime → System running time + load average

date → Display/set date and time

cal → Calendar

whoami → Current logged-in user

id → Show user ID & groups

df -h → Disk space usage

du -sh /path → Folder size

free -m → Memory (RAM) usage

*************************************************************************************

3. 💻 Hardware Commands

For checking CPU, RAM, disks, devices:

lscpu → CPU info (cores, threads)

lsblk → List block devices (disks/partitions)

lspci → PCI devices (network cards, GPU)

lsusb → USB devices

dmidecode → Detailed hardware info (BIOS, RAM, motherboard)

top / htop → Running processes, CPU, memory usage

******************************************************************************************

4. 📂 File Commands

To create, manage, and view files:

pwd → Current directory path

ls -l → List with details

cd → Change directory

touch file.txt → Create empty file

mkdir dir1 → Create directory

rm file.txt → Delete file

rm -r dir1 → Delete directory recursively

cp file1 file2 → Copy file

mv old new → Move/rename

cat file.txt → Print file

less file.txt → Scroll file

head -n 10 file.txt → First 10 lines

tail -f log.txt → Live log view

*************************************************************************************

5. 👤 User Commands

For user management:

who / w → Show logged-in users

users → List logged-in usernames

adduser mahesh → Create user

passwd mahesh → Set password

su mahesh → Switch user

groups → Show user groups

id mahesh → User UID, GID, groups

****************************************************************************************

6. 🔐 Permission Commands

Linux has 3 permission types:

r = read, w = write, x = execute

Format:

-rwxr-xr--


Owner: rwx → full access

Group: r-x → read + execute

Others: r-- → read only

Commands:

ls -l → Show permissions

chmod 755 file.sh → Change permission

chown user:group file.txt → Change ownership

umask → Default file permission mask

**************************************************************************************

7. 🔍 Search Commands

Search for files and text:

find / -name file.txt → Find by name

find /home -type d -name logs → Find directory

grep "error" logfile.txt → Search word in file

grep -i "error" logfile.txt → Case-insensitive search

grep -r "TODO" /project → Recursive search

locate file.txt → Quick search (uses prebuilt index)

*****************************************************************************************

8. 📝 Editors (VIM)

Vim is a powerful Linux editor.

Open: vim file.txt

Modes:

i → insert (edit)

Esc → command mode

Save & Quit:

:w → save

:q → quit

:wq → save + quit

:q! → quit without saving

Commands:

/word → search

dd → delete line

yy → copy line

p → paste

*************************************************************************

9. 🌐 Networking Commands

To test and configure networks:

ping google.com → Check connectivity

ip a / ifconfig → Network interfaces

netstat -tulnp / ss -tulnp → Show listening ports

nslookup google.com → DNS lookup

traceroute google.com → Path packets take

curl http://example.com → Fetch webpage

wget http://example.com/file.zip → Download file

scp file user@host:/path → Secure file transfer

ssh user@host → Remote login

*********************************************************************

10. 🔧 Software Commands

Package management + services:

Debian/Ubuntu:

apt update && apt upgrade → Update packages

apt install nginx → Install software

dpkg -l → List installed packages

RHEL/CentOS:

yum install httpd / dnf install httpd → Install software

rpm -qa → List installed packages

Services (systemd):

systemctl start nginx → Start

systemctl stop nginx → Stop

systemctl enable nginx → Auto-start at boot

systemctl status nginx → Status

***********************************************************************************

11. 📜 Shell Scripting on Bash

Used to automate tasks.

Example Script:
#!/bin/bash

# Print hello
echo "Hello, $USER"

# Variables
NAME="Mahesh"
echo "My name is $NAME"

# Condition
if [ -f "/etc/passwd" ]; then
  echo "File exists"
else
  echo "File not found"
fi

# Loop
for i in 1 2 3
do
  echo "Number: $i"
done

# Function
greet() {
  echo "Welcome $1"
}
greet "Mahesh"


👉 Make script executable:

chmod +x script.sh
./script.sh


*******************************************************************************
✅ Summary

Intro: Understand Linux structure

System/Hardware: Check OS, CPU, memory, uptime

Files: Create, copy, move, delete

Users & Permissions: Manage access

Search: Find files & text

Editors: Use Vim for editing

Networking: Ping, curl, ssh, scp

Software: Install & manage services

Shell Scripting: Automate repetitive tasks
