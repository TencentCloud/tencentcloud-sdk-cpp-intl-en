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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * CreateAIWorkbenchTask request structure.
                */
                class CreateAIWorkbenchTaskRequest : public AbstractModel
                {
                public:
                    CreateAIWorkbenchTaskRequest();
                    ~CreateAIWorkbenchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task Name</p>
                     * @return Name <p>Task Name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task Name</p>
                     * @param _name <p>Task Name</p>
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
                     * 获取<p>Task description</p>
                     * @return Description <p>Task description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Task description</p>
                     * @param _description <p>Task description</p>
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
                     * 获取<p>Associated Agent ID</p>
                     * @return AgentId <p>Associated Agent ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Associated Agent ID</p>
                     * @param _agentId <p>Associated Agent ID</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>Prompt Template</p>
                     * @return PromptTemplate <p>Prompt Template</p>
                     * 
                     */
                    std::string GetPromptTemplate() const;

                    /**
                     * 设置<p>Prompt Template</p>
                     * @param _promptTemplate <p>Prompt Template</p>
                     * 
                     */
                    void SetPromptTemplate(const std::string& _promptTemplate);

                    /**
                     * 判断参数 PromptTemplate 是否已赋值
                     * @return PromptTemplate 是否已赋值
                     * 
                     */
                    bool PromptTemplateHasBeenSet() const;

                    /**
                     * 获取<p>Output format: markdown / json</p>
                     * @return OutputFormat <p>Output format: markdown / json</p>
                     * 
                     */
                    std::string GetOutputFormat() const;

                    /**
                     * 设置<p>Output format: markdown / json</p>
                     * @param _outputFormat <p>Output format: markdown / json</p>
                     * 
                     */
                    void SetOutputFormat(const std::string& _outputFormat);

                    /**
                     * 判断参数 OutputFormat 是否已赋值
                     * @return OutputFormat 是否已赋值
                     * 
                     */
                    bool OutputFormatHasBeenSet() const;

                    /**
                     * 获取<p>Trigger type: manual / cron / webhook</p>
                     * @return TriggerType <p>Trigger type: manual / cron / webhook</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Trigger type: manual / cron / webhook</p>
                     * @param _triggerType <p>Trigger type: manual / cron / webhook</p>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cron expression</p>
                     * @return CronExpr <p>Cron expression</p>
                     * 
                     */
                    std::string GetCronExpr() const;

                    /**
                     * 设置<p>Cron expression</p>
                     * @param _cronExpr <p>Cron expression</p>
                     * 
                     */
                    void SetCronExpr(const std::string& _cronExpr);

                    /**
                     * 判断参数 CronExpr 是否已赋值
                     * @return CronExpr 是否已赋值
                     * 
                     */
                    bool CronExprHasBeenSet() const;

                    /**
                     * 获取<p>Cron time zone</p>
                     * @return CronTimezone <p>Cron time zone</p>
                     * 
                     */
                    std::string GetCronTimezone() const;

                    /**
                     * 设置<p>Cron time zone</p>
                     * @param _cronTimezone <p>Cron time zone</p>
                     * 
                     */
                    void SetCronTimezone(const std::string& _cronTimezone);

                    /**
                     * 判断参数 CronTimezone 是否已赋值
                     * @return CronTimezone 是否已赋值
                     * 
                     */
                    bool CronTimezoneHasBeenSet() const;

                    /**
                     * 获取<p>Associated resource map ID</p>
                     * @return ResourceMapId <p>Associated resource map ID</p>
                     * 
                     */
                    std::string GetResourceMapId() const;

                    /**
                     * 设置<p>Associated resource map ID</p>
                     * @param _resourceMapId <p>Associated resource map ID</p>
                     * 
                     */
                    void SetResourceMapId(const std::string& _resourceMapId);

                    /**
                     * 判断参数 ResourceMapId 是否已赋值
                     * @return ResourceMapId 是否已赋值
                     * 
                     */
                    bool ResourceMapIdHasBeenSet() const;

                    /**
                     * 获取<p>Skill ID list</p>
                     * @return SkillIds <p>Skill ID list</p>
                     * 
                     */
                    std::vector<std::string> GetSkillIds() const;

                    /**
                     * 设置<p>Skill ID list</p>
                     * @param _skillIds <p>Skill ID list</p>
                     * 
                     */
                    void SetSkillIds(const std::vector<std::string>& _skillIds);

                    /**
                     * 判断参数 SkillIds 是否已赋值
                     * @return SkillIds 是否已赋值
                     * 
                     */
                    bool SkillIdsHasBeenSet() const;

                    /**
                     * 获取<p>MCP endpoint ID list</p>
                     * @return McpEndpointIds <p>MCP endpoint ID list</p>
                     * 
                     */
                    std::vector<std::string> GetMcpEndpointIds() const;

                    /**
                     * 设置<p>MCP endpoint ID list</p>
                     * @param _mcpEndpointIds <p>MCP endpoint ID list</p>
                     * 
                     */
                    void SetMcpEndpointIds(const std::vector<std::string>& _mcpEndpointIds);

                    /**
                     * 判断参数 McpEndpointIds 是否已赋值
                     * @return McpEndpointIds 是否已赋值
                     * 
                     */
                    bool McpEndpointIdsHasBeenSet() const;

                    /**
                     * 获取<p>Timeout (seconds)</p>
                     * @return TimeoutSec <p>Timeout (seconds)</p>
                     * 
                     */
                    int64_t GetTimeoutSec() const;

                    /**
                     * 设置<p>Timeout (seconds)</p>
                     * @param _timeoutSec <p>Timeout (seconds)</p>
                     * 
                     */
                    void SetTimeoutSec(const int64_t& _timeoutSec);

                    /**
                     * 判断参数 TimeoutSec 是否已赋值
                     * @return TimeoutSec 是否已赋值
                     * 
                     */
                    bool TimeoutSecHasBeenSet() const;

                    /**
                     * 获取<p>Retry count</p>
                     * @return RetryCount <p>Retry count</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 设置<p>Retry count</p>
                     * @param _retryCount <p>Retry count</p>
                     * 
                     */
                    void SetRetryCount(const int64_t& _retryCount);

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable</p>
                     * @return Enabled <p>Whether to enable</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable</p>
                     * @param _enabled <p>Whether to enable</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>Task Name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Task description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Associated Agent ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Prompt Template</p>
                     */
                    std::string m_promptTemplate;
                    bool m_promptTemplateHasBeenSet;

                    /**
                     * <p>Output format: markdown / json</p>
                     */
                    std::string m_outputFormat;
                    bool m_outputFormatHasBeenSet;

                    /**
                     * <p>Trigger type: manual / cron / webhook</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Cron expression</p>
                     */
                    std::string m_cronExpr;
                    bool m_cronExprHasBeenSet;

                    /**
                     * <p>Cron time zone</p>
                     */
                    std::string m_cronTimezone;
                    bool m_cronTimezoneHasBeenSet;

                    /**
                     * <p>Associated resource map ID</p>
                     */
                    std::string m_resourceMapId;
                    bool m_resourceMapIdHasBeenSet;

                    /**
                     * <p>Skill ID list</p>
                     */
                    std::vector<std::string> m_skillIds;
                    bool m_skillIdsHasBeenSet;

                    /**
                     * <p>MCP endpoint ID list</p>
                     */
                    std::vector<std::string> m_mcpEndpointIds;
                    bool m_mcpEndpointIdsHasBeenSet;

                    /**
                     * <p>Timeout (seconds)</p>
                     */
                    int64_t m_timeoutSec;
                    bool m_timeoutSecHasBeenSet;

                    /**
                     * <p>Retry count</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>Whether to enable</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_CREATEAIWORKBENCHTASKREQUEST_H_
