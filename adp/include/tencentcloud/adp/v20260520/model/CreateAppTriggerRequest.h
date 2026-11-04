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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExecuteConfig.h>
#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>
#include <tencentcloud/adp/v20260520/model/TriggerConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateAppTrigger request structure.
                */
                class CreateAppTriggerRequest : public AbstractModel
                {
                public:
                    CreateAppTriggerRequest();
                    ~CreateAppTriggerRequest() = default;
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
                     * 获取<p>Application trigger execution configuration</p>
                     * @return ExecuteConfig <p>Application trigger execution configuration</p>
                     * 
                     */
                    ExecuteConfig GetExecuteConfig() const;

                    /**
                     * 设置<p>Application trigger execution configuration</p>
                     * @param _executeConfig <p>Application trigger execution configuration</p>
                     * 
                     */
                    void SetExecuteConfig(const ExecuteConfig& _executeConfig);

                    /**
                     * 判断参数 ExecuteConfig 是否已赋值
                     * @return ExecuteConfig 是否已赋值
                     * 
                     */
                    bool ExecuteConfigHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td> <td>1</td> <td>Command execution</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td> <td>2</td> <td>Workflow execution</td> </tr> </tbody> </table>
                     * @return ExecuteType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td> <td>1</td> <td>Command execution</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td> <td>2</td> <td>Workflow execution</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetExecuteType() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td> <td>1</td> <td>Command execution</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td> <td>2</td> <td>Workflow execution</td> </tr> </tbody> </table>
                     * @param _executeType <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td> <td>1</td> <td>Command execution</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td> <td>2</td> <td>Workflow execution</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetExecuteType(const int64_t& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取<p>Third-party push configuration</p>
                     * @return PushConfig <p>Third-party push configuration</p>
                     * 
                     */
                    TimerPushConfig GetPushConfig() const;

                    /**
                     * 设置<p>Third-party push configuration</p>
                     * @param _pushConfig <p>Third-party push configuration</p>
                     * 
                     */
                    void SetPushConfig(const TimerPushConfig& _pushConfig);

                    /**
                     * 判断参数 PushConfig 是否已赋值
                     * @return PushConfig 是否已赋值
                     * 
                     */
                    bool PushConfigHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * @return Scope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * @param _scope <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger configuration</p>
                     * @return TriggerConfig <p>Trigger configuration</p>
                     * 
                     */
                    TriggerConfig GetTriggerConfig() const;

                    /**
                     * 设置<p>Trigger configuration</p>
                     * @param _triggerConfig <p>Trigger configuration</p>
                     * 
                     */
                    void SetTriggerConfig(const TriggerConfig& _triggerConfig);

                    /**
                     * 判断参数 TriggerConfig 是否已赋值
                     * @return TriggerConfig 是否已赋值
                     * 
                     */
                    bool TriggerConfigHasBeenSet() const;

                    /**
                     * 获取<p>Trigger name.</p>
                     * @return TriggerName <p>Trigger name.</p>
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置<p>Trigger name.</p>
                     * @param _triggerName <p>Trigger name.</p>
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>Scheduled trigger</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook trigger</td></tr></tbody></table>
                     * @return TriggerType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>Scheduled trigger</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook trigger</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>Scheduled trigger</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook trigger</td></tr></tbody></table>
                     * @param _triggerType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>Scheduled trigger</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook trigger</td></tr></tbody></table>
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Visitor ID.</p>
                     * @return UserId <p>Visitor ID.</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Visitor ID.</p>
                     * @param _userId <p>Visitor ID.</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Application ID.</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Application trigger execution configuration</p>
                     */
                    ExecuteConfig m_executeConfig;
                    bool m_executeConfigHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td> <td>1</td> <td>Command execution</td> </tr> <tr> <td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td> <td>2</td> <td>Workflow execution</td> </tr> </tbody> </table>
                     */
                    int64_t m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * <p>Third-party push configuration</p>
                     */
                    TimerPushConfig m_pushConfig;
                    bool m_pushConfigHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Trigger configuration</p>
                     */
                    TriggerConfig m_triggerConfig;
                    bool m_triggerConfigHasBeenSet;

                    /**
                     * <p>Trigger name.</p>
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>Scheduled trigger</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook trigger</td></tr></tbody></table>
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Visitor ID.</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_
