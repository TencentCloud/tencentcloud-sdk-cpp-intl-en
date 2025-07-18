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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEGCJOBSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEGCJOBSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/GCJobInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeGCJobs response structure.
                */
                class DescribeGCJobsResponse : public AbstractModel
                {
                public:
                    DescribeGCJobsResponse();
                    ~DescribeGCJobsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of GC jobs
                     * @return Jobs List of GC jobs
                     * 
                     */
                    std::vector<GCJobInfo> GetJobs() const;

                    /**
                     * 判断参数 Jobs 是否已赋值
                     * @return Jobs 是否已赋值
                     * 
                     */
                    bool JobsHasBeenSet() const;

                private:

                    /**
                     * List of GC jobs
                     */
                    std::vector<GCJobInfo> m_jobs;
                    bool m_jobsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEGCJOBSRESPONSE_H_
