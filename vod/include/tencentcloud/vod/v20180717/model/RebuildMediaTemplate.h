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
                * The details of a remaster template.
                */
                class RebuildMediaTemplate : public AbstractModel
                {
                public:
                    RebuildMediaTemplate();
                    ~RebuildMediaTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The remaster template ID.
                     * @return Definition The remaster template ID.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置The remaster template ID.
                     * @param Definition The remaster template ID.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     * @return Type The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     * @param Type The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The remaster template name.
                     * @return Name The remaster template name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The remaster template name.
                     * @param Name The remaster template name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The template description.
                     * @return Comment The template description.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The template description.
                     * @param Comment The template description.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取The video remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RebuildVideoInfo The video remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildVideoInfo GetRebuildVideoInfo() const;

                    /**
                     * 设置The video remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RebuildVideoInfo The video remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRebuildVideoInfo(const RebuildVideoInfo& _rebuildVideoInfo);

                    /**
                     * 判断参数 RebuildVideoInfo 是否已赋值
                     * @return RebuildVideoInfo 是否已赋值
                     */
                    bool RebuildVideoInfoHasBeenSet() const;

                    /**
                     * 获取The audio remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RebuildAudioInfo The audio remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildAudioInfo GetRebuildAudioInfo() const;

                    /**
                     * 设置The audio remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RebuildAudioInfo The audio remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRebuildAudioInfo(const RebuildAudioInfo& _rebuildAudioInfo);

                    /**
                     * 判断参数 RebuildAudioInfo 是否已赋值
                     * @return RebuildAudioInfo 是否已赋值
                     */
                    bool RebuildAudioInfoHasBeenSet() const;

                    /**
                     * 获取The output video parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetVideoInfo The output video parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTargetVideoStream GetTargetVideoInfo() const;

                    /**
                     * 设置The output video parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetVideoInfo The output video parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetVideoInfo(const RebuildMediaTargetVideoStream& _targetVideoInfo);

                    /**
                     * 判断参数 TargetVideoInfo 是否已赋值
                     * @return TargetVideoInfo 是否已赋值
                     */
                    bool TargetVideoInfoHasBeenSet() const;

                    /**
                     * 获取The output audio parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetAudioInfo The output audio parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTargetAudioStream GetTargetAudioInfo() const;

                    /**
                     * 设置The output audio parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TargetAudioInfo The output audio parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTargetAudioInfo(const RebuildMediaTargetAudioStream& _targetAudioInfo);

                    /**
                     * 判断参数 TargetAudioInfo 是否已赋值
                     * @return TargetAudioInfo 是否已赋值
                     */
                    bool TargetAudioInfoHasBeenSet() const;

                    /**
                     * 获取The output file format. Valid values: `mp4` (default), `hls`.
                     * @return Container The output file format. Valid values: `mp4` (default), `hls`.
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置The output file format. Valid values: `mp4` (default), `hls`.
                     * @param Container The output file format. Valid values: `mp4` (default), `hls`.
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @param RemoveVideo Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @param RemoveAudio Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取The template creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime The template creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The template creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param CreateTime The template creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The last updated time of the template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime The last updated time of the template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The last updated time of the template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param UpdateTime The last updated time of the template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The remaster template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The template type. Valid values:
<li>`Preset`</li>
<li>`Custom`</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The remaster template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * The video remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildVideoInfo m_rebuildVideoInfo;
                    bool m_rebuildVideoInfoHasBeenSet;

                    /**
                     * The audio remaster parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildAudioInfo m_rebuildAudioInfo;
                    bool m_rebuildAudioInfoHasBeenSet;

                    /**
                     * The output video parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTargetVideoStream m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * The output audio parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RebuildMediaTargetAudioStream m_targetAudioInfo;
                    bool m_targetAudioInfoHasBeenSet;

                    /**
                     * The output file format. Valid values: `mp4` (default), `hls`.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * The template creation time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The last updated time of the template in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIATEMPLATE_H_
