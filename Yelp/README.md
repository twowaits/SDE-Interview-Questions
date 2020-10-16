
# Yelp Interview Questions
* [Coding Round Questions](#coding)
* [Technical Interview Questions](#tech)
   * [Data Structures and Algorithms](#dsalg)
   * [DBMS](#dbms)
   * [Operating System](#os)
   * [Miscellaneous](#misc)
* [References](#ref)
____
<b name="coding">Coding round questions</b><br/>
-  There is a HashMap contains 7 Keys, which is Monday through  Sunday. Each key is corresponding to a List of (Start time, end time) pairs. The pairs is unsorted. Merge the time slots that are adjacent. And finally return another HashMap that contains the same structure but with merged time slots.
- Given the arraylist<meals> input, find the number of dishes with unique ingredients
    class meals{
        String cuisine;
        ArrayList<String> dish = new ArrayList<String>();
        meals(String s, String arr[]){
            cuisine = s;
            for(String i : arr){
                dish.add(i);
            }
        }
    }
- Find topic occurrences in reviews
- Find the closest palindrome to a given number, number can be negative.
  1234 -> 1221
  101 -> 99
- Find the median of ratings in an array of objects giving businesss name and ratings. 
- Remove extra spaces from string
- generate valid parenthesis
- group anagrams
- Leet code medium - Graph Traversal
- Given a string query and list of correct word dictionary, find a word in a word dictionary that has the least diff
- Count the number of weakly connected components in a graph
- Given an array of string array, find the string that occurs most and return. If there are ties, just return an array of string.
- remove duplicate entries from a linked list
- sorting the business info which looks like[{"name1", 10001},{"name2", 10004},{"name3", 10002}...]

---
<b name="tech">Technical Interview Questions</b>
<br/>
<i><u name="dsalg">Data Structures and Algorithms</u></i>
- Write a program to pair groups of people into randomized pairs, assign leftover people to pairs to make a group of three.
- Given a set of users subscribed data and several updated data sorted by time, return a list of users whose subscribe status is changed after the update.
- Giving a list of the event name, occurrence, and business id. And return the business id with at least two event name, and has a greater number of the event than the average across all business. 
- How many times do strings in a list exist in three sentences? 
- Giving a list of the event name, occurrence, and business id. And return the business id with at least two event name, and has a greater number of the event than the average across all business.  
- Prefix Matching
- Find the median of restaurant's review rating scores
- Merge intervals. find keyword from the customers' review 
- Find out longest substring without duplicates in a string. 
- Top K frequent elements, how would you run it on multiple nodes
- Given a sequence of words, print all anagrams together 
- List manipulation using language of your preference
- two sum, then follow up with k sum. 
  

<i><u name="dbms">DBMS</u></i>
- Some questions about database principle and system design
<br>


<i><u name="os">Operating System</u></i>
- Should you encrypt and then compress, or compress and then encrypt? why?  
- All interviews had many UNIX specific trivia style questions which required knowledge of UNIX utilities and their options.  
- What happens when I hit submit on URL of a browser? (e.g. google.com on Safari).
- What port does an http server run on?
- Explain Servlet and JSP
- Given a list of IP address and corresponding hits, asked how to get the top 10 hit IP address
<br>

<i><u name="misc">Miscellaneous</u></i>
- One of the three servers is slow. What can be the possible reasons and how would you take care of these things? 
- How can you find all instances of a class
"'X' is a tool we use here internally, it does 'Y'. Here's some skeleton code, implement these requirements." 
- What changes would you like to make on Yelp website 
- Output one review for the business that is the most representative of all the other reviews. How would you evaluate your model 
- Explain Spring and Hibernate
- Projects and Internship
- Tell me about your recent project?


