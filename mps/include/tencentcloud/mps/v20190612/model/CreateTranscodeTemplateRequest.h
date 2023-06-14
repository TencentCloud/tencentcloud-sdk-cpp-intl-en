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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfo.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfig.h>
#include <tencentcloud/mps/v20190612/model/EnhanceConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateTranscodeTemplate request structure.
                */
                class CreateTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    CreateTranscodeTemplateRequest();
                    ~CreateTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Container format. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @return Container Container format. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container format. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     * @param _container Container format. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
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
                     * 获取Name of a transcoding template. Length limit: 64 characters.
                     * @return Name Name of a transcoding template. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a transcoding template. Length limit: 64 characters.
                     * @param _name Name of a transcoding template. Length limit: 64 characters.
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
                     * 获取Template description. Length limit: 256 characters.
                     * @return Comment Template description. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description. Length limit: 256 characters.
                     * @param _comment Template description. Length limit: 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
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
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
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
                     * 获取TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * @return TEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * @param _tEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
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
                     * 获取Audio/Video enhancement configuration.
                     * @return EnhanceConfig Audio/Video enhancement configuration.
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置Audio/Video enhancement configuration.
                     * @param _enhanceConfig Audio/Video enhancement configuration.
                     * 
                     */
                    void SetEnhanceConfig(const EnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                private:

                    /**
                     * Container format. Valid values: mp4; flv; hls; mp3; flac; ogg; m4a. Among them, mp3, flac, ogg, and m4a are for audio files.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Name of a transcoding template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
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
                     * TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Audio/Video enhancement configuration.
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATETRANSCODETEMPLATEREQUEST_H_
