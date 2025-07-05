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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * IP blocklist/allowlist rule details
                */
                class IpTableRule : public AbstractModel
                {
                public:
                    IpTableRule();
                    ~IpTableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action: `drop` (block), `trans` (allow), `monitor` (observe)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Action Action: `drop` (block), `trans` (allow), `monitor` (observe)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action: `drop` (block), `trans` (allow), `monitor` (observe)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _action Action: `drop` (block), `trans` (allow), `monitor` (observe)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Matches by IP or region. Values: `ip` and `area`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MatchFrom Matches by IP or region. Values: `ip` and `area`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置Matches by IP or region. Values: `ip` and `area`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _matchFrom Matches by IP or region. Values: `ip` and `area`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取Matching content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MatchContent Matching content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置Matching content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _matchContent Matching content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleID Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleID Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Action: `drop` (block), `trans` (allow), `monitor` (observe)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Matches by IP or region. Values: `ip` and `area`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * Matching content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * Rule ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_IPTABLERULE_H_
