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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Specifies the rate limit configuration.
                */
                class RateLimitingRule : public AbstractModel
                {
                public:
                    RateLimitingRule();
                    ~RateLimitingRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of precise rate limiting. rule ID supports different rule configuration operations: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the RateLimitingRules parameter will be deleted.</li>.
                     * @return Id The ID of precise rate limiting. rule ID supports different rule configuration operations: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the RateLimitingRules parameter will be deleted.</li>.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID of precise rate limiting. rule ID supports different rule configuration operations: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the RateLimitingRules parameter will be deleted.</li>.
                     * @param _id The ID of precise rate limiting. rule ID supports different rule configuration operations: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the RateLimitingRules parameter will be deleted.</li>.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Specifies the name of the precise rate limit.
                     * @return Name Specifies the name of the precise rate limit.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the name of the precise rate limit.
                     * @param _name Specifies the name of the precise rate limit.
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
                     * 获取The specific content of precise speed limit shall comply with the expression syntax. for detailed specifications, see the product documentation.
                     * @return Condition The specific content of precise speed limit shall comply with the expression syntax. for detailed specifications, see the product documentation.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置The specific content of precise speed limit shall comply with the expression syntax. for detailed specifications, see the product documentation.
                     * @param _condition The specific content of precise speed limit shall comply with the expression syntax. for detailed specifications, see the product documentation.
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Rate threshold request feature match mode. this field is required when Enabled is on.  when there are multiple conditions, composite multiple conditions will perform statistics count. the maximum number of conditions must not exceed 5. valid values: <li><b>http.request.ip</b>: client ip;</li> <li><b>http.request.xff_header_ip</b>: client ip (priority match xff header);</li> <li><b>http.request.uri.path</b>: request access path;</li> <li><b>http.request.cookies['session']</b>: Cookie named session, where session can be replaced with your own specified parameter;</li> <li><b>http.request.headers['user-agent']</b>: http header named user-agent, where user-agent can be replaced with your own specified parameter;</li> <li><b>http.request.ja3</b>: request ja3 fingerprint;</li> <li><b>http.request.uri.query['test']</b>: URL query parameter named test, where test can be replaced with your own specified parameter.</li>.
                     * @return CountBy Rate threshold request feature match mode. this field is required when Enabled is on.  when there are multiple conditions, composite multiple conditions will perform statistics count. the maximum number of conditions must not exceed 5. valid values: <li><b>http.request.ip</b>: client ip;</li> <li><b>http.request.xff_header_ip</b>: client ip (priority match xff header);</li> <li><b>http.request.uri.path</b>: request access path;</li> <li><b>http.request.cookies['session']</b>: Cookie named session, where session can be replaced with your own specified parameter;</li> <li><b>http.request.headers['user-agent']</b>: http header named user-agent, where user-agent can be replaced with your own specified parameter;</li> <li><b>http.request.ja3</b>: request ja3 fingerprint;</li> <li><b>http.request.uri.query['test']</b>: URL query parameter named test, where test can be replaced with your own specified parameter.</li>.
                     * 
                     */
                    std::vector<std::string> GetCountBy() const;

                    /**
                     * 设置Rate threshold request feature match mode. this field is required when Enabled is on.  when there are multiple conditions, composite multiple conditions will perform statistics count. the maximum number of conditions must not exceed 5. valid values: <li><b>http.request.ip</b>: client ip;</li> <li><b>http.request.xff_header_ip</b>: client ip (priority match xff header);</li> <li><b>http.request.uri.path</b>: request access path;</li> <li><b>http.request.cookies['session']</b>: Cookie named session, where session can be replaced with your own specified parameter;</li> <li><b>http.request.headers['user-agent']</b>: http header named user-agent, where user-agent can be replaced with your own specified parameter;</li> <li><b>http.request.ja3</b>: request ja3 fingerprint;</li> <li><b>http.request.uri.query['test']</b>: URL query parameter named test, where test can be replaced with your own specified parameter.</li>.
                     * @param _countBy Rate threshold request feature match mode. this field is required when Enabled is on.  when there are multiple conditions, composite multiple conditions will perform statistics count. the maximum number of conditions must not exceed 5. valid values: <li><b>http.request.ip</b>: client ip;</li> <li><b>http.request.xff_header_ip</b>: client ip (priority match xff header);</li> <li><b>http.request.uri.path</b>: request access path;</li> <li><b>http.request.cookies['session']</b>: Cookie named session, where session can be replaced with your own specified parameter;</li> <li><b>http.request.headers['user-agent']</b>: http header named user-agent, where user-agent can be replaced with your own specified parameter;</li> <li><b>http.request.ja3</b>: request ja3 fingerprint;</li> <li><b>http.request.uri.query['test']</b>: URL query parameter named test, where test can be replaced with your own specified parameter.</li>.
                     * 
                     */
                    void SetCountBy(const std::vector<std::string>& _countBy);

                    /**
                     * 判断参数 CountBy 是否已赋值
                     * @return CountBy 是否已赋值
                     * 
                     */
                    bool CountByHasBeenSet() const;

                    /**
                     * 获取Precision rate limiting specifies the cumulative number of interceptions within the time range. value ranges from 1 to 100000.
                     * @return MaxRequestThreshold Precision rate limiting specifies the cumulative number of interceptions within the time range. value ranges from 1 to 100000.
                     * 
                     */
                    int64_t GetMaxRequestThreshold() const;

                    /**
                     * 设置Precision rate limiting specifies the cumulative number of interceptions within the time range. value ranges from 1 to 100000.
                     * @param _maxRequestThreshold Precision rate limiting specifies the cumulative number of interceptions within the time range. value ranges from 1 to 100000.
                     * 
                     */
                    void SetMaxRequestThreshold(const int64_t& _maxRequestThreshold);

                    /**
                     * 判断参数 MaxRequestThreshold 是否已赋值
                     * @return MaxRequestThreshold 是否已赋值
                     * 
                     */
                    bool MaxRequestThresholdHasBeenSet() const;

                    /**
                     * 获取Specifies the time window for statistics. valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li>.
                     * @return CountingPeriod Specifies the time window for statistics. valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li>.
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置Specifies the time window for statistics. valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li>.
                     * @param _countingPeriod Specifies the time window for statistics. valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li>.
                     * 
                     */
                    void SetCountingPeriod(const std::string& _countingPeriod);

                    /**
                     * 判断参数 CountingPeriod 是否已赋值
                     * @return CountingPeriod 是否已赋值
                     * 
                     */
                    bool CountingPeriodHasBeenSet() const;

                    /**
                     * 获取The duration of an Action is only supported in the following units: <li>s: seconds, value range 1–120;</li> <li>m: minutes, value range 1–120;</li> <li>h: hours, value range 1–48;</li> <li>d: days, value range 1–30.</li>.
                     * @return ActionDuration The duration of an Action is only supported in the following units: <li>s: seconds, value range 1–120;</li> <li>m: minutes, value range 1–120;</li> <li>h: hours, value range 1–48;</li> <li>d: days, value range 1–30.</li>.
                     * 
                     */
                    std::string GetActionDuration() const;

                    /**
                     * 设置The duration of an Action is only supported in the following units: <li>s: seconds, value range 1–120;</li> <li>m: minutes, value range 1–120;</li> <li>h: hours, value range 1–48;</li> <li>d: days, value range 1–30.</li>.
                     * @param _actionDuration The duration of an Action is only supported in the following units: <li>s: seconds, value range 1–120;</li> <li>m: minutes, value range 1–120;</li> <li>h: hours, value range 1–48;</li> <li>d: days, value range 1–30.</li>.
                     * 
                     */
                    void SetActionDuration(const std::string& _actionDuration);

                    /**
                     * 判断参数 ActionDuration 是否已赋值
                     * @return ActionDuration 是否已赋值
                     * 
                     */
                    bool ActionDurationHasBeenSet() const;

                    /**
                     * 获取Precision rate limiting handling methods. valid values: <li>Monitor: Monitor;</li> <li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li> <li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li> <li>Redirect: Redirect to URL;</li>.
                     * @return Action Precision rate limiting handling methods. valid values: <li>Monitor: Monitor;</li> <li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li> <li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li> <li>Redirect: Redirect to URL;</li>.
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Precision rate limiting handling methods. valid values: <li>Monitor: Monitor;</li> <li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li> <li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li> <li>Redirect: Redirect to URL;</li>.
                     * @param _action Precision rate limiting handling methods. valid values: <li>Monitor: Monitor;</li> <li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li> <li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li> <li>Redirect: Redirect to URL;</li>.
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Precision rate limiting specifies the priority. value range is 0 to 100. default is 0.
                     * @return Priority Precision rate limiting specifies the priority. value range is 0 to 100. default is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Precision rate limiting specifies the priority. value range is 0 to 100. default is 0.
                     * @param _priority Precision rate limiting specifies the priority. value range is 0 to 100. default is 0.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Whether the precise rate limiting rule is enabled. valid values: <li>on: enabled;</li> <li>off: disabled.</li>.
                     * @return Enabled Whether the precise rate limiting rule is enabled. valid values: <li>on: enabled;</li> <li>off: disabled.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the precise rate limiting rule is enabled. valid values: <li>on: enabled;</li> <li>off: disabled.</li>.
                     * @param _enabled Whether the precise rate limiting rule is enabled. valid values: <li>on: enabled;</li> <li>off: disabled.</li>.
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * The ID of precise rate limiting. rule ID supports different rule configuration operations: <li><b>add</b> a new rule: leave the ID empty or do not specify the ID parameter.</li> <li><b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified.</li> <li><b>delete</b> an existing rule: existing Rules not included in the Rules list under the RateLimitingRules parameter will be deleted.</li>.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the name of the precise rate limit.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The specific content of precise speed limit shall comply with the expression syntax. for detailed specifications, see the product documentation.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Rate threshold request feature match mode. this field is required when Enabled is on.  when there are multiple conditions, composite multiple conditions will perform statistics count. the maximum number of conditions must not exceed 5. valid values: <li><b>http.request.ip</b>: client ip;</li> <li><b>http.request.xff_header_ip</b>: client ip (priority match xff header);</li> <li><b>http.request.uri.path</b>: request access path;</li> <li><b>http.request.cookies['session']</b>: Cookie named session, where session can be replaced with your own specified parameter;</li> <li><b>http.request.headers['user-agent']</b>: http header named user-agent, where user-agent can be replaced with your own specified parameter;</li> <li><b>http.request.ja3</b>: request ja3 fingerprint;</li> <li><b>http.request.uri.query['test']</b>: URL query parameter named test, where test can be replaced with your own specified parameter.</li>.
                     */
                    std::vector<std::string> m_countBy;
                    bool m_countByHasBeenSet;

                    /**
                     * Precision rate limiting specifies the cumulative number of interceptions within the time range. value ranges from 1 to 100000.
                     */
                    int64_t m_maxRequestThreshold;
                    bool m_maxRequestThresholdHasBeenSet;

                    /**
                     * Specifies the time window for statistics. valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li>.
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * The duration of an Action is only supported in the following units: <li>s: seconds, value range 1–120;</li> <li>m: minutes, value range 1–120;</li> <li>h: hours, value range 1–48;</li> <li>d: days, value range 1–30.</li>.
                     */
                    std::string m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                    /**
                     * Precision rate limiting handling methods. valid values: <li>Monitor: Monitor;</li> <li>Deny: block, where DenyActionParameters.Name supports Deny and ReturnCustomPage;</li> <li>Challenge: Challenge, where ChallengeActionParameters.Name supports JSChallenge and ManagedChallenge;</li> <li>Redirect: Redirect to URL;</li>.
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Precision rate limiting specifies the priority. value range is 0 to 100. default is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Whether the precise rate limiting rule is enabled. valid values: <li>on: enabled;</li> <li>off: disabled.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_
