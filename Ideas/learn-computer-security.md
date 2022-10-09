# Learning Computer Security

## About This Guide
This is an opinionated guide to learning about computer security (independently of a university or training program), starting with the absolute basics (suitable for someone without any exposure to or knowledge of computer security) and moving into progressively more difficult subject matter.

It seems that most people don't realize how much information is actually available on the internet. People love to share (especially geeks) and everything you need to become well versed in computer security is already available to you (and mostly for free). However, sometimes knowing where to start is the hardest part - which is the problem that this guide is intended to address. Therefore, this guide can accuratley be described as a 'guide to guides', with additional recommendations on effective learning and execises, based on my own experiences.

Many of the free resources are the best resources and this guide focuses on them. It is intended to provided a comprehensive plan for learning about computer security as inexpensively as possible. However it's not completely free. As the guide moves onto more complicated materials, more 'non-free' resources are referenced, as they become some of the best available sources of information.

The introductory & intermediate sections contain materials & recommendations that I considered to be fundamental knowledge for any computer security discipline. They are oritiented towards more 'practical' knowledge and hands-on learning than the latter sections, which delve more deeply into the necessary theory (but are also accompanied by recommendations how to get practical experience).

One of the things I realized while writing this was that by the time someone got to the advanced & expert sections, this guide will be of little use as they'll know enough about computer security to know what they need to study on their own. Those sections are intended more of us a 'look-ahead' for a novices, to give them some exposure of what they're getting themselves into.

## Getting Started

### Computer Security
Some intresting articles on getting started in computer security:

- [How to Break Into Security](http://krebsonsecurity.com/category/how-to-break-into-security/)
- [What I Wish I Knew Before Studying Computer Security in College](http://blog.matthewdfuller.com/2013/09/what-i-wish-i-knew-before-studying.html)
- [The Security Mindset](https://www.schneier.com/blog/archives/2008/03/the_security_mi_1.html)
- [Hacker's Manifesto](http://phrack.org/issues/7/3.html)

### Learning Effectively
Learning computer security is a huge endevour. There is lots of research on 'optimal learning' techniques.

- [Teaching Smart People How to Learn](https://hbr.org/1991/05/teaching-smart-people-how-to-learn)
- [The lesson you never got taught in school: How to learn!](http://bigthink.com/neurobonkers/assessing-the-evidence-for-the-one-thing-you-never-get-taught-in-school-how-to-learn)
- [Learning How to Learn: Powerful mental tools to help you master tough subjects](https://www.coursera.org/course/learning)
- [How to Use Google Search More Effectively](http://mashable.com/2011/11/24/google-search-infographic/)

### Time Management
Because there are so many materials to study, I recommend taking advantage of your 'dead-time.' With some basic tools, you can study at the doctor's office, while waiting in the car, on breaks at work, etc.

The basic requirement is a reading device. A used kindle can be picked up off craigslists for as little as 25$. A brand new kindle fire (which you can read books on and play training videos) is currently 99$ brand new off amazon.

If you can, get a device and preload it with the books and videos referenced below. Keep it with you at all times and get accustomed to studying whenever an opportunity presents itself.

If you find that you have lots of 'dead-time', then a good addition to your 'portable training kit' would be a small-form-factor notebook running linux. These can be had for as little as 50$ off craigslist. A slightly more expensive option (but with much better hardware) would be to get a new chromebook & [install linux on it](http://www.cnet.com/how-to/how-to-run-both-chrome-os-and-ubuntu-on-a-chromebook/).

### Practice
Hands-on experience is the cornerstone of learning computer security. This can come in many forms. This guide provides the several recomendations as effective ways to gain this experience:

- The introductory section focuses on getting familiar with virtual machines and windows-alternative operating systems to accomplish this task.
- The intermediate section provides several suggestions for various tasks that build on this knowledge.
- The advanced and expert sections focus on gaining this experience through ctf challenges.

---


## Introductory Level Learning
The introductory learning section focuses on exposure to alternative operating systems & learning about fundamental networking technologies. These are required skillsets for any discipline in computer security.

Before we move onto any advanced concepts, we first need to get familiar with virtualization, the some windows-alternative operating systems, and basic networking concepts. This can take quite a bit of time and there are no 'definitive' goals, which can be frustating for goal-oriented minds.

### Desktop Virtualization
Get comfortable with 'virtual machines.' You're going to need to work on lots of systems - playing with internals, breaking them, setting up labs etc. Desktop virtualization is one of the most resource-efficient way to make this happen. The following are some resources on getting this process started.

- [The Beginner's Guide to Creating Virtual Machines with VirtualBox](http://lifehacker.com/5204434/the-beginners-guide-to-creating-virtual-machines-with-virtualbox)
- [Oracle VM VirtualBox User Manual](https://www.virtualbox.org/manual/UserManual.html)
- [VMware Virtualization Overview](http://www.vmware.com/pdf/virtualization.pdf)

### Networking Lab with Virtual Machines
Networking is about 'how computers commmunicate' and to get hands on experience, we need to have multiple computers at our disposal that can be reconfigured quickly. The most effective way to do this is with light-weight virtual machines. I recommend having a desktop or laptop with at least 8GB of memory (16GB preferred) and a solid state drive (128GB+) that will run [virtualbox](https://www.virtualbox.org/). The solid state drive will greatly improve the performance of this sytem when working with multiple virtual machines.

We can leverage very minimal operating systems with minimal amounts of RAM on our host system to run lots of these simultaneously and construct virtual networking labs.

I recommend experimenting with [openwrt](https://openwrt.org/). OpenWRT is a lightweight linux distrubtion customized to run on networking hardware. However, we also run OpenWRT in virualbox relatively easily with minimal resources, to get some more in-depth hands-on-experience with networking fundamentals. A guide to running OpenWRt in virtualbox is available [here](http://wiki.openwrt.org/doc/howto/virtualbox).

### Cloud Virtualization
I recommend setting up a [5$/month virtual server using digitalocean](https://www.digitalocean.com/). This provides a basic introduction to command-line only access to an operating-system as well as a test bed for playing with server configuration. Be aware that this server is "on the internet" anyone can get to it and without the proper knowledge of how to secure it, it will be vulnerable and potentially get compromised. Until you are comfortable in your knowledge of linux and how to secure a server, I would not store any data on this machine that you wouldn't hand out freely to anyone. This machine, like any other virtual machine, can be rebuilt easily and on demand, which is ideal for learning on.

DigitalOcean provides various [tutorials](https://www.digitalocean.com/community/tutorials) that are practical in nature and provide some immediate, hands-on exposure to the basics. Some good starting materials are:

- [An Introduction to Cloud Hosting](http://goo.gl/RxdCmT)
- [How To Create Your First DigitalOcean Droplet Virtual Server](http://goo.gl/pQZLng)
- [An Introduction to the Linux Terminal](http://goo.gl/Hr5vvb)
- [Basic Linux Navigation and File Management](http://goo.gl/UMW62R)
- [An Introduction to Linux Permissions](http://goo.gl/FY44lB)
- [An Introduction to Linux I/O Redirection](http://goo.gl/HGO7bO)
- [How To Set Up SSH Keys](http://goo.gl/475wy4)
- [How To Connect To Your Droplet with SSH](http://goo.gl/tLjQtw)
- [How To Use Top, Netstat, Du, & Other Tools to Monitor Server Resources](http://goo.gl/968i8F)
- [How To Use Nmap to Scan for Open Ports on your VPS](http://goo.gl/7VcKnf)
- [Initial Server Setup with Ubuntu 14.04](http://goo.gl/GNEjue)
- [Additional Recommended Steps for New Ubuntu 14.04 Servers](http://goo.gl/rMCqWW)
- [How To Set Up a Host Name with DigitalOcean](http://goo.gl/TWb5V9)
- [An Introduction to Securing your Linux VPS](http://goo.gl/8F4vti)


### Man Pages
One of the most important tasks to learn at this point is how to find information. Take care to become very familiar with the linux man page documentation. Learn how to search the documentation and how to find the information you're looking for - this will be one of the most valuable resources at your disposal.

Remember to read the following:

    man man
    man apropos

### Reference Materials

- Linux
    - [Linux Fundamentals](http://linux-training.be/files/books/LinuxFun.pdf)
    - [The Linux Command Line](http://linuxcommand.org/tlcl.php)
    - [Ubuntu Pocket Guide & Reference](http://ubuntupocketguide.com/aboutthebook.html)
    - [Unix In A Nutshell](http://docstore.mik.ua/orelly/unix3/unixnut/index.htm)
    - [Learning the Unix Operating System](http://docstore.mik.ua/orelly/unix3/lunix/index.htm)
    - [Unix Power Tools](http://docstore.mik.ua/orelly/unix3/upt/index.htm)
- Networking
    - [The TCP/IP Guide](http://www.tcpipguide.com/free/t_toc.htm)
    - [TCP/IP Fundamentals for Microsoft Windows](http://www.microsoft.com/en-us/download/details.aspx?displaylang=en&id=8781)
    - [Computer Networking Tutorial](http://freevideolectures.com/Course/3162/Computer-Networking-Tutorial)
    - [Free CCNA Training from PluralSight](http://blog.pluralsight.com/free-computer-training-videos/free-ccna-training-videos)
    - [DNS for Rocket Scientists](http://www.zytrax.com/books/dns/)
    - [Wikiversity - Computer Networks](https://en.wikiversity.org/wiki/Computer_Networks/Concepts)
- Security
    - [The NIST Handbook - An Introduction to Computer Security](http://csrc.nist.gov/publications/nistpubs/800-12/800-12-html/index.html)

---


## Intermediate Level Learning
The intermediate section delves deeper into more funadamentals, heavily focused on the linux operating system, additional tools, and basic scripting (programming in high-level languages), which is an essential skillset for any any discipline in computer security.

### Things To Do

- Study & monitor your shell server logs. Figure out how to identify malicious traffic and ensure that it's being blocked.
- Setup a cloud server and secure it.
- Setup a command-line irc client on your cloud server and run it in a persistent shell. Familiarize yourself with irc.
- Setup a command-line mail client on your server.
- Setup pgp with your command-line mail client.
- Use your shell server to tunnel traffic through an SSH proxy.


### Reference Materials

- Linux Operating System
    - [Linux Servers](http://linux-training.be/files/books/LinuxSrv.pdf)
    - [Linux System Administration](http://linux-training.be/files/books/LinuxAdm.pdf)
    - [Linux Network Administrator's Guide, 2nd Edition](http://www.oreilly.com/openbook/linag2/book/index.html)
- GNU Bash & Shell Scripting
    - [Bourne-Again SHell manual](https://www.gnu.org/software/bash/manual/)
    - [Bash Guide for Beginners](http://www.tldp.org/LDP/Bash-Beginners-Guide/html/)
    - [Advanced Bash-Scripting Guide](http://tldp.org/LDP/abs/html/)
- Sed, Awk & Gawk
    - [sed & awk](http://docstore.mik.ua/orelly/unix3/sedawk/index.htm)
    - [Gawk: Effective AWK Programming](https://www.gnu.org/software/gawk/manual/)
- PGP/GnuPG
    - [The Beginner's Guide to PGP](http://www.bitcoinnotbombs.com/beginners-guide-to-pgp/)
    - [The GNU Privacy Handbook](https://www.gnupg.org/gph/en/manual.html)
    - [GnuPG for Daily Use](http://moser-isi.ethz.ch/gpg.html)
    - [GPG/PGP Basics](http://aplawrence.com/Basics/gpg.html)
- Vim
    - [Learning the vi Editor](http://docstore.mik.ua/orelly/unix3/vi/index.htm)
    - [Vim Cookbook](http://www.oualline.com/vim/vim-cook.html)
    - [Learn Vimscript the Hard Way](http://learnvimscriptthehardway.stevelosh.com/)
- Git
    - [git - the simple guide](https://rogerdudler.github.io/git-guide/)
    - [Getting Started - Git Basics](http://git-scm.com/book/en/v2/Getting-Started-Git-Basics)
- IRC
    - [irchelp.org](http://www.irchelp.org/)
- Regular Expressions
    - [Learn Regex The Hard Way](http://regex.learncodethehardway.org/book/)
    - [RegexOne](http://regexone.com/)
    - [RegularExpressions.info](http://www.regular-expressions.info/)
- Python Programming
    - [Non-Programmer's Tutorial for Python 2.6](https://en.wikibooks.org/wiki/Non-Programmer%27s_Tutorial_for_Python_2.6)
    - [Learn Python The Hard Way](http://learnpythonthehardway.org/book/)
    - [Dive Into Python3](http://getpython3.com/diveintopython3/)
    - [Python Cookbook](http://chimera.labs.oreilly.com/books/1230000000393/index.html)
    - [TheNewBoston - Python Programming Tutorials](https://www.youtube.com/playlist?list=PLEA1FEF17E1E5C0DA&feature=plcp)
    - [ShowMeDo Python Tutorials](http://showmedo.com/videotutorials/python)


---

## Advanced Level Subjects
The advanced materials branch into advanced level subject areas. Typically, a career in computer security will require only passing knowledge from all these areas, with an in-depth knowledge of those areas specifically related to a particular career field.


### Challenges
The following two 'challenges' are security related and require 'thinking outside the box'. I consider them to be a good introduction to computer security.

- [HackThisSite](http://www.hackthissite.org/)
- [hax.tor.hu](http://hax.tor.hu/)


### Subjects

#### Networking

- [The Second Internet - Reinventing Computer Networking with IPv6](http://www.ipv6forum.com/dl/books/the_second_internet.pdf)

#### The Linux Operating System

- [Linux From Scratch](http://www.linuxfromscratch.org/)
- [Linux Kernel In a Nutshell](http://www.kroah.com/lkn/)
- [User Mode Linux](http://tecmint.tradepub.com/free/w_infk09/?p=w_infk09)
- [Linux Device Drivers, 3rd Edition](http://www.oreilly.com/openbook/linuxdrive3/book/index.html)
- [Understanding the Linux Virtual Memory Manager](http://ptgmedia.pearsoncmg.com/images/0131453483/downloads/gorman_book.pdf)
- [Unix Network Programming with TCP/IP](http://alandix.com/academic/tutorials/tcpip/TCP-IP-complete.pdf)

#### The Windows Operating System

- [Windows Internals, Part 1 (6th Edition) (Developer Reference)](http://goo.gl/xkV7Qj)
- [Windows Internals, Part 2 (6th Edition) (Developer Reference)](http://goo.gl/imM3GV)

#### Open-Source Software Development Tools

- [The Unix Programming Environment](http://markburgess.org/unix/unix.pdf)
- [Advanced Linux Programming](http://www.advancedlinuxprogramming.com/)
- [An Introduction to GCC](http://www.network-theory.co.uk/docs/gccintro/)
- [GNU Make](https://www.gnu.org/software/make/manual/make.pdf)

#### Assembly Language

- [Machine Language For Beginners](http://www.atariarchives.org/mlb/)
- [WikiBooks - x86 Disassembly](https://en.wikibooks.org/wiki/X86_Disassembly)
- [Linux Assembly Language Megaprimer](http://www.securitytube.net/groups?operation=view&groupId=5)
- [Windows Assembly Language Megaprimer](http://www.securitytube.net/groups?operation=view&groupId=6)

#### Computer Architecture

- [Introductory Intel x86: Architecture, Assembly, Applications, & Alliteration](http://opensecuritytraining.info/IntroX86.html)
- [Intermediate Intel x86: Architecture, Assembly, Applications, & Alliteration](http://opensecuritytraining.info/IntermediateX86.html)
- [The Life of Binaries](http://opensecuritytraining.info/LifeOfBinaries.html)
- [Linkers & Loaders](http://www.iecc.com/linker/)

#### Network Security

- [Flows Analysis & Network Hunting](http://opensecuritytraining.info/Flow.html)
- [Hacking Techniques & Intrusion Detection](http://opensecuritytraining.info/HTID.html)
- [Introduction to Network Forensics](http://opensecuritytraining.info/NetworkForensics.html)
- [Pcap Analysis & Network Hunting](http://opensecuritytraining.info/Pcap.html)
- [Offensive, Defensive, and Forensic Techniques for Determining Web User Identity](http://opensecuritytraining.info/WebIdentity.html)

#### Web Application Security

- [WikiBooks - Web Application Security Guide](https://en.wikibooks.org/wiki/Web_Application_Security_Guide)

---


## Expert Level Subjects
These materials dive deeply into the most advanced topics in computer security.


### Challenges

- [Exploit Exercises](https://exploit-exercises.com/)
- [OverTheWire](http://overthewire.org/wargames/)
- [Smash The Stack Wargaming Network](http://smashthestack.org/)
- [WeChall](http://www.wechall.net/challs/)

### Subjects

#### Computer Forensics

- [The Basics of Digital Forensics: The Primer for Getting Started in Digital Forensics](http://goo.gl/DwUEYc)
- [Digital Forensics with Open Source Tools](http://goo.gl/sWfop)
- [Windows Registry Forensics: Advanced Digital Forensic Analysis of the Windows Registry](http://goo.gl/UM74IP)
- [File System Forensic Analysis](http://goo.gl/YQkBmc)
- [The Art of Memory Forensics: Detecting Malware and Threats in Windows, Linux, and Mac Memory](http://goo.gl/6ZqT6p)
- [Rootkits: What they are, and how to find them](http://opensecuritytraining.info/Rootkits.html)

#### Cryptography

- [Fundamentals of Cryptology - A Professional Reference and Interactive Tutorial](http://hyperelliptic.org/tanja/teaching/cryptoI13/cryptodict.pdf)
- [Theory and Practice of Cryptography and Network Security Protocols and Technologies](http://www.intechopen.com/books/theory-and-practice-of-cryptography-and-network-security-protocols-and-technologies)
- [Cryptography and Security in Computing](http://www.intechopen.com/books/cryptography-and-security-in-computing)
- [Applied Cryptography and Network Security](http://www.intechopen.com/books/applied-cryptography-and-network-security)

#### Exploitation & Vulnerabilities

- [Buffer Overflow Exploitation Megaprimer](http://www.securitytube.net/groups?operation=view&groupId=7)
- [Format String Vulnerabilities Megaprimer](http://www.securitytube.net/groups?operation=view&groupId=3)
- [Exploit Research Megaprimer](http://www.securitytube.net/groups?operation=view&groupId=7)
- [Metasploit Framework Course Materials](http://www.securitytube.net/groups?operation=view&groupId=10)
- [The Shellcoder's Handbook: Discovering and Exploiting Security Holes](http://goo.gl/i7SQZc)

#### Reverse Engineering

- [Reverse Engineering for Beginners](http://beginners.re/)
- [Introduction To Reverse Engineering Software](http://opensecuritytraining.info/IntroductionToReverseEngineering.html)
- [Practical Reverse Engineering: x86, x64, ARM, Windows Kernel, Reversing Tools, and Obfuscation](http://goo.gl/wxWYug)
- [The IDA Pro Book: The Unofficial Guide to the World's Most Popular Disassembler](http://goo.gl/CfYYww)

#### Advanced Python

- [Invent with Python: Hacking Secret Ciphers with Python](http://inventwithpython.com/hacking/chapters/)
- [Gray Hat Python: Python Programming for Hackers and Reverse Engineers](http://goo.gl/knuDwe)
- [Violent Python: A Cookbook for Hackers, Forensic Analysts, Penetration Testers and Security Engineers](http://goo.gl/MYWd45)
- [Black Hat Python: Python Programming for Hackers and Pentesters](http://goo.gl/U4qSXz)

#### Penetration Testing

- [Basic Security Testing with Kali Linux](http://goo.gl/tJcFY0)
- [Metasploit: The Penetration Tester's Guide](http://goo.gl/R9d7Kn)

#### Malware Analysis

- [Practical Malware Analysis: The Hands-On Guide to Dissecting Malicious Software](http://goo.gl/T3ixdC)
- [Reverse Engineering Malware](http://opensecuritytraining.info/ReverseEngineeringMalware.html)

---


## External References

- Computer Security Manuals & References
    - [O'Reilly - Open Books](http://www.oreilly.com/openbook/)
    - [Tecmint - Free Linux Books](http://www.tecmint.com/10-useful-free-linux-ebooks-for-newbies-and-administrators/)
    - [FreeComputerBooks.com](http://freecomputerbooks.com/)
    - [Free Programming Books](https://github.com/vhf/free-programming-books/blob/master/free-programming-books.md)
    - [Free Online Computer Science Classes](http://www.edudemic.com/the-25-best-places-to-take-free-online-computer-science-classes/)
    - [Free Video Lectures from 30+ Universities](http://freevideolectures.com/)
    - [Wikiversity](https://en.wikiversity.org/wiki/Wikiversity:Main_Page)
    - [SecurityTube Collections](http://www.securitytube.net/groups?operation=viewall&groupId=0)
    - [OpenSecurityTraining.info](http://opensecuritytraining.info/)
- Computer Security Challenges
    - [What “hacking” competitions/challenges exist?](https://security.stackexchange.com/questions/3592/what-hacking-competitions-challenges-exist)
    - [captf.com](http://captf.com/)
    - [ctftime.org](https://ctftime.org/)

