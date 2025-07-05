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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VideoEncodeParams.h>
#include <tencentcloud/trtc/v20190722/model/AudioEncodeParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartStreamIngest request structure.
                */
                class StartStreamIngestRequest : public AbstractModel
                {
                public:
                    StartStreamIngestRequest();
                    ~StartStreamIngestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC's [SdkAppId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#sdkappid), the same as the SdkAppId corresponding to the Record room.
                     * @return SdkAppId TRTC's [SdkAppId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#sdkappid), the same as the SdkAppId corresponding to the Record room.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC's [SdkAppId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#sdkappid), the same as the SdkAppId corresponding to the Record room.
                     * @param _sdkAppId TRTC's [SdkAppId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#sdkappid), the same as the SdkAppId corresponding to the Record room.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取TRTC's [RoomId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#roomid), the RoomId corresponding to the Record TRTC room.
                     * @return RoomId TRTC's [RoomId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#roomid), the RoomId corresponding to the Record TRTC room.
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC's [RoomId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#roomid), the RoomId corresponding to the Record TRTC room.
                     * @param _roomId TRTC's [RoomId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#roomid), the RoomId corresponding to the Record TRTC room.
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Type of TRTC RoomId. [*Note] Must be the same as the RoomId type corresponding to the Record room: 0: String type RoomId 1: 32-bit Integer type RoomId (default)
                     * @return RoomIdType Type of TRTC RoomId. [*Note] Must be the same as the RoomId type corresponding to the Record room: 0: String type RoomId 1: 32-bit Integer type RoomId (default)
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置Type of TRTC RoomId. [*Note] Must be the same as the RoomId type corresponding to the Record room: 0: String type RoomId 1: 32-bit Integer type RoomId (default)
                     * @param _roomIdType Type of TRTC RoomId. [*Note] Must be the same as the RoomId type corresponding to the Record room: 0: String type RoomId 1: 32-bit Integer type RoomId (default)
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取UserId of the Pull stream Relay Robot, used to enter the room and initiate the Pull stream Relay Task.
                     * @return UserId UserId of the Pull stream Relay Robot, used to enter the room and initiate the Pull stream Relay Task.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置UserId of the Pull stream Relay Robot, used to enter the room and initiate the Pull stream Relay Task.
                     * @param _userId UserId of the Pull stream Relay Robot, used to enter the room and initiate the Pull stream Relay Task.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取UserSig corresponding to the Pull stream Relay Robot UserId, i.e., UserId and UserSig are equivalent to the Robot's Login password for entering the room. For the specific Calculation method, please refer to the TRTC [UserSig](https://www.tencentcloud.com/zh/document/product/647/39074) Scheme.
                     * @return UserSig UserSig corresponding to the Pull stream Relay Robot UserId, i.e., UserId and UserSig are equivalent to the Robot's Login password for entering the room. For the specific Calculation method, please refer to the TRTC [UserSig](https://www.tencentcloud.com/zh/document/product/647/39074) Scheme.
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置UserSig corresponding to the Pull stream Relay Robot UserId, i.e., UserId and UserSig are equivalent to the Robot's Login password for entering the room. For the specific Calculation method, please refer to the TRTC [UserSig](https://www.tencentcloud.com/zh/document/product/647/39074) Scheme.
                     * @param _userSig UserSig corresponding to the Pull stream Relay Robot UserId, i.e., UserId and UserSig are equivalent to the Robot's Login password for entering the room. For the specific Calculation method, please refer to the TRTC [UserSig](https://www.tencentcloud.com/zh/document/product/647/39074) Scheme.
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取The Url of the media resource.
                     * @return StreamUrl The Url of the media resource.
                     * 
                     */
                    std::string GetStreamUrl() const;

                    /**
                     * 设置The Url of the media resource.
                     * @param _streamUrl The Url of the media resource.
                     * 
                     */
                    void SetStreamUrl(const std::string& _streamUrl);

                    /**
                     * 判断参数 StreamUrl 是否已赋值
                     * @return StreamUrl 是否已赋值
                     * 
                     */
                    bool StreamUrlHasBeenSet() const;

                    /**
                     * 获取TRTC room permission Encryption ticket, only needed when advanced permission control is enabled in the Console. After enabling advanced permission control in the TRTC Console, TRTC's backend service system will verify a so-called [PrivateMapKey] 'Permission ticket', which contains an encrypted RoomId and an encrypted 'Permission bit list'. Since PrivateMapKey contains RoomId, providing only UserSig without PrivateMapKey does not allow entry into the specified room.
                     * @return PrivateMapKey TRTC room permission Encryption ticket, only needed when advanced permission control is enabled in the Console. After enabling advanced permission control in the TRTC Console, TRTC's backend service system will verify a so-called [PrivateMapKey] 'Permission ticket', which contains an encrypted RoomId and an encrypted 'Permission bit list'. Since PrivateMapKey contains RoomId, providing only UserSig without PrivateMapKey does not allow entry into the specified room.
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置TRTC room permission Encryption ticket, only needed when advanced permission control is enabled in the Console. After enabling advanced permission control in the TRTC Console, TRTC's backend service system will verify a so-called [PrivateMapKey] 'Permission ticket', which contains an encrypted RoomId and an encrypted 'Permission bit list'. Since PrivateMapKey contains RoomId, providing only UserSig without PrivateMapKey does not allow entry into the specified room.
                     * @param _privateMapKey TRTC room permission Encryption ticket, only needed when advanced permission control is enabled in the Console. After enabling advanced permission control in the TRTC Console, TRTC's backend service system will verify a so-called [PrivateMapKey] 'Permission ticket', which contains an encrypted RoomId and an encrypted 'Permission bit list'. Since PrivateMapKey contains RoomId, providing only UserSig without PrivateMapKey does not allow entry into the specified room.
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
                     * 获取Video Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @return VideoEncodeParams Video Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @deprecated
                     */
                    VideoEncodeParams GetVideoEncodeParams() const;

                    /**
                     * 设置Video Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @param _videoEncodeParams Video Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @deprecated
                     */
                    void SetVideoEncodeParams(const VideoEncodeParams& _videoEncodeParams);

                    /**
                     * 判断参数 VideoEncodeParams 是否已赋值
                     * @return VideoEncodeParams 是否已赋值
                     * @deprecated
                     */
                    bool VideoEncodeParamsHasBeenSet() const;

                    /**
                     * 获取Audio Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @return AudioEncodeParams Audio Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @deprecated
                     */
                    AudioEncodeParams GetAudioEncodeParams() const;

                    /**
                     * 设置Audio Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @param _audioEncodeParams Audio Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     * @deprecated
                     */
                    void SetAudioEncodeParams(const AudioEncodeParams& _audioEncodeParams);

                    /**
                     * 判断参数 AudioEncodeParams 是否已赋值
                     * @return AudioEncodeParams 是否已赋值
                     * @deprecated
                     */
                    bool AudioEncodeParamsHasBeenSet() const;

                    /**
                     * 获取	
Source URL. Example value: https://a.b/test.mp4
                     * @return SourceUrl 	
Source URL. Example value: https://a.b/test.mp4
                     * @deprecated
                     */
                    std::vector<std::string> GetSourceUrl() const;

                    /**
                     * 设置	
Source URL. Example value: https://a.b/test.mp4
                     * @param _sourceUrl 	
Source URL. Example value: https://a.b/test.mp4
                     * @deprecated
                     */
                    void SetSourceUrl(const std::vector<std::string>& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     * @deprecated
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return SeekSecond 
                     * 
                     */
                    int64_t GetSeekSecond() const;

                    /**
                     * 设置
                     * @param _seekSecond 
                     * 
                     */
                    void SetSeekSecond(const int64_t& _seekSecond);

                    /**
                     * 判断参数 SeekSecond 是否已赋值
                     * @return SeekSecond 是否已赋值
                     * 
                     */
                    bool SeekSecondHasBeenSet() const;

                    /**
                     * 获取Enable auto relay to cdn, please make sure that this feature has been enabled in the console.
                     * @return AutoPush Enable auto relay to cdn, please make sure that this feature has been enabled in the console.
                     * 
                     */
                    bool GetAutoPush() const;

                    /**
                     * 设置Enable auto relay to cdn, please make sure that this feature has been enabled in the console.
                     * @param _autoPush Enable auto relay to cdn, please make sure that this feature has been enabled in the console.
                     * 
                     */
                    void SetAutoPush(const bool& _autoPush);

                    /**
                     * 判断参数 AutoPush 是否已赋值
                     * @return AutoPush 是否已赋值
                     * 
                     */
                    bool AutoPushHasBeenSet() const;

                    /**
                     * 获取Loop playback count, value range: [-1, 1000], default is 1 time. - 0 is an invalid value - -1 is for loop playback, task termination requires actively calling the stop interface or setting MaxDuration.
                     * @return RepeatNum Loop playback count, value range: [-1, 1000], default is 1 time. - 0 is an invalid value - -1 is for loop playback, task termination requires actively calling the stop interface or setting MaxDuration.
                     * 
                     */
                    int64_t GetRepeatNum() const;

                    /**
                     * 设置Loop playback count, value range: [-1, 1000], default is 1 time. - 0 is an invalid value - -1 is for loop playback, task termination requires actively calling the stop interface or setting MaxDuration.
                     * @param _repeatNum Loop playback count, value range: [-1, 1000], default is 1 time. - 0 is an invalid value - -1 is for loop playback, task termination requires actively calling the stop interface or setting MaxDuration.
                     * 
                     */
                    void SetRepeatNum(const int64_t& _repeatNum);

                    /**
                     * 判断参数 RepeatNum 是否已赋值
                     * @return RepeatNum 是否已赋值
                     * 
                     */
                    bool RepeatNumHasBeenSet() const;

                    /**
                     * 获取Loop playback maximum duration, only effective when RepeatNum is set to -1, valid value range: [1, 10080], unit: minutes
                     * @return MaxDuration Loop playback maximum duration, only effective when RepeatNum is set to -1, valid value range: [1, 10080], unit: minutes
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置Loop playback maximum duration, only effective when RepeatNum is set to -1, valid value range: [1, 10080], unit: minutes
                     * @param _maxDuration Loop playback maximum duration, only effective when RepeatNum is set to -1, valid value range: [1, 10080], unit: minutes
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取Volume. Valid value range: [0, 100], default value is 100, indicating the original volume.
                     * @return Volume Volume. Valid value range: [0, 100], default value is 100, indicating the original volume.
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置Volume. Valid value range: [0, 100], default value is 100, indicating the original volume.
                     * @param _volume Volume. Valid value range: [0, 100], default value is 100, indicating the original volume.
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * TRTC's [SdkAppId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#sdkappid), the same as the SdkAppId corresponding to the Record room.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC's [RoomId](https://intl.cloud.tencent.com/document/product/647/46351?from_cn_redirect=1#roomid), the RoomId corresponding to the Record TRTC room.
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Type of TRTC RoomId. [*Note] Must be the same as the RoomId type corresponding to the Record room: 0: String type RoomId 1: 32-bit Integer type RoomId (default)
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * UserId of the Pull stream Relay Robot, used to enter the room and initiate the Pull stream Relay Task.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * UserSig corresponding to the Pull stream Relay Robot UserId, i.e., UserId and UserSig are equivalent to the Robot's Login password for entering the room. For the specific Calculation method, please refer to the TRTC [UserSig](https://www.tencentcloud.com/zh/document/product/647/39074) Scheme.
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * The Url of the media resource.
                     */
                    std::string m_streamUrl;
                    bool m_streamUrlHasBeenSet;

                    /**
                     * TRTC room permission Encryption ticket, only needed when advanced permission control is enabled in the Console. After enabling advanced permission control in the TRTC Console, TRTC's backend service system will verify a so-called [PrivateMapKey] 'Permission ticket', which contains an encrypted RoomId and an encrypted 'Permission bit list'. Since PrivateMapKey contains RoomId, providing only UserSig without PrivateMapKey does not allow entry into the specified room.
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                    /**
                     * Video Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     */
                    VideoEncodeParams m_videoEncodeParams;
                    bool m_videoEncodeParamsHasBeenSet;

                    /**
                     * Audio Codec Parameters. Optional, if not filled, Keep original stream Parameters.
                     */
                    AudioEncodeParams m_audioEncodeParams;
                    bool m_audioEncodeParamsHasBeenSet;

                    /**
                     * 	
Source URL. Example value: https://a.b/test.mp4
                     */
                    std::vector<std::string> m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_seekSecond;
                    bool m_seekSecondHasBeenSet;

                    /**
                     * Enable auto relay to cdn, please make sure that this feature has been enabled in the console.
                     */
                    bool m_autoPush;
                    bool m_autoPushHasBeenSet;

                    /**
                     * Loop playback count, value range: [-1, 1000], default is 1 time. - 0 is an invalid value - -1 is for loop playback, task termination requires actively calling the stop interface or setting MaxDuration.
                     */
                    int64_t m_repeatNum;
                    bool m_repeatNumHasBeenSet;

                    /**
                     * Loop playback maximum duration, only effective when RepeatNum is set to -1, valid value range: [1, 10080], unit: minutes
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * Volume. Valid value range: [0, 100], default value is 100, indicating the original volume.
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTSTREAMINGESTREQUEST_H_
