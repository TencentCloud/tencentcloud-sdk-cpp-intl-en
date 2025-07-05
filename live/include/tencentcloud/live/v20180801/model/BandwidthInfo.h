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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BANDWIDTHINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BANDWIDTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Bandwidth information
                */
                class BandwidthInfo : public AbstractModel
                {
                public:
                    BandwidthInfo();
                    ~BandwidthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Format of return value:
yyyy-mm-dd HH:MM:SS
The time accuracy matches with the query granularity.
                     * @return Time Format of return value:
yyyy-mm-dd HH:MM:SS
The time accuracy matches with the query granularity.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Format of return value:
yyyy-mm-dd HH:MM:SS
The time accuracy matches with the query granularity.
                     * @param _time Format of return value:
yyyy-mm-dd HH:MM:SS
The time accuracy matches with the query granularity.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Bandwidth.
                     * @return Bandwidth Bandwidth.
                     * 
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置Bandwidth.
                     * @param _bandwidth Bandwidth.
                     * 
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * Format of return value:
yyyy-mm-dd HH:MM:SS
The time accuracy matches with the query granularity.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Bandwidth.
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BANDWIDTHINFO_H_
