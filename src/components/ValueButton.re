module ValueButton = {
  include ReactRe.Component;
  let name = "ValueButton";

  type props = {
    dispatch: Store.action => unit,
    expand: bool,
    value: string,
  };

  let button double =>
    Styles.merge [
      Styles.button,
      double
        ? Styles.make flex::"75%" () |> Styles.className
        : Styles.empty
    ];

  let handleClick dispatch value => fun _ =>
    Action.Input value |> dispatch;

  let render { props: { dispatch, expand, value } } =>
    <button className=(button expand) onClick=(handleClick dispatch value) value>
      (ReactRe.stringToElement value)
    </button>;
};

include ReactRe.CreateComponent ValueButton;

let createElement ::dispatch ::expand=false ::value =>
  wrapProps { dispatch, expand, value };
