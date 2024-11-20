#include <Engine/Engine.h>
#include "Registry/ComponentsRegistry.h"
#include "Registry/SystemsRegistry.h"

MAIN()
{
#ifdef EDITOR

#else
    Engine engine{};
    engine.init<DemoSystems, DemoComponents>();
    engine.run();
#endif // EDITOR

    return 0;
}