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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerScheduleStatus.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TriggerStatus
                */
                class TriggerStatus : public AbstractModel
                {
                public:
                    TriggerStatus();
                    ~TriggerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Timer status.</p>
                     * @return ScheduledStatus <p>Timer status.</p>
                     * 
                     */
                    AppTriggerScheduleStatus GetScheduledStatus() const;

                    /**
                     * 设置<p>Timer status.</p>
                     * @param _scheduledStatus <p>Timer status.</p>
                     * 
                     */
                    void SetScheduledStatus(const AppTriggerScheduleStatus& _scheduledStatus);

                    /**
                     * 判断参数 ScheduledStatus 是否已赋值
                     * @return ScheduledStatus 是否已赋值
                     * 
                     */
                    bool ScheduledStatusHasBeenSet() const;

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
                     * 获取<p>Visitor id</p>
                     * @return UserId <p>Visitor id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Visitor id</p>
                     * @param _userId <p>Visitor id</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>Webhook status</p>
                     * @return WebhookStatus <p>Webhook status</p>
                     * 
                     */
                    AppTriggerWebhookStatus GetWebhookStatus() const;

                    /**
                     * 设置<p>Webhook status</p>
                     * @param _webhookStatus <p>Webhook status</p>
                     * 
                     */
                    void SetWebhookStatus(const AppTriggerWebhookStatus& _webhookStatus);

                    /**
                     * 判断参数 WebhookStatus 是否已赋值
                     * @return WebhookStatus 是否已赋值
                     * 
                     */
                    bool WebhookStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Timer status.</p>
                     */
                    AppTriggerScheduleStatus m_scheduledStatus;
                    bool m_scheduledStatusHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_UNSPECIFIED</td> <td>0</td> <td>Unspecified</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_APP</td> <td>1</td> <td>B-end admin</td> </tr> <tr> <td>APP_TRIGGER_SCOPE_USER</td> <td>2</td> <td>C-end visitor</td> </tr> </tbody> </table>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>Visitor id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Webhook status</p>
                     */
                    AppTriggerWebhookStatus m_webhookStatus;
                    bool m_webhookStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TRIGGERSTATUS_H_
