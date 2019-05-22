type image = {
  url: string,
  attribution: string,
  attributionUrl: option(string),
};

type place = {
  id: string,
  name: string,
  description: string,
  image,
  address: string,
  phone: option(string),
  email: option(string),
  coordinates: (float, float),
};

let place1 = {
  id: "tel-aviv-port",
  name: "Tel aviv Port",
  description: "The port of tel aviv",
  image: {
    url: "bla",
    attribution: "Hello",
    attributionUrl: None,
  },
  address: "Tel aviv port 1",
  phone: None,
  email: None,
  coordinates: (1.2, 2.3),
};

let place2 = {
  id: "the-streets-id",
  name: "The Streets Cafe",
  description: "The best place to learn and work",
  image: {
    url: "bla",
    attribution: "Hello",
    attributionUrl: None,
  },
  address: "King George",
  phone: Some("1-800-"),
  email: Some("thestreetsCafe@gmail.com"),
  coordinates: (1.2, 2.3),
};

let place3 = {
  id: "sarona-market-id",
  name: "Sarona Market",
  description: "A market surrounnded with some of the most
    prominnent institutions and hight tech companies in israel",
  image: {
    url: "bla",
    attribution: "Hello",
    attributionUrl: None,
  },
  address: "sarona market 1",
  phone: None,
  email: None,
  coordinates: (1.2, 2.3),
};

let places = [place1, place2, place3];
let placesArray = Array.of_list(places);
let placeNames = places |> List.map(place => place.name);

let searchPlaces = value => {
  switch (value) {
    | "" => places
    | _ => {
      let lowercaseNameValue = String.lowercase(value);
      let namesWithValue =
        places
        |> List.filter(place => Js.String.includes(lowercaseNameValue, String.lowercase(place.name)))
      namesWithValue;
    };
  }
};
