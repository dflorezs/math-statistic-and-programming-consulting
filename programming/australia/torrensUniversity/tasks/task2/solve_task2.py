# Initialize variables
markslist = []
gradeslist = []
finalmarkslist = []
suppmarkslist = []
studentcount = 0

choice = ""

# Loop until the choice is not N
while choice != "N":
    # Call the function from task 1
    choice = input("Enter a student's assessment marks (separated by comma):")
    if(choice=="N"):
        break
    marks = choice
    marks = [float(item) for item in  marks.split(',')]
    final_marks = int((marks[0] * 0.2 + marks[1] * 0.4 + marks[2] * 0.4) + 0.5)

    if((marks[0] == 0 and marks[1] == 0) or (marks[0] == 0 and marks[2] == 0) or (marks[1] == 0 and marks[2] == 0)):   #  If two or more assessments are awarded zero
        if(final_marks <= 44):     # final mark is between 0 and 44 
            grade = 'AF'
    elif(final_marks <= 44):
        grade = 'F'
    elif(marks[0] != 0 and marks[1] != 0 and marks[2] != 0):   # They do not have any assessment marked zero.
        if(final_marks >= 45 and final_marks <= 49):     # Their final mark is between 45 - 49 (inclusive).
            if((marks[0] < 50 and marks[1] < 50) or (marks[1] < 50 and marks[2] < 50) or (marks[0] < 50 and marks[2] < 50)):    # They only failed (i.e., less than 50) one assessment.
                grade = 'F'
            elif((marks[0] < 50 and marks[1] > 50) or (marks[0] > 50 and marks[1] < 50)):  # they failed is Assessment 1 or Assessment 2
                grade = 'SA'
            elif(marks[2] < 50):
                grade = 'SE'      
        elif(final_marks >= 50 and final_marks <= 64):
            grade = 'P'
        elif(final_marks >= 65 and final_marks <= 74):
            grade = 'C'
        elif(final_marks >= 75 and final_marks <= 84):
            grade = 'D'
        elif(final_marks >= 85):
            grade = 'HD'
    elif((marks[0] == 0 or marks[1] == 0 or marks[2] == 0) and final_marks >= 45 and final_marks <= 49):
        grade = 'F'

    # Check if SA or SE, then input the supplementary mark
    supp = 0
    if grade=="SA" or grade=="SE":
        supp = input("What is this student's supplementary exam mark:")
        # If grade is 50 above, it will be supplementary pass SP, else failed F
        if int(supp) >= 50:
            grade = "SP"
        else:
            grade = 'F'

    # Append the values to the array variables
    markslist.append(marks)
    finalmarkslist.append(final_marks)
    suppmarkslist.append(supp)
    gradeslist.append(grade)
    # add student
    studentcount += 1

# Initialize output variables
hdcount = 0
dcount = 0
ccount = 0
pcount = 0
spcount = 0
fcount = 0
afcount = 0
passcount = 0
failcount = 0
mark1sum = 0
mark2sum = 0
mark3sum = 0
finalsum = 0
gradeptsum = 0

# Loop through the arrays
for i in range(studentcount):
    # Get sum of marks and final grade
    mark1sum += markslist[i][0]
    mark2sum += markslist[i][1]
    mark3sum += markslist[i][2]
    finalsum += finalmarkslist[i]

    # Set values of pass/fail count and grade point sum
    if gradeslist[i]=="HD":
        passcount += 1
        hdcount += 1
        gradeptsum += 4.0
    elif gradeslist[i]=="D":
        passcount += 1
        dcount += 1
        gradeptsum += 3.0
    elif gradeslist[i]=="C":
        passcount += 1
        ccount += 1
        gradeptsum += 2.0
    elif gradeslist[i]=="P":
        passcount += 1
        pcount += 1
        gradeptsum += 1.0
    elif gradeslist[i]=="SP":
        passcount += 1
        spcount += 1
        gradeptsum += 0.5
    elif gradeslist[i]=="F":
        failcount += 1
        fcount += 1
    elif gradeslist[i]=="AF":
        failcount += 1
        afcount += 1

# Get the rate, rate adjusted, average grades, ave final grade, ave grade point
passrate = (passcount / (studentcount))*100
passrateadj = (passcount / (studentcount-afcount))*100
ave1 = mark1sum / studentcount
ave2 = mark2sum / studentcount
ave3 = mark3sum / studentcount
avefinal = finalsum / studentcount
avegdpt = gradeptsum / studentcount

# Display the resultsr
print("Average mark for Assessment 1: %.2f" % ave1)
print("Average mark for Assessment 2: %.2f" % ave2)
print("Average mark for Assessment 3: %.2f" % ave3)
print("Average Final mark: %.2f" % avefinal)
print("Average Grade Point: %.1f" % avegdpt)
print("Number of HDs: " + str(hdcount))
print("Number of Ds: " + str(dcount))
print("Number of Cs: " + str(ccount))
print("Number of Ps: " + str(pcount))
print("Number of SPs: " + str(spcount))
print("Number of Fs: " + str(fcount))