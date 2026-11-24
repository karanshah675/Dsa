class StudentData:
    school_nam="abc"

    def __init__(self,name,age):
        self.name= name
        self.age=age
    @classmethod
    def change_school(cls,name):
        print(StudentData.school_nam)
        StudentData.school_nam=name
jessa= StudentData("jessa",33)
StudentData.change_school("stanford")
StudentData.change_school("oxford")
print(jessa.age)

        