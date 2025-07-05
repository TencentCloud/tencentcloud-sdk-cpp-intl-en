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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VideoTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/AudioTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TEHDConfigForUpdate.h>
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
                * ModifyTranscodeTemplate request structure.
                */
                class ModifyTranscodeTemplateRequest : public AbstractModel
                {
                public:
                    ModifyTranscodeTemplateRequest();
                    ~ModifyTranscodeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of a transcoding template.
                     * @return Definition Unique ID of a transcoding template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a transcoding template.
                     * @param _definition Unique ID of a transcoding template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

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
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
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
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
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
                     * 获取TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * @return TEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * 
                     */
                    TEHDConfigForUpdate GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     * @param _tEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
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
                     * 获取Audio/Video enhancement settings.
                     * @return EnhanceConfig Audio/Video enhancement settings.
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置Audio/Video enhancement settings.
                     * @param _enhanceConfig Audio/Video enhancement settings.
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
                     * Unique ID of a transcoding template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

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
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: Retain</li>
<li>1: Remove</li>
                     */
                    int64_t m_removeAudio;
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
                     * TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
                     */
                    TEHDConfigForUpdate m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Audio/Video enhancement settings.
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYTRANSCODETEMPLATEREQUEST_H_
