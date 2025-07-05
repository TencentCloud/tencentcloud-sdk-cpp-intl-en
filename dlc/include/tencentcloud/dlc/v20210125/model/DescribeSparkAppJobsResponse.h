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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkJobInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppJobs response structure.
                */
                class DescribeSparkAppJobsResponse : public AbstractModel
                {
                public:
                    DescribeSparkAppJobsResponse();
                    ~DescribeSparkAppJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Detailed list of Spark jobs
                     * @return SparkAppJobs Detailed list of Spark jobs
                     * 
                     */
                    std::vector<SparkJobInfo> GetSparkAppJobs() const;

                    /**
                     * 判断参数 SparkAppJobs 是否已赋值
                     * @return SparkAppJobs 是否已赋值
                     * 
                     */
                    bool SparkAppJobsHasBeenSet() const;

                    /**
                     * 获取Total number of Spark jobs
                     * @return TotalCount Total number of Spark jobs
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Detailed list of Spark jobs
                     */
                    std::vector<SparkJobInfo> m_sparkAppJobs;
                    bool m_sparkAppJobsHasBeenSet;

                    /**
                     * Total number of Spark jobs
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSRESPONSE_H_
