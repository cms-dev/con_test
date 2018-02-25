# Importing the contest

Assuming that you've installed cms correctly, specified correct database credentials in `cms.conf` and initialised the database with `cmsInitDB`

1. Import users with: `cmsImportUser --all -L italy_yaml .`
2. Import contest + tasks with: `cmsImportContest -i -L italy_yaml .`
