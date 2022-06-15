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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_

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
                * Bandwidth cap configuration. This is disabled by default.
                */
                class BandwidthAlert : public AbstractModel
                {
                public:
                    BandwidthAlert();
                    ~BandwidthAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to enable the bandwidth cap
`on`: enable
`off`: disable
                     * @return Switch Specifies whether to enable the bandwidth cap
`on`: enable
`off`: disable
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Specifies whether to enable the bandwidth cap
`on`: enable
`off`: disable
                     * @param Switch Specifies whether to enable the bandwidth cap
`on`: enable
`off`: disable
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The upper limit of bandwidth usage (in bps) or traffic usage (in bytes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BpsThreshold The upper limit of bandwidth usage (in bps) or traffic usage (in bytes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetBpsThreshold() const;

                    /**
                     * 设置The upper limit of bandwidth usage (in bps) or traffic usage (in bytes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BpsThreshold The upper limit of bandwidth usage (in bps) or traffic usage (in bytes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBpsThreshold(const int64_t& _bpsThreshold);

                    /**
                     * 判断参数 BpsThreshold 是否已赋值
                     * @return BpsThreshold 是否已赋值
                     */
                    bool BpsThresholdHasBeenSet() const;

                    /**
                     * 获取Action taken when threshold is reached
RESOLVE_DNS_TO_ORIGIN: requests will be forwarded to the origin server. This is only supported for domain names of external origin.
RETURN_404: a 404 error will be returned for all requests.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CounterMeasure Action taken when threshold is reached
RESOLVE_DNS_TO_ORIGIN: requests will be forwarded to the origin server. This is only supported for domain names of external origin.
RETURN_404: a 404 error will be returned for all requests.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCounterMeasure() const;

                    /**
                     * 设置Action taken when threshold is reached
RESOLVE_DNS_TO_ORIGIN: requests will be forwarded to the origin server. This is only supported for domain names of external origin.
RETURN_404: a 404 error will be returned for all requests.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CounterMeasure Action taken when threshold is reached
RESOLVE_DNS_TO_ORIGIN: requests will be forwarded to the origin server. This is only supported for domain names of external origin.
RETURN_404: a 404 error will be returned for all requests.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCounterMeasure(const std::string& _counterMeasure);

                    /**
                     * 判断参数 CounterMeasure 是否已赋值
                     * @return CounterMeasure 是否已赋值
                     */
                    bool CounterMeasureHasBeenSet() const;

                    /**
                     * 获取The last time when the usage upper limit in the Chinese mainland was reached
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LastTriggerTime The last time when the usage upper limit in the Chinese mainland was reached
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置The last time when the usage upper limit in the Chinese mainland was reached
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LastTriggerTime The last time when the usage upper limit in the Chinese mainland was reached
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                    /**
                     * 获取Indicates whether to trigger alerts when the upper limit is reached
`on`: enable
`off`: disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AlertSwitch Indicates whether to trigger alerts when the upper limit is reached
`on`: enable
`off`: disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAlertSwitch() const;

                    /**
                     * 设置Indicates whether to trigger alerts when the upper limit is reached
`on`: enable
`off`: disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AlertSwitch Indicates whether to trigger alerts when the upper limit is reached
`on`: enable
`off`: disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAlertSwitch(const std::string& _alertSwitch);

                    /**
                     * 判断参数 AlertSwitch 是否已赋值
                     * @return AlertSwitch 是否已赋值
                     */
                    bool AlertSwitchHasBeenSet() const;

                    /**
                     * 获取Triggers alarms when the ratio of bandwidth or traffic usage to the usage upper limit reaches the specified value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AlertPercentage Triggers alarms when the ratio of bandwidth or traffic usage to the usage upper limit reaches the specified value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetAlertPercentage() const;

                    /**
                     * 设置Triggers alarms when the ratio of bandwidth or traffic usage to the usage upper limit reaches the specified value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AlertPercentage Triggers alarms when the ratio of bandwidth or traffic usage to the usage upper limit reaches the specified value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAlertPercentage(const int64_t& _alertPercentage);

                    /**
                     * 判断参数 AlertPercentage 是否已赋值
                     * @return AlertPercentage 是否已赋值
                     */
                    bool AlertPercentageHasBeenSet() const;

                    /**
                     * 获取The last time when the usage outside the Chinese mainland reached the upper limit
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LastTriggerTimeOverseas The last time when the usage outside the Chinese mainland reached the upper limit
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTriggerTimeOverseas() const;

                    /**
                     * 设置The last time when the usage outside the Chinese mainland reached the upper limit
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LastTriggerTimeOverseas The last time when the usage outside the Chinese mainland reached the upper limit
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastTriggerTimeOverseas(const std::string& _lastTriggerTimeOverseas);

                    /**
                     * 判断参数 LastTriggerTimeOverseas 是否已赋值
                     * @return LastTriggerTimeOverseas 是否已赋值
                     */
                    bool LastTriggerTimeOverseasHasBeenSet() const;

                    /**
                     * 获取Dimension of the usage limit
`bandwidth`: bandwidth
`flux`: traffic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Metric Dimension of the usage limit
`bandwidth`: bandwidth
`flux`: traffic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Dimension of the usage limit
`bandwidth`: bandwidth
`flux`: traffic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Metric Dimension of the usage limit
`bandwidth`: bandwidth
`flux`: traffic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to enable the bandwidth cap
`on`: enable
`off`: disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The upper limit of bandwidth usage (in bps) or traffic usage (in bytes).
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_bpsThreshold;
                    bool m_bpsThresholdHasBeenSet;

                    /**
                     * Action taken when threshold is reached
RESOLVE_DNS_TO_ORIGIN: requests will be forwarded to the origin server. This is only supported for domain names of external origin.
RETURN_404: a 404 error will be returned for all requests.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_counterMeasure;
                    bool m_counterMeasureHasBeenSet;

                    /**
                     * The last time when the usage upper limit in the Chinese mainland was reached
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                    /**
                     * Indicates whether to trigger alerts when the upper limit is reached
`on`: enable
`off`: disable
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_alertSwitch;
                    bool m_alertSwitchHasBeenSet;

                    /**
                     * Triggers alarms when the ratio of bandwidth or traffic usage to the usage upper limit reaches the specified value
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_alertPercentage;
                    bool m_alertPercentageHasBeenSet;

                    /**
                     * The last time when the usage outside the Chinese mainland reached the upper limit
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTriggerTimeOverseas;
                    bool m_lastTriggerTimeOverseasHasBeenSet;

                    /**
                     * Dimension of the usage limit
`bandwidth`: bandwidth
`flux`: traffic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_