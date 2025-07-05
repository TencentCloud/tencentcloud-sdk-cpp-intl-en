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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SubscribeReceiver.h>
#include <tencentcloud/wedata/v20210820/model/SubscribeWebHook.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyRuleGroupSubscription request structure.
                */
                class ModifyRuleGroupSubscriptionRequest : public AbstractModel
                {
                public:
                    ModifyRuleGroupSubscriptionRequest();
                    ~ModifyRuleGroupSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule Group ID
                     * @return RuleGroupId Rule Group ID
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
                     * @param _ruleGroupId Rule Group ID
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取Subscriber Information
                     * @return Receivers Subscriber Information
                     * 
                     */
                    std::vector<SubscribeReceiver> GetReceivers() const;

                    /**
                     * 设置Subscriber Information
                     * @param _receivers Subscriber Information
                     * 
                     */
                    void SetReceivers(const std::vector<SubscribeReceiver>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Data Subscription Type
                     * @return SubscribeType Data Subscription Type
                     * 
                     */
                    std::vector<uint64_t> GetSubscribeType() const;

                    /**
                     * 设置Data Subscription Type
                     * @param _subscribeType Data Subscription Type
                     * 
                     */
                    void SetSubscribeType(const std::vector<uint64_t>& _subscribeType);

                    /**
                     * 判断参数 SubscribeType 是否已赋值
                     * @return SubscribeType 是否已赋值
                     * 
                     */
                    bool SubscribeTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Database ID
                     * @return DatabaseId Database ID
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置Database ID
                     * @param _databaseId Database ID
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取Data Source ID
                     * @return DatasourceId Data Source ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置Data Source ID
                     * @param _datasourceId Data Source ID
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取Data Table ID
                     * @return TableId Data Table ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置Data Table ID
                     * @param _tableId Data Table ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取Group Robot Webhook Information
                     * @return WebHooks Group Robot Webhook Information
                     * 
                     */
                    std::vector<SubscribeWebHook> GetWebHooks() const;

                    /**
                     * 设置Group Robot Webhook Information
                     * @param _webHooks Group Robot Webhook Information
                     * 
                     */
                    void SetWebHooks(const std::vector<SubscribeWebHook>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                private:

                    /**
                     * Rule Group ID
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Subscriber Information
                     */
                    std::vector<SubscribeReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Data Subscription Type
                     */
                    std::vector<uint64_t> m_subscribeType;
                    bool m_subscribeTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Database ID
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * Data Source ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * Data Table ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * Group Robot Webhook Information
                     */
                    std::vector<SubscribeWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYRULEGROUPSUBSCRIPTIONREQUEST_H_
