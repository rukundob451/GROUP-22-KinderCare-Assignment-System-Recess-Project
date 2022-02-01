# GROUP-22-KinderCare-Assignment-System-Recess-Project
The KinderCare system shall be designed to provide a cost effective way of handling assignments given to lower school children at KinderCare and also help the children to remember and create different shapes of characters of the alphabet easily. 

The KC system comprises two parts namely; the command-line application and the web interface. These two parts communicate with each other through a database. The teachers use the web interface and the pupils use the command-line interface. A teacher is first required to register themselves with the system. However, a school administrator has to approve registration of the teacher to ensure that only KC teachers can access the system. After registration, a teacher can register pupils. The pupil’s details are stored in the database and the pupil is automatically activated. When a teacher uploads an assignment, they specify the start and end time of the assignment. Only activated pupils are able to access and attempt the assignments, provided they are within the required time. Each assignment is made up of at most eight(8) characters.  

Upon opening an assignment, the system informs a pupil of how much time is left to close the assignment and also informs the pupil of how many characters are in the assignment. The system presents the characters in an assignment one by one, for the pupil to attempt and submit. Time of attempt for each character is recorded and after the attempt of the last character, the total amount of time taken is provided by the system for the pupil to see. 

The system automatically grades the assignments and the teacher is able to view the scores and add comments when they log in. A pupil is also able to see the assignment score and comment on their next log in. The teacher can also deactivate pupils and these pupils cannot access the uploaded assignments even if they are registered. The pupils can seek reactivation by sending an activation request to the teacher through the command-line interface.