# TEC Testing

TEC Testing Drupal Distribution

## Dependencies

* VirtualBox: 5.x
* Vagrant: 1.7.x
* Ansible (optional, but recommended): 1.9.x

### Mac

```bash
brew cask install virtualbox
brew cask install vagrant
brew install ansible
```

### Vagrant

Two plugins are required.

```bash
vagrant plugin install vagrant-hostsupdater
vagrant plugin install vagrant-auto_network
```

## Getting started

### Prepare the local site:

Prepare for local development:

* Visit http://editorconfig.org/ for instructions on how to configure your IDE or editor to use the included `.editorconfig` file.
* Copy example.config.yml to default.config.yml
* Edit default.config.yml and update the following:
    * vagrant_synced_folders - local_path: `your-path` (modify as necessary)
* [Mac/Linux only] Install Ansible Galaxy roles required for this VM: `sudo ansible-galaxy install -r provisioning/requirements.yml --force`

* `vagrant up`

Install Dependencies:
* `composer install`
* `npm install`

Prepare the site:

* `./scripts/tec-testing_local_install.sh`

## Structure

**TEC Testing Distribution**

* `.gitignore`
* `/build/` - Build working directory.
* `/docs` - Documentation for the distribution.
* `/gulp-tasks` - Individual Gulp tasks.
* `/patches` - Drupal patches.
* `/provisioning` - Drupal VM Ansible playbooks.
* `/scripts` - Utilities.
* `composer.json` - [Composer](https://getcomposer.org) PHP dependency manager configuration.
* `composer.lock` - locks Composer to specific versions.
* `.editorconfig` - Defines and maintains consistent coding styles between different editors
* `.eslintrc` - JavaScript coding standards.
* `example.config.yml` - Drupal VM.
* `gulpfile.js` - [Gulp](http://gulpjs.com/) JavaScript task runner; use `gulp help` for details.
* `package.json` - Node.JS packages.
* `README.md`
* `Vagrantfile` - Drupal VM.

## Behat Testing

Uses the [Drupal Extension](http://behat-drupal-extension.readthedocs.org/en/3.1/index.html) to Behat and Mink.

```bash
./scripts/local_behat.sh
```
### Wraith (Visual Regression)
In this generator we include Wraith for visual regression testing, to use it go to `wraith/configs/capture.yaml` and change the domains urls, the paths you want to test and the breakpoints if needed, then go back to the root path of your project and run:

```
./scripts/tec-testing_wraith_testing.sh
```
Once finished the execution of the script go to:

```
wraith/shots
```
And that's it, now you can make sure everything looks as expected just by opening the generated gallery in your browser.
