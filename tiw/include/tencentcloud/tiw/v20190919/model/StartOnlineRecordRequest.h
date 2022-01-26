/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Concat.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/RecordControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * StartOnlineRecord request structure.
                */
                class StartOnlineRecordRequest : public AbstractModel
                {
                public:
                    StartOnlineRecordRequest();
                    ~StartOnlineRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the customer
                     * @return SdkAppId SdkAppId of the customer
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the customer
                     * @param SdkAppId SdkAppId of the customer
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取ID of the room for recording. Value range: (1, 4294967295)
                     * @return RoomId ID of the room for recording. Value range: (1, 4294967295)
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置ID of the room for recording. Value range: (1, 4294967295)
                     * @param RoomId ID of the room for recording. Value range: (1, 4294967295)
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取User ID used by the real-time recording service for entering a room. Its format is `tic_record_user_${RoomId}_${Random}`, where `${RoomId}` indicates the ID of the room for recording and `${Random}` is a random string.
The ID must be an unused ID in the SDK. The real-time recording service uses the user ID to enter the room for audio, video, and whiteboard recording. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the recording operation.
                     * @return RecordUserId User ID used by the real-time recording service for entering a room. Its format is `tic_record_user_${RoomId}_${Random}`, where `${RoomId}` indicates the ID of the room for recording and `${Random}` is a random string.
The ID must be an unused ID in the SDK. The real-time recording service uses the user ID to enter the room for audio, video, and whiteboard recording. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the recording operation.
                     */
                    std::string GetRecordUserId() const;

                    /**
                     * 设置User ID used by the real-time recording service for entering a room. Its format is `tic_record_user_${RoomId}_${Random}`, where `${RoomId}` indicates the ID of the room for recording and `${Random}` is a random string.
The ID must be an unused ID in the SDK. The real-time recording service uses the user ID to enter the room for audio, video, and whiteboard recording. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the recording operation.
                     * @param RecordUserId User ID used by the real-time recording service for entering a room. Its format is `tic_record_user_${RoomId}_${Random}`, where `${RoomId}` indicates the ID of the room for recording and `${Random}` is a random string.
The ID must be an unused ID in the SDK. The real-time recording service uses the user ID to enter the room for audio, video, and whiteboard recording. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the recording operation.
                     */
                    void SetRecordUserId(const std::string& _recordUserId);

                    /**
                     * 判断参数 RecordUserId 是否已赋值
                     * @return RecordUserId 是否已赋值
                     */
                    bool RecordUserIdHasBeenSet() const;

                    /**
                     * 获取Signature corresponding to RecordUserId
                     * @return RecordUserSig Signature corresponding to RecordUserId
                     */
                    std::string GetRecordUserSig() const;

                    /**
                     * 设置Signature corresponding to RecordUserId
                     * @param RecordUserSig Signature corresponding to RecordUserId
                     */
                    void SetRecordUserSig(const std::string& _recordUserSig);

                    /**
                     * 判断参数 RecordUserSig 是否已赋值
                     * @return RecordUserSig 是否已赋值
                     */
                    bool RecordUserSigHasBeenSet() const;

                    /**
                     * 获取(Disused) IM group ID of the whiteboard. By default, it is the same as the room ID.
                     * @return GroupId (Disused) IM group ID of the whiteboard. By default, it is the same as the room ID.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置(Disused) IM group ID of the whiteboard. By default, it is the same as the room ID.
                     * @param GroupId (Disused) IM group ID of the whiteboard. By default, it is the same as the room ID.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Real-time recording video splicing parameter
                     * @return Concat Real-time recording video splicing parameter
                     */
                    Concat GetConcat() const;

                    /**
                     * 设置Real-time recording video splicing parameter
                     * @param Concat Real-time recording video splicing parameter
                     */
                    void SetConcat(const Concat& _concat);

                    /**
                     * 判断参数 Concat 是否已赋值
                     * @return Concat 是否已赋值
                     */
                    bool ConcatHasBeenSet() const;

                    /**
                     * 获取Real-time recording whiteboard parameter, such as the whiteboard width and height
                     * @return Whiteboard Real-time recording whiteboard parameter, such as the whiteboard width and height
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置Real-time recording whiteboard parameter, such as the whiteboard width and height
                     * @param Whiteboard Real-time recording whiteboard parameter, such as the whiteboard width and height
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取Real-time recording stream mixing parameter
Notes:
1. The stream mixing feature needs to be enabled separately. If you need the feature, contact TIW customer service.
2. To use the stream mixing feature, the Extras parameter is required and must contain "MIX_STREAM".
                     * @return MixStream Real-time recording stream mixing parameter
Notes:
1. The stream mixing feature needs to be enabled separately. If you need the feature, contact TIW customer service.
2. To use the stream mixing feature, the Extras parameter is required and must contain "MIX_STREAM".
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置Real-time recording stream mixing parameter
Notes:
1. The stream mixing feature needs to be enabled separately. If you need the feature, contact TIW customer service.
2. To use the stream mixing feature, the Extras parameter is required and must contain "MIX_STREAM".
                     * @param MixStream Real-time recording stream mixing parameter
Notes:
1. The stream mixing feature needs to be enabled separately. If you need the feature, contact TIW customer service.
2. To use the stream mixing feature, the Extras parameter is required and must contain "MIX_STREAM".
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取List of advanced features used
List of possible values:
MIX_STREAM - Stream mixing feature
                     * @return Extras List of advanced features used
List of possible values:
MIX_STREAM - Stream mixing feature
                     */
                    std::vector<std::string> GetExtras() const;

                    /**
                     * 设置List of advanced features used
List of possible values:
MIX_STREAM - Stream mixing feature
                     * @param Extras List of advanced features used
List of possible values:
MIX_STREAM - Stream mixing feature
                     */
                    void SetExtras(const std::vector<std::string>& _extras);

                    /**
                     * 判断参数 Extras 是否已赋值
                     * @return Extras 是否已赋值
                     */
                    bool ExtrasHasBeenSet() const;

                    /**
                     * 获取Whether to return the audio-only recording file of different streams in the result callback. The file format is mp3.
                     * @return AudioFileNeeded Whether to return the audio-only recording file of different streams in the result callback. The file format is mp3.
                     */
                    bool GetAudioFileNeeded() const;

                    /**
                     * 设置Whether to return the audio-only recording file of different streams in the result callback. The file format is mp3.
                     * @param AudioFileNeeded Whether to return the audio-only recording file of different streams in the result callback. The file format is mp3.
                     */
                    void SetAudioFileNeeded(const bool& _audioFileNeeded);

                    /**
                     * 判断参数 AudioFileNeeded 是否已赋值
                     * @return AudioFileNeeded 是否已赋值
                     */
                    bool AudioFileNeededHasBeenSet() const;

                    /**
                     * 获取A group of real-time recording parameters. It specifies the streams to be recorded, whether to disable the audio recording, and whether to record only low-resolution videos, etc.
                     * @return RecordControl A group of real-time recording parameters. It specifies the streams to be recorded, whether to disable the audio recording, and whether to record only low-resolution videos, etc.
                     */
                    RecordControl GetRecordControl() const;

                    /**
                     * 设置A group of real-time recording parameters. It specifies the streams to be recorded, whether to disable the audio recording, and whether to record only low-resolution videos, etc.
                     * @param RecordControl A group of real-time recording parameters. It specifies the streams to be recorded, whether to disable the audio recording, and whether to record only low-resolution videos, etc.
                     */
                    void SetRecordControl(const RecordControl& _recordControl);

                    /**
                     * 判断参数 RecordControl 是否已赋值
                     * @return RecordControl 是否已赋值
                     */
                    bool RecordControlHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the customer
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * ID of the room for recording. Value range: (1, 4294967295)
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * User ID used by the real-time recording service for entering a room. Its format is `tic_record_user_${RoomId}_${Random}`, where `${RoomId}` indicates the ID of the room for recording and `${Random}` is a random string.
The ID must be an unused ID in the SDK. The real-time recording service uses the user ID to enter the room for audio, video, and whiteboard recording. If this ID is already used in the SDK, the SDK and recording service will conflict, affecting the recording operation.
                     */
                    std::string m_recordUserId;
                    bool m_recordUserIdHasBeenSet;

                    /**
                     * Signature corresponding to RecordUserId
                     */
                    std::string m_recordUserSig;
                    bool m_recordUserSigHasBeenSet;

                    /**
                     * (Disused) IM group ID of the whiteboard. By default, it is the same as the room ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Real-time recording video splicing parameter
                     */
                    Concat m_concat;
                    bool m_concatHasBeenSet;

                    /**
                     * Real-time recording whiteboard parameter, such as the whiteboard width and height
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * Real-time recording stream mixing parameter
Notes:
1. The stream mixing feature needs to be enabled separately. If you need the feature, contact TIW customer service.
2. To use the stream mixing feature, the Extras parameter is required and must contain "MIX_STREAM".
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * List of advanced features used
List of possible values:
MIX_STREAM - Stream mixing feature
                     */
                    std::vector<std::string> m_extras;
                    bool m_extrasHasBeenSet;

                    /**
                     * Whether to return the audio-only recording file of different streams in the result callback. The file format is mp3.
                     */
                    bool m_audioFileNeeded;
                    bool m_audioFileNeededHasBeenSet;

                    /**
                     * A group of real-time recording parameters. It specifies the streams to be recorded, whether to disable the audio recording, and whether to record only low-resolution videos, etc.
                     */
                    RecordControl m_recordControl;
                    bool m_recordControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STARTONLINERECORDREQUEST_H_
