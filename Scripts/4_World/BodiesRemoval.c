class BodiesRemoval
{
    static const string LOADING_LOG = "[BODIESREMOVAL] Loading...";
    static const string LOADED_LOG = "[BODIESREMOVAL] Loaded !";
    static const string MISSING_PARAMETERS_LOG = "[BODIESREMOVAL] Both the parameters \"secondsBeforeHumanBodiesRemoval\" and \"secondsBeforeZombieBodiesRemoval\" are missing from your server config file !";

    static int millisecondsBeforeHumansBodiesRemoval = -1;
    static int millisecondsBeforeZombiesBodiesRemoval = -1;
    static bool removeEntities = false;
    static bool removeEntitiesDebug = false;

    void BodiesRemoval()
    {
        BodiesRemoval.logLoading();

        int configValue = GetGame().ServerConfigGetInt("secondsBeforeHumansBodiesRemoval");

        if (configValue) {
            BodiesRemoval.logHumansParameter(configValue);
            millisecondsBeforeHumansBodiesRemoval = configValue * 1000;
        }

        configValue = GetGame().ServerConfigGetInt("secondsBeforeZombiesBodiesRemoval");

        if (configValue) {
            BodiesRemoval.logZombiesParameter(configValue);
            millisecondsBeforeZombiesBodiesRemoval = configValue * 1000;
        }
        
        if (-1 == millisecondsBeforeHumansBodiesRemoval && -1 == millisecondsBeforeZombiesBodiesRemoval ) {
            BodiesRemoval.logMissingParameters();
        }

        removeEntities = 1 == GetGame().ServerConfigGetInt("removeEntitiesWithHumansBodies");
        BodiesRemoval.logEntityRemoval(removeEntities);

        removeEntitiesDebug = 1 == GetGame().ServerConfigGetInt("removeEntitiesDebug");
        if (removeEntitiesDebug) {
            Print("[BODIESREMOVAL] Debug on");
        }

        BodiesRemoval.logLoaded();
    }

    static void logLoading()
    {
        GetGame().AdminLog(LOADING_LOG);
        Print(LOADING_LOG);
    }

    static void logHumansParameter(int s)
    {
        string log = "[BODIESREMOVAL] Human's bodies (and entities in their hands) will be force removed after " + s + " seconds.";

        GetGame().AdminLog(log);
        Print(log);
    }

    static void logZombiesParameter(int s)
    {
        string log = "[BODIESREMOVAL] Zombie's bodies will be force removed after " + s + " seconds."

        GetGame().AdminLog(log);
        Print(log);
    }

    static void logEntityRemoval(bool b) {
        string log = "[BODIESREMOVAL] Entities will";

        if (!b) {
            log += " not";
        }

        log += " be removed with human dead bodies";

        if (b) {
            log += ", if not in another player's hands or inventory";
        }

        log += ".";

        GetGame().AdminLog(log);
        Print(log);
    }

    static void logMissingParameters()
    {
        GetGame().AdminLog(MISSING_PARAMETERS_LOG);
        Print(MISSING_PARAMETERS_LOG);
    }

    static void logLoaded()
    {
        GetGame().AdminLog(LOADED_LOG);
        Print(LOADED_LOG);
    }

}