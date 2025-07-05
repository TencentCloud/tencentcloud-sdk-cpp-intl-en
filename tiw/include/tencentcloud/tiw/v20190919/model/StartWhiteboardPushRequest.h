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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/WhiteboardPushBackupParam.h>
#include <tencentcloud/tiw/v20190919/model/AuthParam.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * StartWhiteboardPush request structure.
                */
                class StartWhiteboardPushRequest : public AbstractModel
                {
                public:
                    StartWhiteboardPushRequest();
                    ~StartWhiteboardPushRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Room ID of the whiteboard push task. Valid range: (1,4294967295).

1. By default, the whiteboard push task uses the RoomId string as the GroupID of the IM group. For example, if the RoomId string is 1234, the GroupID of the IM group is also 1234. Message synchronization requires joining a group. Make sure that an IM group is created before the push starts. Otherwise, the push fails.
2. If neither TRTCRoomId nor TRTCRoomIdStr is specified, the value of RoomId is used as the Tencent Real-Time Communication (TRTC) room ID for the whiteboard push task.
                     * @return RoomId Room ID of the whiteboard push task. Valid range: (1,4294967295).

1. By default, the whiteboard push task uses the RoomId string as the GroupID of the IM group. For example, if the RoomId string is 1234, the GroupID of the IM group is also 1234. Message synchronization requires joining a group. Make sure that an IM group is created before the push starts. Otherwise, the push fails.
2. If neither TRTCRoomId nor TRTCRoomIdStr is specified, the value of RoomId is used as the Tencent Real-Time Communication (TRTC) room ID for the whiteboard push task.
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置Room ID of the whiteboard push task. Valid range: (1,4294967295).

1. By default, the whiteboard push task uses the RoomId string as the GroupID of the IM group. For example, if the RoomId string is 1234, the GroupID of the IM group is also 1234. Message synchronization requires joining a group. Make sure that an IM group is created before the push starts. Otherwise, the push fails.
2. If neither TRTCRoomId nor TRTCRoomIdStr is specified, the value of RoomId is used as the Tencent Real-Time Communication (TRTC) room ID for the whiteboard push task.
                     * @param _roomId Room ID of the whiteboard push task. Valid range: (1,4294967295).

1. By default, the whiteboard push task uses the RoomId string as the GroupID of the IM group. For example, if the RoomId string is 1234, the GroupID of the IM group is also 1234. Message synchronization requires joining a group. Make sure that an IM group is created before the push starts. Otherwise, the push fails.
2. If neither TRTCRoomId nor TRTCRoomIdStr is specified, the value of RoomId is used as the Tencent Real-Time Communication (TRTC) room ID for the whiteboard push task.
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取User ID used by the whiteboard push service for entering the whiteboard room. If `IMAuthParam`and `TRTCAuthParam` are not specified, this user ID is used for operations such as logging in to the IM application, joining an IM group, and entering the room for TRTC whiteboard push.
The ID cannot exceed 60 bytes in length and must be an unused ID. The whiteboard push service uses the user ID to enter the room for whiteboard audio/video push. If this ID is already used in another scenario, the other scenario and whiteboard push service will conflict, affecting the pushing operation.
                     * @return PushUserId User ID used by the whiteboard push service for entering the whiteboard room. If `IMAuthParam`and `TRTCAuthParam` are not specified, this user ID is used for operations such as logging in to the IM application, joining an IM group, and entering the room for TRTC whiteboard push.
The ID cannot exceed 60 bytes in length and must be an unused ID. The whiteboard push service uses the user ID to enter the room for whiteboard audio/video push. If this ID is already used in another scenario, the other scenario and whiteboard push service will conflict, affecting the pushing operation.
                     * 
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置User ID used by the whiteboard push service for entering the whiteboard room. If `IMAuthParam`and `TRTCAuthParam` are not specified, this user ID is used for operations such as logging in to the IM application, joining an IM group, and entering the room for TRTC whiteboard push.
The ID cannot exceed 60 bytes in length and must be an unused ID. The whiteboard push service uses the user ID to enter the room for whiteboard audio/video push. If this ID is already used in another scenario, the other scenario and whiteboard push service will conflict, affecting the pushing operation.
                     * @param _pushUserId User ID used by the whiteboard push service for entering the whiteboard room. If `IMAuthParam`and `TRTCAuthParam` are not specified, this user ID is used for operations such as logging in to the IM application, joining an IM group, and entering the room for TRTC whiteboard push.
The ID cannot exceed 60 bytes in length and must be an unused ID. The whiteboard push service uses the user ID to enter the room for whiteboard audio/video push. If this ID is already used in another scenario, the other scenario and whiteboard push service will conflict, affecting the pushing operation.
                     * 
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     * 
                     */
                    bool PushUserIdHasBeenSet() const;

                    /**
                     * 获取User's IM signature corresponding to the PushUserId.
                     * @return PushUserSig User's IM signature corresponding to the PushUserId.
                     * 
                     */
                    std::string GetPushUserSig() const;

                    /**
                     * 设置User's IM signature corresponding to the PushUserId.
                     * @param _pushUserSig User's IM signature corresponding to the PushUserId.
                     * 
                     */
                    void SetPushUserSig(const std::string& _pushUserSig);

                    /**
                     * 判断参数 PushUserSig 是否已赋值
                     * @return PushUserSig 是否已赋值
                     * 
                     */
                    bool PushUserSigHasBeenSet() const;

                    /**
                     * 获取Whiteboard parameters, such as the width, height, and background color of the whiteboard.
                     * @return Whiteboard Whiteboard parameters, such as the width, height, and background color of the whiteboard.
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置Whiteboard parameters, such as the width, height, and background color of the whiteboard.
                     * @param _whiteboard Whiteboard parameters, such as the width, height, and background color of the whiteboard.
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取Whiteboard push timeout. Unit: seconds. Valid range: [300,259200]. Default value: 1800.

If no operation is performed on the whiteboard for the specified period of time, the whiteboard push service automatically stops whiteboard push.
                     * @return AutoStopTimeout Whiteboard push timeout. Unit: seconds. Valid range: [300,259200]. Default value: 1800.

If no operation is performed on the whiteboard for the specified period of time, the whiteboard push service automatically stops whiteboard push.
                     * 
                     */
                    int64_t GetAutoStopTimeout() const;

                    /**
                     * 设置Whiteboard push timeout. Unit: seconds. Valid range: [300,259200]. Default value: 1800.

If no operation is performed on the whiteboard for the specified period of time, the whiteboard push service automatically stops whiteboard push.
                     * @param _autoStopTimeout Whiteboard push timeout. Unit: seconds. Valid range: [300,259200]. Default value: 1800.

If no operation is performed on the whiteboard for the specified period of time, the whiteboard push service automatically stops whiteboard push.
                     * 
                     */
                    void SetAutoStopTimeout(const int64_t& _autoStopTimeout);

                    /**
                     * 判断参数 AutoStopTimeout 是否已赋值
                     * @return AutoStopTimeout 是否已赋值
                     * 
                     */
                    bool AutoStopTimeoutHasBeenSet() const;

                    /**
                     * 获取Specifies whether to synchronize operations on the primary whiteboard push task to the backup task.
                     * @return AutoManageBackup Specifies whether to synchronize operations on the primary whiteboard push task to the backup task.
                     * 
                     */
                    bool GetAutoManageBackup() const;

                    /**
                     * 设置Specifies whether to synchronize operations on the primary whiteboard push task to the backup task.
                     * @param _autoManageBackup Specifies whether to synchronize operations on the primary whiteboard push task to the backup task.
                     * 
                     */
                    void SetAutoManageBackup(const bool& _autoManageBackup);

                    /**
                     * 判断参数 AutoManageBackup 是否已赋值
                     * @return AutoManageBackup 是否已赋值
                     * 
                     */
                    bool AutoManageBackupHasBeenSet() const;

                    /**
                     * 获取Parameters of the backup whiteboard push task.

After the backup parameters are specified, the whiteboard push service adds a relayed video stream. That is, there are two video streams on the whiteboard in the same room.
                     * @return Backup Parameters of the backup whiteboard push task.

After the backup parameters are specified, the whiteboard push service adds a relayed video stream. That is, there are two video streams on the whiteboard in the same room.
                     * 
                     */
                    WhiteboardPushBackupParam GetBackup() const;

                    /**
                     * 设置Parameters of the backup whiteboard push task.

After the backup parameters are specified, the whiteboard push service adds a relayed video stream. That is, there are two video streams on the whiteboard in the same room.
                     * @param _backup Parameters of the backup whiteboard push task.

After the backup parameters are specified, the whiteboard push service adds a relayed video stream. That is, there are two video streams on the whiteboard in the same room.
                     * 
                     */
                    void SetBackup(const WhiteboardPushBackupParam& _backup);

                    /**
                     * 判断参数 Backup 是否已赋值
                     * @return Backup 是否已赋值
                     * 
                     */
                    bool BackupHasBeenSet() const;

                    /**
                     * 获取Advanced permission control parameter in TRTC. If the advanced permission control feature is enabled in TRTC, this parameter is required.
                     * @return PrivateMapKey Advanced permission control parameter in TRTC. If the advanced permission control feature is enabled in TRTC, this parameter is required.
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置Advanced permission control parameter in TRTC. If the advanced permission control feature is enabled in TRTC, this parameter is required.
                     * @param _privateMapKey Advanced permission control parameter in TRTC. If the advanced permission control feature is enabled in TRTC, this parameter is required.
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                    /**
                     * 获取Frame rate of the whiteboard push video. Valid range: [0,30]. Default value: 20. Unit: fps.
                     * @return VideoFPS Frame rate of the whiteboard push video. Valid range: [0,30]. Default value: 20. Unit: fps.
                     * 
                     */
                    int64_t GetVideoFPS() const;

                    /**
                     * 设置Frame rate of the whiteboard push video. Valid range: [0,30]. Default value: 20. Unit: fps.
                     * @param _videoFPS Frame rate of the whiteboard push video. Valid range: [0,30]. Default value: 20. Unit: fps.
                     * 
                     */
                    void SetVideoFPS(const int64_t& _videoFPS);

                    /**
                     * 判断参数 VideoFPS 是否已赋值
                     * @return VideoFPS 是否已赋值
                     * 
                     */
                    bool VideoFPSHasBeenSet() const;

                    /**
                     * 获取Whiteboard push bitrate. Valid range: [0,2000]. Default value: 1200. Unit: kbps.

The bitrate specified here is a reference value. During actual push, a dynamic bitrate is used. The actual bitrate does not remain the specified value but rather fluctuates around it.
                     * @return VideoBitrate Whiteboard push bitrate. Valid range: [0,2000]. Default value: 1200. Unit: kbps.

The bitrate specified here is a reference value. During actual push, a dynamic bitrate is used. The actual bitrate does not remain the specified value but rather fluctuates around it.
                     * 
                     */
                    int64_t GetVideoBitrate() const;

                    /**
                     * 设置Whiteboard push bitrate. Valid range: [0,2000]. Default value: 1200. Unit: kbps.

The bitrate specified here is a reference value. During actual push, a dynamic bitrate is used. The actual bitrate does not remain the specified value but rather fluctuates around it.
                     * @param _videoBitrate Whiteboard push bitrate. Valid range: [0,2000]. Default value: 1200. Unit: kbps.

The bitrate specified here is a reference value. During actual push, a dynamic bitrate is used. The actual bitrate does not remain the specified value but rather fluctuates around it.
                     * 
                     */
                    void SetVideoBitrate(const int64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取Specifies whether to automatically record the whiteboard push when the recording mode in TRTC is set to `SubscribeStreamUserIds`.

Default value: `false`. If you need to enable automatic whiteboard push recording, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Recording`, ignore this parameter.
                     * @return AutoRecord Specifies whether to automatically record the whiteboard push when the recording mode in TRTC is set to `SubscribeStreamUserIds`.

Default value: `false`. If you need to enable automatic whiteboard push recording, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Recording`, ignore this parameter.
                     * 
                     */
                    bool GetAutoRecord() const;

                    /**
                     * 设置Specifies whether to automatically record the whiteboard push when the recording mode in TRTC is set to `SubscribeStreamUserIds`.

Default value: `false`. If you need to enable automatic whiteboard push recording, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Recording`, ignore this parameter.
                     * @param _autoRecord Specifies whether to automatically record the whiteboard push when the recording mode in TRTC is set to `SubscribeStreamUserIds`.

Default value: `false`. If you need to enable automatic whiteboard push recording, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Recording`, ignore this parameter.
                     * 
                     */
                    void SetAutoRecord(const bool& _autoRecord);

                    /**
                     * 判断参数 AutoRecord 是否已赋值
                     * @return AutoRecord 是否已赋值
                     * 
                     */
                    bool AutoRecordHasBeenSet() const;

                    /**
                     * 获取ID of the whiteboard push recording. The ID is filled in the `userdefinerecordid` parameter in the callback message after cloud recording is complete in TRTC, helping you identify the recording callback and locate the video file in VOD media resource management.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic whiteboard push recording is enabled regardless of the value of the `AutoRecord` parameter.

Default RecordId generation rule:
urlencode(SdkAppID_RoomID_PushUserID)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore: RecordId = 12345678_12345_push_user_1
                     * @return UserDefinedRecordId ID of the whiteboard push recording. The ID is filled in the `userdefinerecordid` parameter in the callback message after cloud recording is complete in TRTC, helping you identify the recording callback and locate the video file in VOD media resource management.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic whiteboard push recording is enabled regardless of the value of the `AutoRecord` parameter.

Default RecordId generation rule:
urlencode(SdkAppID_RoomID_PushUserID)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore: RecordId = 12345678_12345_push_user_1
                     * 
                     */
                    std::string GetUserDefinedRecordId() const;

                    /**
                     * 设置ID of the whiteboard push recording. The ID is filled in the `userdefinerecordid` parameter in the callback message after cloud recording is complete in TRTC, helping you identify the recording callback and locate the video file in VOD media resource management.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic whiteboard push recording is enabled regardless of the value of the `AutoRecord` parameter.

Default RecordId generation rule:
urlencode(SdkAppID_RoomID_PushUserID)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore: RecordId = 12345678_12345_push_user_1
                     * @param _userDefinedRecordId ID of the whiteboard push recording. The ID is filled in the `userdefinerecordid` parameter in the callback message after cloud recording is complete in TRTC, helping you identify the recording callback and locate the video file in VOD media resource management.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic whiteboard push recording is enabled regardless of the value of the `AutoRecord` parameter.

Default RecordId generation rule:
urlencode(SdkAppID_RoomID_PushUserID)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore: RecordId = 12345678_12345_push_user_1
                     * 
                     */
                    void SetUserDefinedRecordId(const std::string& _userDefinedRecordId);

                    /**
                     * 判断参数 UserDefinedRecordId 是否已赋值
                     * @return UserDefinedRecordId 是否已赋值
                     * 
                     */
                    bool UserDefinedRecordIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable automatic relay whiteboard push when the relay push mode in TRTC is set to `SubscribeRelayUserIds`.

Default value: `false`. If you need to enable automatic relay whiteboard push, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Relay`, ignore this parameter.
                     * @return AutoPublish Specifies whether to enable automatic relay whiteboard push when the relay push mode in TRTC is set to `SubscribeRelayUserIds`.

Default value: `false`. If you need to enable automatic relay whiteboard push, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Relay`, ignore this parameter.
                     * 
                     */
                    bool GetAutoPublish() const;

                    /**
                     * 设置Specifies whether to enable automatic relay whiteboard push when the relay push mode in TRTC is set to `SubscribeRelayUserIds`.

Default value: `false`. If you need to enable automatic relay whiteboard push, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Relay`, ignore this parameter.
                     * @param _autoPublish Specifies whether to enable automatic relay whiteboard push when the relay push mode in TRTC is set to `SubscribeRelayUserIds`.

Default value: `false`. If you need to enable automatic relay whiteboard push, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Relay`, ignore this parameter.
                     * 
                     */
                    void SetAutoPublish(const bool& _autoPublish);

                    /**
                     * 判断参数 AutoPublish 是否已赋值
                     * @return AutoPublish 是否已赋值
                     * 
                     */
                    bool AutoPublishHasBeenSet() const;

                    /**
                     * 获取Stream ID used by TRTC for relay whiteboard push. With this ID, you can stream the user’s audio/video by using the domain name and standard streaming solution (FLV or HLS) in TRTC.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic relay whiteboard push is enabled regardless of the value of the `AutoPublish` parameter.

Default StreamID generation rule:
urlencode(SdkAppID_RoomID_PushUserID_main)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore, StreamID = 12345678_12345_push_user_1_main
                     * @return UserDefinedStreamId Stream ID used by TRTC for relay whiteboard push. With this ID, you can stream the user’s audio/video by using the domain name and standard streaming solution (FLV or HLS) in TRTC.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic relay whiteboard push is enabled regardless of the value of the `AutoPublish` parameter.

Default StreamID generation rule:
urlencode(SdkAppID_RoomID_PushUserID_main)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore, StreamID = 12345678_12345_push_user_1_main
                     * 
                     */
                    std::string GetUserDefinedStreamId() const;

                    /**
                     * 设置Stream ID used by TRTC for relay whiteboard push. With this ID, you can stream the user’s audio/video by using the domain name and standard streaming solution (FLV or HLS) in TRTC.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic relay whiteboard push is enabled regardless of the value of the `AutoPublish` parameter.

Default StreamID generation rule:
urlencode(SdkAppID_RoomID_PushUserID_main)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore, StreamID = 12345678_12345_push_user_1_main
                     * @param _userDefinedStreamId Stream ID used by TRTC for relay whiteboard push. With this ID, you can stream the user’s audio/video by using the domain name and standard streaming solution (FLV or HLS) in TRTC.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic relay whiteboard push is enabled regardless of the value of the `AutoPublish` parameter.

Default StreamID generation rule:
urlencode(SdkAppID_RoomID_PushUserID_main)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore, StreamID = 12345678_12345_push_user_1_main
                     * 
                     */
                    void SetUserDefinedStreamId(const std::string& _userDefinedStreamId);

                    /**
                     * 判断参数 UserDefinedStreamId 是否已赋值
                     * @return UserDefinedStreamId 是否已赋值
                     * 
                     */
                    bool UserDefinedStreamIdHasBeenSet() const;

                    /**
                     * 获取Internal parameter. You can ignore this parameter.
                     * @return ExtraData Internal parameter. You can ignore this parameter.
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置Internal parameter. You can ignore this parameter.
                     * @param _extraData Internal parameter. You can ignore this parameter.
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                    /**
                     * 获取TRTC room ID of the numeric type. Valid range: (1,4294967295).

If RoomId and TRTCRoomId are both specified, the value of TRTCRoomId takes priority as the room ID for TRTC whiteboard push.

If the TRTCRoomIdStr parameter is specified, this parameter is ignored.
                     * @return TRTCRoomId TRTC room ID of the numeric type. Valid range: (1,4294967295).

If RoomId and TRTCRoomId are both specified, the value of TRTCRoomId takes priority as the room ID for TRTC whiteboard push.

If the TRTCRoomIdStr parameter is specified, this parameter is ignored.
                     * 
                     */
                    int64_t GetTRTCRoomId() const;

                    /**
                     * 设置TRTC room ID of the numeric type. Valid range: (1,4294967295).

If RoomId and TRTCRoomId are both specified, the value of TRTCRoomId takes priority as the room ID for TRTC whiteboard push.

If the TRTCRoomIdStr parameter is specified, this parameter is ignored.
                     * @param _tRTCRoomId TRTC room ID of the numeric type. Valid range: (1,4294967295).

If RoomId and TRTCRoomId are both specified, the value of TRTCRoomId takes priority as the room ID for TRTC whiteboard push.

If the TRTCRoomIdStr parameter is specified, this parameter is ignored.
                     * 
                     */
                    void SetTRTCRoomId(const int64_t& _tRTCRoomId);

                    /**
                     * 判断参数 TRTCRoomId 是否已赋值
                     * @return TRTCRoomId 是否已赋值
                     * 
                     */
                    bool TRTCRoomIdHasBeenSet() const;

                    /**
                     * 获取TRTC room ID of the string type.

If TRTCRoomIdStr is specified, its value takes priority as the room ID for TRTC whiteboard push.
                     * @return TRTCRoomIdStr TRTC room ID of the string type.

If TRTCRoomIdStr is specified, its value takes priority as the room ID for TRTC whiteboard push.
                     * 
                     */
                    std::string GetTRTCRoomIdStr() const;

                    /**
                     * 设置TRTC room ID of the string type.

If TRTCRoomIdStr is specified, its value takes priority as the room ID for TRTC whiteboard push.
                     * @param _tRTCRoomIdStr TRTC room ID of the string type.

If TRTCRoomIdStr is specified, its value takes priority as the room ID for TRTC whiteboard push.
                     * 
                     */
                    void SetTRTCRoomIdStr(const std::string& _tRTCRoomIdStr);

                    /**
                     * 判断参数 TRTCRoomIdStr 是否已赋值
                     * @return TRTCRoomIdStr 是否已赋值
                     * 
                     */
                    bool TRTCRoomIdStrHasBeenSet() const;

                    /**
                     * 获取IM authentication parameters.
If the ID of the IM application used by whiteboard messages is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the IM application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the transmission channel for whiteboard messages. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * @return IMAuthParam IM authentication parameters.
If the ID of the IM application used by whiteboard messages is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the IM application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the transmission channel for whiteboard messages. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * 
                     */
                    AuthParam GetIMAuthParam() const;

                    /**
                     * 设置IM authentication parameters.
If the ID of the IM application used by whiteboard messages is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the IM application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the transmission channel for whiteboard messages. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * @param _iMAuthParam IM authentication parameters.
If the ID of the IM application used by whiteboard messages is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the IM application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the transmission channel for whiteboard messages. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * 
                     */
                    void SetIMAuthParam(const AuthParam& _iMAuthParam);

                    /**
                     * 判断参数 IMAuthParam 是否已赋值
                     * @return IMAuthParam 是否已赋值
                     * 
                     */
                    bool IMAuthParamHasBeenSet() const;

                    /**
                     * 获取TRTC authentication parameters, used for room entrance authentication for TRTC push.
If the ID of the TRTC application to which the target TRTC room belongs is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the TRTC application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the ID of the target TRTC application. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * @return TRTCAuthParam TRTC authentication parameters, used for room entrance authentication for TRTC push.
If the ID of the TRTC application to which the target TRTC room belongs is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the TRTC application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the ID of the target TRTC application. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * 
                     */
                    AuthParam GetTRTCAuthParam() const;

                    /**
                     * 设置TRTC authentication parameters, used for room entrance authentication for TRTC push.
If the ID of the TRTC application to which the target TRTC room belongs is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the TRTC application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the ID of the target TRTC application. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * @param _tRTCAuthParam TRTC authentication parameters, used for room entrance authentication for TRTC push.
If the ID of the TRTC application to which the target TRTC room belongs is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the TRTC application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the ID of the target TRTC application. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     * 
                     */
                    void SetTRTCAuthParam(const AuthParam& _tRTCAuthParam);

                    /**
                     * 判断参数 TRTCAuthParam 是否已赋值
                     * @return TRTCAuthParam 是否已赋值
                     * 
                     */
                    bool TRTCAuthParamHasBeenSet() const;

                    /**
                     * 获取This parameter is available only to users in the allowlist for trial.

TRTC room entrance mode for whiteboard push. Default value: `TRTCAppSceneVideoCall`.

`TRTCAppSceneVideoCall`: This scenario is most suitable when there are two or more people on a video call. The internal encoders and network protocols are optimized for video smoothness to reduce call latency and lagging.
`TRTCAppSceneLIVE`: This scenario is most suitable when there is only one person speaking or performing for an online audience, and occasionally multiple people interact with one another through video. The internal encoders and network protocols are optimized for performance and compatibility to deliver better performance and video clarity.
                     * @return TRTCEnterRoomMode This parameter is available only to users in the allowlist for trial.

TRTC room entrance mode for whiteboard push. Default value: `TRTCAppSceneVideoCall`.

`TRTCAppSceneVideoCall`: This scenario is most suitable when there are two or more people on a video call. The internal encoders and network protocols are optimized for video smoothness to reduce call latency and lagging.
`TRTCAppSceneLIVE`: This scenario is most suitable when there is only one person speaking or performing for an online audience, and occasionally multiple people interact with one another through video. The internal encoders and network protocols are optimized for performance and compatibility to deliver better performance and video clarity.
                     * 
                     */
                    std::string GetTRTCEnterRoomMode() const;

                    /**
                     * 设置This parameter is available only to users in the allowlist for trial.

TRTC room entrance mode for whiteboard push. Default value: `TRTCAppSceneVideoCall`.

`TRTCAppSceneVideoCall`: This scenario is most suitable when there are two or more people on a video call. The internal encoders and network protocols are optimized for video smoothness to reduce call latency and lagging.
`TRTCAppSceneLIVE`: This scenario is most suitable when there is only one person speaking or performing for an online audience, and occasionally multiple people interact with one another through video. The internal encoders and network protocols are optimized for performance and compatibility to deliver better performance and video clarity.
                     * @param _tRTCEnterRoomMode This parameter is available only to users in the allowlist for trial.

TRTC room entrance mode for whiteboard push. Default value: `TRTCAppSceneVideoCall`.

`TRTCAppSceneVideoCall`: This scenario is most suitable when there are two or more people on a video call. The internal encoders and network protocols are optimized for video smoothness to reduce call latency and lagging.
`TRTCAppSceneLIVE`: This scenario is most suitable when there is only one person speaking or performing for an online audience, and occasionally multiple people interact with one another through video. The internal encoders and network protocols are optimized for performance and compatibility to deliver better performance and video clarity.
                     * 
                     */
                    void SetTRTCEnterRoomMode(const std::string& _tRTCEnterRoomMode);

                    /**
                     * 判断参数 TRTCEnterRoomMode 是否已赋值
                     * @return TRTCEnterRoomMode 是否已赋值
                     * 
                     */
                    bool TRTCEnterRoomModeHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Room ID of the whiteboard push task. Valid range: (1,4294967295).

1. By default, the whiteboard push task uses the RoomId string as the GroupID of the IM group. For example, if the RoomId string is 1234, the GroupID of the IM group is also 1234. Message synchronization requires joining a group. Make sure that an IM group is created before the push starts. Otherwise, the push fails.
2. If neither TRTCRoomId nor TRTCRoomIdStr is specified, the value of RoomId is used as the Tencent Real-Time Communication (TRTC) room ID for the whiteboard push task.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * User ID used by the whiteboard push service for entering the whiteboard room. If `IMAuthParam`and `TRTCAuthParam` are not specified, this user ID is used for operations such as logging in to the IM application, joining an IM group, and entering the room for TRTC whiteboard push.
The ID cannot exceed 60 bytes in length and must be an unused ID. The whiteboard push service uses the user ID to enter the room for whiteboard audio/video push. If this ID is already used in another scenario, the other scenario and whiteboard push service will conflict, affecting the pushing operation.
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                    /**
                     * User's IM signature corresponding to the PushUserId.
                     */
                    std::string m_pushUserSig;
                    bool m_pushUserSigHasBeenSet;

                    /**
                     * Whiteboard parameters, such as the width, height, and background color of the whiteboard.
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * Whiteboard push timeout. Unit: seconds. Valid range: [300,259200]. Default value: 1800.

If no operation is performed on the whiteboard for the specified period of time, the whiteboard push service automatically stops whiteboard push.
                     */
                    int64_t m_autoStopTimeout;
                    bool m_autoStopTimeoutHasBeenSet;

                    /**
                     * Specifies whether to synchronize operations on the primary whiteboard push task to the backup task.
                     */
                    bool m_autoManageBackup;
                    bool m_autoManageBackupHasBeenSet;

                    /**
                     * Parameters of the backup whiteboard push task.

After the backup parameters are specified, the whiteboard push service adds a relayed video stream. That is, there are two video streams on the whiteboard in the same room.
                     */
                    WhiteboardPushBackupParam m_backup;
                    bool m_backupHasBeenSet;

                    /**
                     * Advanced permission control parameter in TRTC. If the advanced permission control feature is enabled in TRTC, this parameter is required.
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                    /**
                     * Frame rate of the whiteboard push video. Valid range: [0,30]. Default value: 20. Unit: fps.
                     */
                    int64_t m_videoFPS;
                    bool m_videoFPSHasBeenSet;

                    /**
                     * Whiteboard push bitrate. Valid range: [0,2000]. Default value: 1200. Unit: kbps.

The bitrate specified here is a reference value. During actual push, a dynamic bitrate is used. The actual bitrate does not remain the specified value but rather fluctuates around it.
                     */
                    int64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * Specifies whether to automatically record the whiteboard push when the recording mode in TRTC is set to `SubscribeStreamUserIds`.

Default value: `false`. If you need to enable automatic whiteboard push recording, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Recording`, ignore this parameter.
                     */
                    bool m_autoRecord;
                    bool m_autoRecordHasBeenSet;

                    /**
                     * ID of the whiteboard push recording. The ID is filled in the `userdefinerecordid` parameter in the callback message after cloud recording is complete in TRTC, helping you identify the recording callback and locate the video file in VOD media resource management.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic whiteboard push recording is enabled regardless of the value of the `AutoRecord` parameter.

Default RecordId generation rule:
urlencode(SdkAppID_RoomID_PushUserID)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore: RecordId = 12345678_12345_push_user_1
                     */
                    std::string m_userDefinedRecordId;
                    bool m_userDefinedRecordIdHasBeenSet;

                    /**
                     * Specifies whether to enable automatic relay whiteboard push when the relay push mode in TRTC is set to `SubscribeRelayUserIds`.

Default value: `false`. If you need to enable automatic relay whiteboard push, set this parameter to `true`.

If the recording mode in TRTC is set to `Global Auto Relay`, ignore this parameter.
                     */
                    bool m_autoPublish;
                    bool m_autoPublishHasBeenSet;

                    /**
                     * Stream ID used by TRTC for relay whiteboard push. With this ID, you can stream the user’s audio/video by using the domain name and standard streaming solution (FLV or HLS) in TRTC.

The value can be up to 64 bytes in length and contain letters (a-z and A-Z), digits (0-9), underscores (_), and hyphens (-).

After this parameter is set, automatic relay whiteboard push is enabled regardless of the value of the `AutoPublish` parameter.

Default StreamID generation rule:
urlencode(SdkAppID_RoomID_PushUserID_main)

Example:
SdkAppID = 12345678，RoomID = 12345，PushUserID = push_user_1
Therefore, StreamID = 12345678_12345_push_user_1_main
                     */
                    std::string m_userDefinedStreamId;
                    bool m_userDefinedStreamIdHasBeenSet;

                    /**
                     * Internal parameter. You can ignore this parameter.
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * TRTC room ID of the numeric type. Valid range: (1,4294967295).

If RoomId and TRTCRoomId are both specified, the value of TRTCRoomId takes priority as the room ID for TRTC whiteboard push.

If the TRTCRoomIdStr parameter is specified, this parameter is ignored.
                     */
                    int64_t m_tRTCRoomId;
                    bool m_tRTCRoomIdHasBeenSet;

                    /**
                     * TRTC room ID of the string type.

If TRTCRoomIdStr is specified, its value takes priority as the room ID for TRTC whiteboard push.
                     */
                    std::string m_tRTCRoomIdStr;
                    bool m_tRTCRoomIdStrHasBeenSet;

                    /**
                     * IM authentication parameters.
If the ID of the IM application used by whiteboard messages is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the IM application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the transmission channel for whiteboard messages. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     */
                    AuthParam m_iMAuthParam;
                    bool m_iMAuthParamHasBeenSet;

                    /**
                     * TRTC authentication parameters, used for room entrance authentication for TRTC push.
If the ID of the TRTC application to which the target TRTC room belongs is different from SdkAppId of the whiteboard application, specify this parameter to provide authentication information of the TRTC application.

If this parameter is specified, the whiteboard push service preferably uses the SdkAppId value in this parameter as the ID of the target TRTC application. If this parameter is left empty, the SdkAppId value in the common parameters is used.
                     */
                    AuthParam m_tRTCAuthParam;
                    bool m_tRTCAuthParamHasBeenSet;

                    /**
                     * This parameter is available only to users in the allowlist for trial.

TRTC room entrance mode for whiteboard push. Default value: `TRTCAppSceneVideoCall`.

`TRTCAppSceneVideoCall`: This scenario is most suitable when there are two or more people on a video call. The internal encoders and network protocols are optimized for video smoothness to reduce call latency and lagging.
`TRTCAppSceneLIVE`: This scenario is most suitable when there is only one person speaking or performing for an online audience, and occasionally multiple people interact with one another through video. The internal encoders and network protocols are optimized for performance and compatibility to deliver better performance and video clarity.
                     */
                    std::string m_tRTCEnterRoomMode;
                    bool m_tRTCEnterRoomModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTWHITEBOARDPUSHREQUEST_H_
