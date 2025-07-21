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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_

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
                * Minimum minimum body transfer rate threshold configuration. ```.
                */
                class MinimalRequestBodyTransferRate : public AbstractModel
                {
                public:
                    MinimalRequestBodyTransferRate();
                    ~MinimalRequestBodyTransferRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum body transfer rate threshold, the measurement unit is only supported in bps.
                     * @return MinimalAvgTransferRateThreshold Minimum body transfer rate threshold, the measurement unit is only supported in bps.
                     * 
                     */
                    std::string GetMinimalAvgTransferRateThreshold() const;

                    /**
                     * 设置Minimum body transfer rate threshold, the measurement unit is only supported in bps.
                     * @param _minimalAvgTransferRateThreshold Minimum body transfer rate threshold, the measurement unit is only supported in bps.
                     * 
                     */
                    void SetMinimalAvgTransferRateThreshold(const std::string& _minimalAvgTransferRateThreshold);

                    /**
                     * 判断参数 MinimalAvgTransferRateThreshold 是否已赋值
                     * @return MinimalAvgTransferRateThreshold 是否已赋值
                     * 
                     */
                    bool MinimalAvgTransferRateThresholdHasBeenSet() const;

                    /**
                     * 获取Minimum body transfer rate statistical time range, valid values: <li>10s: 10 seconds;</li> <li>30s: 30 seconds;</li> <li>60s: 60 seconds;</li> <li>120s: 120 seconds.</li>.
                     * @return CountingPeriod Minimum body transfer rate statistical time range, valid values: <li>10s: 10 seconds;</li> <li>30s: 30 seconds;</li> <li>60s: 60 seconds;</li> <li>120s: 120 seconds.</li>.
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置Minimum body transfer rate statistical time range, valid values: <li>10s: 10 seconds;</li> <li>30s: 30 seconds;</li> <li>60s: 60 seconds;</li> <li>120s: 120 seconds.</li>.
                     * @param _countingPeriod Minimum body transfer rate statistical time range, valid values: <li>10s: 10 seconds;</li> <li>30s: 30 seconds;</li> <li>60s: 60 seconds;</li> <li>120s: 120 seconds.</li>.
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
                     * 获取Specifies whether the minimum body transfer rate threshold is enabled. valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * @return Enabled Specifies whether the minimum body transfer rate threshold is enabled. valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Specifies whether the minimum body transfer rate threshold is enabled. valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     * @param _enabled Specifies whether the minimum body transfer rate threshold is enabled. valid values: <li>on: enable;</li> <li>off: disable.</li>.
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
                     * Minimum body transfer rate threshold, the measurement unit is only supported in bps.
                     */
                    std::string m_minimalAvgTransferRateThreshold;
                    bool m_minimalAvgTransferRateThresholdHasBeenSet;

                    /**
                     * Minimum body transfer rate statistical time range, valid values: <li>10s: 10 seconds;</li> <li>30s: 30 seconds;</li> <li>60s: 60 seconds;</li> <li>120s: 120 seconds.</li>.
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * Specifies whether the minimum body transfer rate threshold is enabled. valid values: <li>on: enable;</li> <li>off: disable.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MINIMALREQUESTBODYTRANSFERRATE_H_
