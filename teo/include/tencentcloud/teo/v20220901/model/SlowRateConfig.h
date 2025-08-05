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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SLOWRATECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SLOWRATECONFIG_H_

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
                * The configuration to detect slow attacks
                */
                class SlowRateConfig : public AbstractModel
                {
                public:
                    SlowRateConfig();
                    ~SlowRateConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取The statistics interval in seconds. after the first packet transfer, the data transmission axis is split by this parameter for separate computing of slow attacks on each shard.
                     * @return Interval The statistics interval in seconds. after the first packet transfer, the data transmission axis is split by this parameter for separate computing of slow attacks on each shard.
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置The statistics interval in seconds. after the first packet transfer, the data transmission axis is split by this parameter for separate computing of slow attacks on each shard.
                     * @param _interval The statistics interval in seconds. after the first packet transfer, the data transmission axis is split by this parameter for separate computing of slow attacks on each shard.
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Specifies the rate threshold applied during statistics in bps. if the transmission rate in this shard does not reach the parameter value, it is identified as a slow attack and the slow attack handling method is applied.
                     * @return Threshold Specifies the rate threshold applied during statistics in bps. if the transmission rate in this shard does not reach the parameter value, it is identified as a slow attack and the slow attack handling method is applied.
                     * 
                     */
                    uint64_t GetThreshold() const;

                    /**
                     * 设置Specifies the rate threshold applied during statistics in bps. if the transmission rate in this shard does not reach the parameter value, it is identified as a slow attack and the slow attack handling method is applied.
                     * @param _threshold Specifies the rate threshold applied during statistics in bps. if the transmission rate in this shard does not reach the parameter value, it is identified as a slow attack and the slow attack handling method is applied.
                     * 
                     */
                    void SetThreshold(const uint64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Switch. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The statistics interval in seconds. after the first packet transfer, the data transmission axis is split by this parameter for separate computing of slow attacks on each shard.
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Specifies the rate threshold applied during statistics in bps. if the transmission rate in this shard does not reach the parameter value, it is identified as a slow attack and the slow attack handling method is applied.
                     */
                    uint64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SLOWRATECONFIG_H_
