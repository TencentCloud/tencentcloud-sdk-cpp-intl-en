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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/AudioTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/TEHDConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Transcoding template details
                */
                class TranscodeTemplate : public AbstractModel
                {
                public:
                    TranscodeTemplate();
                    ~TranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of transcoding template.
                     * @return Definition Unique ID of transcoding template.
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置Unique ID of transcoding template.
                     * @param _definition Unique ID of transcoding template.
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
                     * 获取Container. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * @return Container Container. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Container. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     * @param _container Container. Valid values: mp4, flv, hls, mp3, flac, ogg.
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
                     * 获取Transcoding template name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name Transcoding template name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Transcoding template name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _name Transcoding template name.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Comment Template description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _comment Template description.
Note: this field may return null, indicating that no valid values can be obtained.
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
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     * @param _type Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
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
<li>0: retain;</li>
<li>1: remove.</li>
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
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
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VideoTemplate Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _videoTemplate Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioTemplate Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _audioTemplate Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TEHDConfig TESHD transcoding parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TESHD transcoding parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tEHDConfig TESHD transcoding parameter.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Container filter. Valid values:
<li>Video: video container that can contain both video stream and audio stream;</li>
<li>PureAudio: audio container that can contain only audio stream.</li>
                     * @return ContainerType Container filter. Valid values:
<li>Video: video container that can contain both video stream and audio stream;</li>
<li>PureAudio: audio container that can contain only audio stream.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置Container filter. Valid values:
<li>Video: video container that can contain both video stream and audio stream;</li>
<li>PureAudio: audio container that can contain only audio stream.</li>
                     * @param _containerType Container filter. Valid values:
<li>Video: video container that can contain both video stream and audio stream;</li>
<li>PureAudio: audio container that can contain only audio stream.</li>
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
                     * 获取Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取The segment type. This parameter is valid only if `Container` is `hls`
                     * @return SegmentType The segment type. This parameter is valid only if `Container` is `hls`
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置The segment type. This parameter is valid only if `Container` is `hls`
                     * @param _segmentType The segment type. This parameter is valid only if `Container` is `hls`
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                private:

                    /**
                     * Unique ID of transcoding template.
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Container. Valid values: mp4, flv, hls, mp3, flac, ogg.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Transcoding template name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
<li>Preset: preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>0: retain;</li>
<li>1: remove.</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Video stream configuration parameter. This field is valid only when `RemoveVideo` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * Audio stream configuration parameter. This field is valid only when `RemoveAudio` is 0.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * TESHD transcoding parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * Container filter. Valid values:
<li>Video: video container that can contain both video stream and audio stream;</li>
<li>PureAudio: audio container that can contain only audio stream.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * Creation time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The segment type. This parameter is valid only if `Container` is `hls`
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
