// Sample data for tours (replace with actual data)
const tours = [
    { name: "Mountain Trek", location: "Himalayas", image: "mountain-trek.jpg" },
    { name: "Desert Safari", location: "Sahara Desert", image: "desert-safari.jpg" },
    { name: "Tropical Paradise", location: "Hawaii", image: "tropical-paradise.jpg" }
];

// Function to create tour cards
function createTourCard(tour) {
    const card = document.createElement("div");
    card.classList.add("tour-card");
    card.innerHTML = `
        <img src="images/${tour.image}" alt="${tour.name}">
        <div class="tour-details">
            <h3>${tour.name}</h3>
            <p>${tour.location}</p>
        </div>
    `;
    return card;
}

// Function to display tours
function displayTours() {
    const toursContainer = document.querySelector("#tours .container");
    tours.forEach(tour => {
        const card = createTourCard(tour);
        toursContainer.appendChild(card);
    });
}

// Call the function to display tours
displayTours();
