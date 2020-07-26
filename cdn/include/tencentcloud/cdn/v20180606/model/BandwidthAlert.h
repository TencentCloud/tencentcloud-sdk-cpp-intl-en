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
                     * 获取Bandwidth cap configuration switch
on: enabled
off: disabled
                     * @return Switch Bandwidth cap configuration switch
on: enabled
off: disabled
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Bandwidth cap configuration switch
on: enabled
off: disabled
                     * @param Switch Bandwidth cap configuration switch
on: enabled
off: disabled
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Bandwidth cap threshold (in bps)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BpsThreshold Bandwidth cap threshold (in bps)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBpsThreshold() const;

                    /**
                     * 设置Bandwidth cap threshold (in bps)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BpsThreshold Bandwidth cap threshold (in bps)
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取The last time the bandwidth cap threshold was triggered
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastTriggerTime The last time the bandwidth cap threshold was triggered
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置The last time the bandwidth cap threshold was triggered
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param LastTriggerTime The last time the bandwidth cap threshold was triggered
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                private:

                    /**
                     * Bandwidth cap configuration switch
on: enabled
off: disabled
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Bandwidth cap threshold (in bps)
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * The last time the bandwidth cap threshold was triggered
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
