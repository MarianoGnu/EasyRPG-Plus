#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <eventpage.h>
#include <QRect>

/***************************************
 *Command Class                        *
 *This class contains a line of a event*
 ***************************************/

class Command : public QObject
{
    Q_OBJECT
public:
    enum ID {Event, NewCommand, ShowDialog, MultipleChoice, Choice, ImputNumber, ImputString, ChangeBVar, ChangeIVar,
            ChangePVar, ChangeRVar, ChangeTVar, ChangeMoney, ChangeInventory, ChangeParty,
            ChangeExp, ChangeLvl, ChangeAtt, ChangeSkill, ChangeEquipment, ChangeHP, ChangeMP,
            ChangeCondition, HealAll, GetDamage, ChangeHeroName, ChangeTitle, ChangeCharaSet,
            ChangeFaceSet, ChangeHeroChara, ChangeHeroFace, ChangeHeroAnimation, ChangeAnimationSet,
            ChangeVehicle, ChangeSysMusic, ChangeSysSound, ChangeSysGraphic, ScreenTransition,
            StartBattle, CallStore, CallInn, Teleport, RememberPosition, SwitchVehicle, SetVehiclePosition,
            SetEventPosition, SwitchEventsPositions, GetTileID, GetEventID, ClearScreen, ShowScreen,
            ChangeScreenHue, FlashScreen, ShakeScreen, MoveScreen, SetWeather, ShowBattleAnimation,
            SetHeroTransparency, FlashCharacter, MoveCharacter, WaitMovement, StopMovement, Wait, PlayMusic,
            MusicFadeOut, RemenberMusic, PlayStoredMusic, PlaySound, PlayMovie, GetKeyImput, ChangeMapPalete,
            ChangeMapBackground, ChangeEncounterStep, ChangeTile, ChangeWarpPoint, ChangeWarpPermision,
            ChangeEscapePosition, ChangeEscapePermision, CallScene, ChangeScenePermision, If, Else, SetLabel,
            GoToLabel, Loop, Break, Continue, StopEvent, DeleteEvent, CallEvent, Note, EndGame, GoToTitle,
            ChangeCurveSet, ChangeBattleCommands};

    explicit Command(Command *tutor = 0);
    
    ID id() const;

    Command *tutor() const;
    Command *next(bool chk_child = true) const;
    Command *previous() const;
    Command *child() const;


    QString desc() const;
    int nesting() const;
    QRect rect() const;
    QRect elseRect() const;

    void setId(ID f_id);               //For testing only;
    void setRect(const QRect &rect);
    void setTutor(Command* f_tutor);
    void setNext(Command* f_next);
    void setPrevious(Command* f_previous);
    void setChild(Command* child);
    void insertBack(Command* f_command);

    int count(bool count_children = true);

private:
    ID m_id;
    QRect m_rect;

    Command *m_tutor;
    Command *m_child;
    Command *m_next;
    Command *m_previous;

friend class EventPage;
friend class DialogCommand;

};

#endif // COMMAND_H
