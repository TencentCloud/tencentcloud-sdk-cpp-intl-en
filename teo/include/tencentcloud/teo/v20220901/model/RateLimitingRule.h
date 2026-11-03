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
                * Specific configuration of the rate limit.
                */
                class RateLimitingRule : public AbstractModel
                {
                public:
                    RateLimitingRule();
                    ~RateLimitingRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the precise rate limiting rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the RateLimitingRules parameter will be deleted.</li></p>
                     * @return Id <p>ID of the precise rate limiting rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the RateLimitingRules parameter will be deleted.</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>ID of the precise rate limiting rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the RateLimitingRules parameter will be deleted.</li></p>
                     * @param _id <p>ID of the precise rate limiting rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the RateLimitingRules parameter will be deleted.</li></p>
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
                     * 获取<p>Name of the precise rate limit.</p>
                     * @return Name <p>Name of the precise rate limit.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name of the precise rate limit.</p>
                     * @param _name <p>Name of the precise rate limit.</p>
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
                     * 获取<p>The specific content of precise rate limiting must comply with expression syntax. For detailed specifications, see <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * @return Condition <p>The specific content of precise rate limiting must comply with expression syntax. For detailed specifications, see <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>The specific content of precise rate limiting must comply with expression syntax. For detailed specifications, see <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     * @param _condition <p>The specific content of precise rate limiting must comply with expression syntax. For detailed specifications, see <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
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
                     * 获取<p>Bandwidth limit mode. Within the statistical time window CountingPeriod, for requests that meet the CountBy feature, the following bandwidth limit modes can be configured: <li>Block: Block the access source. When the count exceeds the MaxRequestThreshold, execute the Action on all subsequent requests that meet the feature within the ActionDuration;</li><li>Throttle: Only handle excess requests. When the count exceeds the MaxRequestThreshold, execute the Action only on requests that exceed the threshold, and stop when the window ends. At this point, the ActionDuration parameter will be ignored.</li><br>Default value: Block.</p>
                     * @return Mode <p>Bandwidth limit mode. Within the statistical time window CountingPeriod, for requests that meet the CountBy feature, the following bandwidth limit modes can be configured: <li>Block: Block the access source. When the count exceeds the MaxRequestThreshold, execute the Action on all subsequent requests that meet the feature within the ActionDuration;</li><li>Throttle: Only handle excess requests. When the count exceeds the MaxRequestThreshold, execute the Action only on requests that exceed the threshold, and stop when the window ends. At this point, the ActionDuration parameter will be ignored.</li><br>Default value: Block.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Bandwidth limit mode. Within the statistical time window CountingPeriod, for requests that meet the CountBy feature, the following bandwidth limit modes can be configured: <li>Block: Block the access source. When the count exceeds the MaxRequestThreshold, execute the Action on all subsequent requests that meet the feature within the ActionDuration;</li><li>Throttle: Only handle excess requests. When the count exceeds the MaxRequestThreshold, execute the Action only on requests that exceed the threshold, and stop when the window ends. At this point, the ActionDuration parameter will be ignored.</li><br>Default value: Block.</p>
                     * @param _mode <p>Bandwidth limit mode. Within the statistical time window CountingPeriod, for requests that meet the CountBy feature, the following bandwidth limit modes can be configured: <li>Block: Block the access source. When the count exceeds the MaxRequestThreshold, execute the Action on all subsequent requests that meet the feature within the ActionDuration;</li><li>Throttle: Only handle excess requests. When the count exceeds the MaxRequestThreshold, execute the Action only on requests that exceed the threshold, and stop when the window ends. At this point, the ActionDuration parameter will be ignored.</li><br>Default value: Block.</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Match mode of the rate threshold request feature. Required when Enabled is on.<br><br>When there are multiple conditions, they will be combined for statistics and calculation. A maximum of 5 conditions is allowed. Valid values:<br><li><b>http.request.ip</b>: client IP;</li><li><b>http.request.xff_header_ip</b>: client IP (priority match XFF header);</li><li><b>http.request.uri.path</b>: access path of the request;</li><li><b>http.request.cookies[&#39;session&#39;]</b>: Cookie named session, where session can be replaced with your own parameter;</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>: HTTP header named user-agent, where user-agent can be replaced with your own parameter;</li><li><b>http.request.ja3</b>: JA3 fingerprint of the request;</li><li><b>http.request.ja4</b>: JA4 fingerprint of the request;</li><li><b>http.request.uri.query[&#39;test&#39;]</b>: URL query parameter named test, where test can be replaced with your own parameter.</li></p>
                     * @return CountBy <p>Match mode of the rate threshold request feature. Required when Enabled is on.<br><br>When there are multiple conditions, they will be combined for statistics and calculation. A maximum of 5 conditions is allowed. Valid values:<br><li><b>http.request.ip</b>: client IP;</li><li><b>http.request.xff_header_ip</b>: client IP (priority match XFF header);</li><li><b>http.request.uri.path</b>: access path of the request;</li><li><b>http.request.cookies[&#39;session&#39;]</b>: Cookie named session, where session can be replaced with your own parameter;</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>: HTTP header named user-agent, where user-agent can be replaced with your own parameter;</li><li><b>http.request.ja3</b>: JA3 fingerprint of the request;</li><li><b>http.request.ja4</b>: JA4 fingerprint of the request;</li><li><b>http.request.uri.query[&#39;test&#39;]</b>: URL query parameter named test, where test can be replaced with your own parameter.</li></p>
                     * 
                     */
                    std::vector<std::string> GetCountBy() const;

                    /**
                     * 设置<p>Match mode of the rate threshold request feature. Required when Enabled is on.<br><br>When there are multiple conditions, they will be combined for statistics and calculation. A maximum of 5 conditions is allowed. Valid values:<br><li><b>http.request.ip</b>: client IP;</li><li><b>http.request.xff_header_ip</b>: client IP (priority match XFF header);</li><li><b>http.request.uri.path</b>: access path of the request;</li><li><b>http.request.cookies[&#39;session&#39;]</b>: Cookie named session, where session can be replaced with your own parameter;</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>: HTTP header named user-agent, where user-agent can be replaced with your own parameter;</li><li><b>http.request.ja3</b>: JA3 fingerprint of the request;</li><li><b>http.request.ja4</b>: JA4 fingerprint of the request;</li><li><b>http.request.uri.query[&#39;test&#39;]</b>: URL query parameter named test, where test can be replaced with your own parameter.</li></p>
                     * @param _countBy <p>Match mode of the rate threshold request feature. Required when Enabled is on.<br><br>When there are multiple conditions, they will be combined for statistics and calculation. A maximum of 5 conditions is allowed. Valid values:<br><li><b>http.request.ip</b>: client IP;</li><li><b>http.request.xff_header_ip</b>: client IP (priority match XFF header);</li><li><b>http.request.uri.path</b>: access path of the request;</li><li><b>http.request.cookies[&#39;session&#39;]</b>: Cookie named session, where session can be replaced with your own parameter;</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>: HTTP header named user-agent, where user-agent can be replaced with your own parameter;</li><li><b>http.request.ja3</b>: JA3 fingerprint of the request;</li><li><b>http.request.ja4</b>: JA4 fingerprint of the request;</li><li><b>http.request.uri.query[&#39;test&#39;]</b>: URL query parameter named test, where test can be replaced with your own parameter.</li></p>
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
                     * 获取<p>Cumulative number of interceptions by precise rate limiting within the time range, with a value range of 1 to 100000.</p>
                     * @return MaxRequestThreshold <p>Cumulative number of interceptions by precise rate limiting within the time range, with a value range of 1 to 100000.</p>
                     * 
                     */
                    int64_t GetMaxRequestThreshold() const;

                    /**
                     * 设置<p>Cumulative number of interceptions by precise rate limiting within the time range, with a value range of 1 to 100000.</p>
                     * @param _maxRequestThreshold <p>Cumulative number of interceptions by precise rate limiting within the time range, with a value range of 1 to 100000.</p>
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
                     * 获取<p>Time window for statistics. Valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li></p>
                     * @return CountingPeriod <p>Time window for statistics. Valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li></p>
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置<p>Time window for statistics. Valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li></p>
                     * @param _countingPeriod <p>Time window for statistics. Valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li></p>
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
                     * 获取<p>Duration of the Action. Supported units: <li>s: seconds, value range: 1-120;</li><li>m: minutes, value range: 1-120;</li><li>h: hours, value range: 1-48;</li><li>d: days, value range: 1-30.</li><br>When Mode is Throttle, this parameter will be ignored and will not take effect.</p>
                     * @return ActionDuration <p>Duration of the Action. Supported units: <li>s: seconds, value range: 1-120;</li><li>m: minutes, value range: 1-120;</li><li>h: hours, value range: 1-48;</li><li>d: days, value range: 1-30.</li><br>When Mode is Throttle, this parameter will be ignored and will not take effect.</p>
                     * 
                     */
                    std::string GetActionDuration() const;

                    /**
                     * 设置<p>Duration of the Action. Supported units: <li>s: seconds, value range: 1-120;</li><li>m: minutes, value range: 1-120;</li><li>h: hours, value range: 1-48;</li><li>d: days, value range: 1-30.</li><br>When Mode is Throttle, this parameter will be ignored and will not take effect.</p>
                     * @param _actionDuration <p>Duration of the Action. Supported units: <li>s: seconds, value range: 1-120;</li><li>m: minutes, value range: 1-120;</li><li>h: hours, value range: 1-48;</li><li>d: days, value range: 1-30.</li><br>When Mode is Throttle, this parameter will be ignored and will not take effect.</p>
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
                     * 获取<p>Handling method for precise rate limiting. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports ReturnCustomPage and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @return Action <p>Handling method for precise rate limiting. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports ReturnCustomPage and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置<p>Handling method for precise rate limiting. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports ReturnCustomPage and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     * @param _action <p>Handling method for precise rate limiting. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports ReturnCustomPage and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
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
                     * 获取<p>Priority of precise rate limiting, ranging from 0 to 100, with a default value of 0.</p>
                     * @return Priority <p>Priority of precise rate limiting, ranging from 0 to 100, with a default value of 0.</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>Priority of precise rate limiting, ranging from 0 to 100, with a default value of 0.</p>
                     * @param _priority <p>Priority of precise rate limiting, ranging from 0 to 100, with a default value of 0.</p>
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
                     * 获取<p>Whether the precise rate limiting rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * @return Enabled <p>Whether the precise rate limiting rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>Whether the precise rate limiting rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     * @param _enabled <p>Whether the precise rate limiting rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
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
                     * <p>ID of the precise rate limiting rule.<br>Different rule configuration operations can be performed by rule ID:<br> <li> <b>Add</b> a new rule: leave ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the RateLimitingRules parameter will be deleted.</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Name of the precise rate limit.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>The specific content of precise rate limiting must comply with expression syntax. For detailed specifications, see <a href="https://www.tencentcloud.com/document/product/1552/125343?from_cn_redirect=1">product document</a>.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Bandwidth limit mode. Within the statistical time window CountingPeriod, for requests that meet the CountBy feature, the following bandwidth limit modes can be configured: <li>Block: Block the access source. When the count exceeds the MaxRequestThreshold, execute the Action on all subsequent requests that meet the feature within the ActionDuration;</li><li>Throttle: Only handle excess requests. When the count exceeds the MaxRequestThreshold, execute the Action only on requests that exceed the threshold, and stop when the window ends. At this point, the ActionDuration parameter will be ignored.</li><br>Default value: Block.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Match mode of the rate threshold request feature. Required when Enabled is on.<br><br>When there are multiple conditions, they will be combined for statistics and calculation. A maximum of 5 conditions is allowed. Valid values:<br><li><b>http.request.ip</b>: client IP;</li><li><b>http.request.xff_header_ip</b>: client IP (priority match XFF header);</li><li><b>http.request.uri.path</b>: access path of the request;</li><li><b>http.request.cookies[&#39;session&#39;]</b>: Cookie named session, where session can be replaced with your own parameter;</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>: HTTP header named user-agent, where user-agent can be replaced with your own parameter;</li><li><b>http.request.ja3</b>: JA3 fingerprint of the request;</li><li><b>http.request.ja4</b>: JA4 fingerprint of the request;</li><li><b>http.request.uri.query[&#39;test&#39;]</b>: URL query parameter named test, where test can be replaced with your own parameter.</li></p>
                     */
                    std::vector<std::string> m_countBy;
                    bool m_countByHasBeenSet;

                    /**
                     * <p>Cumulative number of interceptions by precise rate limiting within the time range, with a value range of 1 to 100000.</p>
                     */
                    int64_t m_maxRequestThreshold;
                    bool m_maxRequestThresholdHasBeenSet;

                    /**
                     * <p>Time window for statistics. Valid values: <li>1s: 1 second;</li><li>5s: 5 seconds;</li><li>10s: 10 seconds;</li><li>20s: 20 seconds;</li><li>30s: 30 seconds;</li><li>40s: 40 seconds;</li><li>50s: 50 seconds;</li><li>1m: 1 minute;</li><li>2m: 2 minutes;</li><li>5m: 5 minutes;</li><li>10m: 10 minutes;</li><li>1h: 1 hour.</li></p>
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * <p>Duration of the Action. Supported units: <li>s: seconds, value range: 1-120;</li><li>m: minutes, value range: 1-120;</li><li>h: hours, value range: 1-48;</li><li>d: days, value range: 1-30.</li><br>When Mode is Throttle, this parameter will be ignored and will not take effect.</p>
                     */
                    std::string m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                    /**
                     * <p>Handling method for precise rate limiting. SecurityAction.Name value range is as follows:</p><ul><li>Allow: allow, where AllowActionParameters supports MinDelayTime and MaxDelayTime configuration;</li><li>Deny: block, where DenyActionParameters supports ReturnCustomPage and Stall configuration;</li><li>Monitor: observe;</li><li>Challenge: challenge, where ChallengeActionParameters.ChallengeOption supports JSChallenge and ManagedChallenge;</li><li>Redirect: redirect to a URL.</li></ul>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>Priority of precise rate limiting, ranging from 0 to 100, with a default value of 0.</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>Whether the precise rate limiting rule is enabled. Valid values: <li>on: enabled;</li><li>off: disabled.</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_
