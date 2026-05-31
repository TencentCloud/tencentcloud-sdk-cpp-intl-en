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
                * CreateStreamLiveChannel request structure.
                */
                class CreateStreamLiveChannelRequest : public AbstractModel
                {
                public:
                    CreateStreamLiveChannelRequest();
                    ~CreateStreamLiveChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel name, limited to lowercase letters, digits, and underscores, length [1, 32], unique in each Region.
                     * @return Name Channel name, limited to lowercase letters, digits, and underscores, length [1, 32], unique in each Region.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name, limited to lowercase letters, digits, and underscores, length [1, 32], unique in each Region.
                     * @param _name Channel name, limited to lowercase letters, digits, and underscores, length [1, 32], unique in each Region.
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
                     * 获取Associated media input, limit on the number [1, 5].
                     * @return AttachedInputs Associated media input, limit on the number [1, 5].
                     * 
                     */
                    std::vector<AttachedInput> GetAttachedInputs() const;

                    /**
                     * 设置Associated media input, limit on the number [1, 5].
                     * @param _attachedInputs Associated media input, limit on the number [1, 5].
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
                     * 获取Configuration message of the output group for the channel. Limit on the number [1, 10].
                     * @return OutputGroups Configuration message of the output group for the channel. Limit on the number [1, 10].
                     * 
                     */
                    std::vector<StreamLiveOutputGroupsInfo> GetOutputGroups() const;

                    /**
                     * 设置Configuration message of the output group for the channel. Limit on the number [1, 10].
                     * @param _outputGroups Configuration message of the output group for the channel. Limit on the number [1, 10].
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
                     * 获取Audio transcoding template array, with the maximum number of [1, 20].
                     * @return AudioTemplates Audio transcoding template array, with the maximum number of [1, 20].
                     * 
                     */
                    std::vector<AudioTemplateInfo> GetAudioTemplates() const;

                    /**
                     * 设置Audio transcoding template array, with the maximum number of [1, 20].
                     * @param _audioTemplates Audio transcoding template array, with the maximum number of [1, 20].
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
                     * 获取Video transcoding template array, with the maximum number of [1, 10].
                     * @return VideoTemplates Video transcoding template array, with the maximum number of [1, 10].
                     * 
                     */
                    std::vector<VideoTemplateInfo> GetVideoTemplates() const;

                    /**
                     * 设置Video transcoding template array, with the maximum number of [1, 10].
                     * @param _videoTemplates Video transcoding template array, with the maximum number of [1, 10].
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
                     * 获取Audio and video transcoding template array, with a limit on the number between 1 and 10.
                     * @return AVTemplates Audio and video transcoding template array, with a limit on the number between 1 and 10.
                     * 
                     */
                    std::vector<AVTemplate> GetAVTemplates() const;

                    /**
                     * 设置Audio and video transcoding template array, with a limit on the number between 1 and 10.
                     * @param _aVTemplates Audio and video transcoding template array, with a limit on the number between 1 and 10.
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
                     * 获取Subtitle template configuration is only valid for joint transcoding template.
                     * @return CaptionTemplates Subtitle template configuration is only valid for joint transcoding template.
                     * 
                     */
                    std::vector<SubtitleConf> GetCaptionTemplates() const;

                    /**
                     * 设置Subtitle template configuration is only valid for joint transcoding template.
                     * @param _captionTemplates Subtitle template configuration is only valid for joint transcoding template.
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
                     * 获取Configuration message of the scheduled task.
                     * @return PlanSettings Configuration message of the scheduled task.
                     * 
                     */
                    PlanSettings GetPlanSettings() const;

                    /**
                     * 设置Configuration message of the scheduled task.
                     * @param _planSettings Configuration message of the scheduled task.
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
                     * 获取Callback configuration information.
                     * @return EventNotifySettings Callback configuration information.
                     * 
                     */
                    EventNotifySetting GetEventNotifySettings() const;

                    /**
                     * 设置Callback configuration information.
                     * @param _eventNotifySettings Callback configuration information.
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
                     * 获取Input content identification configuration.
                     * @return InputAnalysisSettings Input content identification configuration.
                     * 
                     */
                    InputAnalysisInfo GetInputAnalysisSettings() const;

                    /**
                     * 设置Input content identification configuration.
                     * @param _inputAnalysisSettings Input content identification configuration.
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
                     * 获取Console tag list
                     * @return Tags Console tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Console tag list
                     * @param _tags Console tag list
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
                     * 获取chart template
                     * @return FrameCaptureTemplates chart template
                     * 
                     */
                    std::vector<FrameCaptureTemplate> GetFrameCaptureTemplates() const;

                    /**
                     * 设置chart template
                     * @param _frameCaptureTemplates chart template
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
                     * 获取Common configuration.
                     * @return GeneralSettings Common configuration.
                     * 
                     */
                    GeneralSetting GetGeneralSettings() const;

                    /**
                     * 设置Common configuration.
                     * @param _generalSettings Common configuration.
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
                     * Channel name, limited to lowercase letters, digits, and underscores, length [1, 32], unique in each Region.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Associated media input, limit on the number [1, 5].
                     */
                    std::vector<AttachedInput> m_attachedInputs;
                    bool m_attachedInputsHasBeenSet;

                    /**
                     * Configuration message of the output group for the channel. Limit on the number [1, 10].
                     */
                    std::vector<StreamLiveOutputGroupsInfo> m_outputGroups;
                    bool m_outputGroupsHasBeenSet;

                    /**
                     * Audio transcoding template array, with the maximum number of [1, 20].
                     */
                    std::vector<AudioTemplateInfo> m_audioTemplates;
                    bool m_audioTemplatesHasBeenSet;

                    /**
                     * Video transcoding template array, with the maximum number of [1, 10].
                     */
                    std::vector<VideoTemplateInfo> m_videoTemplates;
                    bool m_videoTemplatesHasBeenSet;

                    /**
                     * Audio and video transcoding template array, with a limit on the number between 1 and 10.
                     */
                    std::vector<AVTemplate> m_aVTemplates;
                    bool m_aVTemplatesHasBeenSet;

                    /**
                     * Subtitle template configuration is only valid for joint transcoding template.
                     */
                    std::vector<SubtitleConf> m_captionTemplates;
                    bool m_captionTemplatesHasBeenSet;

                    /**
                     * Configuration message of the scheduled task.
                     */
                    PlanSettings m_planSettings;
                    bool m_planSettingsHasBeenSet;

                    /**
                     * Callback configuration information.
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
                     * Input content identification configuration.
                     */
                    InputAnalysisInfo m_inputAnalysisSettings;
                    bool m_inputAnalysisSettingsHasBeenSet;

                    /**
                     * Console tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * chart template
                     */
                    std::vector<FrameCaptureTemplate> m_frameCaptureTemplates;
                    bool m_frameCaptureTemplatesHasBeenSet;

                    /**
                     * Common configuration.
                     */
                    GeneralSetting m_generalSettings;
                    bool m_generalSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CREATESTREAMLIVECHANNELREQUEST_H_
