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

header h1 {
    font-size: 2.5em;
    margin: 0;
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

nav ul li a {
    text-decoration: none;
    color: white;
    font-weight: bold;
    font-size: 1.1em;
    transition: color 0.3s ease;
}

nav ul li a:hover {
    color: #FFD700;
}

/* Section Styling */
section {
    background-color: white;
    margin: 20px auto;
    padding: 20px;
    border-radius: 8px;
    max-width: 1200px;
    box-shadow: 0 4px 12px rgba(0, 0, 0, 0.05);
}

section h2 {
    font-size: 2em;
    color: #2E8B57;
    border-bottom: 2px solid #2E8B57;
    padding-bottom: 10px;
}

section p, section ul {
    font-size: 1.1em;
    line-height: 1.8;
    margin-top: 15px;
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

/* Footer */
footer {
    text-align: center;
    padding: 2em;
    background-color: #2E8B57;
    color: white;
    position: relative;
    bottom: 0;
    width: 100%;
    box-shadow: 0 -4px 8px rgba(0, 0, 0, 0.1);
}

footer p {
    margin: 0;
}

/* Media Queries for Responsiveness */
@media (max-width: 768px) {
    header h1 {
        font-size: 2em;
    }

    nav ul li {
        display: block;
        margin: 10px 0;
    }

    section {
        margin: 10px;
    }

    section h2 {
        font-size: 1.8em;
    }
}
