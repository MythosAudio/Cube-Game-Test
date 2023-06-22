/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID PLAY_MUSIC_LVL1 = 4145153789U;
        static const AkUniqueID PLAY_MUSIC_LVL2 = 4145153790U;
        static const AkUniqueID PLAY_MUSIC_LVL3 = 4145153791U;
        static const AkUniqueID STOP_MUSIC_LVL1 = 2611462427U;
        static const AkUniqueID STOP_MUSIC_LVL2 = 2611462424U;
        static const AkUniqueID STOP_MUSIC_LVL3 = 2611462425U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace MUSIC
        {
            static const AkUniqueID GROUP = 3991942870U;

            namespace STATE
            {
                static const AkUniqueID DISTANCE_1000 = 2385509740U;
                static const AkUniqueID DISTANCE_2000 = 3940778029U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID START = 1281810935U;
            } // namespace STATE
        } // namespace MUSIC

        namespace MUSIC_LEVEL2
        {
            static const AkUniqueID GROUP = 2209143525U;

            namespace STATE
            {
                static const AkUniqueID LVL2_DISTANCE_TRIGGER_1 = 1610955320U;
                static const AkUniqueID LVL2_DISTANCE_TRIGGER_2 = 1610955323U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID START2 = 1022736359U;
            } // namespace STATE
        } // namespace MUSIC_LEVEL2

        namespace MUSIC_LEVEL3
        {
            static const AkUniqueID GROUP = 2209143524U;

            namespace STATE
            {
                static const AkUniqueID LVL3_DISTANCE_TRIGGER_1 = 3799411579U;
                static const AkUniqueID LVL3_DISTANCE_TRIGGER_2 = 3799411576U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID START3 = 1022736358U;
            } // namespace STATE
        } // namespace MUSIC_LEVEL3

    } // namespace STATES

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID MUSIC = 3991942870U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
