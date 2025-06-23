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
                * Custom specification parameters for video processing, which are used to override corresponding parameters in templates.
                */
                class OverrideTranscodeParameter : public AbstractModel
                {
                public:
                    OverrideTranscodeParameter();
                    ~OverrideTranscodeParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, and m4a; mp3, flac, ogg, and m4a are formats of audio files.
                     * @return Container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, and m4a; mp3, flac, ogg, and m4a are formats of audio files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, and m4a; mp3, flac, ogg, and m4a are formats of audio files.
                     * @param _container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, and m4a; mp3, flac, ogg, and m4a are formats of audio files.
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
<li>0: retain</li>
<li>1: remove</li>
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     * 
                     */
                    uint64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
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
                     * 获取Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     * 
                     */
                    uint64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
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
                     * 获取Video stream configuration parameter.
                     * @return VideoTemplate Video stream configuration parameter.
                     * 
                     */
                    VideoTemplateInfoForUpdate GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameter.
                     * @param _videoTemplate Video stream configuration parameter.
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
                     * 获取Audio stream configuration parameter.
                     * @return AudioTemplate Audio stream configuration parameter.
                     * 
                     */
                    AudioTemplateInfoForUpdate GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameter.
                     * @param _audioTemplate Audio stream configuration parameter.
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
                     * 获取The TSC transcoding parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TEHDConfig The TSC transcoding parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置The TSC transcoding parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tEHDConfig The TSC transcoding parameters.
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

                    /**
                     * 获取The subtitle settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleTemplate The subtitle settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubtitleTemplate GetSubtitleTemplate() const;

                    /**
                     * 设置The subtitle settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleTemplate The subtitle settings.
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

                    /**
                     * 获取The information of the external audio track to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddonAudioStream The information of the external audio track to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaInputInfo> GetAddonAudioStream() const;

                    /**
                     * 设置The information of the external audio track to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addonAudioStream The information of the external audio track to add.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取An extended field for transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StdExtInfo An extended field for transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置An extended field for transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stdExtInfo An extended field for transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The subtitle file to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AddOnSubtitles The subtitle file to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AddOnSubtitle> GetAddOnSubtitles() const;

                    /**
                     * 设置The subtitle file to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _addOnSubtitles The subtitle file to add.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Container format. Valid values: mp4, flv, hls, mp3, flac, ogg, and m4a; mp3, flac, ogg, and m4a are formats of audio files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     */
                    uint64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: retain</li>
<li>1: remove</li>
                     */
                    uint64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameter.
                     */
                    VideoTemplateInfoForUpdate m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameter.
                     */
                    AudioTemplateInfoForUpdate m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * The TSC transcoding parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * The subtitle settings.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SubtitleTemplate m_subtitleTemplate;
                    bool m_subtitleTemplateHasBeenSet;

                    /**
                     * The information of the external audio track to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaInputInfo> m_addonAudioStream;
                    bool m_addonAudioStreamHasBeenSet;

                    /**
                     * An extended field for transcoding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                    /**
                     * The subtitle file to add.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AddOnSubtitle> m_addOnSubtitles;
                    bool m_addOnSubtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_OVERRIDETRANSCODEPARAMETER_H_
