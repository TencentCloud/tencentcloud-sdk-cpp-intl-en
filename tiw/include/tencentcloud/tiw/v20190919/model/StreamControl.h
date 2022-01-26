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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STREAMCONTROL_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STREAMCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * A group of parameters for recording over specified streams. It specifies whether to disable the audio recording and whether to record high-resolution or low-resolution videos.
                */
                class StreamControl : public AbstractModel
                {
                public:
                    StreamControl();
                    ~StreamControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video stream ID
Description of the possible video stream ID values:
1. `tic_record_user`: the whiteboard video stream
2. `tic_substream`: the auxiliary video stream
3. Specific user ID: the video stream of the specified user

The actual recording uses the prefix match of the video stream ID. The real stream becomes the specified stream once its ID prefix matches with the stream ID.
                     * @return StreamId Video stream ID
Description of the possible video stream ID values:
1. `tic_record_user`: the whiteboard video stream
2. `tic_substream`: the auxiliary video stream
3. Specific user ID: the video stream of the specified user

The actual recording uses the prefix match of the video stream ID. The real stream becomes the specified stream once its ID prefix matches with the stream ID.
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Video stream ID
Description of the possible video stream ID values:
1. `tic_record_user`: the whiteboard video stream
2. `tic_substream`: the auxiliary video stream
3. Specific user ID: the video stream of the specified user

The actual recording uses the prefix match of the video stream ID. The real stream becomes the specified stream once its ID prefix matches with the stream ID.
                     * @param StreamId Video stream ID
Description of the possible video stream ID values:
1. `tic_record_user`: the whiteboard video stream
2. `tic_substream`: the auxiliary video stream
3. Specific user ID: the video stream of the specified user

The actual recording uses the prefix match of the video stream ID. The real stream becomes the specified stream once its ID prefix matches with the stream ID.
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Whether to disable recording over the stream.

true: does not record this stream. This stream will not be included in the final recording file.
false: records this stream. This stream will be included in the final recording file.

Default value: false
                     * @return DisableRecord Whether to disable recording over the stream.

true: does not record this stream. This stream will not be included in the final recording file.
false: records this stream. This stream will be included in the final recording file.

Default value: false
                     */
                    bool GetDisableRecord() const;

                    /**
                     * 设置Whether to disable recording over the stream.

true: does not record this stream. This stream will not be included in the final recording file.
false: records this stream. This stream will be included in the final recording file.

Default value: false
                     * @param DisableRecord Whether to disable recording over the stream.

true: does not record this stream. This stream will not be included in the final recording file.
false: records this stream. This stream will be included in the final recording file.

Default value: false
                     */
                    void SetDisableRecord(const bool& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取Whether to disable the audio recording of the stream.

true: does not record the audio of the stream. In the final recording file, this stream will be soundless.
false: the stream has both video and audio recording.

Default value: false
                     * @return DisableAudio Whether to disable the audio recording of the stream.

true: does not record the audio of the stream. In the final recording file, this stream will be soundless.
false: the stream has both video and audio recording.

Default value: false
                     */
                    bool GetDisableAudio() const;

                    /**
                     * 设置Whether to disable the audio recording of the stream.

true: does not record the audio of the stream. In the final recording file, this stream will be soundless.
false: the stream has both video and audio recording.

Default value: false
                     * @param DisableAudio Whether to disable the audio recording of the stream.

true: does not record the audio of the stream. In the final recording file, this stream will be soundless.
false: the stream has both video and audio recording.

Default value: false
                     */
                    void SetDisableAudio(const bool& _disableAudio);

                    /**
                     * 判断参数 DisableAudio 是否已赋值
                     * @return DisableAudio 是否已赋值
                     */
                    bool DisableAudioHasBeenSet() const;

                    /**
                     * 获取Whether to only record low-resolution stream videos.

true: records only low-resolution videos. In this case, please make sure that the client pushes low-resolution videos upstream. Otherwise, the recorded video may be black. 
false: records only high-resolution videos.

Default value: false
                     * @return PullSmallVideo Whether to only record low-resolution stream videos.

true: records only low-resolution videos. In this case, please make sure that the client pushes low-resolution videos upstream. Otherwise, the recorded video may be black. 
false: records only high-resolution videos.

Default value: false
                     */
                    bool GetPullSmallVideo() const;

                    /**
                     * 设置Whether to only record low-resolution stream videos.

true: records only low-resolution videos. In this case, please make sure that the client pushes low-resolution videos upstream. Otherwise, the recorded video may be black. 
false: records only high-resolution videos.

Default value: false
                     * @param PullSmallVideo Whether to only record low-resolution stream videos.

true: records only low-resolution videos. In this case, please make sure that the client pushes low-resolution videos upstream. Otherwise, the recorded video may be black. 
false: records only high-resolution videos.

Default value: false
                     */
                    void SetPullSmallVideo(const bool& _pullSmallVideo);

                    /**
                     * 判断参数 PullSmallVideo 是否已赋值
                     * @return PullSmallVideo 是否已赋值
                     */
                    bool PullSmallVideoHasBeenSet() const;

                private:

                    /**
                     * Video stream ID
Description of the possible video stream ID values:
1. `tic_record_user`: the whiteboard video stream
2. `tic_substream`: the auxiliary video stream
3. Specific user ID: the video stream of the specified user

The actual recording uses the prefix match of the video stream ID. The real stream becomes the specified stream once its ID prefix matches with the stream ID.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Whether to disable recording over the stream.

true: does not record this stream. This stream will not be included in the final recording file.
false: records this stream. This stream will be included in the final recording file.

Default value: false
                     */
                    bool m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * Whether to disable the audio recording of the stream.

true: does not record the audio of the stream. In the final recording file, this stream will be soundless.
false: the stream has both video and audio recording.

Default value: false
                     */
                    bool m_disableAudio;
                    bool m_disableAudioHasBeenSet;

                    /**
                     * Whether to only record low-resolution stream videos.

true: records only low-resolution videos. In this case, please make sure that the client pushes low-resolution videos upstream. Otherwise, the recorded video may be black. 
false: records only high-resolution videos.

Default value: false
                     */
                    bool m_pullSmallVideo;
                    bool m_pullSmallVideoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STREAMCONTROL_H_
