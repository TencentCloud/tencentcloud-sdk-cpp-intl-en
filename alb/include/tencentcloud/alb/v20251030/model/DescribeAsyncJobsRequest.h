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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeAsyncJobs request structure.
                */
                class DescribeAsyncJobsRequest : public AbstractModel
                {
                public:
                    DescribeAsyncJobsRequest();
                    ~DescribeAsyncJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries displayed each time during a batch query. Value range: 1–100. Default value: 20.
                     * @return MaxResults Number of entries displayed each time during a batch query. Value range: 1–100. Default value: 20.
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置Number of entries displayed each time during a batch query. Value range: 1–100. Default value: 20.
                     * @param _maxResults Number of entries displayed each time during a batch query. Value range: 1–100. Default value: 20.
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取Whether there is a token for the next query. Value: not required for the first query or when there is no next query. If there is a next query, the value is the NextToken returned from the last API call.
                     * @return NextToken Whether there is a token for the next query. Value: not required for the first query or when there is no next query. If there is a next query, the value is the NextToken returned from the last API call.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置Whether there is a token for the next query. Value: not required for the first query or when there is no next query. If there is a next query, the value is the NextToken returned from the last API call.
                     * @param _nextToken Whether there is a token for the next query. Value: not required for the first query or when there is no next query. If there is a next query, the value is the NextToken returned from the last API call.
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取List of RequestIds returned for async requests
                     * @return RequestIds List of RequestIds returned for async requests
                     * 
                     */
                    std::vector<std::string> GetRequestIds() const;

                    /**
                     * 设置List of RequestIds returned for async requests
                     * @param _requestIds List of RequestIds returned for async requests
                     * 
                     */
                    void SetRequestIds(const std::vector<std::string>& _requestIds);

                    /**
                     * 判断参数 RequestIds 是否已赋值
                     * @return RequestIds 是否已赋值
                     * 
                     */
                    bool RequestIdsHasBeenSet() const;

                private:

                    /**
                     * Number of entries displayed each time during a batch query. Value range: 1–100. Default value: 20.
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * Whether there is a token for the next query. Value: not required for the first query or when there is no next query. If there is a next query, the value is the NextToken returned from the last API call.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * List of RequestIds returned for async requests
                     */
                    std::vector<std::string> m_requestIds;
                    bool m_requestIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEASYNCJOBSREQUEST_H_
