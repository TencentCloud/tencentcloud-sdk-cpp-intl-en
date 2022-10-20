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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of the intelligent rate limiting rule
                */
                class RateLimitIntelligenceRuleDetail : public AbstractModel
                {
                public:
                    RateLimitIntelligenceRuleDetail();
                    ~RateLimitIntelligenceRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The client IP detected.
                     * @return MatchContent The client IP detected.
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置The client IP detected.
                     * @param MatchContent The client IP detected.
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取The action taken.
                     * @return Action The action taken.
                     */
                    std::string GetAction() const;

                    /**
                     * 设置The action taken.
                     * @param Action The action taken.
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return EffectiveTime Update time
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置Update time
                     * @param EffectiveTime Update time
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取The expiration time.
                     * @return ExpireTime The expiration time.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time.
                     * @param ExpireTime The expiration time.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取The rule ID.
                     * @return RuleId The rule ID.
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
                     * @param RuleId The rule ID.
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The action status. `allowed` indicates that the request is allowed.
                     * @return Status The action status. `allowed` indicates that the request is allowed.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The action status. `allowed` indicates that the request is allowed.
                     * @param Status The action status. `allowed` indicates that the request is allowed.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The client IP detected.
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * The action taken.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * The expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The rule ID.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The action status. `allowed` indicates that the request is allowed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINTELLIGENCERULEDETAIL_H_
