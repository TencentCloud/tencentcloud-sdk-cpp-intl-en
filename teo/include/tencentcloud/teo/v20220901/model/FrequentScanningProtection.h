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
                * High frequency scan protection configuration options. When a visitor's requests frequently hit managed rules configured as block, all requests from the visitor are blocked within a period of time.
                */
                class FrequentScanningProtection : public AbstractModel
                {
                public:
                    FrequentScanningProtection();
                    ~FrequentScanningProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether high-frequency scan protection is enabled. Valid values: <li>on: enabled, the high-frequency scan protection rule takes effect;</li><li>off: disabled, the high-frequency scan protection rule does not take effect.</li>	
                     * @return Enabled Whether high-frequency scan protection is enabled. Valid values: <li>on: enabled, the high-frequency scan protection rule takes effect;</li><li>off: disabled, the high-frequency scan protection rule does not take effect.</li>	
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether high-frequency scan protection is enabled. Valid values: <li>on: enabled, the high-frequency scan protection rule takes effect;</li><li>off: disabled, the high-frequency scan protection rule does not take effect.</li>	
                     * @param _enabled Whether high-frequency scan protection is enabled. Valid values: <li>on: enabled, the high-frequency scan protection rule takes effect;</li><li>off: disabled, the high-frequency scan protection rule does not take effect.</li>	
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
                     * 获取Rule ID of high-frequency scan protection, returned only as an output parameter.
                     * @return Id Rule ID of high-frequency scan protection, returned only as an output parameter.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Rule ID of high-frequency scan protection, returned only as an output parameter.
                     * @param _id Rule ID of high-frequency scan protection, returned only as an output parameter.
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
                     * 获取Handling action for high frequency scan protection. When Enabled is on, this field is required. The Name parameter of SecurityAction supports: <li>Deny: block and respond with an Interception page;</li><li>Monitor: observe, do not process request records, and log security events;</li><li>JSChallenge: javascript challenge and respond with a JavaScript challenge page.</li>
                     * @return Action Handling action for high frequency scan protection. When Enabled is on, this field is required. The Name parameter of SecurityAction supports: <li>Deny: block and respond with an Interception page;</li><li>Monitor: observe, do not process request records, and log security events;</li><li>JSChallenge: javascript challenge and respond with a JavaScript challenge page.</li>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置Handling action for high frequency scan protection. When Enabled is on, this field is required. The Name parameter of SecurityAction supports: <li>Deny: block and respond with an Interception page;</li><li>Monitor: observe, do not process request records, and log security events;</li><li>JSChallenge: javascript challenge and respond with a JavaScript challenge page.</li>
                     * @param _action Handling action for high frequency scan protection. When Enabled is on, this field is required. The Name parameter of SecurityAction supports: <li>Deny: block and respond with an Interception page;</li><li>Monitor: observe, do not process request records, and log security events;</li><li>JSChallenge: javascript challenge and respond with a JavaScript challenge page.</li>
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
                     * 获取Match mode for request statistics. This field is required when Enabled is on. Valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>
                     * @return CountBy Match mode for request statistics. This field is required when Enabled is on. Valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>
                     * 
                     */
                    std::string GetCountBy() const;

                    /**
                     * 设置Match mode for request statistics. This field is required when Enabled is on. Valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>
                     * @param _countBy Match mode for request statistics. This field is required when Enabled is on. Valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>
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
                     * 获取This parameter specifies the threshold for high-frequency scan protection, which is the total interception count when managed rules configured for interception are hit within the time range set by CountingPeriod. The value ranges from 1 to 4294967294, for example, 100. When this statistical value is exceeded, subsequent requests trigger the handling action set by Action. This field is required when Enabled is on.
                     * @return BlockThreshold This parameter specifies the threshold for high-frequency scan protection, which is the total interception count when managed rules configured for interception are hit within the time range set by CountingPeriod. The value ranges from 1 to 4294967294, for example, 100. When this statistical value is exceeded, subsequent requests trigger the handling action set by Action. This field is required when Enabled is on.
                     * 
                     */
                    int64_t GetBlockThreshold() const;

                    /**
                     * 设置This parameter specifies the threshold for high-frequency scan protection, which is the total interception count when managed rules configured for interception are hit within the time range set by CountingPeriod. The value ranges from 1 to 4294967294, for example, 100. When this statistical value is exceeded, subsequent requests trigger the handling action set by Action. This field is required when Enabled is on.
                     * @param _blockThreshold This parameter specifies the threshold for high-frequency scan protection, which is the total interception count when managed rules configured for interception are hit within the time range set by CountingPeriod. The value ranges from 1 to 4294967294, for example, 100. When this statistical value is exceeded, subsequent requests trigger the handling action set by Action. This field is required when Enabled is on.
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
                     * 获取This parameter specifies the time window for high-frequency scan protection statistics, that is, the statistical time window for requests that hit managed rules configured for interception. Value range: 5-1800. The unit only supports seconds (s), for example, 5s. Required when Enabled is on.
                     * @return CountingPeriod This parameter specifies the time window for high-frequency scan protection statistics, that is, the statistical time window for requests that hit managed rules configured for interception. Value range: 5-1800. The unit only supports seconds (s), for example, 5s. Required when Enabled is on.
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置This parameter specifies the time window for high-frequency scan protection statistics, that is, the statistical time window for requests that hit managed rules configured for interception. Value range: 5-1800. The unit only supports seconds (s), for example, 5s. Required when Enabled is on.
                     * @param _countingPeriod This parameter specifies the time window for high-frequency scan protection statistics, that is, the statistical time window for requests that hit managed rules configured for interception. Value range: 5-1800. The unit only supports seconds (s), for example, 5s. Required when Enabled is on.
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
                     * 获取This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. The value ranges from 60 to 86400. The unit only supports seconds (s), for example, 60s. This field is required when Enabled is on.
                     * @return ActionDuration This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. The value ranges from 60 to 86400. The unit only supports seconds (s), for example, 60s. This field is required when Enabled is on.
                     * 
                     */
                    std::string GetActionDuration() const;

                    /**
                     * 设置This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. The value ranges from 60 to 86400. The unit only supports seconds (s), for example, 60s. This field is required when Enabled is on.
                     * @param _actionDuration This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. The value ranges from 60 to 86400. The unit only supports seconds (s), for example, 60s. This field is required when Enabled is on.
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
                     * Whether high-frequency scan protection is enabled. Valid values: <li>on: enabled, the high-frequency scan protection rule takes effect;</li><li>off: disabled, the high-frequency scan protection rule does not take effect.</li>	
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Rule ID of high-frequency scan protection, returned only as an output parameter.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Handling action for high frequency scan protection. When Enabled is on, this field is required. The Name parameter of SecurityAction supports: <li>Deny: block and respond with an Interception page;</li><li>Monitor: observe, do not process request records, and log security events;</li><li>JSChallenge: javascript challenge and respond with a JavaScript challenge page.</li>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Match mode for request statistics. This field is required when Enabled is on. Valid values: <li>http.request.xff_header_ip: client ip (priority match xff header);</li><li>http.request.ip: client ip.</li>
                     */
                    std::string m_countBy;
                    bool m_countByHasBeenSet;

                    /**
                     * This parameter specifies the threshold for high-frequency scan protection, which is the total interception count when managed rules configured for interception are hit within the time range set by CountingPeriod. The value ranges from 1 to 4294967294, for example, 100. When this statistical value is exceeded, subsequent requests trigger the handling action set by Action. This field is required when Enabled is on.
                     */
                    int64_t m_blockThreshold;
                    bool m_blockThresholdHasBeenSet;

                    /**
                     * This parameter specifies the time window for high-frequency scan protection statistics, that is, the statistical time window for requests that hit managed rules configured for interception. Value range: 5-1800. The unit only supports seconds (s), for example, 5s. Required when Enabled is on.
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * This parameter specifies the duration of the handling Action set by the high frequency scan protection Action parameter. The value ranges from 60 to 86400. The unit only supports seconds (s), for example, 60s. This field is required when Enabled is on.
                     */
                    std::string m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FREQUENTSCANNINGPROTECTION_H_
