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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETEMPLATE_H_

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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Details of a transcoding template
                */
                class TranscodeTemplate : public AbstractModel
                {
                public:
                    TranscodeTemplate();
                    ~TranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of a transcoding template.
                     * @return Definition Unique ID of a transcoding template.
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置Unique ID of a transcoding template.
                     * @param _definition Unique ID of a transcoding template.
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Container format. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * @return Container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container format. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * @param _container Container format. Valid values: mp4, flv, hls, mp3, flac, ogg.
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
                     * 获取Name of a transcoding template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name of a transcoding template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a transcoding template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name of a transcoding template.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Template description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment Template description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment Template description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * @param _type Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
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
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
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
                     * 获取Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoTemplate Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _videoTemplate Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioTemplate Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioTemplate Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tEHDConfig TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * @return ContainerType Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * @param _containerType Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     * 
                     */
                    void SetContainerType(const std::string& _containerType);

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return CreateTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _createTime Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @return UpdateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * @param _updateTime Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnhanceConfig Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enhanceConfig Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Transcoding template alias.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AliasName Transcoding template alias.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Transcoding template alias.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _aliasName Transcoding template alias.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a transcoding template.
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Container format. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Name of a transcoding template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: Preset template;</li>
<li>Custom: Custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: Retain;</li>
<li>1: Remove.</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * TESHD transcoding parameter. To enable it, please contact your Tencent Cloud sales rep.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Container format filter. Valid values:
<li>Video: Video container format that can contain both video stream and audio stream;</li>
<li>PureAudio: Audio container format that can contain only audio stream.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * Creation time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of a template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Audio/Video enhancement configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * Transcoding template alias.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRANSCODETEMPLATE_H_
