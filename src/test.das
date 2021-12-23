require box2d

[export]
def main
    print("Testing box2d\n")

    let gravity <- [[b2Vec2 x=0.0, y=-9.81]]
    print("gravity = {gravity}\n")

    let v <- [[b2Vec2 x=123.0, y=567.0]]
    print("v = {v}\n")
    var mat <- [[b2Mat22]]
    mat |> Set(v, v)
    //mat |> Set(float2(1.0, 2.0), float2(3.0, 4.0))
    print("mat = {mat}\n")

//    let world <- new [[b2World()]]
