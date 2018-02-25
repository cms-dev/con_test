# Importing the contest

First ensure that you have installed the [Contest Management System](http://cms-dev.github.io/) correctly, that you have specified the correct database credentials in `cms.conf` and that you have initialized the database with `cmsInitDB`.

Then:
1. Import the users with: `cmsImportUser --all -L italy_yaml .`
2. Import the contest and the tasks with: `cmsImportContest -i -L italy_yaml .`
