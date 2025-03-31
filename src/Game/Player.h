#pragma once
#include "Sprite.h"
#include "Vector2f.h"
#include "RectangleShape.h"
#include "Tilemap.h"
#include "Hair.h"
#include "InputManager.h"
#include "SoundEffect.h"
#include "Texture.h"

class Player final
{
public:
  enum class State
  {
    Idle,
    Climbing,
    Dashing,
    Sliding,
    Crouching,
    Dead
  };

  Player(const Point2f& position, const InputManager* inputManagerPtr);

  // Look, I know that I am deleting a lot of copy operators / constructors, but I barely use these anyway and I lack the
  // time to actually implement something which I currently do not use. I'll implement them when I actually need them
  Player(const Player& other) = delete;
  Player& operator=(const Player& other) = delete;
  ~Player();

  void Draw(bool debug = false) const;

  // We may pass a list of collision objects to the players update function
  void Update(float elapsedSec, const Tilemap& tilemap);

  void RefillDashes(int amount);

  // Movement functions the player can do
  void Up();
  void Down();
  void Left();
  void Right();

  // Apply forces such as gravity and the likes
  void ApplyForce(const Vector2f& force);

  bool CanMove(const Vector2f& direction) const;

  const RectangleShape* GetCollisionShape() const;

  void SetPosition(const Point2f& position);
  void SetVelocity(const Vector2f& velocity);

  Point2f GetCenter() const;
  Point2f GetPosition() const;
  Vector2f GetVelocity() const;
  State GetState() const;

  Rectf GetLeftCollisionRect(const Rectf& rect) const;
  Rectf GetRightCollisionRect(const Rectf& rect) const;
  Rectf GetTopCollisionRect(const Rectf& rect) const;
  Rectf GetBottomCollisionRect(const Rectf& rect) const;

  Rectf GetLeftHoldRect(const Rectf& rect) const;
  Rectf GetRightHoldRect(const Rectf& rect) const;
  Rectf GetGroundedRect(const Rectf& rect) const;
  int GetDashes() const;
  float GetStamina() const;

  void SetDashCooldown(float secs);
  void ResetStamina();

  Point2f GetRespawnPoint() const;
  void SetRespawnPoint(const Point2f& position);

  void SetArtificalGrounded(); // Sets the player to grounded, useful for game objects which have their own collision

  bool IsGrounded() const;

  bool IsHoldingSpace() const;

  void Kill(); // Instantly kills the player (as Celeste does not work with a health / damage system)
private:
  // Collision handling stuff
  void HandleCollision(float elapsedSec, const Tilemap& tilemap);

  Vector2f m_Direction;
  Vector2f m_Velocity;
  Point2f m_Position;
  Point2f m_RespawnPoint;
  int m_Dashes;

  // The player Celeste has stamina
  // source: https://celeste.ink/wiki/Stamina
  float m_Stamina;
  float m_DashCooldown;
  float m_DeathSecs; // Determines how long the death animation should play
  float m_SpawnProtection; // A small delay protecting the player from instantly dying again
  float m_HoldCooldown;
  float m_Timer; // A timer used for flashing the player a color

  State m_State;
  Sprite* m_SpritePtr;

  // Visual effects stuff
  Sprite* m_ParticleSpritePtr;
  const Texture* m_BallTexturePtr;

  Hair* m_HairPtr; // The hair rendered behind the player

  // Colliders
  RectangleShape* m_ColliderPtr;

  bool m_IsGrounded;
  bool m_CanHold;
  bool m_Flipped;
  bool m_IsHoldingSpace;
  bool m_ShouldRespawn;

  // To handle the input live we use the input manager here
  // this is so we can easily check if the player is holding buttons
  // to solve wonky controls
  const InputManager* m_InputManagerPtr;

  SoundEffect* m_PreDeathSoundPtr;
  SoundEffect* m_DeathSoundPtr;
  SoundEffect* m_DashSoundPtr;
};