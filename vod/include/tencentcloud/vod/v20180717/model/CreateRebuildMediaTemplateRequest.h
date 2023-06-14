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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREBUILDMEDIATEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREBUILDMEDIATEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRebuildMediaTemplate request structure.
                */
                class CreateRebuildMediaTemplateRequest : public AbstractModel
                {
                public:
                    CreateRebuildMediaTemplateRequest();
                    ~CreateRebuildMediaTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The output container format. Valid values: `mp4`, `flv`, `hls`.
                     * @return Container The output container format. Valid values: `mp4`, `flv`, `hls`.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置The output container format. Valid values: `mp4`, `flv`, `hls`.
                     * @param _container The output container format. Valid values: `mp4`, `flv`, `hls`.
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
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The remaster template name.
                     * @return Name The remaster template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The remaster template name.
                     * @param _name The remaster template name.
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
                     * 获取The template description.
                     * @return Comment The template description.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The template description.
                     * @param _comment The template description.
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
                     * 获取The video remaster parameters.
                     * @return RebuildVideoInfo The video remaster parameters.
                     * 
                     */
                    RebuildVideoInfo GetRebuildVideoInfo() const;

                    /**
                     * 设置The video remaster parameters.
                     * @param _rebuildVideoInfo The video remaster parameters.
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
                     * 获取The audio remaster parameters.
                     * @return RebuildAudioInfo The audio remaster parameters.
                     * 
                     */
                    RebuildAudioInfo GetRebuildAudioInfo() const;

                    /**
                     * 设置The audio remaster parameters.
                     * @param _rebuildAudioInfo The audio remaster parameters.
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
                     * 获取The output video parameters.
                     * @return TargetVideoInfo The output video parameters.
                     * 
                     */
                    RebuildMediaTargetVideoStream GetTargetVideoInfo() const;

                    /**
                     * 设置The output video parameters.
                     * @param _targetVideoInfo The output video parameters.
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
                     * 获取The output audio parameters.
                     * @return TargetAudioInfo The output audio parameters.
                     * 
                     */
                    RebuildMediaTargetAudioStream GetTargetAudioInfo() const;

                    /**
                     * 设置The output audio parameters.
                     * @param _targetAudioInfo The output audio parameters.
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
                     * 获取Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @return RemoveVideo Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @param _removeVideo Whether to remove video data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
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
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @return RemoveAudio Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * 
                     */
                    std::string GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * @param _removeAudio Whether to remove audio data. Valid values:
<li>`0`: No</li>
<li>`1`: Yes</li>
Default value: 0.
                     * 
                     */
                    void SetRemoveAudio(const std::string& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                private:

                    /**
                     * The output container format. Valid values: `mp4`, `flv`, `hls`.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

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
                     */
                    RebuildVideoInfo m_rebuildVideoInfo;
                    bool m_rebuildVideoInfoHasBeenSet;

                    /**
                     * The audio remaster parameters.
                     */
                    RebuildAudioInfo m_rebuildAudioInfo;
                    bool m_rebuildAudioInfoHasBeenSet;

                    /**
                     * The output video parameters.
                     */
                    RebuildMediaTargetVideoStream m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * The output audio parameters.
                     */
                    RebuildMediaTargetAudioStream m_targetAudioInfo;
                    bool m_targetAudioInfoHasBeenSet;

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
                    std::string m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEREBUILDMEDIATEMPLATEREQUEST_H_
