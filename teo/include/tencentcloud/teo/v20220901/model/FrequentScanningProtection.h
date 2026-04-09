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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FREQUENTSCANNINGPROTECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FREQUENTSCANNINGPROTECTION_H_

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
                * High frequency scan protection configuration option. when a visitor's frequent requests hit the managed rule configured as block, ban all requests from that visitor within a period of time.
                */
                class FrequentScanningProtection : public AbstractModel
                {
                public:
                    FrequentScanningProtection();
                    ~FrequentScanningProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the high-frequency scan protection rule is enabled. valid values: <li>on: enable. the high-frequency scan protection rule takes effect.</li><li>off: disable. the high-frequency scan protection rule does not take effect.</li>.	
                     * @return Enabled Whether the high-frequency scan protection rule is enabled. valid values: <li>on: enable. the high-frequency scan protection rule takes effect.</li><li>off: disable. the high-frequency scan protection rule does not take effect.</li>.	
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether the high-frequency scan protection rule is enabled. valid values: <li>on: enable. the high-frequency scan protection rule takes effect.</li><li>off: disable. the high-frequency scan protection rule does not take effect.</li>.	
                     * @param _enabled Whether the high-frequency scan protection rule is enabled. valid values: <li>on: enable. the high-frequency scan protection rule takes effect.</li><li>off: disable. the high-frequency scan protection rule does not take effect.</li>.	
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取The handling action for high-frequency scan protection. required when Enabled is on. valid values for SecurityAction Name: <li>Deny: block and respond with an interception page;</li> <li>Monitor: observe without processing requests, log security events in logs;</li> <li>JSChallenge: respond with a JavaScript challenge page.</li>.
                     * @return Action The handling action for high-frequency scan protection. required when Enabled is on. valid values for SecurityAction Name: <li>Deny: block and respond with an interception page;</li> <li>Monitor: observe without processing requests, log security events in logs;</li> <li>JSChallenge: respond with a JavaScript challenge page.</li>.
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置The handling action for high-frequency scan protection. required when Enabled is on. valid values for SecurityAction Name: <li>Deny: block and respond with an interception page;</li> <li>Monitor: observe without processing requests, log security events in logs;</li> <li>JSChallenge: respond with a JavaScript challenge page.</li>.
                     * @param _action The handling action for high-frequency scan protection. required when Enabled is on. valid values for SecurityAction Name: <li>Deny: block and respond with an interception page;</li> <li>Monitor: observe without processing requests, log security events in logs;</li> <li>JSChallenge: respond with a JavaScript challenge page.</li>.
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
                     * 获取The match mode for request statistics. required when Enabled is on. valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>.
                     * @return CountBy The match mode for request statistics. required when Enabled is on. valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>.
                     * 
                     */
                    std::string GetCountBy() const;

                    /**
                     * 设置The match mode for request statistics. required when Enabled is on. valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>.
                     * @param _countBy The match mode for request statistics. required when Enabled is on. valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>.
                     * 
                     */
                    void SetCountBy(const std::string& _countBy);

                    /**
                     * 判断参数 CountBy 是否已赋值
                     * @return CountBy 是否已赋值
                     * 
                     */
                    bool CountByHasBeenSet() const;

                    /**
                     * 获取This parameter specifies the threshold for high-frequency scan protection, which is the intercept count of managed rules set to interception within the time range set by CountingPeriod. value range: 1 to 4294967294, for example 100. when exceeding this statistical value, subsequent requests will trigger the handling Action set by Action. required when Enabled is on.
                     * @return BlockThreshold This parameter specifies the threshold for high-frequency scan protection, which is the intercept count of managed rules set to interception within the time range set by CountingPeriod. value range: 1 to 4294967294, for example 100. when exceeding this statistical value, subsequent requests will trigger the handling Action set by Action. required when Enabled is on.
                     * 
                     */
                    int64_t GetBlockThreshold() const;

                    /**
                     * 设置This parameter specifies the threshold for high-frequency scan protection, which is the intercept count of managed rules set to interception within the time range set by CountingPeriod. value range: 1 to 4294967294, for example 100. when exceeding this statistical value, subsequent requests will trigger the handling Action set by Action. required when Enabled is on.
                     * @param _blockThreshold This parameter specifies the threshold for high-frequency scan protection, which is the intercept count of managed rules set to interception within the time range set by CountingPeriod. value range: 1 to 4294967294, for example 100. when exceeding this statistical value, subsequent requests will trigger the handling Action set by Action. required when Enabled is on.
                     * 
                     */
                    void SetBlockThreshold(const int64_t& _blockThreshold);

                    /**
                     * 判断参数 BlockThreshold 是否已赋值
                     * @return BlockThreshold 是否已赋值
                     * 
                     */
                    bool BlockThresholdHasBeenSet() const;

                    /**
                     * 获取This parameter specifies the statistical time window for high-frequency scan protection, which is the time window for counting requests that hit managed rules configured as block. valid values: 5-1800. measurement unit: seconds (s) only, such as 5s. this field is required when Enabled is on.
                     * @return CountingPeriod This parameter specifies the statistical time window for high-frequency scan protection, which is the time window for counting requests that hit managed rules configured as block. valid values: 5-1800. measurement unit: seconds (s) only, such as 5s. this field is required when Enabled is on.
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置This parameter specifies the statistical time window for high-frequency scan protection, which is the time window for counting requests that hit managed rules configured as block. valid values: 5-1800. measurement unit: seconds (s) only, such as 5s. this field is required when Enabled is on.
                     * @param _countingPeriod This parameter specifies the statistical time window for high-frequency scan protection, which is the time window for counting requests that hit managed rules configured as block. valid values: 5-1800. measurement unit: seconds (s) only, such as 5s. this field is required when Enabled is on.
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
                     * 获取This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. value range: 60 to 86400. measurement unit: seconds (s) only, for example 60s. this field is required when Enabled is on.
                     * @return ActionDuration This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. value range: 60 to 86400. measurement unit: seconds (s) only, for example 60s. this field is required when Enabled is on.
                     * 
                     */
                    std::string GetActionDuration() const;

                    /**
                     * 设置This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. value range: 60 to 86400. measurement unit: seconds (s) only, for example 60s. this field is required when Enabled is on.
                     * @param _actionDuration This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. value range: 60 to 86400. measurement unit: seconds (s) only, for example 60s. this field is required when Enabled is on.
                     * 
                     */
                    void SetActionDuration(const std::string& _actionDuration);

                    /**
                     * 判断参数 ActionDuration 是否已赋值
                     * @return ActionDuration 是否已赋值
                     * 
                     */
                    bool ActionDurationHasBeenSet() const;

                private:

                    /**
                     * Whether the high-frequency scan protection rule is enabled. valid values: <li>on: enable. the high-frequency scan protection rule takes effect.</li><li>off: disable. the high-frequency scan protection rule does not take effect.</li>.	
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * The handling action for high-frequency scan protection. required when Enabled is on. valid values for SecurityAction Name: <li>Deny: block and respond with an interception page;</li> <li>Monitor: observe without processing requests, log security events in logs;</li> <li>JSChallenge: respond with a JavaScript challenge page.</li>.
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The match mode for request statistics. required when Enabled is on. valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>.
                     */
                    std::string m_countBy;
                    bool m_countByHasBeenSet;

                    /**
                     * This parameter specifies the threshold for high-frequency scan protection, which is the intercept count of managed rules set to interception within the time range set by CountingPeriod. value range: 1 to 4294967294, for example 100. when exceeding this statistical value, subsequent requests will trigger the handling Action set by Action. required when Enabled is on.
                     */
                    int64_t m_blockThreshold;
                    bool m_blockThresholdHasBeenSet;

                    /**
                     * This parameter specifies the statistical time window for high-frequency scan protection, which is the time window for counting requests that hit managed rules configured as block. valid values: 5-1800. measurement unit: seconds (s) only, such as 5s. this field is required when Enabled is on.
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. value range: 60 to 86400. measurement unit: seconds (s) only, for example 60s. this field is required when Enabled is on.
                     */
                    std::string m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FREQUENTSCANNINGPROTECTION_H_
