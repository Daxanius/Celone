#pragma once
#include "pch.h"
#include "Vector2f.h"
#include "ParticleEmitter.h"

static const std::string PROJECT_NAME{ "Celone" };

static const char FS{ '\\' };

// File extensions
static const std::string TEXTURE_EXTENSION{ ".png" };
static const std::string MUSIC_EXTENSION{ ".mp3" };
static const std::string SOUND_EXTENSION{ ".ogg" };
static const std::string FONT_EXTENSION{ ".ttf" };

// cev, a combination of celeste and level, very original, I know
static const std::string LEVEL_EXTENSION{ ".cev" };

// Game folders
static const std::string TEXTURE_FOLDER{ "texture" };
static const std::string SOUND_FOLDER{ "sound" };
static const std::string MUSIC_FOLDER{ "music" };
static const std::string LEVEL_FOLDER{ "level" };
static const std::string FONT_FOLDER{ "font" };

static const std::string MISSING_TEXTURE_TEXTURE{ TEXTURE_FOLDER + FS + "missing_texture" + TEXTURE_EXTENSION };

static const std::string GAMEPLAY_RESOURCE{ "gameplay" };
static const std::string GUI_FOLDER{ "gui" };
static const std::string CHARACTER_FOLDER{ GAMEPLAY_RESOURCE + FS + "character" };
static const std::string PLAYER_FOLDER{ CHARACTER_FOLDER + FS + "player" };
static const std::string HAIR_FOLDER{ PLAYER_FOLDER + FS + "hair" };
static const std::string BACKGROUND_FOLDER{ GAMEPLAY_RESOURCE + FS + "background" };
static const std::string COLLECTABLE_FOLDER{ GAMEPLAY_RESOURCE + FS + "collectable" };
static const std::string OBJECTS_FOLDER{ GAMEPLAY_RESOURCE + FS + "objects" };
static const std::string STRAWBERRY_FOLDER{ COLLECTABLE_FOLDER + FS + "strawberry" };
static const std::string CRUMBLE_BLOCK_FOLDER{ OBJECTS_FOLDER + FS + "crumbleBlock" };
static const std::string REFILL_FOLDER{ OBJECTS_FOLDER + FS + "refill" };
static const std::string SPRING_FOLDER{ OBJECTS_FOLDER + FS + "spring" };
static const std::string SPRING_IDLE{ SPRING_FOLDER + FS + "default" };
static const std::string SPRING_PUSH{ SPRING_FOLDER + FS + "push" };
static const std::string REFILL_IDLE{ REFILL_FOLDER + FS + "idle" };
static const std::string REFILL_OUTLINE{ REFILL_FOLDER + FS + "outline" };
static const std::string REFILL_FLASH{ REFILL_FOLDER + FS + "flash" };
static const std::string STRAWBERRY_IDLE{ STRAWBERRY_FOLDER + FS + "idle" };
static const std::string STRAWBERRY_CONSUMING{ STRAWBERRY_FOLDER + FS + "consuming" };
static const std::string CRUMBLE_BLOCK_DEFAULT{ "default" };
static const std::string CRUMBLE_BLOCK_OUTLINE{ "outline" };
static const std::string DECAL_FOLDER{ GAMEPLAY_RESOURCE + FS + "decals" };
static const std::string DANGER_FOLDER{ GAMEPLAY_RESOURCE + FS + "danger" };
static const std::string SPIKE_DOWN{ "spike_down" };
static const std::string SPIKE_UP{ "spike_up" };
static const std::string SPIKE_LEFT{ "spike_left" };
static const std::string SPIKE_RIGHT{ "spike_right" };
static const std::string JUMPTHRU_FOLDER{ OBJECTS_FOLDER + FS + "jumpthru" };
static const std::string JUMPTHRU_DEFAULT_RESOURCE{ "wood" };
static const std::string CASSETTE_FOLDER{ COLLECTABLE_FOLDER + FS + "cassette" };
static const std::string CASSETTE_RESOURCE_IDLE{ "idle" };
static const std::string CASSETTE_RESOURCE_GHOST{ "ghost" };
static const std::string NOTE_BLOCK_FOLDER{ OBJECTS_FOLDER + FS + "cassetteblock" };
static const std::string NOTE_BLOCK_SOLID{ "solid" };
static const std::string NOTE_BLOCK_PRESSED{ "pressed00" };
static const std::string STRAWBERRY_SOUND_FOLDER{ SOUND_FOLDER + FS + "strawberry" };
static const std::string AMBIENCE_FOLDER{ "ambience" };

static const std::string BACKGROUND_SUFFIX_FRONT{ "_f" };
static const std::string BACKGROUND_SUFFIX_MID{ "_m" };
static const std::string BACKGROUND_SUFFIX_BACK{ "_b" };

static const std::string TILEMAP_FOLDER{ "tilesets" };
static const std::string TILEMAP_BG_PREFIX{ "bg_" };

static const std::string PLAYER_IDLE_RESOURCE{ PLAYER_FOLDER + FS + "idle" };
static const std::string PLAYER_FALL_RESOURCE{ PLAYER_FOLDER + FS + "fall" };
static const std::string PLAYER_SLIDE_RESOURCE{ PLAYER_FOLDER + FS + "hold" };
static const std::string PLAYER_EDGE_RESOURCE{ PLAYER_FOLDER + FS + "edge" };
static const std::string PLAYER_DANGLING_RESOURCE{ PLAYER_FOLDER + FS + "dangling" };
static const std::string PLAYER_DUCK_RESOURCE{ PLAYER_FOLDER + FS + "duck" };
static const std::string PLAYER_JUMP_RESOURCE{ PLAYER_FOLDER + FS + "jump_fast" };
static const std::string PLAYER_CLIMB_RESOURCE{ PLAYER_FOLDER + FS + "climb" };
static const std::string PLAYER_RUN_RESOURCE{ PLAYER_FOLDER + FS + "run_fast" };
static const std::string PLAYER_WALK_RESOURCE{ PLAYER_FOLDER + FS + "walk" };
static const std::string PLAYER_PUSH_RESOURCE{ PLAYER_FOLDER + FS + "push" };
static const std::string PLAYER_DEATH_RESOURCE{ PLAYER_FOLDER + FS + "death" };

static const std::string BANGS_RESOURCE{ HAIR_FOLDER + FS + "bangs" };
static const std::string HAIR_RESOURCE{ HAIR_FOLDER + FS + "hair" };

static const std::string SYNE_FONT{ "syne" };

static const std::string LOADING_RESOURCE{ "loading" };
static const std::string LOGO_RESOURCE{ GUI_FOLDER + FS + "logo" };

static const std::string LEVEL1_NAME{ "forsaken_city" };

// Screen info, Celestes aspect ratio would be 16:9
static const float WINDOW_WIDTH{ 1280.f };
static const float WINDOW_HEIGHT{ 720.f };

// The scale of pixels on the screen, source https://aran.ink/posts/celeste-tilesets for more information on aspect ratio and size etc
static const float PIXEL_SCALE{ WINDOW_WIDTH / 320.f }; 

static const float LOGO_WIDTH{ 1920.f };
static const float LOGO_HEIGHT{ 1080.f };

// Editor related settings
static const float MOUSE_DRAG_BORDER_MARGIN_HORIZONTAL{ WINDOW_WIDTH * 0.2f };
static const float MOUSE_DRAG_BORDER_MARGIN_VERTICAL{ WINDOW_HEIGHT * 0.2f };
static const float SCROLL_ZOOM_FACTOR{ 0.05f };
static const float CAMERA_DRAG_SPEED{ 1000 };

// Tilemap information
// How big a single tile is
static const int TILE_SIZE{ 8 };

// How many side tiles per row
static const int TILE_SIDE_SIZE{ 4 };
static const int TILE_COLUMN_SIZE{ 6 };

static const int TILE_BOTTOM_CORNER_RIGHT{ 14 };

static const int BACKGROUND_TILES_SIZE{ 12 };
static const int FOREGROUND_TILES_SIZE{ 23 };

static const std::string BACKGROUND_TILES[]{ 
  "bg_brick", 
  "bg_brick_ruined", 
  "bg_cliffside", 
  "bg_core", 
  "bg_dirt", 
  "bg_lost_levels", 
  "bg_reflection", 
  "bg_snow", 
  "bg_summit", 
  "bg_temple_a", 
  "bg_temple_b", 
  "bg_wood"
};

static const std::string FOREGROUND_TILES[]{
  "cement",
  "cliffside",
  "core",
  "deadgrass",
  "dirt",
  "girder",
  "grass",
  "lostlevels",
  "pool_edges",
  "reflection",
  "reflection_alt",
  "rock",
  "scifi",
  "snow",
  "star_jump",
  "stone",
  "summit",
  "summit_no_snow",
  "template",
  "temple_a",
  "temple_b",
  "tower",
  "wood",
  "wood_stone_edges"
};

// Animation information
static const int PLAYER_FRAME_SIZE{ 32 };
static const int HAIR_FRAME_SIZE{ 10 };
static const Point2f BANGS_FRAME_SIZE{ 32, 32 };
static const float FRAMES_PER_SECOND{ 1 / 14.f };
static const float BACKGROUND_DOWNSCALE{ 0.2f }; // How much to scale the background down to allow for movement

// Playing information
static const Vector2f GRAVITY{0.f, -2000.f};
static const Vector2f TERMINAL_VELOCITY{ 1500.f, 1500.f };
static const Color4f BACKGROUND_COLOR{ 11 / 255.f, 16 / 255.f, 19 / 255.f, 1.f }; // The absolute background color is always the same single color in Celeste
static const float PLAYER_ACCELERATION{ 500.f }; // The rate at which the player accelerates when moving left / right
static const float PLAYER_JUMP_POTENTIAL{ 50.f }; // The maximum potential jump force the player may reach
static const float PLAYER_JUMP_FORCE{ 550.f }; // The jump force applied to the player until it reaches max potential
static const float PLAYER_DASH_FORCE{ 1000.f }; // The force behind a player dash
static const float PLAYER_SCALE{ PIXEL_SCALE * PLAYER_FRAME_SIZE };
static const float HAIR_SCALE{ PIXEL_SCALE * HAIR_FRAME_SIZE };
static const float PLAYER_HEIGHT{ 11 * PIXEL_SCALE };
static const float PLAYER_LOW{ 10 * PIXEL_SCALE };
static const float PLAYER_HAIR_START{ 16 * PIXEL_SCALE };
static const float PLAYER_BODY_WIDTH{ 7 * PIXEL_SCALE };
static const float PLAYER_BODY_HEIGHT{ 14 * PIXEL_SCALE };
static const float PLAYER_FLASH_TIME{ .1f };
static const int MAX_JUMPTHRU_SIZE{ 4 };

static const float SPIKE_VELOCITY_KILL_LIMIT{ 1.f };

static const float NOTE_BLOCK_INTERVAL{ 1.4f };
static const Color4f NOTE_BLOCK_COLOR_BLUE{ 57 / 255.f, 162 / 255.f, 231 / 255.f, 1.f };
static const Color4f NOTE_BLOCK_COLOR_PINK{ 236 / 255.f, 73 / 255.f,206 / 255.f, 1.f };

static const Color4f PLAYER_DASH_HAIR_COLOR{ 177 / 255.f, 62 / 255.f, 69 / 255.f, 1.f };
static const Color4f PLAYER_NO_DASH_HAIR_COLOR{ 71 / 255.f, 190 / 255.f,255 / 255.f, 1.f };

static const float DEATH_ANIM_TIME{ .8f };

// I just moved the camera in edit mode, printing out the position values until I was satisfied
static const Point2f START_CAMERA_POSITION{
  2515.f,
  1221.f
};

// The following stamine values are based on https://celeste.ink/wiki/Stamina, they're not numbers I pulled out my thumb
static const float PLAYER_BASE_STAMINA{ 110.f };
static const float STAMINA_FLASH_RED{ 20.f };
static const float HOLDING_STAMINA_COST{ 10.f };
static const float CLIMBING_STAMINA_COST{ 45.45f };
static const float CLIMB_JUMP_STAMINA_COST{ 27.5f };

static const int EditToolTextSize{ 22 };
static const Color4f EditToolTextColor{
  1.f,
  1.f,
  1.f,
  1.f
};

// Particle information
static const float SCREEN_EMISSION_ZONE_WIDTH{ 100.f };
static const float SCREEN_EMISSION_ZONE_HEIGHT{ WINDOW_HEIGHT };

static const float SNOW_PARTICLE_SIZE{ PIXEL_SCALE };

static const Color4f SNOW_PARTICLE_COLOR1{ 1.f, 1.f, 1.f, 1.f };
static const Color4f SNOW_PARTICLE_COLOR2{ 0.f, 0.f, 0.2f, 1.f };
static const Color4f SNOW_PARTICLE_COLOR3{ 0.5f, 0.5f, 0.5f, 1.f };
static const Color4f SNOW_PARTICLE_COLOR4{ 0.2f, 0.2f, 0.6f, 1.f };

static const EmitterSpawnInfo SNOW_PARTICLE_INFO_FRONT{
    800.f,     // The minimum force on a particle
    1200.f,    // The maximum force on a particle
    3.f, // The minimum rotation in radians
    5.f, // The maximum rotation in radians
    10.f,     // The minimum lifetime for a particle in seconds
    10.f,     // The maximum lifetime for a particle in seconds
    5,        // The minimum amount of particles to spawn in a run
    10,        // The maximum amount of particles to spawn in a run
    500,      // The maximum amount of particles allowed at a time
    .1f,      // The minimum spawning delay in seconds
    .5f       // The maximum spawning delay in seconds
};

static const EmitterSpawnInfo SNOW_PARTICLE_INFO_MID{
    600.f,     // The minimum force on a particle
    1000.f,    // The maximum force on a particle
    3.f, // The minimum rotation in radians
    5.f, // The maximum rotation in radians
    10.f,     // The minimum lifetime for a particle in seconds
    10.f,     // The maximum lifetime for a particle in seconds
    5,        // The minimum amount of particles to spawn in a run
    10,        // The maximum amount of particles to spawn in a run
    500,      // The maximum amount of particles allowed at a time
    .1f,      // The minimum spawning delay in seconds
    .5f       // The maximum spawning delay in seconds
};

static const EmitterSpawnInfo SNOW_PARTICLE_INFO_BACK{
    400.f,     // The minimum force on a particle
    800.f,    // The maximum force on a particle
    3.f, // The minimum rotation in radians
    5.f, // The maximum rotation in radians
    10.f,     // The minimum lifetime for a particle in seconds
    10.f,     // The maximum lifetime for a particle in seconds
    5,        // The minimum amount of particles to spawn in a run
    10,        // The maximum amount of particles to spawn in a run
    500,      // The maximum amount of particles allowed at a time
    .1f,      // The minimum spawning delay in seconds
    .5f       // The maximum spawning delay in seconds
};