<p align="center">
  <img width="100" height="100" alt="WSLackware" src="./src/WSLackwareLauncher/DistroLauncher/images/icon.png">
</p>
<p align="center">
  WSLackware: Slackware on Windows!
</p>

# Slackware for Windows Subsystem for Linux (WSL)

WSLackware is an unofficial version of Slackware for Windows Subsystem for Linux on Windows 10, 11 and Windows Server.

WSLackware comes with almost no major modifications comparing to upstream Slackware and the binaries come directly from official Slackware repositories, however WSLackware it's stripped down a bit and added small tweaks to work well with WSL.

We also provide a custom kernel for WSLackware (For WSL2 only):
<https://github.com/RezaT4795/WSLackware-kernel>

> WSLackware is NOT maintained and indorsed by official Slackware developers (yet) and it's supported on a community-based basis.

## Installation

You could use wither of this methods to install this distro on your Windows device, but first make sure:

- [WSL is configured for your Windows 10 device](https://docs.microsoft.com/en-us/windows/wsl/install-win10)

### Method 1 (Install from Microsoft Store)

You can download and install the latest version of WSLackware from Microsoft Store. [Download link](https://apps.microsoft.com/detail/9n8wpjwz4jx7)

### Method 2 (Appx installation)

Make sure:

- Developer mode is on. For that, Go to Settings / Update and Security / For Developers -> Developer mode, then toggle it on.
- Powershell scripts can be executed on your device. For that, Go to Settings / Update and Security / For Developers -> Powershell, select everything and apply.

Go to your version of choice from [releases page](https://github.com/Mohsens22/WSLackware/releases), then from assets download `WSLackware_xx.x.xx.x.Appx.zip`, then extract it, from the extracted files right click on `Install.ps1` and select *Run with Powershell*. Wait a few seconds, it will install.

You can also use [Windows Device Portal](https://docs.microsoft.com/en-us/windows/uwp/debug-test-perf/device-portal) or [App Installer to](https://www.microsoft.com/en-us/p/app-installer/9nblggh4nns1) install this package.

### Method 3 (WSL Import)

Go to your version of choice from [releases page](https://github.com/Mohsens22/WSLackware/releases), then from assets download `install.tar.gz`, then open a windows terminal,cmd or powershell in this directory and type `wsl.exe --import <DistributionName> <InstallLocation> <FileName>`, where:

- <DistributionName> is the name of your distro, you can set it to WSLackware
- <InstallLocation> is the directory that you waana save your rootfs
- <FileName> is the path to install.tar.gz

example: `wsl.exe --import WSlackware c:\WSlackware .\install.tar.gz`

Wait a few minutes, it will install.

### After installation

After installation, in the first run it will configure and setup your WSL just like other distros. You will be asked for username and password. If it took long, be patient. It might take a while depending on your device.

## About

We brought Slackware to Windows because we believed that it's the perfect distro for WSL. Firstly because of the simplicity of the init system and the whole OS in general and secondly, because of the high-performance binaries it contains, Slackware works perfectly in older devices or virtual machine; and we hope one day this project gets supported by official Slackware developers.

### Credits

- Patrick Volkerding and Slackware community for making this distro
- Microsoft for WSL and distro launcher
- PNGEgg for the Logo

#### Contributors

- [Reza Talebi](https://github.com/Rezat4795) - Distro fine-tuning, integration and kernel customization
- [Mohsen Seifi](https://github.com/Mohsens22) - Distro launcher and WSL integration

### Contributing

You can [send us issues](https://github.com/Mohsens22/WSLackware/issues) and let us know about bugs, feature requests or anything that we need to know.
