/* General Styles */
body {
    font-family: 'Roboto', Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f4f4f4;
    color: #333;
    line-height: 1.6;
}

/* Header */
header {
    background-color: #2E8B57;
    color: white;
    padding: 2em;
    text-align: center;
    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
}

/* Navigation Menu */
nav ul {
    list-style-type: none;
    padding: 0;
    margin: 1em 0;
}

nav ul li {
    display: inline;
    margin: 0 20px;
}

nav ul li a, nav ul li button {
    text-decoration: none;
    color: white;
    font-weight: bold;
    font-size: 1.1em;
    transition: color 0.3s ease;
    background: none;
    border: none;
    cursor: pointer;
}

nav ul li a:hover, nav ul li button:hover {
    color: #FFD700;
}

/* Project & Blog Post Styling */
.project, .blog-post {
    background-color: #f9f9f9;
    padding: 15px;
    border-radius: 8px;
    margin: 10px 0;
    box-shadow: 0 2px 5px rgba(0, 0, 0, 0.1);
    transition: transform 0.3s ease;
}

.project:hover, .blog-post:hover {
    transform: scale(1.05);
}

/* Button Styles */
button {
    background-color: #2E8B57;
    color: white;
    padding: 10px 20px;
    border: none;
    border-radius: 5px;
    cursor: pointer;
    transition: background-color 0.3s ease;
}

button:hover {
    background-color: #3CB371;
}

/* Social Media Links */
.social-links a {
    margin: 0 10px;
    text-decoration: none;
    font-weight: bold;
    color: #2E8B57;
    transition: color 0.3s ease;
}

.social-links a:hover {
    color: #FFD700;
}

/* Responsive Design */
@media (max-width: 768px) {
    nav ul li {
        display: block;
        margin: 10px 0;
    }
}

