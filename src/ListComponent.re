[@react.component]
let make = () => {
  let (state, setState) = React.useState(() => "");
  let onInputChange = (event) => {
      setState(event->ReactEvent.Form.target##value);
  };
  <div>
    <input onInput={onInputChange}/>
  {Data.searchPlaces(state)
  ->Belt.List.toArray
  ->Belt.Array.map(place => <Place key=place.id place=place/>)
  ->React.array}
  </div>
}