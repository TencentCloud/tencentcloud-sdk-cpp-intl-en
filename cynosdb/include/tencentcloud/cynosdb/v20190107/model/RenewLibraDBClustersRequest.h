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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWLIBRADBCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWLIBRADBCLUSTERSREQUEST_H_

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
                * RenewLibraDBClusters request structure.
                */
                class RenewLibraDBClustersRequest : public AbstractModel
                {
                public:
                    RenewLibraDBClustersRequest();
                    ~RenewLibraDBClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Time interval
                     * @return TimeSpan Time interval
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Time interval
                     * @param _timeSpan Time interval
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit
                     * @return TimeUnit Time unit
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit
                     * @param _timeUnit Time unit
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
                     * 获取Analysis Cluster ID
                     * @return ClusterId Analysis Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Analysis Cluster ID
                     * @param _clusterId Analysis Cluster ID
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
                     * 获取Order mode
                     * @return DealMode Order mode
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置Order mode
                     * @param _dealMode Order mode
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
                     * Time interval
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Analysis Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Order mode
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RENEWLIBRADBCLUSTERSREQUEST_H_
