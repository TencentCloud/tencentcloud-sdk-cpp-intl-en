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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfig.h>
#include <tencentcloud/mps/v20190612/model/EnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Specifications for custom transcoding
                */
                class RawTranscodeParameter : public AbstractModel
                {
                public:
                    RawTranscodeParameter();
                    ~RawTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @return Container Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @param _container Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
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
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
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
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
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
                     * 获取Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * @return VideoTemplate Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * @param _videoTemplate Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     * 
                     */
                    void SetVideoTemplate(const VideoTemplateInfo& _videoTemplate);

                    /**
                     * 判断参数 VideoTemplate 是否已赋值
                     * @return VideoTemplate 是否已赋值
                     * 
                     */
                    bool VideoTemplateHasBeenSet() const;

                    /**
                     * 获取Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * @return AudioTemplate Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * @param _audioTemplate Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     * 
                     */
                    void SetAudioTemplate(const AudioTemplateInfo& _audioTemplate);

                    /**
                     * 判断参数 AudioTemplate 是否已赋值
                     * @return AudioTemplate 是否已赋值
                     * 
                     */
                    bool AudioTemplateHasBeenSet() const;

                    /**
                     * 获取TESHD transcoding parameter.
                     * @return TEHDConfig TESHD transcoding parameter.
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter.
                     * @param _tEHDConfig TESHD transcoding parameter.
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取Additional parameter, which is a serialized JSON string.
                     * @return StdExtInfo Additional parameter, which is a serialized JSON string.
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置Additional parameter, which is a serialized JSON string.
                     * @param _stdExtInfo Additional parameter, which is a serialized JSON string.
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                    /**
                     * 获取Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EnhanceConfig Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _enhanceConfig Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEnhanceConfig(const EnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取Subtitle parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleTemplate Subtitle parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置Subtitle parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleTemplate Subtitle parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate);

                    /**
                     * 判断参数 SubtitleTemplate 是否已赋值
                     * @return SubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SubtitleTemplateHasBeenSet() const;

                private:

                    /**
                     * Container. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
Default value: 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameter. This field is required when `RemoveVideo` is 0.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameter. This field is required when `RemoveAudio` is 0.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * TESHD transcoding parameter.
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Additional parameter, which is a serialized JSON string.
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * Subtitle parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWTRANSCODEPARAMETER_H_
