<p align="center">
  <img width="100" height="100" alt="WSLackware" src="./src/WSLackwareLauncher/DistroLauncher/images/icon.png">
</p>
<p align="center">
  WSLackware: Slackware on Windows!
</p>

# Slackware for Windows Subsystem for Linux (WSL)

WSLackware is a version of Slackware optimized for Windows Subsystem for Linux on Windows 10 and Windows 10 Server.

WSLackware comes with almost no major modifications comparing to upstream Slackware and the binaries come directly from official Slackware repositories, however WSLackware it's stripped down a bit and added small tweaks to work well with WSL.

WSLackware is NOT maintained and indorsed by official Slackware developers (yet) and it's supported on a community-based basis. 

## Installation

Make sure ...
- [WSL is configured for your Windows 10 device](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
- Developer mode is on. For that, Go to Settings / Update and Security / For Developers -> Developer mode, then toggle it on.
- Powershell scripts can be executed on your device. For that, Go to Settings / Update and Security / For Developers -> Powershell, select everything and apply.

### Method 1 (recommended)

Go to your version of choice from [releases page](https://github.com/Mohsens22/WSLackware/releases), then from assets download `WSLackware_xx.x.xx.x.Appx.zip`, then extract it, from the extracted files right click on `Install.ps1` and select *Run with Powershell*. Wait a few seconds, it will install.

You can also use [Windows Device Portal](https://docs.microsoft.com/en-us/windows/uwp/debug-test-perf/device-portal) or [App Installer to](https://www.microsoft.com/en-us/p/app-installer/9nblggh4nns1) install this package.

### Method 2 (advanced)

Go to your version of choice from [releases page](https://github.com/Mohsens22/WSLackware/releases), then from assets download `install.tar.gz`, then open a windows terminal,cmd or powershell in this directory and type `wsl.exe --import <DistributionName> <InstallLocation> <FileName>`, where:

- <DistributionName> is the name of your distro, you can set it to WSLackware
- <InstallLocation> is the directory that you waana save your rootfs
- <FileName> is the path to install.tar.gz

example: `wsl.exe --import WSlackware c:\WSlackware .\install.tar.gz`

Wait a few seconds, it will install.

> Note: [With this technique](https://docs.microsoft.com/en-us/windows/wsl/reference) you can install many instanced of the same distro.

### After installation

After installation, in the first run it will configure and setup your WSL just like other distros. You will be asked for username and password. If it took long, be patient. It might take a while depending on your device.

## About

We brought Slackware to Windows because be believed that it's the perfect distro for WSL. Firstly because of the simplicity of the init system and the whole OS in general and high-performance binaries it contains; and we hope one day this project gets supported by official Slackware developers.

### Credits

- Patrick Volkerding and Slackware community for making this distro
- Microsoft for WSL and distro launcher
- PNGEgg for the Logo

#### Contrubutors

- [Reza Talebi](https://github.com/Rezat4795) - Distro fine-tuning and integration
- [Mohsen Seifi](https://github.com/Mohsens22) - Distro launcher and WSL integration

### Contributing

You can [send us issues](https://github.com/Mohsens22/WSLackware/issues) and let us know about bugs, feature requests or anything that we need to know.
