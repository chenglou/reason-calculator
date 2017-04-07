open Jest;
open Expect;

let _ =

describe "Svg" (fun _ => {
  test "renders" (fun _ => {
    let children = [ <g />, <path /> ];
    let tree = Svg.createElement ::children () |> Renderer.render;

    expect tree |> toMatchSnapshot;
  });
});
