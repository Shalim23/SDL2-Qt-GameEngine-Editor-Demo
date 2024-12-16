#ifdef EDITOR
#include <Editor/Editor.h>
#else
#include <Engine/Engine.h>
#endif // EDITOR

#include "Registry/ComponentsRegistry.h"
#include "Registry/SystemsRegistry.h"

MAIN()
{
#ifdef EDITOR
    Editor editor{argc, argv};
    return editor.run();
#else
    Engine engine{};
    engine.init<DemoSystems, DemoComponents>();
    engine.run();
#endif // EDITOR

    return 0;
}