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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_NQAINFO_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_NQAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * NQA configuration information
                */
                class NQAInfo : public AbstractModel
                {
                public:
                    NQAInfo();
                    ~NQAInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of health checks
                     * @return ProbeFailedTimes Number of health checks
                     * 
                     */
                    int64_t GetProbeFailedTimes() const;

                    /**
                     * 设置Number of health checks
                     * @param _probeFailedTimes Number of health checks
                     * 
                     */
                    void SetProbeFailedTimes(const int64_t& _probeFailedTimes);

                    /**
                     * 判断参数 ProbeFailedTimes 是否已赋值
                     * @return ProbeFailedTimes 是否已赋值
                     * 
                     */
                    bool ProbeFailedTimesHasBeenSet() const;

                    /**
                     * 获取Health check interval
                     * @return Interval Health check interval
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Health check interval
                     * @param _interval Health check interval
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取IP address for the health check
                     * @return DestinationIp IP address for the health check
                     * 
                     */
                    std::string GetDestinationIp() const;

                    /**
                     * 设置IP address for the health check
                     * @param _destinationIp IP address for the health check
                     * 
                     */
                    void SetDestinationIp(const std::string& _destinationIp);

                    /**
                     * 判断参数 DestinationIp 是否已赋值
                     * @return DestinationIp 是否已赋值
                     * 
                     */
                    bool DestinationIpHasBeenSet() const;

                private:

                    /**
                     * Number of health checks
                     */
                    int64_t m_probeFailedTimes;
                    bool m_probeFailedTimesHasBeenSet;

                    /**
                     * Health check interval
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * IP address for the health check
                     */
                    std::string m_destinationIp;
                    bool m_destinationIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_NQAINFO_H_
