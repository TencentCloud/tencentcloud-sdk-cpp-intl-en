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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVECHANNELREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AttachedInput.h>
#include <tencentcloud/mdl/v20200326/model/StreamLiveOutputGroupsInfo.h>
#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/AVTemplate.h>
#include <tencentcloud/mdl/v20200326/model/PlanSettings.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * CreateStreamLiveChannel request structure.
                */
                class CreateStreamLiveChannelRequest : public AbstractModel
                {
                public:
                    CreateStreamLiveChannelRequest();
                    ~CreateStreamLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @return Name Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @param Name Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Inputs to attach. You can attach 1 to 5 inputs.
                     * @return AttachedInputs Inputs to attach. You can attach 1 to 5 inputs.
                     */
                    std::vector<AttachedInput> GetAttachedInputs() const;

                    /**
                     * 设置Inputs to attach. You can attach 1 to 5 inputs.
                     * @param AttachedInputs Inputs to attach. You can attach 1 to 5 inputs.
                     */
                    void SetAttachedInputs(const std::vector<AttachedInput>& _attachedInputs);

                    /**
                     * 判断参数 AttachedInputs 是否已赋值
                     * @return AttachedInputs 是否已赋值
                     */
                    bool AttachedInputsHasBeenSet() const;

                    /**
                     * 获取Configuration information of the channel’s output groups. Quantity: [1, 10]
                     * @return OutputGroups Configuration information of the channel’s output groups. Quantity: [1, 10]
                     */
                    std::vector<StreamLiveOutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Configuration information of the channel’s output groups. Quantity: [1, 10]
                     * @param OutputGroups Configuration information of the channel’s output groups. Quantity: [1, 10]
                     */
                    void SetOutputGroups(const std::vector<StreamLiveOutputGroupsInfo>& _outputGroups);

                    /**
                     * 判断参数 OutputGroups 是否已赋值
                     * @return OutputGroups 是否已赋值
                     */
                    bool OutputGroupsHasBeenSet() const;

                    /**
                     * 获取Audio transcoding templates. Quantity: [1, 20]
                     * @return AudioTemplates Audio transcoding templates. Quantity: [1, 20]
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding templates. Quantity: [1, 20]
                     * @param AudioTemplates Audio transcoding templates. Quantity: [1, 20]
                     */
                    void SetAudioTemplates(const std::vector<AudioTemplateInfo>& _audioTemplates);

                    /**
                     * 判断参数 AudioTemplates 是否已赋值
                     * @return AudioTemplates 是否已赋值
                     */
                    bool AudioTemplatesHasBeenSet() const;

                    /**
                     * 获取Video transcoding templates. Quantity: [1, 10]
                     * @return VideoTemplates Video transcoding templates. Quantity: [1, 10]
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding templates. Quantity: [1, 10]
                     * @param VideoTemplates Video transcoding templates. Quantity: [1, 10]
                     */
                    void SetVideoTemplates(const std::vector<VideoTemplateInfo>& _videoTemplates);

                    /**
                     * 判断参数 VideoTemplates 是否已赋值
                     * @return VideoTemplates 是否已赋值
                     */
                    bool VideoTemplatesHasBeenSet() const;

                    /**
                     * 获取Audio/Video transcoding templates. Quantity: [1, 10]
                     * @return AVTemplates Audio/Video transcoding templates. Quantity: [1, 10]
                     */
                    std::vector<AVTemplate> GetAVTemplates() const;

                    /**
                     * 设置Audio/Video transcoding templates. Quantity: [1, 10]
                     * @param AVTemplates Audio/Video transcoding templates. Quantity: [1, 10]
                     */
                    void SetAVTemplates(const std::vector<AVTemplate>& _aVTemplates);

                    /**
                     * 判断参数 AVTemplates 是否已赋值
                     * @return AVTemplates 是否已赋值
                     */
                    bool AVTemplatesHasBeenSet() const;

                    /**
                     * 获取Event settings
                     * @return PlanSettings Event settings
                     */
                    PlanSettings GetPlanSettings() const;

                    /**
                     * 设置Event settings
                     * @param PlanSettings Event settings
                     */
                    void SetPlanSettings(const PlanSettings& _planSettings);

                    /**
                     * 判断参数 PlanSettings 是否已赋值
                     * @return PlanSettings 是否已赋值
                     */
                    bool PlanSettingsHasBeenSet() const;

                private:

                    /**
                     * Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Inputs to attach. You can attach 1 to 5 inputs.
                     */
                    std::vector<AttachedInput> m_attachedInputs;
                    bool m_attachedInputsHasBeenSet;

                    /**
                     * Configuration information of the channel’s output groups. Quantity: [1, 10]
                     */
                    std::vector<StreamLiveOutputGroupsInfo> m_outputGroups;
                    bool m_outputGroupsHasBeenSet;

                    /**
                     * Audio transcoding templates. Quantity: [1, 20]
                     */
                    std::vector<AudioTemplateInfo> m_audioTemplates;
                    bool m_audioTemplatesHasBeenSet;

                    /**
                     * Video transcoding templates. Quantity: [1, 10]
                     */
                    std::vector<VideoTemplateInfo> m_videoTemplates;
                    bool m_videoTemplatesHasBeenSet;

                    /**
                     * Audio/Video transcoding templates. Quantity: [1, 10]
                     */
                    std::vector<AVTemplate> m_aVTemplates;
                    bool m_aVTemplatesHasBeenSet;

                    /**
                     * Event settings
                     */
                    PlanSettings m_planSettings;
                    bool m_planSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVECHANNELREQUEST_H_
