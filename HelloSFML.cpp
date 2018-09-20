#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

/*** Don't change any text below */
// Important announcement on Significance of Academic Honor Policy
// The  Academic Honor Policy is an important aspect of keeping the integrity
// and quality of the computer science courses in general. Please don't share
// your project source with any other students on any occasion. I would like
// to let you know that, for the summer 2018 COP3014 course, we found several
// students violated the Academic Honor Policy by sharing their programming
// assignment source in an advertent and inadvertent manners. Please note that
// we will run MOSS" (plagiarism detection software tool) on future COP3014 student
// project submissions together with your summer 2018 project" submissions.
// In case your project source code happens to be >%75" similar to future student
// project source (which is statistically" almost impossible), your grade will
// be invalidated and your academic honor code violation will be reported to Dean's
// office. The following is the quick reference for Academic Honor Policy:"
// https://fda.fsu.edu/sites/g/files/upcbnu636/files/Media/Files/Academic%20Honor%20Policy/AHP%20Quick%20Reference%20Guide%20Nov%202017.pdf
//

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("resources/cute_image.jpg"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    sf::Font font;
    if (!font.loadFromFile("resources/sansation.ttf"))
        return EXIT_FAILURE;
    sf::Text text;
    text.setFont(font);

    //  Do not modify any code above
    //-------------------------------
    //
    // Create a graphical text to display in the middle of
    // the 800x600 SFML window using "text" variable with "font"
    // variable.
    //
    // Your implementation must display Your Full Name followed
    // by displaying your FSU ID in the next line. You also must
    // select RED font color for the text. Place your implementation
    // below:







    //  Do not modify any code below
    //-------------------------------

#ifdef AUDIO
    // Load a music to play
    sf::Music music;
    if (!music.openFromFile("resources/nice_music.ogg"))
        return EXIT_FAILURE;
    // Play the music
    music.play();
    // Start the game loop
#endif

    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear();
        // Draw the sprite
        window.draw(sprite);
        // Draw the string
        window.draw(text);
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
