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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfigForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Custom video transcoding parameters.
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.
                     * @return Container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.
                     * @param _container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.
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
                     * 获取Indicates whether to remove video data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * @return RemoveVideo Indicates whether to remove video data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置Indicates whether to remove video data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * @param _removeVideo Indicates whether to remove video data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * 
                     */
                    void SetRemoveVideo(const uint64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取Indicates whether to remove audio data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * @return RemoveAudio Indicates whether to remove audio data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置Indicates whether to remove audio data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * @param _removeAudio Indicates whether to remove audio data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     * 
                     */
                    void SetRemoveAudio(const uint64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取Video stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoTemplate Video stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoTemplate Video stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfoForUpdate& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取Audio stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioTemplate Audio stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioTemplate Audio stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfoForUpdate& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取Top Speed Codec transcoding configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TEHDConfig Top Speed Codec transcoding configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置Top Speed Codec transcoding configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tEHDConfig Top Speed Codec transcoding configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, m4a, and wav. Among them, mp3, flac, ogg, m4a, and wav are for audio-only files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Indicates whether to remove video data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Indicates whether to remove audio data. Valid values:
<li>`0`: reserved;</li>
<li>1: Remove.</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * Top Speed Codec transcoding configuration parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OVERRIDETRANSCODEPARAMETER_H_
