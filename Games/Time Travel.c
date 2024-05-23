#include <stdio.h>

// Function prototypes //
void Cretaceousera();
void AncientEgypt();
void FutureWorld();

int main()
{
    int era;
    // Taking input from user to take travel to the era of its choice //
    while(era != 4)
    {
        printf("\nWelcome, Time Traveler!\n\n");
        printf("Choose an era to visit:\n\n");
        printf("1. Cretaceous era\n");
        printf("2. Ancient Egypt\n");
        printf("3. Future Civilization\n");
        printf("4. To leave time machine\n\n");
        printf("Enter your choice: ");
        scanf("%d", &era);

        // Simulate traveling to the selected era //
        switch (era)
        {
        case 1:
            printf("\nYou step into the time machine...\n\n");
            printf("You find yourself in Cretaceous period!\n");
            Cretaceousera();
            break;
        case 2:
            printf("\nYou step into the time machine...\n\n");
            printf("You have arrived in Ancient Egypt!\n");
            AncientEgypt();
            break;
        case 3:
            printf("\nYou step into the time machine...\n\n");
            printf("Welcome to the Future Civilization!\n");
            FutureWorld();
            break;
        case 4:
            printf("\nHope you have enjoyed your journey in the depths of Time...\n\n     Thank you...\n\n");
            break;
        default:
            printf("\nInvalid choice. Re-enter your choice\n");
            break;
        }
    }
    return 0;
}

void Cretaceousera()
{
    // Exploring the cretaceous era //
    printf("\nWelcome, travelers. I am Eddie, your guide through this enigmatic era, a guardian of secrets concealed within these ancient shadows. Beware, for danger lurks in the veiled corridors of this forgotten time. Follow closely, and tread softly on the whispers of the past...\n\nRRRROOOOAAARRR!!!!!!!!  What sound was that. Stay back brotherLet me see\n\n");
    printf("Ah... behold! A mighty T-Rex approaches, its presence looming like a shadow in the depths of time. And there, amidst the large tress , a Spinosaurus is lurking in the shadows... and more creatures yet unseen.\n\n Come, let us seek shelter within the sanctuary of a hidden cave, where whispers echo through the ages...Now, let me reveal to you the secrets of this primordial era. The Cretaceous period, a vast expanse of time shrouded in mystery and majesty, witnessed the reign of dinosaurs with unparalleled abilities. Behold, as I unveil a glimpse into the ancient world of formidable creatures...\n\nTyrannosaurus rex:\nT. rex was a large carnivorous dinosaur and one of the most famous dinosaurs of all time. It lived during the Late Cretaceous period in North America and is known for its powerful jaws, sharp teeth, and massive size.\n\nTriceratops:\nTriceratops was a large herbivorous dinosaur with a distinctive frill and three horns on its face. It lived during the Late Cretaceous period in North America and is one of the most recognizable dinosaurs.\n\nVelociraptor:\nVelociraptor was a small to medium-sized carnivorous dinosaur known for its speed and intelligence. It lived during the Late Cretaceous period in Asia and is famous for its appearance in the movie Jurassic Park.\n\nAnkylosaurus:\nAnkylosaurus was a heavily armored herbivorous dinosaur with a bony club at the end of its tail. It lived during the Late Cretaceous period in North America and is known for its defensive adaptations.\n\nSpinosaurus:\nSpinosaurus was a large carnivorous dinosaur with a sail-like structure on its back. It lived during the Late Cretaceous period in North Africa and is one of the largest known theropod dinosaurs.\n\nStegosaurus:\nAlthough primarily known from the Jurassic period, some stegosaurs persisted into the Early Cretaceous. Stegosaurus was a herbivorous dinosaur with rows of bony plates along its back and spikes on its tail.\n\nParasaurolophus:\nParasaurolophus was a herbivorous dinosaur known for its distinctive hollow crest on its head, which may have been used for vocalizations. It lived during the Late Cretaceous period in North America.\n\nDiplodocus:\nDiplodocus was a long-necked sauropod dinosaur known for its elongated body and whip-like tail. Some species of Diplodocus lived into the Early Cretaceous period.\n\nCarnotaurus:\nCarnotaurus was a medium-sized carnivorous dinosaur known for its bull-like appearance and short, deep skull with horn-like structures above its eyes. It lived during the Late Cretaceous period in South America.\n\nEdmontosaurus:\nEdmontosaurus was a large herbivorous dinosaur with a duck-billed snout and hundreds of teeth for chewing vegetation. It lived during the Late Cretaceous period in North America.\n\n");
    // Comming back to the present as you do not ever want to stay in dinosaurs territory //
    printf("So let's get back in the time machine before giving ourself as a nice and juicy lunch to dinosaurs.. Hahahah..ha....silly joke.....anyway ..Let's go!!!\n");
}

void AncientEgypt()
{
    int action;
    // Deciding your action what u want to do //
    printf("\nWhat would you like to do?\n\n");
    printf("1. Talk to locals\n");
    printf("2. Investigate surroundings\n");
    printf("3. Return to the present\n\n");
    printf("Enter your choice: ");
    scanf("%d", &action);

    // Processing user's actions //
    switch (action)
    {
    case 1:
        printf("\nYou engage in conversation with the locals...\n\n");
        printf("\nHenu, I am Neferu, a farmer from the village of Karnak along the blessed Nile River. In the time of Amenhotep III, our lands flourish under the annual floods, allowing us to grow bountiful crops of wheat, barley, and flax.\n\nLife in our village revolves around the cycles of nature and the guidance of our pharaoh, who ensures prosperity and order throughout the kingdom. Thebes, with its majestic temples dedicated to Amun-Ra, stands as a testament to our devotion to the gods.\n\nEach day, I rise with the sun to tend to our fields, grateful for the fertile soil nourished by the Nile's waters. During festivals, we gather to honor the gods, offering prayers and celebrations that strengthen our bonds as a community.\n\nThe New Kingdom is a time of greatness for Egypt, marked by grand constructions like the temples of Karnak and Luxor, showcasing our civilization's wealth and power. Our beliefs in the afterlife, divine kingship, and Ma'at guide us in upholding order and balance.\n\n");
        break;
    case 2:
        printf("\nYou explore your surroundings and discover....\n\n1. The Nile River:\nThe Nile River, a lifeline of ancient Egypt, flows gently through the landscape, providing fertile soil for agriculture during its annual flooding. Egyptians depend on the Nile for irrigation, transportation, and religious significance.\n\n2. The Pyramids:\nNear the city of Memphis and in the surrounding desert, stand the majestic pyramids, monumental tombs built for pharaohs of the Old and Middle Kingdoms. These pyramids, such as the Great Pyramid of Giza, are characterized by their massive limestone blocks and precise construction.\n\n3. Temples:\nIn the heart of cities like Thebes (modern-day Luxor), magnificent temples dedicated to deities like Amun-Ra dominate the skyline. These temples are adorned with colossal statues, towering pylons, and intricate hieroglyphic inscriptions, reflecting the religious fervor and architectural prowess of ancient Egyptians.\n\n4. Tombs and Mortuary Temples:\nIn the Valley of the Kings and the Valley of the Queens, elaborate tombs and mortuary temples commemorate deceased pharaohs and nobles. These structures are adorned with intricate wall paintings (frescoes) and contain vast burial chambers filled with treasures for the afterlife.\n\n5. Canals and Irrigation Systems:\nEgyptians have constructed canals and irrigation systems to channel water from the Nile to agricultural fields, enabling year-round cultivation and sustaining the agricultural economy.\n\n6. Markets and Bazaars:\nBusy marketplaces bustle with traders selling spices, textiles, pottery, and exotic goods from distant lands. These markets serve as hubs of commerce and social interaction, reflecting Egypt role as a center of trade and cultural exchange.\n\n7. The Sphinx:\nNear the Great Pyramid of Giza, the enigmatic Sphinx, with the body of a lion and the head of a pharaoh, guards the necropolis and symbolizes royal power and protection.\n");
        break;
    case 3:
        printf("\nYou activate the time machine and return to the present.\n");
        break;
    default:
        printf("\nInvalid choice.....Re-enter your choice\n\n");
        break;
    }
    if (action != 3)
    {
        AncientEgypt();
    }
}

void FutureWorld()
{
    int action;
    // Deciding your action what u want to do //
    printf("What would you like to do?\n");
    printf("1. Talk to locals\n");
    printf("2. Investigate surroundings\n");
    printf("3. Return to the present\n");
    printf("Enter your choice: ");
    scanf("%d", &action);

    // Processing user's action //
    switch (action)
    {
    case 1:
        printf("Hello, I'm local resident.My world is shaped by remarkable technological advancements and societal changes. In this era, known as the [Future Era], we've achieved incredible progress in areas that were once the realm of science fiction.\n\nOur society is characterized by interconnectedness and innovation. We've overcome many challenges that were present in your time, such as climate change and resource scarcity, through sustainable technologies and global cooperation.\n\nIn terms of technology, we have harnessed the power of artificial intelligence, quantum computing, and advanced robotics. Our cities are smart and efficient, featuring autonomous vehicles, renewable energy sources, and vertical farming to meet our needs while minimizing environmental impact.\n\nCommunication and information are seamlessly integrated into everyday life. We use advanced neural interfaces and augmented reality to access vast repositories of knowledge instantly. Virtual meetings and collaborations across continents are commonplace.\n\nMedicine has made tremendous strides. Genetic engineering and personalized medicine allow us to treat diseases at the molecular level. Lifespan extension technologies have significantly increased human longevity and quality of life.\n\nCultural diversity and inclusion are celebrated in our future world. We've embraced a global perspective, fostering mutual understanding and cooperation among different cultures and civilizations.\n\nWhile we cherish our technological achievements, we also value the arts, philosophy, and the pursuit of knowledge. Our society places a high premium on creativity, exploration, and the quest for meaning.\n");
        break;
    case 2:
        printf("1. Advanced Architecture:\nFuture buildings could feature innovative materials and designs optimized for sustainability and efficiency. You might see structures with integrated green spaces, vertical gardens, and smart facades that adjust to environmental conditions.\n\n2. Smart Cities:\nCities of the future could be highly connected and efficient, with smart infrastructure managing energy, transportation, and resources in real-time. Automated systems might optimize traffic flow, reduce waste, and enhance overall quality of life.\n\n3. Renewable Energy Integration:\nFuture landscapes might be dominated by renewable energy technologies such as solar panels, wind turbines, and geothermal systems. Buildings could be energy self-sufficient or even contribute excess energy back to the grid.\n\n4. Advanced Transportation:\nTransportation in the future could include A.I powered vehicles, high-speed trains, and hyperloop systems connecting cities at unprecedented speeds. Urban mobility might emphasize hyperfast vehicles and shared transportation options, reducing congestion and pollution.\n\n5. Augmented Reality and Virtual Environments:\nAugmented reality (AR) and virtual reality (VR) could transform how we perceive and interact with our surroundings. You might see people using AR glasses or devices to overlay digital information and virtual elements onto the physical world.\n\n6. Green Spaces and Urban Nature:\nFuture cities may prioritize green spaces and urban nature, with parks, gardens, and green rooftops integrated into urban landscapes. These areas would provide recreational spaces, promote biodiversity, and enhance overall well-being.\n\n7. Vertical and Underground Cities:\nTo address population growth and space constraints, future cities might expand vertically and underground. Skyscrapers with integrated ecosystems and subterranean networks could redefine urban living.\n\n8. Advanced Healthcare Facilities:\nHealthcare facilities of the future could incorporate cutting-edge technologies such as personalized medicine, telemedicine, and medical robotics. AI-driven diagnostics and treatments could revolutionize healthcare delivery.\n");
        break;
    case 3:
        printf("You activate the time machine and return to the present.\n");
        break;
    default:
        printf("Invalid choice.....Re-enter your choice\n");
        FutureWorld();
    }
    if (action != 3)
    {
        FutureWorld();
    }
}