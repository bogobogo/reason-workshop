[@react.component]
let make = (~place: Data.place) => {
  <div>
    <h1> {React.string(place.name)} </h1>
    <h3> {React.string(place.description)} </h3>
    <h4> {React.string(place.address)} </h4>
    {switch (place.phone) {
     | None => React.null
     | Some(phone) => <h3> {React.string(phone)} </h3>
     }}
    <img src={place.image.url} />

    <p href={switch (place.image.attributionUrl) {
            | None => ""
            | Some(url) => url
        }}>
    {React.string(place.image.attribution)}
    </p>
  </div>;
};