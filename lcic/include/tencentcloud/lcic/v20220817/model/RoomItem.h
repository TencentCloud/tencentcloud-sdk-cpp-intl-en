/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The room list.
                */
                class RoomItem : public AbstractModel
                {
                public:
                    RoomItem();
                    ~RoomItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoomId The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roomId The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取The room status. `0`: Not started; `1`: Started; `2`: Ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The room status. `0`: Not started; `1`: Started; `2`: Ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置The room status. `0`: Not started; `1`: Started; `2`: Ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The room status. `0`: Not started; `1`: Started; `2`: Ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The scheduled start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime The scheduled start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置The scheduled start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime The scheduled start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The scheduled end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime The scheduled end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置The scheduled end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime The scheduled end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The actual start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealStartTime The actual start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRealStartTime() const;

                    /**
                     * 设置The actual start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realStartTime The actual start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealStartTime(const uint64_t& _realStartTime);

                    /**
                     * 判断参数 RealStartTime 是否已赋值
                     * @return RealStartTime 是否已赋值
                     * 
                     */
                    bool RealStartTimeHasBeenSet() const;

                    /**
                     * 获取The actual end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealEndTime The actual end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRealEndTime() const;

                    /**
                     * 设置The actual end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realEndTime The actual end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealEndTime(const uint64_t& _realEndTime);

                    /**
                     * 判断参数 RealEndTime 是否已赋值
                     * @return RealEndTime 是否已赋值
                     * 
                     */
                    bool RealEndTimeHasBeenSet() const;

                    /**
                     * 获取The resolution. `1`: SD.
`2`: HD
`3`: FHD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resolution The resolution. `1`: SD.
`2`: HD
`3`: FHD
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置The resolution. `1`: SD.
`2`: HD
`3`: FHD
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resolution The resolution. `1`: SD.
`2`: HD
`3`: FHD
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取The maximum number of mic-on users allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxRTCMember The maximum number of mic-on users allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxRTCMember() const;

                    /**
                     * 设置The maximum number of mic-on users allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxRTCMember The maximum number of mic-on users allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRTCMember(const uint64_t& _maxRTCMember);

                    /**
                     * 判断参数 MaxRTCMember 是否已赋值
                     * @return MaxRTCMember 是否已赋值
                     * 
                     */
                    bool MaxRTCMemberHasBeenSet() const;

                    /**
                     * 获取The URL of the room's recording. This parameter has been deprecated. Please use `RecordUrl` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReplayUrl The URL of the room's recording. This parameter has been deprecated. Please use `RecordUrl` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReplayUrl() const;

                    /**
                     * 设置The URL of the room's recording. This parameter has been deprecated. Please use `RecordUrl` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replayUrl The URL of the room's recording. This parameter has been deprecated. Please use `RecordUrl` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplayUrl(const std::string& _replayUrl);

                    /**
                     * 判断参数 ReplayUrl 是否已赋值
                     * @return ReplayUrl 是否已赋值
                     * 
                     */
                    bool ReplayUrlHasBeenSet() const;

                    /**
                     * 获取The recording URL (HTTPS), which is generated only after a room ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecordUrl The recording URL (HTTPS), which is generated only after a room ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置The recording URL (HTTPS), which is generated only after a room ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recordUrl The recording URL (HTTPS), which is generated only after a room ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取The maximum number of users allowed (including teachers) in the room. The default value is `0`, which indicates that no limit is set. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxMicNumber The maximum number of users allowed (including teachers) in the room. The default value is `0`, which indicates that no limit is set. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置The maximum number of users allowed (including teachers) in the room. The default value is `0`, which indicates that no limit is set. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxMicNumber The maximum number of users allowed (including teachers) in the room. The default value is `0`, which indicates that no limit is set. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     * 
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取Whether the students' consent is required to control their cameras/microphones.
Note: This field may return null, indicating that no valid value was found.
                     * @return EnableDirectControl Whether the students' consent is required to control their cameras/microphones.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    uint64_t GetEnableDirectControl() const;

                    /**
                     * 设置Whether the students' consent is required to control their cameras/microphones.
Note: This field may return null, indicating that no valid value was found.
                     * @param _enableDirectControl Whether the students' consent is required to control their cameras/microphones.
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetEnableDirectControl(const uint64_t& _enableDirectControl);

                    /**
                     * 判断参数 EnableDirectControl 是否已赋值
                     * @return EnableDirectControl 是否已赋值
                     * 
                     */
                    bool EnableDirectControlHasBeenSet() const;

                    /**
                     * 获取Enable Focus Mode. 0: View all participants (default) 1: View only teacher and TA
                     * @return InteractionMode Enable Focus Mode. 0: View all participants (default) 1: View only teacher and TA
                     * 
                     */
                    int64_t GetInteractionMode() const;

                    /**
                     * 设置Enable Focus Mode. 0: View all participants (default) 1: View only teacher and TA
                     * @param _interactionMode Enable Focus Mode. 0: View all participants (default) 1: View only teacher and TA
                     * 
                     */
                    void SetInteractionMode(const int64_t& _interactionMode);

                    /**
                     * 判断参数 InteractionMode 是否已赋值
                     * @return InteractionMode 是否已赋值
                     * 
                     */
                    bool InteractionModeHasBeenSet() const;

                    /**
                     * 获取Landscape/Portrait. 0: Landscape broadcast (default); 1: Portrait broadcast. Currently supported only for video-only type on mobile devices.
                     * @return VideoOrientation Landscape/Portrait. 0: Landscape broadcast (default); 1: Portrait broadcast. Currently supported only for video-only type on mobile devices.
                     * 
                     */
                    int64_t GetVideoOrientation() const;

                    /**
                     * 设置Landscape/Portrait. 0: Landscape broadcast (default); 1: Portrait broadcast. Currently supported only for video-only type on mobile devices.
                     * @param _videoOrientation Landscape/Portrait. 0: Landscape broadcast (default); 1: Portrait broadcast. Currently supported only for video-only type on mobile devices.
                     * 
                     */
                    void SetVideoOrientation(const int64_t& _videoOrientation);

                    /**
                     * 判断参数 VideoOrientation 是否已赋值
                     * @return VideoOrientation 是否已赋值
                     * 
                     */
                    bool VideoOrientationHasBeenSet() const;

                    /**
                     * 获取Enable post-class evaluation. 0: Disable (default) 1: Enable
                     * @return IsGradingRequiredPostClass Enable post-class evaluation. 0: Disable (default) 1: Enable
                     * 
                     */
                    int64_t GetIsGradingRequiredPostClass() const;

                    /**
                     * 设置Enable post-class evaluation. 0: Disable (default) 1: Enable
                     * @param _isGradingRequiredPostClass Enable post-class evaluation. 0: Disable (default) 1: Enable
                     * 
                     */
                    void SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass);

                    /**
                     * 判断参数 IsGradingRequiredPostClass 是否已赋值
                     * @return IsGradingRequiredPostClass 是否已赋值
                     * 
                     */
                    bool IsGradingRequiredPostClassHasBeenSet() const;

                    /**
                     * 获取Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * @return RoomType Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * 
                     */
                    int64_t GetRoomType() const;

                    /**
                     * 设置Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * @param _roomType Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     * 
                     */
                    void SetRoomType(const int64_t& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取Overtime duration: Unit in minutes. 0: No limitation (default); -1: Overtime prohibited; Values >0: Overtime duration in minutes, maximum 120 minutes
                     * @return EndDelayTime Overtime duration: Unit in minutes. 0: No limitation (default); -1: Overtime prohibited; Values >0: Overtime duration in minutes, maximum 120 minutes
                     * 
                     */
                    int64_t GetEndDelayTime() const;

                    /**
                     * 设置Overtime duration: Unit in minutes. 0: No limitation (default); -1: Overtime prohibited; Values >0: Overtime duration in minutes, maximum 120 minutes
                     * @param _endDelayTime Overtime duration: Unit in minutes. 0: No limitation (default); -1: Overtime prohibited; Values >0: Overtime duration in minutes, maximum 120 minutes
                     * 
                     */
                    void SetEndDelayTime(const int64_t& _endDelayTime);

                    /**
                     * 判断参数 EndDelayTime 是否已赋值
                     * @return EndDelayTime 是否已赋值
                     * 
                     */
                    bool EndDelayTimeHasBeenSet() const;

                    /**
                     * 获取Live Streaming Type: 0: Regular (default) 1: Simulated Live
                     * @return LiveType Live Streaming Type: 0: Regular (default) 1: Simulated Live
                     * 
                     */
                    uint64_t GetLiveType() const;

                    /**
                     * 设置Live Streaming Type: 0: Regular (default) 1: Simulated Live
                     * @param _liveType Live Streaming Type: 0: Regular (default) 1: Simulated Live
                     * 
                     */
                    void SetLiveType(const uint64_t& _liveType);

                    /**
                     * 判断参数 LiveType 是否已赋值
                     * @return LiveType 是否已赋值
                     * 
                     */
                    bool LiveTypeHasBeenSet() const;

                    /**
                     * 获取Simulated Live Playback Link
                     * @return RecordLiveUrl Simulated Live Playback Link
                     * 
                     */
                    std::string GetRecordLiveUrl() const;

                    /**
                     * 设置Simulated Live Playback Link
                     * @param _recordLiveUrl Simulated Live Playback Link
                     * 
                     */
                    void SetRecordLiveUrl(const std::string& _recordLiveUrl);

                    /**
                     * 判断参数 RecordLiveUrl 是否已赋值
                     * @return RecordLiveUrl 是否已赋值
                     * 
                     */
                    bool RecordLiveUrlHasBeenSet() const;

                    /**
                     * 获取Whether to auto-start class: 0: Do not auto-start (default) 1: Auto-start. Effective when live_type=1
                     * @return EnableAutoStart Whether to auto-start class: 0: Do not auto-start (default) 1: Auto-start. Effective when live_type=1
                     * 
                     */
                    uint64_t GetEnableAutoStart() const;

                    /**
                     * 设置Whether to auto-start class: 0: Do not auto-start (default) 1: Auto-start. Effective when live_type=1
                     * @param _enableAutoStart Whether to auto-start class: 0: Do not auto-start (default) 1: Auto-start. Effective when live_type=1
                     * 
                     */
                    void SetEnableAutoStart(const uint64_t& _enableAutoStart);

                    /**
                     * 判断参数 EnableAutoStart 是否已赋值
                     * @return EnableAutoStart 是否已赋值
                     * 
                     */
                    bool EnableAutoStartHasBeenSet() const;

                    /**
                     * 获取Background image for recording files, supports png, jpg, jpeg, bmp formats. Alpha channel is currently not supported.
                     * @return RecordBackground Background image for recording files, supports png, jpg, jpeg, bmp formats. Alpha channel is currently not supported.
                     * 
                     */
                    std::string GetRecordBackground() const;

                    /**
                     * 设置Background image for recording files, supports png, jpg, jpeg, bmp formats. Alpha channel is currently not supported.
                     * @param _recordBackground Background image for recording files, supports png, jpg, jpeg, bmp formats. Alpha channel is currently not supported.
                     * 
                     */
                    void SetRecordBackground(const std::string& _recordBackground);

                    /**
                     * 判断参数 RecordBackground 是否已赋值
                     * @return RecordBackground 是否已赋值
                     * 
                     */
                    bool RecordBackgroundHasBeenSet() const;

                    /**
                     * 获取Recording custom scenes. This parameter is valid only when recordlayout=9. The data content consists of user-defined scene parameters in json key-value pair format, where the value is of string type.
                     * @return RecordScene Recording custom scenes. This parameter is valid only when recordlayout=9. The data content consists of user-defined scene parameters in json key-value pair format, where the value is of string type.
                     * 
                     */
                    std::string GetRecordScene() const;

                    /**
                     * 设置Recording custom scenes. This parameter is valid only when recordlayout=9. The data content consists of user-defined scene parameters in json key-value pair format, where the value is of string type.
                     * @param _recordScene Recording custom scenes. This parameter is valid only when recordlayout=9. The data content consists of user-defined scene parameters in json key-value pair format, where the value is of string type.
                     * 
                     */
                    void SetRecordScene(const std::string& _recordScene);

                    /**
                     * 判断参数 RecordScene 是否已赋值
                     * @return RecordScene 是否已赋值
                     * 
                     */
                    bool RecordSceneHasBeenSet() const;

                    /**
                     * 获取Recording custom language. This parameter is valid only when recordlayout=9.
                     * @return RecordLang Recording custom language. This parameter is valid only when recordlayout=9.
                     * 
                     */
                    std::string GetRecordLang() const;

                    /**
                     * 设置Recording custom language. This parameter is valid only when recordlayout=9.
                     * @param _recordLang Recording custom language. This parameter is valid only when recordlayout=9.
                     * 
                     */
                    void SetRecordLang(const std::string& _recordLang);

                    /**
                     * 判断参数 RecordLang 是否已赋值
                     * @return RecordLang 是否已赋值
                     * 
                     */
                    bool RecordLangHasBeenSet() const;

                private:

                    /**
                     * The name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The room ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * The room status. `0`: Not started; `1`: Started; `2`: Ended.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The scheduled start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The scheduled end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The actual start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_realStartTime;
                    bool m_realStartTimeHasBeenSet;

                    /**
                     * The actual end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_realEndTime;
                    bool m_realEndTimeHasBeenSet;

                    /**
                     * The resolution. `1`: SD.
`2`: HD
`3`: FHD
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * The maximum number of mic-on users allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxRTCMember;
                    bool m_maxRTCMemberHasBeenSet;

                    /**
                     * The URL of the room's recording. This parameter has been deprecated. Please use `RecordUrl` instead.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_replayUrl;
                    bool m_replayUrlHasBeenSet;

                    /**
                     * The recording URL (HTTPS), which is generated only after a room ends.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * The maximum number of users allowed (including teachers) in the room. The default value is `0`, which indicates that no limit is set. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * Whether the students' consent is required to control their cameras/microphones.
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_enableDirectControl;
                    bool m_enableDirectControlHasBeenSet;

                    /**
                     * Enable Focus Mode. 0: View all participants (default) 1: View only teacher and TA
                     */
                    int64_t m_interactionMode;
                    bool m_interactionModeHasBeenSet;

                    /**
                     * Landscape/Portrait. 0: Landscape broadcast (default); 1: Portrait broadcast. Currently supported only for video-only type on mobile devices.
                     */
                    int64_t m_videoOrientation;
                    bool m_videoOrientationHasBeenSet;

                    /**
                     * Enable post-class evaluation. 0: Disable (default) 1: Enable
                     */
                    int64_t m_isGradingRequiredPostClass;
                    bool m_isGradingRequiredPostClassHasBeenSet;

                    /**
                     * Room Type: 0 Small Classroom(default); 1 Lecture Hall(public class)
                     */
                    int64_t m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * Overtime duration: Unit in minutes. 0: No limitation (default); -1: Overtime prohibited; Values >0: Overtime duration in minutes, maximum 120 minutes
                     */
                    int64_t m_endDelayTime;
                    bool m_endDelayTimeHasBeenSet;

                    /**
                     * Live Streaming Type: 0: Regular (default) 1: Simulated Live
                     */
                    uint64_t m_liveType;
                    bool m_liveTypeHasBeenSet;

                    /**
                     * Simulated Live Playback Link
                     */
                    std::string m_recordLiveUrl;
                    bool m_recordLiveUrlHasBeenSet;

                    /**
                     * Whether to auto-start class: 0: Do not auto-start (default) 1: Auto-start. Effective when live_type=1
                     */
                    uint64_t m_enableAutoStart;
                    bool m_enableAutoStartHasBeenSet;

                    /**
                     * Background image for recording files, supports png, jpg, jpeg, bmp formats. Alpha channel is currently not supported.
                     */
                    std::string m_recordBackground;
                    bool m_recordBackgroundHasBeenSet;

                    /**
                     * Recording custom scenes. This parameter is valid only when recordlayout=9. The data content consists of user-defined scene parameters in json key-value pair format, where the value is of string type.
                     */
                    std::string m_recordScene;
                    bool m_recordSceneHasBeenSet;

                    /**
                     * Recording custom language. This parameter is valid only when recordlayout=9.
                     */
                    std::string m_recordLang;
                    bool m_recordLangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ROOMITEM_H_
