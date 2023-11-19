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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEENHANCEMEDIATEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEENHANCEMEDIATEMPLATEREQUEST_H_

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
                * CreateEnhanceMediaTemplate request structure.
                */
                class CreateEnhanceMediaTemplateRequest : public AbstractModel
                {
                public:
                    CreateEnhanceMediaTemplateRequest();
                    ~CreateEnhanceMediaTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Output file encapsulation format, optional values: mp4, flv, hls.
                     * @return Container Output file encapsulation format, optional values: mp4, flv, hls.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Output file encapsulation format, optional values: mp4, flv, hls.
                     * @param _container Output file encapsulation format, optional values: mp4, flv, hls.
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
                     * 获取VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * @return SubAppId VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     * @param _subAppId VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
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
                     * 获取Audio and video quality rebirth template name, length limit: 64 characters.
                     * @return Name Audio and video quality rebirth template name, length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio and video quality rebirth template name, length limit: 64 characters.
                     * @param _name Audio and video quality rebirth template name, length limit: 64 characters.
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
                     * 获取Template description information, length limit: 256 characters.
                     * @return Comment Template description information, length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information, length limit: 256 characters.
                     * @param _comment Template description information, length limit: 256 characters.
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
                     * 获取Audio and picture quality regeneration video control control information.
                     * @return RebuildVideoInfo Audio and picture quality regeneration video control control information.
                     * 
                     */
                    RebuildVideoInfo GetRebuildVideoInfo() const;

                    /**
                     * 设置Audio and picture quality regeneration video control control information.
                     * @param _rebuildVideoInfo Audio and picture quality regeneration video control control information.
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
                     * 获取Audio and video quality regeneration audio control information.
                     * @return RebuildAudioInfo Audio and video quality regeneration audio control information.
                     * 
                     */
                    RebuildAudioInfo GetRebuildAudioInfo() const;

                    /**
                     * 设置Audio and video quality regeneration audio control information.
                     * @param _rebuildAudioInfo Audio and video quality regeneration audio control information.
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
                     * 获取Output target video control information.
                     * @return TargetVideoInfo Output target video control information.
                     * 
                     */
                    RebuildMediaTargetVideoStream GetTargetVideoInfo() const;

                    /**
                     * 设置Output target video control information.
                     * @param _targetVideoInfo Output target video control information.
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
                     * 获取Output target audio control information.
                     * @return TargetAudioInfo Output target audio control information.
                     * 
                     */
                    RebuildMediaTargetAudioStream GetTargetAudioInfo() const;

                    /**
                     * 设置Output target audio control information.
                     * @param _targetAudioInfo Output target audio control information.
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
                     * 获取Whether to remove video data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * @return RemoveVideo Whether to remove video data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置Whether to remove video data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * @param _removeVideo Whether to remove video data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
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
                     * 获取Whether to remove audio data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * @return RemoveAudio Whether to remove audio data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置Whether to remove audio data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * @param _removeAudio Whether to remove audio data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                private:

                    /**
                     * Output file encapsulation format, optional values: mp4, flv, hls.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Audio and video quality rebirth template name, length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description information, length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Audio and picture quality regeneration video control control information.
                     */
                    RebuildVideoInfo m_rebuildVideoInfo;
                    bool m_rebuildVideoInfoHasBeenSet;

                    /**
                     * Audio and video quality regeneration audio control information.
                     */
                    RebuildAudioInfo m_rebuildAudioInfo;
                    bool m_rebuildAudioInfoHasBeenSet;

                    /**
                     * Output target video control information.
                     */
                    RebuildMediaTargetVideoStream m_targetVideoInfo;
                    bool m_targetVideoInfoHasBeenSet;

                    /**
                     * Output target audio control information.
                     */
                    RebuildMediaTargetAudioStream m_targetAudioInfo;
                    bool m_targetAudioInfoHasBeenSet;

                    /**
                     * Whether to remove video data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * Whether to remove audio data, optional values:
<li>0: Keep</li>
<li>1: Remove</li>
Default value 0.
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEENHANCEMEDIATEMPLATEREQUEST_H_
