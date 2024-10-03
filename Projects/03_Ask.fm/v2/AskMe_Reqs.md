## Ask Me - Big picture

- People ask questions and other answers them
- `file-based` system system
  - Every time the user run it, you see the previous state(users/questions/answer)
  - `Later`Multiple users can use it in name time (parallel)
    - you send question i see it.
    - I answer the question or remove it, you see this update
  - `Login`/`Sign up`/`Signout`
    - Any system allow a user to sign up (name, email, password, username, password)
    - Also: As a user do you allow `anonymous questions`?
    - `User operations`
      - `Print` questions: From you, To you, Feed Questions
      - `Ask` and `answer` questions. System support threads
      - `Delete` a question (which might be a thread)
      ***

### AskMe: Design

- Every user and question has a `sysetm generated ID`
  - We can view these IDs on the site (Not Realistic)
- A `Thread quesion`
  - If a question is answered. Others can ask questions in the original question thread
  - E.g. original question is parent for all of them
    if this parent question is removed, the whole thread is removed
- `Correctness`
  - You can't do something wrong
    - E.g. you can't remove a question asked to some else!
  - You can only see/edit the details of your question
  ***
- ###### more details
- Don't use OOP concepts just encapsulation from struct
- file based through (Questions.txt - users.txt)

  - questions.txt file `line`

    - NewQues: `QueId`,`isThreadOrNewQues`,`from_userId`,`to_userId`,`AQ`, `QuestionText`, `AnswerText`
    - ThreadQues: `QueId`,`isThreadOrNewQues`,`from_userId`,`to_userId`,`AQ`,`QuestionText`,`AnswerText`

  - users.txt file `line`

    - user: `userId`,`username`,`password`,`full_name`,`gmail`,`AQ`

  - IsThread => -1 for new question
  - each question has one answer(overwrite)

- User Operations
  - operations
    1. `Print` Questions To Me
    2. Print Questions To from Me
    3. `Answer` Question
    4. `Delete` Question
    5. `Ask` Question
    6. List System Users
    7. Feed
    8. Logout
  - notes
    - 5. `Ask` Question
      - can be thread or new question
    - 1. Feed means: Printing or listing the all users and questions
      - printing functionalility as you see as has different views
