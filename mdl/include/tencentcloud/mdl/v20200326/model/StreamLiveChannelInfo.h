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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVECHANNELINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVECHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AttachedInput.h>
#include <tencentcloud/mdl/v20200326/model/StreamLiveOutputGroupsInfo.h>
#include <tencentcloud/mdl/v20200326/model/AudioTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/VideoTemplateInfo.h>
#include <tencentcloud/mdl/v20200326/model/AVTemplate.h>
#include <tencentcloud/mdl/v20200326/model/PlanSettings.h>
#include <tencentcloud/mdl/v20200326/model/EventNotifySetting.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel information
                */
                class StreamLiveChannelInfo : public AbstractModel
                {
                public:
                    StreamLiveChannelInfo();
                    ~StreamLiveChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel ID
                     * @return Id Channel ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param Id Channel ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Channel status
                     * @return State Channel status
                     */
                    std::string GetState() const;

                    /**
                     * 设置Channel status
                     * @param State Channel status
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Information of attached inputs
                     * @return AttachedInputs Information of attached inputs
                     */
                    std::vector<AttachedInput> GetAttachedInputs() const;

                    /**
                     * 设置Information of attached inputs
                     * @param AttachedInputs Information of attached inputs
                     */
                    void SetAttachedInputs(const std::vector<AttachedInput>& _attachedInputs);

                    /**
                     * 判断参数 AttachedInputs 是否已赋值
                     * @return AttachedInputs 是否已赋值
                     */
                    bool AttachedInputsHasBeenSet() const;

                    /**
                     * 获取Information of output groups
                     * @return OutputGroups Information of output groups
                     */
                    std::vector<StreamLiveOutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Information of output groups
                     * @param OutputGroups Information of output groups
                     */
                    void SetOutputGroups(const std::vector<StreamLiveOutputGroupsInfo>& _outputGroups);

                    /**
                     * 判断参数 OutputGroups 是否已赋值
                     * @return OutputGroups 是否已赋值
                     */
                    bool OutputGroupsHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return Name Channel name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name
                     * @param Name Channel name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AudioTemplates Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param AudioTemplates Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetAudioTemplates(const std::vector<AudioTemplateInfo>& _audioTemplates);

                    /**
                     * 判断参数 AudioTemplates 是否已赋值
                     * @return AudioTemplates 是否已赋值
                     */
                    bool AudioTemplatesHasBeenSet() const;

                    /**
                     * 获取Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return VideoTemplates Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param VideoTemplates Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetVideoTemplates(const std::vector<VideoTemplateInfo>& _videoTemplates);

                    /**
                     * 判断参数 VideoTemplates 是否已赋值
                     * @return VideoTemplates 是否已赋值
                     */
                    bool VideoTemplatesHasBeenSet() const;

                    /**
                     * 获取Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AVTemplates Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AVTemplate> GetAVTemplates() const;

                    /**
                     * 设置Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param AVTemplates Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    void SetAVTemplates(const std::vector<AVTemplate>& _aVTemplates);

                    /**
                     * 判断参数 AVTemplates 是否已赋值
                     * @return AVTemplates 是否已赋值
                     */
                    bool AVTemplatesHasBeenSet() const;

                    /**
                     * 获取Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PlanSettings Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    PlanSettings GetPlanSettings() const;

                    /**
                     * 设置Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @param PlanSettings Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPlanSettings(const PlanSettings& _planSettings);

                    /**
                     * 判断参数 PlanSettings 是否已赋值
                     * @return PlanSettings 是否已赋值
                     */
                    bool PlanSettingsHasBeenSet() const;

                    /**
                     * 获取The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EventNotifySettings The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    EventNotifySetting GetEventNotifySettings() const;

                    /**
                     * 设置The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param EventNotifySettings The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetEventNotifySettings(const EventNotifySetting& _eventNotifySettings);

                    /**
                     * 判断参数 EventNotifySettings 是否已赋值
                     * @return EventNotifySettings 是否已赋值
                     */
                    bool EventNotifySettingsHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Channel status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Information of attached inputs
                     */
                    std::vector<AttachedInput> m_attachedInputs;
                    bool m_attachedInputsHasBeenSet;

                    /**
                     * Information of output groups
                     */
                    std::vector<StreamLiveOutputGroupsInfo> m_outputGroups;
                    bool m_outputGroupsHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AudioTemplateInfo> m_audioTemplates;
                    bool m_audioTemplatesHasBeenSet;

                    /**
                     * Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<VideoTemplateInfo> m_videoTemplates;
                    bool m_videoTemplatesHasBeenSet;

                    /**
                     * Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AVTemplate> m_aVTemplates;
                    bool m_aVTemplatesHasBeenSet;

                    /**
                     * Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    PlanSettings m_planSettings;
                    bool m_planSettingsHasBeenSet;

                    /**
                     * The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    EventNotifySetting m_eventNotifySettings;
                    bool m_eventNotifySettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVECHANNELINFO_H_
