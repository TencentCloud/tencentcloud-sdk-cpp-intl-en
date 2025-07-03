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
#include <tencentcloud/mdl/v20200326/model/SubtitleConf.h>
#include <tencentcloud/mdl/v20200326/model/PlanSettings.h>
#include <tencentcloud/mdl/v20200326/model/EventNotifySetting.h>
#include <tencentcloud/mdl/v20200326/model/InputLossBehaviorInfo.h>
#include <tencentcloud/mdl/v20200326/model/PipelineInputSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/InputAnalysisInfo.h>
#include <tencentcloud/mdl/v20200326/model/Tag.h>
#include <tencentcloud/mdl/v20200326/model/FrameCaptureTemplate.h>
#include <tencentcloud/mdl/v20200326/model/GeneralSetting.h>


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
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID
                     * @param _id Channel ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Channel status
                     * @return State Channel status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Channel status
                     * @param _state Channel status
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Information of attached inputs
                     * @return AttachedInputs Information of attached inputs
                     * 
                     */
                    std::vector<AttachedInput> GetAttachedInputs() const;

                    /**
                     * 设置Information of attached inputs
                     * @param _attachedInputs Information of attached inputs
                     * 
                     */
                    void SetAttachedInputs(const std::vector<AttachedInput>& _attachedInputs);

                    /**
                     * 判断参数 AttachedInputs 是否已赋值
                     * @return AttachedInputs 是否已赋值
                     * 
                     */
                    bool AttachedInputsHasBeenSet() const;

                    /**
                     * 获取Information of output groups
                     * @return OutputGroups Information of output groups
                     * 
                     */
                    std::vector<StreamLiveOutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Information of output groups
                     * @param _outputGroups Information of output groups
                     * 
                     */
                    void SetOutputGroups(const std::vector<StreamLiveOutputGroupsInfo>& _outputGroups);

                    /**
                     * 判断参数 OutputGroups 是否已赋值
                     * @return OutputGroups 是否已赋值
                     * 
                     */
                    bool OutputGroupsHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return Name Channel name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name
                     * @param _name Channel name
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
                     * 获取Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AudioTemplates Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _audioTemplates Audio transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAudioTemplates(const std::vector<AudioTemplateInfo>& _audioTemplates);

                    /**
                     * 判断参数 AudioTemplates 是否已赋值
                     * @return AudioTemplates 是否已赋值
                     * 
                     */
                    bool AudioTemplatesHasBeenSet() const;

                    /**
                     * 获取Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return VideoTemplates Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _videoTemplates Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetVideoTemplates(const std::vector<VideoTemplateInfo>& _videoTemplates);

                    /**
                     * 判断参数 VideoTemplates 是否已赋值
                     * @return VideoTemplates 是否已赋值
                     * 
                     */
                    bool VideoTemplatesHasBeenSet() const;

                    /**
                     * 获取Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @return AVTemplates Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<AVTemplate> GetAVTemplates() const;

                    /**
                     * 设置Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _aVTemplates Audio/Video transcoding templates
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetAVTemplates(const std::vector<AVTemplate>& _aVTemplates);

                    /**
                     * 判断参数 AVTemplates 是否已赋值
                     * @return AVTemplates 是否已赋值
                     * 
                     */
                    bool AVTemplatesHasBeenSet() const;

                    /**
                     * 获取Caption templates.
                     * @return CaptionTemplates Caption templates.
                     * 
                     */
                    std::vector<SubtitleConf> GetCaptionTemplates() const;

                    /**
                     * 设置Caption templates.
                     * @param _captionTemplates Caption templates.
                     * 
                     */
                    void SetCaptionTemplates(const std::vector<SubtitleConf>& _captionTemplates);

                    /**
                     * 判断参数 CaptionTemplates 是否已赋值
                     * @return CaptionTemplates 是否已赋值
                     * 
                     */
                    bool CaptionTemplatesHasBeenSet() const;

                    /**
                     * 获取Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @return PlanSettings Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    PlanSettings GetPlanSettings() const;

                    /**
                     * 设置Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _planSettings Event settings
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPlanSettings(const PlanSettings& _planSettings);

                    /**
                     * 判断参数 PlanSettings 是否已赋值
                     * @return PlanSettings 是否已赋值
                     * 
                     */
                    bool PlanSettingsHasBeenSet() const;

                    /**
                     * 获取The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EventNotifySettings The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    EventNotifySetting GetEventNotifySettings() const;

                    /**
                     * 设置The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _eventNotifySettings The callback settings.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEventNotifySettings(const EventNotifySetting& _eventNotifySettings);

                    /**
                     * 判断参数 EventNotifySettings 是否已赋值
                     * @return EventNotifySettings 是否已赋值
                     * 
                     */
                    bool EventNotifySettingsHasBeenSet() const;

                    /**
                     * 获取Supplement the last video frame configuration settings.
                     * @return InputLossBehavior Supplement the last video frame configuration settings.
                     * 
                     */
                    InputLossBehaviorInfo GetInputLossBehavior() const;

                    /**
                     * 设置Supplement the last video frame configuration settings.
                     * @param _inputLossBehavior Supplement the last video frame configuration settings.
                     * 
                     */
                    void SetInputLossBehavior(const InputLossBehaviorInfo& _inputLossBehavior);

                    /**
                     * 判断参数 InputLossBehavior 是否已赋值
                     * @return InputLossBehavior 是否已赋值
                     * 
                     */
                    bool InputLossBehaviorHasBeenSet() const;

                    /**
                     * 获取Pipeline configuration.
                     * @return PipelineInputSettings Pipeline configuration.
                     * 
                     */
                    PipelineInputSettingsInfo GetPipelineInputSettings() const;

                    /**
                     * 设置Pipeline configuration.
                     * @param _pipelineInputSettings Pipeline configuration.
                     * 
                     */
                    void SetPipelineInputSettings(const PipelineInputSettingsInfo& _pipelineInputSettings);

                    /**
                     * 判断参数 PipelineInputSettings 是否已赋值
                     * @return PipelineInputSettings 是否已赋值
                     * 
                     */
                    bool PipelineInputSettingsHasBeenSet() const;

                    /**
                     * 获取Recognition configuration for input content.
                     * @return InputAnalysisSettings Recognition configuration for input content.
                     * 
                     */
                    InputAnalysisInfo GetInputAnalysisSettings() const;

                    /**
                     * 设置Recognition configuration for input content.
                     * @param _inputAnalysisSettings Recognition configuration for input content.
                     * 
                     */
                    void SetInputAnalysisSettings(const InputAnalysisInfo& _inputAnalysisSettings);

                    /**
                     * 判断参数 InputAnalysisSettings 是否已赋值
                     * @return InputAnalysisSettings 是否已赋值
                     * 
                     */
                    bool InputAnalysisSettingsHasBeenSet() const;

                    /**
                     * 获取Console tag list.
                     * @return Tags Console tag list.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Console tag list.
                     * @param _tags Console tag list.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Frame capture templates.
                     * @return FrameCaptureTemplates Frame capture templates.
                     * 
                     */
                    std::vector<FrameCaptureTemplate> GetFrameCaptureTemplates() const;

                    /**
                     * 设置Frame capture templates.
                     * @param _frameCaptureTemplates Frame capture templates.
                     * 
                     */
                    void SetFrameCaptureTemplates(const std::vector<FrameCaptureTemplate>& _frameCaptureTemplates);

                    /**
                     * 判断参数 FrameCaptureTemplates 是否已赋值
                     * @return FrameCaptureTemplates 是否已赋值
                     * 
                     */
                    bool FrameCaptureTemplatesHasBeenSet() const;

                    /**
                     * 获取General settings.
                     * @return GeneralSettings General settings.
                     * 
                     */
                    GeneralSetting GetGeneralSettings() const;

                    /**
                     * 设置General settings.
                     * @param _generalSettings General settings.
                     * 
                     */
                    void SetGeneralSettings(const GeneralSetting& _generalSettings);

                    /**
                     * 判断参数 GeneralSettings 是否已赋值
                     * @return GeneralSettings 是否已赋值
                     * 
                     */
                    bool GeneralSettingsHasBeenSet() const;

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
                     * Caption templates.
                     */
                    std::vector<SubtitleConf> m_captionTemplates;
                    bool m_captionTemplatesHasBeenSet;

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

                    /**
                     * Supplement the last video frame configuration settings.
                     */
                    InputLossBehaviorInfo m_inputLossBehavior;
                    bool m_inputLossBehaviorHasBeenSet;

                    /**
                     * Pipeline configuration.
                     */
                    PipelineInputSettingsInfo m_pipelineInputSettings;
                    bool m_pipelineInputSettingsHasBeenSet;

                    /**
                     * Recognition configuration for input content.
                     */
                    InputAnalysisInfo m_inputAnalysisSettings;
                    bool m_inputAnalysisSettingsHasBeenSet;

                    /**
                     * Console tag list.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Frame capture templates.
                     */
                    std::vector<FrameCaptureTemplate> m_frameCaptureTemplates;
                    bool m_frameCaptureTemplatesHasBeenSet;

                    /**
                     * General settings.
                     */
                    GeneralSetting m_generalSettings;
                    bool m_generalSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVECHANNELINFO_H_
