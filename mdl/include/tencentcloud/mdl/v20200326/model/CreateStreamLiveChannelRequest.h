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
#include <tencentcloud/mdl/v20200326/model/SubtitleConf.h>
#include <tencentcloud/mdl/v20200326/model/PlanSettings.h>
#include <tencentcloud/mdl/v20200326/model/EventNotifySetting.h>
#include <tencentcloud/mdl/v20200326/model/InputLossBehaviorInfo.h>
#include <tencentcloud/mdl/v20200326/model/PipelineInputSettingsInfo.h>
#include <tencentcloud/mdl/v20200326/model/InputAnalysisInfo.h>
#include <tencentcloud/mdl/v20200326/model/Tag.h>
#include <tencentcloud/mdl/v20200326/model/FrameCaptureTemplate.h>


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
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
                     * @param _name Channel name, which can contain 1-32 case-sensitive letters, digits, and underscores and must be unique at the region level
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
                     * 获取Inputs to attach. You can attach 1 to 5 inputs.
                     * @return AttachedInputs Inputs to attach. You can attach 1 to 5 inputs.
                     * 
                     */
                    std::vector<AttachedInput> GetAttachedInputs() const;

                    /**
                     * 设置Inputs to attach. You can attach 1 to 5 inputs.
                     * @param _attachedInputs Inputs to attach. You can attach 1 to 5 inputs.
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
                     * 获取Configuration information of the channel's output groups. Quantity: [1, 10]
                     * @return OutputGroups Configuration information of the channel's output groups. Quantity: [1, 10]
                     * 
                     */
                    std::vector<StreamLiveOutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Configuration information of the channel's output groups. Quantity: [1, 10]
                     * @param _outputGroups Configuration information of the channel's output groups. Quantity: [1, 10]
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
                     * 获取Audio transcoding templates. Quantity: [1, 20]
                     * @return AudioTemplates Audio transcoding templates. Quantity: [1, 20]
                     * 
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding templates. Quantity: [1, 20]
                     * @param _audioTemplates Audio transcoding templates. Quantity: [1, 20]
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
                     * 获取Video transcoding templates. Quantity: [1, 10]
                     * @return VideoTemplates Video transcoding templates. Quantity: [1, 10]
                     * 
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding templates. Quantity: [1, 10]
                     * @param _videoTemplates Video transcoding templates. Quantity: [1, 10]
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
                     * 获取Audio/Video transcoding templates. Quantity: [1, 10]
                     * @return AVTemplates Audio/Video transcoding templates. Quantity: [1, 10]
                     * 
                     */
                    std::vector<AVTemplate> GetAVTemplates() const;

                    /**
                     * 设置Audio/Video transcoding templates. Quantity: [1, 10]
                     * @param _aVTemplates Audio/Video transcoding templates. Quantity: [1, 10]
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
                     * 获取Subtitle template configuration, only AVTemplates are valid.
                     * @return CaptionTemplates Subtitle template configuration, only AVTemplates are valid.
                     * 
                     */
                    std::vector<SubtitleConf> GetCaptionTemplates() const;

                    /**
                     * 设置Subtitle template configuration, only AVTemplates are valid.
                     * @param _captionTemplates Subtitle template configuration, only AVTemplates are valid.
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
                     * @return PlanSettings Event settings
                     * 
                     */
                    PlanSettings GetPlanSettings() const;

                    /**
                     * 设置Event settings
                     * @param _planSettings Event settings
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
                     * @return EventNotifySettings The callback settings.
                     * 
                     */
                    EventNotifySetting GetEventNotifySettings() const;

                    /**
                     * 设置The callback settings.
                     * @param _eventNotifySettings The callback settings.
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
                     * 获取Complement the last video frame settings.
                     * @return InputLossBehavior Complement the last video frame settings.
                     * 
                     */
                    InputLossBehaviorInfo GetInputLossBehavior() const;

                    /**
                     * 设置Complement the last video frame settings.
                     * @param _inputLossBehavior Complement the last video frame settings.
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
                     * Configuration information of the channel's output groups. Quantity: [1, 10]
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
                     * Subtitle template configuration, only AVTemplates are valid.
                     */
                    std::vector<SubtitleConf> m_captionTemplates;
                    bool m_captionTemplatesHasBeenSet;

                    /**
                     * Event settings
                     */
                    PlanSettings m_planSettings;
                    bool m_planSettingsHasBeenSet;

                    /**
                     * The callback settings.
                     */
                    EventNotifySetting m_eventNotifySettings;
                    bool m_eventNotifySettingsHasBeenSet;

                    /**
                     * Complement the last video frame settings.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVECHANNELREQUEST_H_
