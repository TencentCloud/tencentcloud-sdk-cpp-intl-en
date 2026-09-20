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
#include <tencentcloud/vod/v20180717/model/EnhanceConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Transcode template detail
                */
                class TranscodeTemplate : public AbstractModel
                {
                public:
                    TranscodeTemplate();
                    ~TranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique identifier of the transcoding template.</p>
                     * @return Definition <p>Unique identifier of the transcoding template.</p>
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the transcoding template.</p>
                     * @param _definition <p>Unique identifier of the transcoding template.</p>
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
                     * 获取<p>Container format. Valid values: mp4, flv, hls, mp3, flac, and ogg.</p>
                     * @return Container <p>Container format. Valid values: mp4, flv, hls, mp3, flac, and ogg.</p>
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置<p>Container format. Valid values: mp4, flv, hls, mp3, flac, and ogg.</p>
                     * @param _container <p>Container format. Valid values: mp4, flv, hls, mp3, flac, and ogg.</p>
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
                     * 获取<p>Transcoding template name.</p>
                     * @return Name <p>Transcoding template name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Transcoding template name.</p>
                     * @param _name <p>Transcoding template name.</p>
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
                     * 获取<p>Template description information.</p>
                     * @return Comment <p>Template description information.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Template description information.</p>
                     * @param _comment <p>Template description information.</p>
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
                     * 获取<p>Template type. Valid values:</p><li>Preset: system-preset template.</li><li>Custom: user-defined template.</li>
                     * @return Type <p>Template type. Valid values:</p><li>Preset: system-preset template.</li><li>Custom: user-defined template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Template type. Valid values:</p><li>Preset: system-preset template.</li><li>Custom: user-defined template.</li>
                     * @param _type <p>Template type. Valid values:</p><li>Preset: system-preset template.</li><li>Custom: user-defined template.</li>
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
                     * 获取<p>Indicates whether to remove video data. Parameter value:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * @return RemoveVideo <p>Indicates whether to remove video data. Parameter value:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置<p>Indicates whether to remove video data. Parameter value:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * @param _removeVideo <p>Indicates whether to remove video data. Parameter value:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
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
                     * 获取<p>Indicates whether to remove audio data. Valid values:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * @return RemoveAudio <p>Indicates whether to remove audio data. Valid values:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置<p>Indicates whether to remove audio data. Valid values:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     * @param _removeAudio <p>Indicates whether to remove audio data. Valid values:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
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
                     * 获取<p>Video stream configuration parameters. This field is valid only when RemoveVideo is 0.</p>
                     * @return VideoTemplate <p>Video stream configuration parameters. This field is valid only when RemoveVideo is 0.</p>
                     * 
                     */
                    VideoTemplateInfo GetVideoTemplate() const;

                    /**
                     * 设置<p>Video stream configuration parameters. This field is valid only when RemoveVideo is 0.</p>
                     * @param _videoTemplate <p>Video stream configuration parameters. This field is valid only when RemoveVideo is 0.</p>
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
                     * 获取<p>Audio stream configuration parameters. This field is valid only when RemoveAudio is 0.</p>
                     * @return AudioTemplate <p>Audio stream configuration parameters. This field is valid only when RemoveAudio is 0.</p>
                     * 
                     */
                    AudioTemplateInfo GetAudioTemplate() const;

                    /**
                     * 设置<p>Audio stream configuration parameters. This field is valid only when RemoveAudio is 0.</p>
                     * @param _audioTemplate <p>Audio stream configuration parameters. This field is valid only when RemoveAudio is 0.</p>
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
                     * 获取<p>Top Speed Codec transcoding parameters.</p>
                     * @return TEHDConfig <p>Top Speed Codec transcoding parameters.</p>
                     * 
                     */
                    TEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置<p>Top Speed Codec transcoding parameters.</p>
                     * @param _tEHDConfig <p>Top Speed Codec transcoding parameters.</p>
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
                     * 获取<p>Audio/video enhancement configurations.</p>
                     * @return EnhanceConfig <p>Audio/video enhancement configurations.</p>
                     * 
                     */
                    EnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>Audio/video enhancement configurations.</p>
                     * @param _enhanceConfig <p>Audio/video enhancement configurations.</p>
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
                     * 获取<p>Container format filter criteria. Valid values:</p><li>Video: video format, a container format that can contain both video and audio streams.</li><li>PureAudio: pure audio format, a container format that can only contain audio streams.</li>
                     * @return ContainerType <p>Container format filter criteria. Valid values:</p><li>Video: video format, a container format that can contain both video and audio streams.</li><li>PureAudio: pure audio format, a container format that can only contain audio streams.</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置<p>Container format filter criteria. Valid values:</p><li>Video: video format, a container format that can contain both video and audio streams.</li><li>PureAudio: pure audio format, a container format that can only contain audio streams.</li>
                     * @param _containerType <p>Container format filter criteria. Valid values:</p><li>Video: video format, a container format that can contain both video and audio streams.</li><li>PureAudio: pure audio format, a container format that can only contain audio streams.</li>
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
                     * 获取<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * 获取<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * 获取<p>Segment type. Valid only when Container is hls.</p>
                     * @return SegmentType <p>Segment type. Valid only when Container is hls.</p>
                     * 
                     */
                    std::string GetSegmentType() const;

                    /**
                     * 设置<p>Segment type. Valid only when Container is hls.</p>
                     * @param _segmentType <p>Segment type. Valid only when Container is hls.</p>
                     * 
                     */
                    void SetSegmentType(const std::string& _segmentType);

                    /**
                     * 判断参数 SegmentType 是否已赋值
                     * @return SegmentType 是否已赋值
                     * 
                     */
                    bool SegmentTypeHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameter.</p>
                     * @return StdExtInfo <p>Extended parameter.</p>
                     * 
                     */
                    std::string GetStdExtInfo() const;

                    /**
                     * 设置<p>Extended parameter.</p>
                     * @param _stdExtInfo <p>Extended parameter.</p>
                     * 
                     */
                    void SetStdExtInfo(const std::string& _stdExtInfo);

                    /**
                     * 判断参数 StdExtInfo 是否已赋值
                     * @return StdExtInfo 是否已赋值
                     * 
                     */
                    bool StdExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier of the transcoding template.</p>
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Container format. Valid values: mp4, flv, hls, mp3, flac, and ogg.</p>
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <p>Transcoding template name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Template description information.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Template type. Valid values:</p><li>Preset: system-preset template.</li><li>Custom: user-defined template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Indicates whether to remove video data. Parameter value:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * <p>Indicates whether to remove audio data. Valid values:</p><li>0: Data is reserved;</li><li>1: Data is removed.</li>
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * <p>Video stream configuration parameters. This field is valid only when RemoveVideo is 0.</p>
                     */
                    VideoTemplateInfo m_videoTemplate;
                    bool m_videoTemplateHasBeenSet;

                    /**
                     * <p>Audio stream configuration parameters. This field is valid only when RemoveAudio is 0.</p>
                     */
                    AudioTemplateInfo m_audioTemplate;
                    bool m_audioTemplateHasBeenSet;

                    /**
                     * <p>Top Speed Codec transcoding parameters.</p>
                     */
                    TEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                    /**
                     * <p>Audio/video enhancement configurations.</p>
                     */
                    EnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>Container format filter criteria. Valid values:</p><li>Video: video format, a container format that can contain both video and audio streams.</li><li>PureAudio: pure audio format, a container format that can only contain audio streams.</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Segment type. Valid only when Container is hls.</p>
                     */
                    std::string m_segmentType;
                    bool m_segmentTypeHasBeenSet;

                    /**
                     * <p>Extended parameter.</p>
                     */
                    std::string m_stdExtInfo;
                    bool m_stdExtInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETEMPLATE_H_
