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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeVideoStream.h>
#include <tencentcloud/mps/v20190612/model/ComposeAudioStream.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The output video information of a video editing/compositing task.
                */
                class ComposeTargetInfo : public AbstractModel
                {
                public:
                    ComposeTargetInfo();
                    ~ComposeTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The container. Valid values:
<li>`mp4` (default), for video files. </li>
<li>`mp3`, for audio files. </li>
                     * @return Container The container. Valid values:
<li>`mp4` (default), for video files. </li>
<li>`mp3`, for audio files. </li>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置The container. Valid values:
<li>`mp4` (default), for video files. </li>
<li>`mp3`, for audio files. </li>
                     * @param _container The container. Valid values:
<li>`mp4` (default), for video files. </li>
<li>`mp3`, for audio files. </li>
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取Whether to remove audio data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取The information of the output video stream.
                     * @return VideoStream The information of the output video stream.
                     * 
                     */
                    ComposeVideoStream GetVideoStream() const;

                    /**
                     * 设置The information of the output video stream.
                     * @param _videoStream The information of the output video stream.
                     * 
                     */
                    void SetVideoStream(const ComposeVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取The information of the output audio stream.
                     * @return AudioStream The information of the output audio stream.
                     * 
                     */
                    ComposeAudioStream GetAudioStream() const;

                    /**
                     * 设置The information of the output audio stream.
                     * @param _audioStream The information of the output audio stream.
                     * 
                     */
                    void SetAudioStream(const ComposeAudioStream& _audioStream);

                    /**
                     * 判断参数 AudioStream 是否已赋值
                     * @return AudioStream 是否已赋值
                     * 
                     */
                    bool AudioStreamHasBeenSet() const;

                private:

                    /**
                     * The container. Valid values:
<li>`mp4` (default), for video files. </li>
<li>`mp3`, for audio files. </li>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>`0` (default): No. </li>
<li>`1`: Yes. </li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * The information of the output video stream.
                     */
                    ComposeVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * The information of the output audio stream.
                     */
                    ComposeAudioStream m_audioStream;
                    bool m_audioStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETARGETINFO_H_
