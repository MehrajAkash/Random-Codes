import turtle


# Set up screen
screen = turtle.Screen()
screen.bgcolor("darkblue")
screen.title("Eid Mubarak")

# Draw crescent moon
def draw_moon():
    moon = turtle.Turtle()
    #moon.hideturtle()
   # moon.speed(0)
    #moon.penup()
    #moon.goto(-150, 100)
    moon.pencolor("darkblue")
    moon.goto(-150, 100)
    moon.color("white")
    moon.begin_fill()
    moon.circle(90)
    moon.end_fill()

    moon.goto(-130, 120)
    moon.color("darkblue")  # Same as background to make crescent
    moon.begin_fill()
    moon.circle(90)
    moon.end_fill()
    moon.hideturtle()

# Write "Eid Mubarak"
def write_text():
    text = turtle.Turtle()
    text.hideturtle()
    text.color("gold")
   # text.penup()
    text.goto(-180, -100)
    text.write("Eid Mubarak", font=("Segoe Script", 50, "bold"))

# Write "Stay Safe and enjoy your days"
def write_text2():
    text = turtle.Turtle()
    text.hideturtle()
    text.color("pink")
   # text.penup()
    text.goto(-200, -160)
    text.write("Stay Safe and enjoy your days", font=("italic", 25))    

# Draw stars (optional)
def draw_star(x, y):
    star = turtle.Turtle()
    #star.hideturtle()
    #star.speed(0)
    #star.color("white")
    #star.penup()
    star.goto(x, y)
    star.color("white")
    star.begin_fill()
    for _ in range(5):
        star.forward(40)
        star.right(144)
    star.end_fill()
    star.hideturtle()
# Stars coordinates
stars = [(-170, 180), (0, 190), (100, 130)]

# Execute drawing functions
write_text2()
draw_moon()
write_text()
for x, y in stars:
    
    draw_star(x, y)

# Finish
write_text2()
turtle.done()
