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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SlowlogInfo.h>
#include <tencentcloud/sqlserver/v20180328/model/SlowLog.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeSlowlogs response structure.
                */
                class DescribeSlowlogsResponse : public AbstractModel
                {
                public:
                    DescribeSlowlogsResponse();
                    ~DescribeSlowlogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of queries
                     * @return TotalCount Total number of queries
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Information list of slow query logs
                     * @return Slowlogs Information list of slow query logs
                     * @deprecated
                     */
                    std::vector<SlowlogInfo> GetSlowlogs() const;

                    /**
                     * 判断参数 Slowlogs 是否已赋值
                     * @return Slowlogs 是否已赋值
                     * @deprecated
                     */
                    bool SlowlogsHasBeenSet() const;

                    /**
                     * 获取
                     * @return SlowLogs 
                     * 
                     */
                    std::vector<SlowLog> GetSlowLogs() const;

                    /**
                     * 判断参数 SlowLogs 是否已赋值
                     * @return SlowLogs 是否已赋值
                     * 
                     */
                    bool SlowLogsHasBeenSet() const;

                private:

                    /**
                     * Total number of queries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information list of slow query logs
                     */
                    std::vector<SlowlogInfo> m_slowlogs;
                    bool m_slowlogsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SlowLog> m_slowLogs;
                    bool m_slowLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
