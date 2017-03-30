module Soon = {
  include ReactRe.Component;
  let name = "Soon";

  type props = ();

  let className: string =
    Styles.make
      height::"16px"
      marginRight::"1em"
      marginTop::"-6px"
      width::"16px"
      ()
    |> Styles.className;

  let render _ =>
    <div className>
      <svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 64 64" enableBackground="new 0 0 64 64">
        <g fill="#4d5357">
          <path d="m61 18l-16-16v10h-42v12h42v10z" />
          <path d="m8 62c-3.3 0-6-2.8-6-6.3h3c0 1.6 1.3 3 3 3s3-1.3 3-3-1.3-3-3-3c-3.3 0-6-2.8-6-6.3 0-3.6 2.7-6.4 6-6.4s6 2.8 6 6.3h-3c0-1.6-1.3-3-3-3s-3 1.3-3 3 1.3 3 3 3c3.3 0 6 2.8 6 6.3 0 3.6-2.7 6.4-6 6.4" />
          <path d="m24 62c-3.3 0-6-2.8-6-6.3v-9.3c0-3.5 2.7-6.3 6-6.3s6 2.8 6 6.3v9.3c0 3.5-2.7 6.3-6 6.3m0-18.6c-1.7 0-3 1.3-3 3v9.3c0 1.6 1.3 3 3 3s3-1.3 3-3v-9.3c0-1.7-1.3-3-3-3" />
          <path d="m40 62c-3.3 0-6-2.8-6-6.3v-9.3c0-3.5 2.7-6.3 6-6.3s6 2.8 6 6.3v9.3c0 3.5-2.7 6.3-6 6.3m0-18.6c-1.7 0-3 1.3-3 3v9.3c0 1.6 1.3 3 3 3s3-1.3 3-3v-9.3c0-1.7-1.3-3-3-3" />
          <path d="m53 47.7l5.8 14.3h3.2v-22h-3v14.3l-5.8-14.3h-3.2v22h3z" />
        </g>
      </svg>
    </div>;
};

include ReactRe.CreateComponent Soon;

let createElement = wrapProps ();
