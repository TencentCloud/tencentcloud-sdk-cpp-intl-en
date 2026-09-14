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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfigForUpdate.h>
#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/AddOnSubtitle.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Specification parameters for custom transcoding. Used to overwrite the corresponding parameter values in the template.
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Muxing format. Available values: mp4, flv, hls, mp3, flac, ogg, and m4a. Among them, mp3, flac, ogg, and m4a are for audio-only files.
                     * @return Container Muxing format. Available values: mp4, flv, hls, mp3, flac, ogg, and m4a. Among them, mp3, flac, ogg, and m4a are for audio-only files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Muxing format. Available values: mp4, flv, hls, mp3, flac, ogg, and m4a. Among them, mp3, flac, ogg, and m4a are for audio-only files.
                     * @param _container Muxing format. Available values: mp4, flv, hls, mp3, flac, ogg, and m4a. Among them, mp3, flac, ogg, and m4a are for audio-only files.
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
                     * 获取Indicates whether to remove video data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * @return RemoveVideo Indicates whether to remove video data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置Indicates whether to remove video data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * @param _removeVideo Indicates whether to remove video data. Parameter value:
<li>`0`: retention;</li>
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
                     * 获取Indicates whether to remove audio data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * @return RemoveAudio Indicates whether to remove audio data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置Indicates whether to remove audio data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     * @param _removeAudio Indicates whether to remove audio data. Parameter value:
<li>`0`: retention;</li>
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
                     * @return VideoTemplate Video stream configuration parameters.
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameters.
                     * @param _videoTemplate Video stream configuration parameters.
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
                     * @return AudioTemplate Audio stream configuration parameters.
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameters.
                     * @param _audioTemplate Audio stream configuration parameters.
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
                     * 获取
                     * @return TEHDConfig 
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置
                     * @param _tEHDConfig 
                     * 
                     */
                    void SetTEHDConfig(const TEHDConfigForUpdate& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                    /**
                     * 获取Subtitle stream configuration parameters.
                     * @return SubtitleTemplate Subtitle stream configuration parameters.
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置Subtitle stream configuration parameters.
                     * @param _subtitleTemplate Subtitle stream configuration parameters.
                     * 
                     */
                    void SetSubtitleTemplate(const SubtitleTemplate& _subtitleTemplate);

                    /**
                     * 判断参数 SubtitleTemplate 是否已赋值
                     * @return SubtitleTemplate 是否已赋值
                     * 
                     */
                    bool SubtitleTemplateHasBeenSet() const;

                    /**
                     * 获取External audio track parameter.
                     * @return AddonAudioStream External audio track parameter.
                     * 
                     */
                    std::vector<MediaInputInfo> GetAddonAudioStream() const;

                    /**
                     * 设置External audio track parameter.
                     * @param _addonAudioStream External audio track parameter.
                     * 
                     */
                    void SetAddonAudioStream(const std::vector<MediaInputInfo>& _addonAudioStream);

                    /**
                     * 判断参数 AddonAudioStream 是否已赋值
                     * @return AddonAudioStream 是否已赋值
                     * 
                     */
                    bool AddonAudioStreamHasBeenSet() const;

                    /**
                     * 获取Transcoding extension field.
                     * @return StdExtInfo Transcoding extension field.
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置Transcoding extension field.
                     * @param _stdExtInfo Transcoding extension field.
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
                     * 获取Subtitle file to be inserted.
                     * @return AddOnSubtitles Subtitle file to be inserted.
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置Subtitle file to be inserted.
                     * @param _addOnSubtitles Subtitle file to be inserted.
                     * 
                     */
                    void SetAddOnSubtitles(const std::vector<AddOnSubtitle>& _addOnSubtitles);

                    /**
                     * 判断参数 AddOnSubtitles 是否已赋值
                     * @return AddOnSubtitles 是否已赋值
                     * 
                     */
                    bool AddOnSubtitlesHasBeenSet() const;

                private:

                    /**
                     * Muxing format. Available values: mp4, flv, hls, mp3, flac, ogg, and m4a. Among them, mp3, flac, ogg, and m4a are for audio-only files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Indicates whether to remove video data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Indicates whether to remove audio data. Parameter value:
<li>`0`: retention;</li>
<li>1: Remove.</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameters.
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameters.
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * 
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Subtitle stream configuration parameters.
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * External audio track parameter.
                     */
                    std::vector<MediaInputInfo> m_addonAudioStream;
                    bool m_addonAudioStreamHasBeenSet;

                    /**
                     * Transcoding extension field.
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * Subtitle file to be inserted.
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_
