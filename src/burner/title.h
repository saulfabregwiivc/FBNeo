// Define macros for appliction title and description
#ifdef FBNEO_DEBUG
 #if defined(CPS1_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS1 [DEBUG]"
 #elif defined(CPS2_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS2 [DEBUG]"
 #elif defined(CPS3_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS3 [DEBUG]"
 #elif defined(NEOGEO_ONLY)
  #define APP_TITLE "FinalBurn Neo NeoGeo [DEBUG]"
 #elif defined(CAVE_ONLY)
  #define APP_TITLE "FinalBurn Neo Cave [DEBUG]"
 #elif defined(ATARI_ONLY)
  #define APP_TITLE "FinalBurn Neo Atari [DEBUG]"
 #elif defined(COLECO_ONLY)
  #define APP_TITLE "FinalBurn Neo Coleco [DEBUG]"
 #elif defined(DATAEAST_ONLY)
  #define APP_TITLE "FinalBurn Neo DataEast [DEBUG]"
 #else
  #define APP_TITLE "FinalBurn Neo [DEBUG]"
 #endif
#else
 #if defined(CPS1_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS1"
 #elif defined(CPS2_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS2"
 #elif defined(CPS3_ONLY)
  #define APP_TITLE "FinalBurn Neo CPS3"
 #elif defined(NEOGEO_ONLY)
  #define APP_TITLE "FinalBurn Neo NeoGeo"
 #elif defined(CAVE_ONLY)
  #define APP_TITLE "FinalBurn Neo Cave"
 #elif defined(ATARI_ONLY)
  #define APP_TITLE "FinalBurn Neo Atari"
 #elif defined(COLECO_ONLY)
  #define APP_TITLE "FinalBurn Neo Coleco"
 #elif defined(DATAEAST_ONLY)
  #define APP_TITLE "FinalBurn Neo DataEast"
 #else
  #define APP_TITLE "FinalBurn Neo"
 #endif
#endif

#define APP_DESCRIPTION "Emulator for arcade games"

