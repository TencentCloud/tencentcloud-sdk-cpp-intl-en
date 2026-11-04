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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppConfig.h>
#include <tencentcloud/adp/v20260520/model/AppFileVolumeMount.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyApp request structure.
                */
                class ModifyAppRequest : public AbstractModel
                {
                public:
                    ModifyAppRequest();
                    ~ModifyAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application ID.</p>
                     * @return AppId <p>Application ID.</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>Application ID.</p>
                     * @param _appId <p>Application ID.</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode</p>
                     * @return AppMode <p>Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode</p>
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置<p>Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode</p>
                     * @param _appMode <p>Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode</p>
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取<p>App avatar</p>
                     * @return Avatar <p>App avatar</p>
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置<p>App avatar</p>
                     * @param _avatar <p>App avatar</p>
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取<p>Application configuration</p>
                     * @return Config <p>Application configuration</p>
                     * 
                     */
                    AppConfig GetConfig() const;

                    /**
                     * 设置<p>Application configuration</p>
                     * @param _config <p>Application configuration</p>
                     * 
                     */
                    void SetConfig(const AppConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>Application description.</p>
                     * @return Description <p>Application description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Application description.</p>
                     * @param _description <p>Application description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Application name.</p>
                     * @return Name <p>Application name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Application name.</p>
                     * @param _name <p>Application name.</p>
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
                     * 获取<p>List of IDs of shared knowledge bases to refer (full coverage)</p>
                     * @return SharedKbIdList <p>List of IDs of shared knowledge bases to refer (full coverage)</p>
                     * 
                     */
                    std::vector<std::string> GetSharedKbIdList() const;

                    /**
                     * 设置<p>List of IDs of shared knowledge bases to refer (full coverage)</p>
                     * @param _sharedKbIdList <p>List of IDs of shared knowledge bases to refer (full coverage)</p>
                     * 
                     */
                    void SetSharedKbIdList(const std::vector<std::string>& _sharedKbIdList);

                    /**
                     * 判断参数 SharedKbIdList 是否已赋值
                     * @return SharedKbIdList 是否已赋值
                     * 
                     */
                    bool SharedKbIdListHasBeenSet() const;

                    /**
                     * 获取<p>App mount cloud disk</p>
                     * @return FileVolumeMountList <p>App mount cloud disk</p>
                     * 
                     */
                    std::vector<AppFileVolumeMount> GetFileVolumeMountList() const;

                    /**
                     * 设置<p>App mount cloud disk</p>
                     * @param _fileVolumeMountList <p>App mount cloud disk</p>
                     * 
                     */
                    void SetFileVolumeMountList(const std::vector<AppFileVolumeMount>& _fileVolumeMountList);

                    /**
                     * 判断参数 FileVolumeMountList 是否已赋值
                     * @return FileVolumeMountList 是否已赋值
                     * 
                     */
                    bool FileVolumeMountListHasBeenSet() const;

                    /**
                     * 获取<p>Field mask, specifying the fields to update (if Paths is empty, no fields will be updated). Paths enumeration values:<br>[Top level] Name, Avatar, Description, AppMode, SharedKbIdList, FileVolumeMountList<br>[Greeting] Config.Greeting, Config.Greeting.Greeting, Config.Greeting.OpeningQuestionList<br>[Model] Config.Model, Config.Model.ThinkModel, Config.Model.GenerateModel, Config.Model.AiOptimizeModel, Config.Model.FileParseModel, Config.Model.PromptRewriteModel, Config.Model.MultiModalQaModel, Config.Model.MultiModalUnderstandingModel<br>[WebSearch] Config.WebSearch<br>[Memory] Config.Memory, Config.Memory.Enabled, Config.Memory.LongMemoryDay, Config.Memory.Model, Config.Memory.PromptMode, Config.Memory.PromptContent<br>[Mode] Config.Mode, Config.Mode.MultiAgentConfig, Config.Mode.SingleWorkflowConfig,Config.Mode.ClawAgentConfig<br> [Mode.ClawAgentConfig] Config.Mode.ClawAgentConfig.LongMemoryConfig, Config.Mode.ClawAgentConfig.AgentTeamConfig, Config.Mode.ClawAgentConfig.ChannelContextTimeoutConfig<br>[Experience] Config.Experience, Config.Experience.Conversation, Config.Experience.Role, Config.Experience.Advanced<br>[Experience.Conversation] Config.Experience.Conversation.AiCall, Config.Experience.Conversation.BackgroundImage, Config.Experience.Conversation.Method, Config.Experience.Conversation.FallbackReply, Config.Experience.Conversation.Recommended, Config.Experience.Conversation.InputBoxConfig, Config.Experience.Conversation.WebSearch,Config.Experience.Conversation.NewMessageInterrupt<br>[Experience.Conversation.AiCall] Config.Experience.Conversation.AiCall.VoiceInteract, Config.Experience.Conversation.AiCall.VoiceCall, Config.Experience.Conversation.AiCall.DigitalHuman<br>[Experience.Advanced] Config.Experience.Advanced.ContextRewrite, Config.Experience.Advanced.ImageTextRetrieval, Config.Experience.Advanced.IntentAchievement, Config.Experience.Advanced.ReplyFlexibility</p>
                     * @return UpdateMask <p>Field mask, specifying the fields to update (if Paths is empty, no fields will be updated). Paths enumeration values:<br>[Top level] Name, Avatar, Description, AppMode, SharedKbIdList, FileVolumeMountList<br>[Greeting] Config.Greeting, Config.Greeting.Greeting, Config.Greeting.OpeningQuestionList<br>[Model] Config.Model, Config.Model.ThinkModel, Config.Model.GenerateModel, Config.Model.AiOptimizeModel, Config.Model.FileParseModel, Config.Model.PromptRewriteModel, Config.Model.MultiModalQaModel, Config.Model.MultiModalUnderstandingModel<br>[WebSearch] Config.WebSearch<br>[Memory] Config.Memory, Config.Memory.Enabled, Config.Memory.LongMemoryDay, Config.Memory.Model, Config.Memory.PromptMode, Config.Memory.PromptContent<br>[Mode] Config.Mode, Config.Mode.MultiAgentConfig, Config.Mode.SingleWorkflowConfig,Config.Mode.ClawAgentConfig<br> [Mode.ClawAgentConfig] Config.Mode.ClawAgentConfig.LongMemoryConfig, Config.Mode.ClawAgentConfig.AgentTeamConfig, Config.Mode.ClawAgentConfig.ChannelContextTimeoutConfig<br>[Experience] Config.Experience, Config.Experience.Conversation, Config.Experience.Role, Config.Experience.Advanced<br>[Experience.Conversation] Config.Experience.Conversation.AiCall, Config.Experience.Conversation.BackgroundImage, Config.Experience.Conversation.Method, Config.Experience.Conversation.FallbackReply, Config.Experience.Conversation.Recommended, Config.Experience.Conversation.InputBoxConfig, Config.Experience.Conversation.WebSearch,Config.Experience.Conversation.NewMessageInterrupt<br>[Experience.Conversation.AiCall] Config.Experience.Conversation.AiCall.VoiceInteract, Config.Experience.Conversation.AiCall.VoiceCall, Config.Experience.Conversation.AiCall.DigitalHuman<br>[Experience.Advanced] Config.Experience.Advanced.ContextRewrite, Config.Experience.Advanced.ImageTextRetrieval, Config.Experience.Advanced.IntentAchievement, Config.Experience.Advanced.ReplyFlexibility</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>Field mask, specifying the fields to update (if Paths is empty, no fields will be updated). Paths enumeration values:<br>[Top level] Name, Avatar, Description, AppMode, SharedKbIdList, FileVolumeMountList<br>[Greeting] Config.Greeting, Config.Greeting.Greeting, Config.Greeting.OpeningQuestionList<br>[Model] Config.Model, Config.Model.ThinkModel, Config.Model.GenerateModel, Config.Model.AiOptimizeModel, Config.Model.FileParseModel, Config.Model.PromptRewriteModel, Config.Model.MultiModalQaModel, Config.Model.MultiModalUnderstandingModel<br>[WebSearch] Config.WebSearch<br>[Memory] Config.Memory, Config.Memory.Enabled, Config.Memory.LongMemoryDay, Config.Memory.Model, Config.Memory.PromptMode, Config.Memory.PromptContent<br>[Mode] Config.Mode, Config.Mode.MultiAgentConfig, Config.Mode.SingleWorkflowConfig,Config.Mode.ClawAgentConfig<br> [Mode.ClawAgentConfig] Config.Mode.ClawAgentConfig.LongMemoryConfig, Config.Mode.ClawAgentConfig.AgentTeamConfig, Config.Mode.ClawAgentConfig.ChannelContextTimeoutConfig<br>[Experience] Config.Experience, Config.Experience.Conversation, Config.Experience.Role, Config.Experience.Advanced<br>[Experience.Conversation] Config.Experience.Conversation.AiCall, Config.Experience.Conversation.BackgroundImage, Config.Experience.Conversation.Method, Config.Experience.Conversation.FallbackReply, Config.Experience.Conversation.Recommended, Config.Experience.Conversation.InputBoxConfig, Config.Experience.Conversation.WebSearch,Config.Experience.Conversation.NewMessageInterrupt<br>[Experience.Conversation.AiCall] Config.Experience.Conversation.AiCall.VoiceInteract, Config.Experience.Conversation.AiCall.VoiceCall, Config.Experience.Conversation.AiCall.DigitalHuman<br>[Experience.Advanced] Config.Experience.Advanced.ContextRewrite, Config.Experience.Advanced.ImageTextRetrieval, Config.Experience.Advanced.IntentAchievement, Config.Experience.Advanced.ReplyFlexibility</p>
                     * @param _updateMask <p>Field mask, specifying the fields to update (if Paths is empty, no fields will be updated). Paths enumeration values:<br>[Top level] Name, Avatar, Description, AppMode, SharedKbIdList, FileVolumeMountList<br>[Greeting] Config.Greeting, Config.Greeting.Greeting, Config.Greeting.OpeningQuestionList<br>[Model] Config.Model, Config.Model.ThinkModel, Config.Model.GenerateModel, Config.Model.AiOptimizeModel, Config.Model.FileParseModel, Config.Model.PromptRewriteModel, Config.Model.MultiModalQaModel, Config.Model.MultiModalUnderstandingModel<br>[WebSearch] Config.WebSearch<br>[Memory] Config.Memory, Config.Memory.Enabled, Config.Memory.LongMemoryDay, Config.Memory.Model, Config.Memory.PromptMode, Config.Memory.PromptContent<br>[Mode] Config.Mode, Config.Mode.MultiAgentConfig, Config.Mode.SingleWorkflowConfig,Config.Mode.ClawAgentConfig<br> [Mode.ClawAgentConfig] Config.Mode.ClawAgentConfig.LongMemoryConfig, Config.Mode.ClawAgentConfig.AgentTeamConfig, Config.Mode.ClawAgentConfig.ChannelContextTimeoutConfig<br>[Experience] Config.Experience, Config.Experience.Conversation, Config.Experience.Role, Config.Experience.Advanced<br>[Experience.Conversation] Config.Experience.Conversation.AiCall, Config.Experience.Conversation.BackgroundImage, Config.Experience.Conversation.Method, Config.Experience.Conversation.FallbackReply, Config.Experience.Conversation.Recommended, Config.Experience.Conversation.InputBoxConfig, Config.Experience.Conversation.WebSearch,Config.Experience.Conversation.NewMessageInterrupt<br>[Experience.Conversation.AiCall] Config.Experience.Conversation.AiCall.VoiceInteract, Config.Experience.Conversation.AiCall.VoiceCall, Config.Experience.Conversation.AiCall.DigitalHuman<br>[Experience.Advanced] Config.Experience.Advanced.ContextRewrite, Config.Experience.Advanced.ImageTextRetrieval, Config.Experience.Advanced.IntentAchievement, Config.Experience.Advanced.ReplyFlexibility</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application mode. Enumeration values: 1: Standard mode, 2: Agent mode, 3: Single workflow mode, 4: ClawAgent mode</p>
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * <p>App avatar</p>
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * <p>Application configuration</p>
                     */
                    AppConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>Application description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Application name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>List of IDs of shared knowledge bases to refer (full coverage)</p>
                     */
                    std::vector<std::string> m_sharedKbIdList;
                    bool m_sharedKbIdListHasBeenSet;

                    /**
                     * <p>App mount cloud disk</p>
                     */
                    std::vector<AppFileVolumeMount> m_fileVolumeMountList;
                    bool m_fileVolumeMountListHasBeenSet;

                    /**
                     * <p>Field mask, specifying the fields to update (if Paths is empty, no fields will be updated). Paths enumeration values:<br>[Top level] Name, Avatar, Description, AppMode, SharedKbIdList, FileVolumeMountList<br>[Greeting] Config.Greeting, Config.Greeting.Greeting, Config.Greeting.OpeningQuestionList<br>[Model] Config.Model, Config.Model.ThinkModel, Config.Model.GenerateModel, Config.Model.AiOptimizeModel, Config.Model.FileParseModel, Config.Model.PromptRewriteModel, Config.Model.MultiModalQaModel, Config.Model.MultiModalUnderstandingModel<br>[WebSearch] Config.WebSearch<br>[Memory] Config.Memory, Config.Memory.Enabled, Config.Memory.LongMemoryDay, Config.Memory.Model, Config.Memory.PromptMode, Config.Memory.PromptContent<br>[Mode] Config.Mode, Config.Mode.MultiAgentConfig, Config.Mode.SingleWorkflowConfig,Config.Mode.ClawAgentConfig<br> [Mode.ClawAgentConfig] Config.Mode.ClawAgentConfig.LongMemoryConfig, Config.Mode.ClawAgentConfig.AgentTeamConfig, Config.Mode.ClawAgentConfig.ChannelContextTimeoutConfig<br>[Experience] Config.Experience, Config.Experience.Conversation, Config.Experience.Role, Config.Experience.Advanced<br>[Experience.Conversation] Config.Experience.Conversation.AiCall, Config.Experience.Conversation.BackgroundImage, Config.Experience.Conversation.Method, Config.Experience.Conversation.FallbackReply, Config.Experience.Conversation.Recommended, Config.Experience.Conversation.InputBoxConfig, Config.Experience.Conversation.WebSearch,Config.Experience.Conversation.NewMessageInterrupt<br>[Experience.Conversation.AiCall] Config.Experience.Conversation.AiCall.VoiceInteract, Config.Experience.Conversation.AiCall.VoiceCall, Config.Experience.Conversation.AiCall.DigitalHuman<br>[Experience.Advanced] Config.Experience.Advanced.ContextRewrite, Config.Experience.Advanced.ImageTextRetrieval, Config.Experience.Advanced.IntentAchievement, Config.Experience.Advanced.ReplyFlexibility</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYAPPREQUEST_H_
