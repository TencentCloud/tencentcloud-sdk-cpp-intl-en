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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVECHANNELREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AttachedInputInfo.h>
#include <tencentcloud/mdl/v20200326/model/OutputGroupsInfo.h>
#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateMediaLiveChannel request structure.
                */
                class CreateMediaLiveChannelRequest : public AbstractModel
                {
                public:
                    CreateMediaLiveChannelRequest();
                    ~CreateMediaLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @return Name Channel name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     * @param Name Channel name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Associated media input. Quantity limit: [1,1].
                     * @return AttachedInputs Associated media input. Quantity limit: [1,1].
                     */
                    std::vector<AttachedInputInfo> GetAttachedInputs() const;

                    /**
                     * 设置Associated media input. Quantity limit: [1,1].
                     * @param AttachedInputs Associated media input. Quantity limit: [1,1].
                     */
                    void SetAttachedInputs(const std::vector<AttachedInputInfo>& _attachedInputs);

                    /**
                     * 判断参数 AttachedInputs 是否已赋值
                     * @return AttachedInputs 是否已赋值
                     */
                    bool AttachedInputsHasBeenSet() const;

                    /**
                     * 获取Configuration information of channel output groups. Quantity limit: [1,10].
                     * @return OutputGroups Configuration information of channel output groups. Quantity limit: [1,10].
                     */
                    std::vector<OutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Configuration information of channel output groups. Quantity limit: [1,10].
                     * @param OutputGroups Configuration information of channel output groups. Quantity limit: [1,10].
                     */
                    void SetOutputGroups(const std::vector<OutputGroupsInfo>& _outputGroups);

                    /**
                     * 判断参数 OutputGroups 是否已赋值
                     * @return OutputGroups 是否已赋值
                     */
                    bool OutputGroupsHasBeenSet() const;

                    /**
                     * 获取Audio transcoding template array. Quantity limit: [1,20].
                     * @return AudioTemplates Audio transcoding template array. Quantity limit: [1,20].
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding template array. Quantity limit: [1,20].
                     * @param AudioTemplates Audio transcoding template array. Quantity limit: [1,20].
                     */
                    void SetAudioTemplates(const std::vector<AudioTemplateInfo>& _audioTemplates);

                    /**
                     * 判断参数 AudioTemplates 是否已赋值
                     * @return AudioTemplates 是否已赋值
                     */
                    bool AudioTemplatesHasBeenSet() const;

                    /**
                     * 获取Video transcoding template array. Quantity limit: [1,10].
                     * @return VideoTemplates Video transcoding template array. Quantity limit: [1,10].
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding template array. Quantity limit: [1,10].
                     * @param VideoTemplates Video transcoding template array. Quantity limit: [1,10].
                     */
                    void SetVideoTemplates(const std::vector<VideoTemplateInfo>& _videoTemplates);

                    /**
                     * 判断参数 VideoTemplates 是否已赋值
                     * @return VideoTemplates 是否已赋值
                     */
                    bool VideoTemplatesHasBeenSet() const;

                private:

                    /**
                     * Channel name, which can contain 1–32 letters, digits, and underscores and must be unique at the region level.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Associated media input. Quantity limit: [1,1].
                     */
                    std::vector<AttachedInputInfo> m_attachedInputs;
                    bool m_attachedInputsHasBeenSet;

                    /**
                     * Configuration information of channel output groups. Quantity limit: [1,10].
                     */
                    std::vector<OutputGroupsInfo> m_outputGroups;
                    bool m_outputGroupsHasBeenSet;

                    /**
                     * Audio transcoding template array. Quantity limit: [1,20].
                     */
                    std::vector<AudioTemplateInfo> m_audioTemplates;
                    bool m_audioTemplatesHasBeenSet;

                    /**
                     * Video transcoding template array. Quantity limit: [1,10].
                     */
                    std::vector<VideoTemplateInfo> m_videoTemplates;
                    bool m_videoTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATEMEDIALIVECHANNELREQUEST_H_
