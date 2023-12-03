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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN custom CC rules
                */
                class ScdnCCRules : public AbstractModel
                {
                public:
                    ScdnCCRules();
                    ~ScdnCCRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule types:
`all`: effective for all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: effective for web homepages and root directories.
                     * @return RuleType Rule types:
`all`: effective for all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: effective for web homepages and root directories.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: effective for all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: effective for web homepages and root directories.
                     * @param _ruleType Rule types:
`all`: effective for all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: effective for web homepages and root directories.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Rule value (blocking condition)
                     * @return RuleValue Rule value (blocking condition)
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置Rule value (blocking condition)
                     * @param _ruleValue Rule value (blocking condition)
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取IP access limit rule
                     * @return Qps IP access limit rule
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置IP access limit rule
                     * @param _qps IP access limit rule
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Detection granularity
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DetectionTime Detection granularity
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDetectionTime() const;

                    /**
                     * 设置Detection granularity
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _detectionTime Detection granularity
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetectionTime(const uint64_t& _detectionTime);

                    /**
                     * 判断参数 DetectionTime 是否已赋值
                     * @return DetectionTime 是否已赋值
                     * 
                     */
                    bool DetectionTimeHasBeenSet() const;

                    /**
                     * 获取Frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FrequencyLimit Frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFrequencyLimit() const;

                    /**
                     * 设置Frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _frequencyLimit Frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFrequencyLimit(const uint64_t& _frequencyLimit);

                    /**
                     * 判断参数 FrequencyLimit 是否已赋值
                     * @return FrequencyLimit 是否已赋值
                     * 
                     */
                    bool FrequencyLimitHasBeenSet() const;

                    /**
                     * 获取Whether to enable IP blocking. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PunishmentSwitch Whether to enable IP blocking. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPunishmentSwitch() const;

                    /**
                     * 设置Whether to enable IP blocking. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _punishmentSwitch Whether to enable IP blocking. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPunishmentSwitch(const std::string& _punishmentSwitch);

                    /**
                     * 判断参数 PunishmentSwitch 是否已赋值
                     * @return PunishmentSwitch 是否已赋值
                     * 
                     */
                    bool PunishmentSwitchHasBeenSet() const;

                    /**
                     * 获取Suspicious IP restriction duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PunishmentTime Suspicious IP restriction duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPunishmentTime() const;

                    /**
                     * 设置Suspicious IP restriction duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _punishmentTime Suspicious IP restriction duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPunishmentTime(const uint64_t& _punishmentTime);

                    /**
                     * 判断参数 PunishmentTime 是否已赋值
                     * @return PunishmentTime 是否已赋值
                     * 
                     */
                    bool PunishmentTimeHasBeenSet() const;

                    /**
                     * 获取Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Action Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _action Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The redirection target URL used when the `Action` is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RedirectUrl The redirection target URL used when the `Action` is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置The redirection target URL used when the `Action` is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _redirectUrl The redirection target URL used when the `Action` is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * Rule types:
`all`: effective for all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`index`: effective for web homepages and root directories.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Rule value (blocking condition)
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * IP access limit rule
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Detection granularity
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_detectionTime;
                    bool m_detectionTimeHasBeenSet;

                    /**
                     * Frequency threshold
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_frequencyLimit;
                    bool m_frequencyLimitHasBeenSet;

                    /**
                     * Whether to enable IP blocking. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_punishmentSwitch;
                    bool m_punishmentSwitchHasBeenSet;

                    /**
                     * Suspicious IP restriction duration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_punishmentTime;
                    bool m_punishmentTimeHasBeenSet;

                    /**
                     * Action. Valid values: `intercept` and `redirect`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * The redirection target URL used when the `Action` is `redirect`
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCCRULES_H_
