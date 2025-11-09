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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * RenewClusters request structure.
                */
                class RenewClustersRequest : public AbstractModel
                {
                public:
                    RenewClustersRequest();
                    ~RenewClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Renewal period.
                     * @return TimeSpan Renewal period.
                     * 
                     */
                    double GetTimeSpan() const;

                    /**
                     * 设置Renewal period.
                     * @param _timeSpan Renewal period.
                     * 
                     */
                    void SetTimeSpan(const double& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit, such as y, m, d, h, i, and s.
                     * @return TimeUnit Time unit, such as y, m, d, h, i, and s.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit, such as y, m, d, h, i, and s.
                     * @param _timeUnit Time unit, such as y, m, d, h, i, and s.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取"Transaction mode. 	0 - place an order and pay; 1 - place an order."
                     * @return DealMode "Transaction mode. 	0 - place an order and pay; 1 - place an order."
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置"Transaction mode. 	0 - place an order and pay; 1 - place an order."
                     * @param _dealMode "Transaction mode. 	0 - place an order and pay; 1 - place an order."
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Renewal period.
                     */
                    double m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit, such as y, m, d, h, i, and s.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * "Transaction mode. 	0 - place an order and pay; 1 - place an order."
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWCLUSTERSREQUEST_H_
