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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/LogInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeMongodbLogs response structure.
                */
                class DescribeMongodbLogsResponse : public AbstractModel
                {
                public:
                    DescribeMongodbLogsResponse();
                    ~DescribeMongodbLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of logs.
                     * @return TotalCount Total number of logs.
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
                     * 获取List of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogList List of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LogInfo> GetLogList() const;

                    /**
                     * 判断参数 LogList 是否已赋值
                     * @return LogList 是否已赋值
                     * 
                     */
                    bool LogListHasBeenSet() const;

                private:

                    /**
                     * Total number of logs.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LogInfo> m_logList;
                    bool m_logListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEMONGODBLOGSRESPONSE_H_
