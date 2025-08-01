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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_

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
                * DescribeSparkAppJob response structure.
                */
                class DescribeSparkAppJobResponse : public AbstractModel
                {
                public:
                    DescribeSparkAppJobResponse();
                    ~DescribeSparkAppJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Spark job details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Job Spark job details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SparkJobInfo GetJob() const;

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取Whether the queried Spark job exists
                     * @return IsExists Whether the queried Spark job exists
                     * 
                     */
                    bool GetIsExists() const;

                    /**
                     * 判断参数 IsExists 是否已赋值
                     * @return IsExists 是否已赋值
                     * 
                     */
                    bool IsExistsHasBeenSet() const;

                private:

                    /**
                     * Spark job details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    SparkJobInfo m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * Whether the queried Spark job exists
                     */
                    bool m_isExists;
                    bool m_isExistsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_
