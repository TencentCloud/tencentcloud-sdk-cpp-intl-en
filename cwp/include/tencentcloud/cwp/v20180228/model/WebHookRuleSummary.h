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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULESUMMARY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookEventKv.h>
#include <tencentcloud/cwp/v20180228/model/WebHookHostLabel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Enterprise WeChat Robot Rule Summary
                */
                class WebHookRuleSummary : public AbstractModel
                {
                public:
                    WebHookRuleSummary();
                    ~WebHookRuleSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return RuleName Rule name
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule name
                     * @param _ruleName Rule name
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Robot Address
                     * @return HookAddr Robot Address
                     * 
                     */
                    std::string GetHookAddr() const;

                    /**
                     * 设置Robot Address
                     * @param _hookAddr Robot Address
                     * 
                     */
                    void SetHookAddr(const std::string& _hookAddr);

                    /**
                     * 判断参数 HookAddr 是否已赋值
                     * @return HookAddr 是否已赋值
                     * 
                     */
                    bool HookAddrHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return RuleRemark Remarks
                     * 
                     */
                    std::string GetRuleRemark() const;

                    /**
                     * 设置Remarks
                     * @param _ruleRemark Remarks
                     * 
                     */
                    void SetRuleRemark(const std::string& _ruleRemark);

                    /**
                     * 判断参数 RuleRemark 是否已赋值
                     * @return RuleRemark 是否已赋值
                     * 
                     */
                    bool RuleRemarkHasBeenSet() const;

                    /**
                     * 获取Event type
                     * @return RuleItems Event type
                     * 
                     */
                    std::vector<WebHookEventKv> GetRuleItems() const;

                    /**
                     * 设置Event type
                     * @param _ruleItems Event type
                     * 
                     */
                    void SetRuleItems(const std::vector<WebHookEventKv>& _ruleItems);

                    /**
                     * 判断参数 RuleItems 是否已赋值
                     * @return RuleItems 是否已赋值
                     * 
                     */
                    bool RuleItemsHasBeenSet() const;

                    /**
                     * 获取Host range
                     * @return HostLabels Host range
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置Host range
                     * @param _hostLabels Host range
                     * 
                     */
                    void SetHostLabels(const std::vector<WebHookHostLabel>& _hostLabels);

                    /**
                     * 判断参数 HostLabels 是否已赋值
                     * @return HostLabels 是否已赋值
                     * 
                     */
                    bool HostLabelsHasBeenSet() const;

                    /**
                     * 获取Enable/Disable [1-Disable, 0-Enable]
                     * @return IsDisabled Enable/Disable [1-Disable, 0-Enable]
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置Enable/Disable [1-Disable, 0-Enable]
                     * @param _isDisabled Enable/Disable [1-Disable, 0-Enable]
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Number of hosts
                     * @return HostCount Number of hosts
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of hosts
                     * @param _hostCount Number of hosts
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Robot Address
                     */
                    std::string m_hookAddr;
                    bool m_hookAddrHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_ruleRemark;
                    bool m_ruleRemarkHasBeenSet;

                    /**
                     * Event type
                     */
                    std::vector<WebHookEventKv> m_ruleItems;
                    bool m_ruleItemsHasBeenSet;

                    /**
                     * Host range
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * Enable/Disable [1-Disable, 0-Enable]
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Number of hosts
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULESUMMARY_H_
