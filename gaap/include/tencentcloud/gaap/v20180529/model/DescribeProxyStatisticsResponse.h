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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/MetricStatisticsInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyStatistics response structure.
                */
                class DescribeProxyStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeProxyStatisticsResponse();
                    ~DescribeProxyStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection statistics
                     * @return StatisticsData Connection statistics
                     * 
                     */
                    std::vector<MetricStatisticsInfo> GetStatisticsData() const;

                    /**
                     * 判断参数 StatisticsData 是否已赋值
                     * @return StatisticsData 是否已赋值
                     * 
                     */
                    bool StatisticsDataHasBeenSet() const;

                private:

                    /**
                     * Connection statistics
                     */
                    std::vector<MetricStatisticsInfo> m_statisticsData;
                    bool m_statisticsDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYSTATISTICSRESPONSE_H_
