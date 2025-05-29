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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AppModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSearch.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaOutput.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeWorkflow.h>
#include <tencentcloud/lke/v20231130/model/SearchRange.h>
#include <tencentcloud/lke/v20231130/model/SearchStrategy.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaSingleWorkflow.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeQaPlugin.h>
#include <tencentcloud/lke/v20231130/model/IntentAchievement.h>
#include <tencentcloud/lke/v20231130/model/AICallConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Knowledge Q&A configuration.
                */
                class KnowledgeQaConfig : public AbstractModel
                {
                public:
                    KnowledgeQaConfig();
                    ~KnowledgeQaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Welcome words, within 200 characters.
                     * @return Greeting Welcome words, within 200 characters.
                     * 
                     */
                    std::string GetGreeting() const;

                    /**
                     * 设置Welcome words, within 200 characters.
                     * @param _greeting Welcome words, within 200 characters.
                     * 
                     */
                    void SetGreeting(const std::string& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                    /**
                     * 获取Character description, within 4,000 characters. By filling out the description, set the #Character Name, #Style Characteristics, and reachable #Intent of the application. It is recommended to fill in according to the following template, with custom intents no more than 5. 
#Character Name:
#Style Characteristics:
#Output Requirements:
#Ability Limitations:
The following user intents can be reached.
##Intent Name:
##Intent Description:
##Intent Example:
##Intent Implementation:
                     * @return RoleDescription Character description, within 4,000 characters. By filling out the description, set the #Character Name, #Style Characteristics, and reachable #Intent of the application. It is recommended to fill in according to the following template, with custom intents no more than 5. 
#Character Name:
#Style Characteristics:
#Output Requirements:
#Ability Limitations:
The following user intents can be reached.
##Intent Name:
##Intent Description:
##Intent Example:
##Intent Implementation:
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置Character description, within 4,000 characters. By filling out the description, set the #Character Name, #Style Characteristics, and reachable #Intent of the application. It is recommended to fill in according to the following template, with custom intents no more than 5. 
#Character Name:
#Style Characteristics:
#Output Requirements:
#Ability Limitations:
The following user intents can be reached.
##Intent Name:
##Intent Description:
##Intent Example:
##Intent Implementation:
                     * @param _roleDescription Character description, within 4,000 characters. By filling out the description, set the #Character Name, #Style Characteristics, and reachable #Intent of the application. It is recommended to fill in according to the following template, with custom intents no more than 5. 
#Character Name:
#Style Characteristics:
#Output Requirements:
#Ability Limitations:
The following user intents can be reached.
##Intent Name:
##Intent Description:
##Intent Example:
##Intent Implementation:
                     * 
                     */
                    void SetRoleDescription(const std::string& _roleDescription);

                    /**
                     * 判断参数 RoleDescription 是否已赋值
                     * @return RoleDescription 是否已赋值
                     * 
                     */
                    bool RoleDescriptionHasBeenSet() const;

                    /**
                     * 获取Generative model configuration.
                     * @return Model Generative model configuration.
                     * 
                     */
                    AppModel GetModel() const;

                    /**
                     * 设置Generative model configuration.
                     * @param _model Generative model configuration.
                     * 
                     */
                    void SetModel(const AppModel& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Knowledge search configuration.
                     * @return Search Knowledge search configuration.
                     * 
                     */
                    std::vector<KnowledgeQaSearch> GetSearch() const;

                    /**
                     * 设置Knowledge search configuration.
                     * @param _search Knowledge search configuration.
                     * 
                     */
                    void SetSearch(const std::vector<KnowledgeQaSearch>& _search);

                    /**
                     * 判断参数 Search 是否已赋值
                     * @return Search 是否已赋值
                     * 
                     */
                    bool SearchHasBeenSet() const;

                    /**
                     * 获取Knowledge management output configuration.
                     * @return Output Knowledge management output configuration.
                     * 
                     */
                    KnowledgeQaOutput GetOutput() const;

                    /**
                     * 设置Knowledge management output configuration.
                     * @param _output Knowledge management output configuration.
                     * 
                     */
                    void SetOutput(const KnowledgeQaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Workflow configuration.
                     * @return Workflow Workflow configuration.
                     * 
                     */
                    KnowledgeWorkflow GetWorkflow() const;

                    /**
                     * 设置Workflow configuration.
                     * @param _workflow Workflow configuration.
                     * 
                     */
                    void SetWorkflow(const KnowledgeWorkflow& _workflow);

                    /**
                     * 判断参数 Workflow 是否已赋值
                     * @return Workflow 是否已赋值
                     * 
                     */
                    bool WorkflowHasBeenSet() const;

                    /**
                     * 获取Retrieval range.
                     * @return SearchRange Retrieval range.
                     * 
                     */
                    SearchRange GetSearchRange() const;

                    /**
                     * 设置Retrieval range.
                     * @param _searchRange Retrieval range.
                     * 
                     */
                    void SetSearchRange(const SearchRange& _searchRange);

                    /**
                     * 判断参数 SearchRange 是否已赋值
                     * @return SearchRange 是否已赋值
                     * 
                     */
                    bool SearchRangeHasBeenSet() const;

                    /**
                     * 获取Application modes: standard, agent, single_workflow.
                     * @return Pattern Application modes: standard, agent, single_workflow.
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置Application modes: standard, agent, single_workflow.
                     * @param _pattern Application modes: standard, agent, single_workflow.
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Retrieve a policy.
                     * @return SearchStrategy Retrieve a policy.
                     * 
                     */
                    SearchStrategy GetSearchStrategy() const;

                    /**
                     * 设置Retrieve a policy.
                     * @param _searchStrategy Retrieve a policy.
                     * 
                     */
                    void SetSearchStrategy(const SearchStrategy& _searchStrategy);

                    /**
                     * 判断参数 SearchStrategy 是否已赋值
                     * @return SearchStrategy 是否已赋值
                     * 
                     */
                    bool SearchStrategyHasBeenSet() const;

                    /**
                     * 获取Single workflow ID, which is entered when Pattern is single_workflow.
                     * @return SingleWorkflow Single workflow ID, which is entered when Pattern is single_workflow.
                     * 
                     */
                    KnowledgeQaSingleWorkflow GetSingleWorkflow() const;

                    /**
                     * 设置Single workflow ID, which is entered when Pattern is single_workflow.
                     * @param _singleWorkflow Single workflow ID, which is entered when Pattern is single_workflow.
                     * 
                     */
                    void SetSingleWorkflow(const KnowledgeQaSingleWorkflow& _singleWorkflow);

                    /**
                     * 判断参数 SingleWorkflow 是否已赋值
                     * @return SingleWorkflow 是否已赋值
                     * 
                     */
                    bool SingleWorkflowHasBeenSet() const;

                    /**
                     * 获取Application associated plug-in.
                     * @return Plugins Application associated plug-in.
                     * 
                     */
                    std::vector<KnowledgeQaPlugin> GetPlugins() const;

                    /**
                     * 设置Application associated plug-in.
                     * @param _plugins Application associated plug-in.
                     * 
                     */
                    void SetPlugins(const std::vector<KnowledgeQaPlugin>& _plugins);

                    /**
                     * 判断参数 Plugins 是否已赋值
                     * @return Plugins 是否已赋值
                     * 
                     */
                    bool PluginsHasBeenSet() const;

                    /**
                     * 获取Thinking model configuration.
                     * @return ThoughtModel Thinking model configuration.
                     * 
                     */
                    AppModel GetThoughtModel() const;

                    /**
                     * 设置Thinking model configuration.
                     * @param _thoughtModel Thinking model configuration.
                     * 
                     */
                    void SetThoughtModel(const AppModel& _thoughtModel);

                    /**
                     * 判断参数 ThoughtModel 是否已赋值
                     * @return ThoughtModel 是否已赋值
                     * 
                     */
                    bool ThoughtModelHasBeenSet() const;

                    /**
                     * 获取Priority of intent achievement methods.
                     * @return IntentAchievements Priority of intent achievement methods.
                     * 
                     */
                    std::vector<IntentAchievement> GetIntentAchievements() const;

                    /**
                     * 设置Priority of intent achievement methods.
                     * @param _intentAchievements Priority of intent achievement methods.
                     * 
                     */
                    void SetIntentAchievements(const std::vector<IntentAchievement>& _intentAchievements);

                    /**
                     * 判断参数 IntentAchievements 是否已赋值
                     * @return IntentAchievements 是否已赋值
                     * 
                     */
                    bool IntentAchievementsHasBeenSet() const;

                    /**
                     * 获取Whether to enable Image-Text Search.
                     * @return ImageTextRetrieval Whether to enable Image-Text Search.
                     * 
                     */
                    bool GetImageTextRetrieval() const;

                    /**
                     * 设置Whether to enable Image-Text Search.
                     * @param _imageTextRetrieval Whether to enable Image-Text Search.
                     * 
                     */
                    void SetImageTextRetrieval(const bool& _imageTextRetrieval);

                    /**
                     * 判断参数 ImageTextRetrieval 是否已赋值
                     * @return ImageTextRetrieval 是否已赋值
                     * 
                     */
                    bool ImageTextRetrievalHasBeenSet() const;

                    /**
                     * 获取Configure voice call parameters.
                     * @return AiCall Configure voice call parameters.
                     * 
                     */
                    AICallConfig GetAiCall() const;

                    /**
                     * 设置Configure voice call parameters.
                     * @param _aiCall Configure voice call parameters.
                     * 
                     */
                    void SetAiCall(const AICallConfig& _aiCall);

                    /**
                     * 判断参数 AiCall 是否已赋值
                     * @return AiCall 是否已赋值
                     * 
                     */
                    bool AiCallHasBeenSet() const;

                    /**
                     * 获取Session content moderation switch. Note: 1. This feature is enabled by default if no value is input. 2. Tencent Cloud provides a content pre-filtering feature to help filter high-risk or illegal content. If you do not use our filtering feature, you can disable it here. We hereby remind you that you are responsible for ensuring that your content complies with platform policies and laws and regulations, and that you should fulfill your content moderation obligations.
                     * @return EnableAudit Session content moderation switch. Note: 1. This feature is enabled by default if no value is input. 2. Tencent Cloud provides a content pre-filtering feature to help filter high-risk or illegal content. If you do not use our filtering feature, you can disable it here. We hereby remind you that you are responsible for ensuring that your content complies with platform policies and laws and regulations, and that you should fulfill your content moderation obligations.
                     * 
                     */
                    bool GetEnableAudit() const;

                    /**
                     * 设置Session content moderation switch. Note: 1. This feature is enabled by default if no value is input. 2. Tencent Cloud provides a content pre-filtering feature to help filter high-risk or illegal content. If you do not use our filtering feature, you can disable it here. We hereby remind you that you are responsible for ensuring that your content complies with platform policies and laws and regulations, and that you should fulfill your content moderation obligations.
                     * @param _enableAudit Session content moderation switch. Note: 1. This feature is enabled by default if no value is input. 2. Tencent Cloud provides a content pre-filtering feature to help filter high-risk or illegal content. If you do not use our filtering feature, you can disable it here. We hereby remind you that you are responsible for ensuring that your content complies with platform policies and laws and regulations, and that you should fulfill your content moderation obligations.
                     * 
                     */
                    void SetEnableAudit(const bool& _enableAudit);

                    /**
                     * 判断参数 EnableAudit 是否已赋值
                     * @return EnableAudit 是否已赋值
                     * 
                     */
                    bool EnableAuditHasBeenSet() const;

                private:

                    /**
                     * Welcome words, within 200 characters.
                     */
                    std::string m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * Character description, within 4,000 characters. By filling out the description, set the #Character Name, #Style Characteristics, and reachable #Intent of the application. It is recommended to fill in according to the following template, with custom intents no more than 5. 
#Character Name:
#Style Characteristics:
#Output Requirements:
#Ability Limitations:
The following user intents can be reached.
##Intent Name:
##Intent Description:
##Intent Example:
##Intent Implementation:
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                    /**
                     * Generative model configuration.
                     */
                    AppModel m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Knowledge search configuration.
                     */
                    std::vector<KnowledgeQaSearch> m_search;
                    bool m_searchHasBeenSet;

                    /**
                     * Knowledge management output configuration.
                     */
                    KnowledgeQaOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Workflow configuration.
                     */
                    KnowledgeWorkflow m_workflow;
                    bool m_workflowHasBeenSet;

                    /**
                     * Retrieval range.
                     */
                    SearchRange m_searchRange;
                    bool m_searchRangeHasBeenSet;

                    /**
                     * Application modes: standard, agent, single_workflow.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Retrieve a policy.
                     */
                    SearchStrategy m_searchStrategy;
                    bool m_searchStrategyHasBeenSet;

                    /**
                     * Single workflow ID, which is entered when Pattern is single_workflow.
                     */
                    KnowledgeQaSingleWorkflow m_singleWorkflow;
                    bool m_singleWorkflowHasBeenSet;

                    /**
                     * Application associated plug-in.
                     */
                    std::vector<KnowledgeQaPlugin> m_plugins;
                    bool m_pluginsHasBeenSet;

                    /**
                     * Thinking model configuration.
                     */
                    AppModel m_thoughtModel;
                    bool m_thoughtModelHasBeenSet;

                    /**
                     * Priority of intent achievement methods.
                     */
                    std::vector<IntentAchievement> m_intentAchievements;
                    bool m_intentAchievementsHasBeenSet;

                    /**
                     * Whether to enable Image-Text Search.
                     */
                    bool m_imageTextRetrieval;
                    bool m_imageTextRetrievalHasBeenSet;

                    /**
                     * Configure voice call parameters.
                     */
                    AICallConfig m_aiCall;
                    bool m_aiCallHasBeenSet;

                    /**
                     * Session content moderation switch. Note: 1. This feature is enabled by default if no value is input. 2. Tencent Cloud provides a content pre-filtering feature to help filter high-risk or illegal content. If you do not use our filtering feature, you can disable it here. We hereby remind you that you are responsible for ensuring that your content complies with platform policies and laws and regulations, and that you should fulfill your content moderation obligations.
                     */
                    bool m_enableAudit;
                    bool m_enableAuditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQACONFIG_H_
