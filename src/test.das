require phys2d
require math

[export]
def main
    print("Testing box2d\n")

    let gravity = float2(0.0, -9.81)
    print("gravity = {gravity}, len = {length(gravity)}\n")

    let v = [[b2Vec2(float2(23., 45.))]]
    print("v = {v}\n")

    var mat <- [[b2Mat22]]
    mat |> Set(v, gravity)
    print("mat = {mat}\n")

    var m33:b2Mat33
    m33[0] = float3(123.)
    print("m33 = {m33}\n")
