#ifndef GUARD_POKEMON_SUMMARY_SCREEN_H
#define GUARD_POKEMON_SUMMARY_SCREEN_H

#include "main.h"

extern u8 gLastViewedMonIndex;

extern const u8 *const gMoveDescriptionPointers[];
extern const u8 *const gMoveFourLineDescriptionPointers[];
extern const u8 *const gNatureNamePointers[];
extern const struct SpriteTemplate sSpriteTemplate_MoveTypes;
extern const struct CompressedSpriteSheet sSpriteSheet_MoveTypes;
//extern const struct CompressedSpriteSheet gSpriteSheet_MoveTypes;
//extern const struct SpriteTemplate gSpriteTemplate_MoveTypes;

void ShowPokemonSummaryScreen(u8 mode, void *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
void ShowSelectMovePokemonSummaryScreen(struct Pokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void), u16 newMove);
void ShowPokemonSummaryScreenSet40EF(u8 mode, struct BoxPokemon *mons, u8 monIndex, u8 maxMonIndex, void (*callback)(void));
u8 GetMoveSlotToReplace(void);
void SummaryScreen_SetAnimDelayTaskId(u8 taskId);
void CopyNatureName(u8 nature);

// The Pokemon Summary Screen can operate in different modes. Certain features,
// such as move re-ordering, are available in the different modes.
enum PokemonSummaryScreenMode
{
    SUMMARY_MODE_NORMAL,
    SUMMARY_MODE_LOCK_MOVES,
    SUMMARY_MODE_BOX,
    SUMMARY_MODE_SELECT_MOVE,
};

#endif // GUARD_POKEMON_SUMMARY_SCREEN_H
