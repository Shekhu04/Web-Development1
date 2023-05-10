<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Box Model</title>
    <style>

        /* Universal selector */
        *{
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }
        body{
            background-color: palegreen;
        }

        .container{
            background-color: rgb(151, 176, 202);
            border:2px solid rgb(177, 27, 22);
            border-radius: 30px;
            width:500px;
            /* height: 150px; */

            /*We can set padding/margin for top, bottom, left, right like this
            padding-top = 10px;
            padding-right = 20 px;
            padding-left = 50 px;
            same with margin*/

            /*We can also set padding like this
            padding/margin: top right bottom left*/
            /* padding: 50px 50px 60px 10px; */

            /* padding: y(top/bottom) x(left/right); */
            padding:20px 10px;

            /* padding:90px; */
            margin:30px;
        }

         
    </style>


</head>
<body>
    <div class="container">
        <h3>This is my heading</h3>
        <p id="first"> Lorem ipsum dolor sit amet consectetur adipisicing elit. Laboriosam pariatur molestias enim vitae quaerat possimus, omnis similique, asperiores sunt sit magnam delectus doloremque. Cupiditate nam, vel perferendis maiores ipsum vero deleniti officiis architecto dolor unde itaque delectus similique, numquam odit?</p>
    </div>
    <div class="container">
        <h3>This is my heading</h3>
        <p id="second"> Lorem ipsum dolor sit amet consectetur adipisicing elit. Laboriosam pariatur molestias enim vitae quaerat possimus, omnis similique, asperiores sunt sit magnam delectus doloremque. Cupiditate nam, vel perferendis maiores ipsum vero deleniti officiis architecto dolor unde itaque delectus similique, numquam odit?</p>
    </div>
    <div class="container">
        <h3>This is my heading</h3>
        <p id="third"> Lorem ipsum dolor sit amet consectetur adipisicing elit. Laboriosam pariatur molestias enim vitae quaerat possimus, omnis similique, asperiores sunt sit magnam delectus doloremque. Cupiditate nam, vel perferendis maiores ipsum vero deleniti officiis architecto dolor unde itaque delectus similique, numquam odit?</p>
    </div>



    
</body>
</html>
