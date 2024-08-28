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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_

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
                * Enterprise WeChat Robot Rule Details
                */
                class WebHookRuleDetail : public AbstractModel
                {
                public:
                    WebHookRuleDetail();
                    ~WebHookRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Chatbot address
                     * @return HookAddr Chatbot address
                     * 
                     */
                    std::string GetHookAddr() const;

                    /**
                     * 设置Chatbot address
                     * @param _hookAddr Chatbot address
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
                     * 获取Host scope
                     * @return HostLabels Host scope
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置Host scope
                     * @param _hostLabels Host scope
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
                     * 获取Host ID List
                     * @return HostIds Host ID List
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置Host ID List
                     * @param _hostIds Host ID List
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取Whether it is disabled [1: disabled|0: enabled]
                     * @return IsDisabled Whether it is disabled [1: disabled|0: enabled]
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置Whether it is disabled [1: disabled|0: enabled]
                     * @param _isDisabled Whether it is disabled [1: disabled|0: enabled]
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * Rule name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Chatbot address
                     */
                    std::string m_hookAddr;
                    bool m_hookAddrHasBeenSet;

                    /**
                     * Event type
                     */
                    std::vector<WebHookEventKv> m_ruleItems;
                    bool m_ruleItemsHasBeenSet;

                    /**
                     * Rule ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_ruleRemark;
                    bool m_ruleRemarkHasBeenSet;

                    /**
                     * Host scope
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * Host ID List
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * Whether it is disabled [1: disabled|0: enabled]
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRULEDETAIL_H_
