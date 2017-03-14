# Acronyms
acronyms/initialisms.
Project Title :
Acronyms

Technology
Objective- C, Xcode 6,  MapKit framework,  SystemConfiguration framework, NSJSonSerialization, NSXMLPARSE,.


Project Abstract:
Github URL:- https://github.com/Mayuresh12/Acronyms.git

App is developed using Storyboards and has two screens. Acronyms & Meaning Screen. This has a text field which accepts valid Acronyms/Initialsms. On entering the text and hit search, web service is made and corresponding meanings are shown in the table view. If no meanings are found an alert is shown with appropriate message. Validations on text field 1- accepts only alpha numeric value. When the search is successful all the possible variations of the meaning are displayed .The table view is used to show the content.
Below API is used to fetch the meanings:
http://www.nactem.ac.uk/software/acromine/rest.html


It's a GET request
Cocoapods are used as dependency manager to add below projects:
1.	"AFNetworking", "~> 2.0" (https://github.com/AFNetworking/AFNetworking)
2.	'MBProgressHUD', '~> 0.9.1' (https://github.com/jdg/MBProgressHUD)
