class user:
    name=''
    email=''
    password=''

    def login(self):
        email = input("Enter the email: ")
        password = input("Enter the password: ")

        if email ==self.email and password ==self.password:
            login = True
            print("Login success")
            
        else:
             print("Login failed")

    def logout(self):
          if login == False:
              print("logged out")


    def isloggedIn(self):
        if self.login:
            return True
        else:
            return False

    def profile(self):
        if self.isloggedIn():
            print(self.name,"\n",self.email)
        else:
            print("User not logged in")



user1=user()

user1.name="Farhan"
user1.email ="farhanfardid@gmail.com"
user1.password="12345"

user1.login()
