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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RebuildVideoInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildAudioInfo.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetVideoStream.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaTargetAudioStream.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Details of the Audio and Video Quality Rebirth Template.
                */
                class RebuildMediaTemplate : public AbstractModel
                {
                public:
                    RebuildMediaTemplate();
                    ~RebuildMediaTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio and video quality rebirth template number.
                     * @return Definition Audio and video quality rebirth template number.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Audio and video quality rebirth template number.
                     * @param _definition Audio and video quality rebirth template number.
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
                     * 获取Template type. Available values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * @return Type Template type. Available values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Available values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     * @param _type Template type. Available values:
<li>Preset: system-preset template;</li>
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
                     * 获取Audio and video quality rebirth template name.
                     * @return Name Audio and video quality rebirth template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio and video quality rebirth template name.
                     * @param _name Audio and video quality rebirth template name.
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
                     * 获取Description of the Audio and Video Quality Rebirth Template.
                     * @return Comment Description of the Audio and Video Quality Rebirth Template.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of the Audio and Video Quality Rebirth Template.
                     * @param _comment Description of the Audio and Video Quality Rebirth Template.
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
                     * 获取Audio-visual quality revival video control info.
                     * @return RebuildVideoInfo Audio-visual quality revival video control info.
                     * 
                     */
                    RebuildVideoInfo GetRebuildVideoInfo() const;

                    /**
                     * 设置Audio-visual quality revival video control info.
                     * @param _rebuildVideoInfo Audio-visual quality revival video control info.
                     * 
                     */
                    void SetRebuildVideoInfo(const RebuildVideoInfo& _rebuildVideoInfo);

                    /**
                     * 判断参数 RebuildVideoInfo 是否已赋值
                     * @return RebuildVideoInfo 是否已赋值
                     * 
                     */
                    bool RebuildVideoInfoHasBeenSet() const;

                    /**
                     * 获取Audio-visual quality revival audio control info.
                     * @return RebuildAudioInfo Audio-visual quality revival audio control info.
                     * 
                     */
                    RebuildAudioInfo GetRebuildAudioInfo() const;

                    /**
                     * 设置Audio-visual quality revival audio control info.
                     * @param _rebuildAudioInfo Audio-visual quality revival audio control info.
                     * 
                     */
                    void SetRebuildAudioInfo(const RebuildAudioInfo& _rebuildAudioInfo);

                    /**
                     * 判断参数 RebuildAudioInfo 是否已赋值
                     * @return RebuildAudioInfo 是否已赋值
                     * 
                     */
                    bool RebuildAudioInfoHasBeenSet() const;

                    /**
                     * 获取Output video control information.
                     * @return TargetVideoInfo Output video control information.
                     * 
                     */
                    RebuildMediaTargetVideoStream GetTargetVideoInfo() const;

                    /**
                     * 设置Output video control information.
                     * @param _targetVideoInfo Output video control information.
                     * 
                     */
                    void SetTargetVideoInfo(const RebuildMediaTargetVideoStream& _targetVideoInfo);

                    /**
                     * 判断参数 TargetVideoInfo 是否已赋值
                     * @return TargetVideoInfo 是否已赋值
                     * 
                     */
                    bool TargetVideoInfoHasBeenSet() const;

                    /**
                     * 获取Output audio control information.
                     * @return TargetAudioInfo Output audio control information.
                     * 
                     */
                    RebuildMediaTargetAudioStream GetTargetAudioInfo() const;

                    /**
                     * 设置Output audio control information.
                     * @param _targetAudioInfo Output audio control information.
                     * 
                     */
                    void SetTargetAudioInfo(const RebuildMediaTargetAudioStream& _targetAudioInfo);

                    /**
                     * 判断参数 TargetAudioInfo 是否已赋值
                     * @return TargetAudioInfo 是否已赋值
                     * 
                     */
                    bool TargetAudioInfoHasBeenSet() const;

                    /**
                     * 获取Muxing format. Available values: mp4, hls. mp4 is selected by default.
                     * @return Container Muxing format. Available values: mp4, hls. mp4 is selected by default.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Muxing format. Available values: mp4, hls. mp4 is selected by default.
                     * @param _container Muxing format. Available values: mp4, hls. mp4 is selected by default.
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
                     * 获取Indicates whether to remove video data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * @return RemoveVideo Indicates whether to remove video data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Indicates whether to remove video data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * @param _removeVideo Indicates whether to remove video data. Available values:
<li>`0`: reserved</li>
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
                     * 获取Indicates whether to remove audio data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * @return RemoveAudio Indicates whether to remove audio data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Indicates whether to remove audio data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     * @param _removeAudio Indicates whether to remove audio data. Available values:
<li>`0`: reserved</li>
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
                     * 获取Template creation time in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Template creation time in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Template creation time in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Audio and video quality rebirth template number.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Template type. Available values:
<li>Preset: system-preset template;</li>
<li>Custom: custom template.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Audio and video quality rebirth template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the Audio and Video Quality Rebirth Template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Audio-visual quality revival video control info.
                     */
                    RebuildVideoInfo m_rebuildVideoInfo;
                    bool m_rebuildVideoInfoHasBeenSet;

                    /**
                     * Audio-visual quality revival audio control info.
                     */
                    RebuildAudioInfo m_rebuildAudioInfo;
                    bool m_rebuildAudioInfoHasBeenSet;

                    /**
                     * Output video control information.
                     */
                    RebuildMediaTargetVideoStream m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * Output audio control information.
                     */
                    RebuildMediaTargetAudioStream m_targetAudioInfo;
                    bool m_targetAudioInfoHasBeenSet;

                    /**
                     * Muxing format. Available values: mp4, hls. mp4 is selected by default.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Indicates whether to remove video data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Indicates whether to remove audio data. Available values:
<li>`0`: reserved</li>
<li>1: Remove</li>
Default value: 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * Template creation time in ISO date format (https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_
