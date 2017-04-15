module Features = {
  include ReactRe.Component;
  let name = "Features";

  type props = ();

  let className: string =
    Styles.make
      display::"flex"
      flexWrap::"wrap"
      justifyContent::"space-around"
      ()
    |> Styles.className;

  let render _ =>
    <div className>
      <Feature emoji=Checkmark text="Simple operations" />
      <Feature emoji=Checkmark text="Decimals" />
      <Feature emoji=Checkmark text="Percentage" />
      <Feature emoji=Checkmark text="Positive/Negative" />
      <Feature emoji=Soon text="Advanced options" />
      <Feature emoji=Soon text="Operation history" />
    </div>;
};

include ReactRe.CreateComponent Features;

let createElement = wrapProps ();
