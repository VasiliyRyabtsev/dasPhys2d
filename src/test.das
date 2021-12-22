require box2d

[export]
def main
    print("Testing box2d\n")
    let gravity <- new [[b2Vec2() x=0.0, y=-9.81]]
    print("gravity = {gravity}\n")
    //let world <- new [[b2World()]]
