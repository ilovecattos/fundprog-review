<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>About Me</title>
    <style>
        /* Simple styling - think of this like variable declarations in C++ */
        :root {
            --blue: #3498db;
            --yellow: #f9e076;
            --dark-blue: #1a1a3a;
            --light-blue: #2a2a5a;
            --text-color: white;
        }
        
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        body {
            background-color: var(--dark-blue);
            color: var(--text-color);
            font-family: Arial, sans-serif;
            padding: 20px;
            min-height: 100vh;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
        }
        
        .container {
            max-width: 800px;
            width: 100%;
        }
        
        .profile-box {
            background-color: var(--light-blue);
            padding: 30px;
            border-radius: 10px;
            text-align: center;
            border: 2px solid var(--blue);
            
            /* Fade transition properties */
            opacity: 0;
            transform: translateY(20px);
            animation: fadeIn 1s ease-out forwards;
        }
        
        /* Fade in animation */
        @keyframes fadeIn {
            to {
                opacity: 1;
                transform: translateY(0);
            }
        }
        
        .profile-image {
            width: 150px;
            height: 150px;
            border-radius: 50%;
            object-fit: cover;
            border: 3px solid var(--yellow);
            margin: 0 auto 20px;
            display: block;
        }
        
        h1 {
            color: var(--yellow);
            margin-bottom: 10px;
            font-size: 2rem;
        }
        
        .tagline {
            color: #aac8e0;
            margin-bottom: 20px;
            font-size: 1.1rem;
        }
        
        .description {
            margin-bottom: 20px;
            line-height: 1.6;
        }
        
        .footer {
            margin-top: 30px;
            text-align: center;
            color: #6a89a8;
            
            /* Fade in after the profile box */
            opacity: 0;
            animation: fadeIn 0.8s ease-out 0.5s forwards;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="profile-box">
            <img src="https://i.pinimg.com/originals/ea/2f/23/ea2f238c841768542bfcc232bd4fd22c.gif" 
                 alt="Profile Picture" 
                 class="profile-image">
            
            <h1>Hello There.</h1>
            <p class="tagline">Any Pronouns | EN/FIL/JP | UTC+8</p>
            
            <div class="description">
                <p>I don't know what to say here.</p>
                <p>I love FUWAMOCO from Hololive</p>
            </div>
        </div>
        
        <div class="footer">
            <p>&copy; Made with HTML</p>
        </div>
    </div>
</body>
</html>
