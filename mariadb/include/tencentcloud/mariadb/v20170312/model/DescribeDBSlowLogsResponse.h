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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/SlowLogData.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBSlowLogs response structure.
                */
                class DescribeDBSlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeDBSlowLogsResponse();
                    ~DescribeDBSlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Slow query log data
                     * @return Data Slow query log data
                     * 
                     */
                    std::vector<SlowLogData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total statement lock time
                     * @return LockTimeSum Total statement lock time
                     * 
                     */
                    double GetLockTimeSum() const;

                    /**
                     * 判断参数 LockTimeSum 是否已赋值
                     * @return LockTimeSum 是否已赋值
                     * 
                     */
                    bool LockTimeSumHasBeenSet() const;

                    /**
                     * 获取Total number of statement queries
                     * @return QueryCount Total number of statement queries
                     * 
                     */
                    int64_t GetQueryCount() const;

                    /**
                     * 判断参数 QueryCount 是否已赋值
                     * @return QueryCount 是否已赋值
                     * 
                     */
                    bool QueryCountHasBeenSet() const;

                    /**
                     * 获取Total number of results
                     * @return Total Total number of results
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Total statement query time
                     * @return QueryTimeSum Total statement query time
                     * 
                     */
                    double GetQueryTimeSum() const;

                    /**
                     * 判断参数 QueryTimeSum 是否已赋值
                     * @return QueryTimeSum 是否已赋值
                     * 
                     */
                    bool QueryTimeSumHasBeenSet() const;

                private:

                    /**
                     * Slow query log data
                     */
                    std::vector<SlowLogData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total statement lock time
                     */
                    double m_lockTimeSum;
                    bool m_lockTimeSumHasBeenSet;

                    /**
                     * Total number of statement queries
                     */
                    int64_t m_queryCount;
                    bool m_queryCountHasBeenSet;

                    /**
                     * Total number of results
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Total statement query time
                     */
                    double m_queryTimeSum;
                    bool m_queryTimeSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_
