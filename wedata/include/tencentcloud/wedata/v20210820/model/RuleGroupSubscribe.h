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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Data Quality Rule Group Subscription Information
                */
                class RuleGroupSubscribe : public AbstractModel
                {
                public:
                    RuleGroupSubscribe();
                    ~RuleGroupSubscribe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleGroupId Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Subscription Recipient List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Receivers Subscription Recipient List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SubscribeReceiver> GetReceivers() const;

                    /**
                     * 设置Subscription Recipient List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _receivers Subscription Recipient List
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Subscription Method 1. Email  2. SMS
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubscribeType Subscription Method 1. Email  2. SMS
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetSubscribeType() const;

                    /**
                     * 设置Subscription Method 1. Email  2. SMS
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _subscribeType Subscription Method 1. Email  2. SMS
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Group Robot Configuration's Webhook Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WebHooks Group Robot Configuration's Webhook Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SubscribeWebHook> GetWebHooks() const;

                    /**
                     * 设置Group Robot Configuration's Webhook Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _webHooks Group Robot Configuration's Webhook Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWebHooks(const std::vector<SubscribeWebHook>& _webHooks);

                    /**
                     * 判断参数 WebHooks 是否已赋值
                     * @return WebHooks 是否已赋值
                     * 
                     */
                    bool WebHooksHasBeenSet() const;

                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleId Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RuleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _ruleName Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * Rule Group ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * Subscription Recipient List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SubscribeReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Subscription Method 1. Email  2. SMS
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<uint64_t> m_subscribeType;
                    bool m_subscribeTypeHasBeenSet;

                    /**
                     * Group Robot Configuration's Webhook Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SubscribeWebHook> m_webHooks;
                    bool m_webHooksHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_
