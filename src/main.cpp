import Nodens;

class MyApp : public Nodens::Application {
public:
    static inline const Nodens::ApplicationSpecification appSpecifications = {
        .Name                   = "My Nodens Application",
        .WindowWidth            = 1280,
        .WindowHeight           = 720,
        .EnableGUI              = true,
        .IsHeadless             = false,
        .ShouldImGuiBlockInputs = true,
        .DefaultTheme           = Nodens::EDefaultTheme::Dark
    };

    MyApp() : Application(appSpecifications) {
        // Add layers here, e.g., PushLayer(new MyLayer());
    }
};

int main()
{
    Nodens::InitializeLoggers();
    auto app = MyApp();
    app.Run();

    return 0;
}
