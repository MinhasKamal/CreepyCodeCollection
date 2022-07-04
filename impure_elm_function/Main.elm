module Main exposing (main)

import Browser
import Html exposing (Html, button, div, text)
import Html.Events exposing (onClick)
import Json.Decode as D


type alias Model =
    { num : Float, obj : D.Value }


init : D.Value -> ( Model,Cmd Msg )
init flags =
    ({ num = 0, obj = flags }, Cmd.none)


type Msg
    = Clicked


-- The impure function
generate : D.Value -> Float
generate =
    D.decodeValue (D.field "n" D.float) >> Result.withDefault 0


update : Msg -> Model -> (Model,Cmd Msg)
update msg model =
    case msg of
        Clicked ->
            ( { model
              | num = generate model.obj
              }
            ,Cmd.none)


view : Model -> Html Msg
view model =
    div []
        [ button [ onClick Clicked ] [ text "generate" ]
        , div [] [ text <| String.fromFloat model.num ]
        ]


main : Program D.Value Model Msg
main =
    Browser.element
        { init = init
        , view = view
        , update = update
        , subscriptions = always Sub.none
        }
