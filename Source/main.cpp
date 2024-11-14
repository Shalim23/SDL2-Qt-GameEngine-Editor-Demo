#include <Engine/Engine.h>
#include "Registry/ComponentsRegistry.h"
#include "Registry/SystemsRegistry.h"

int main()
{
    Engine engine{};
    engine.init<DemoSystems, DemoComponents>();
    engine.run();

    return 0;
}