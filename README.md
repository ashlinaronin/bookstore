Paulie's Books
==========

By Ashlin Aronin, 16-Oct-2015

A simple bookstore CMS in Drupal. Authenticated users can see a coupon, and reviewers can add, edit and delete book reviews. All changes are tracked in Git using Features and Strongarm. Lorem ipsum content generated with Devel. Using the Zen theme as well as Ctools and Views.

Note: I realized that configuration settings don't show up as strongarm variable until they have a value. For instance, I didn't initially define a slogan for the site, so I didn't get the option to export the site_slogan strong variable until I made a slogan later.

Setup
----------
* Clone this repository from Github
* Start a web server and MySQL server (MAMP is a good option)
* Check settings to ensure that your web server is serving on port 8888
* Check settings to ensure that your MySQL server is serving on port 3306
* Check settings to ensure that your web server document root is set to this project directory
* If using MAMP, start servers and then open the webstart page
* On the webstart page, navigate to Tools -> phpMyAdmin
* In phpMyAdmin, choose the Import tab and import the bookstore.sql.zip file from bookstore/sites/db-backup/bookstore.sql.zip
* Make sure UTF-8 charset is selected
* Click the 'Go' button at the bottom of the page to import this database
* Once the database is successfully imported, go the privileges tab for this database and add a new user with username 'admin', password 'epicodus' and grant it all privileges on this database
* Navigate to localhost:8888 and you should see the drupal site as an anonymous user
* Log in as an admin using the username 'admin' and password 'portland'
* Enjoy!

DB login info:
* dbname: bookstore
* user: admin
* pass: epicodus

Site maintenance admin role login info
* user: admin
* pass: portland


Reviewer role login info
* user: jonnycritic
* pass: rupaul

Technologies Used
-----------------
Drupal, MAMP, phpMyAdmin
Theme: Zen
Modules: Features, Strongarm, Devel, Ctools, Views, Contact

License
----------
MIT License, Copyright (c) 2015 Ashlin Aronin
