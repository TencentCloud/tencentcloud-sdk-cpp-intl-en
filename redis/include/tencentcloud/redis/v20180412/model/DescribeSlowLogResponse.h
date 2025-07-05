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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceSlowlogDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSlowLog response structure.
                */
                class DescribeSlowLogResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogResponse();
                    ~DescribeSlowLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of slow queries
                     * @return TotalCount Total number of slow queries
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
                     * 获取Slow query log details. This parameter has been deprecated and will be replaced by InstanceSlowLogDetail because it is not properly named.
                     * @return InstanceSlowlogDetail Slow query log details. This parameter has been deprecated and will be replaced by InstanceSlowLogDetail because it is not properly named.
                     * @deprecated
                     */
                    std::vector<InstanceSlowlogDetail> GetInstanceSlowlogDetail() const;

                    /**
                     * 判断参数 InstanceSlowlogDetail 是否已赋值
                     * @return InstanceSlowlogDetail 是否已赋值
                     * @deprecated
                     */
                    bool InstanceSlowlogDetailHasBeenSet() const;

                    /**
                     * 获取Details of slow queries.
                     * @return InstanceSlowLogDetail Details of slow queries.
                     * 
                     */
                    std::vector<InstanceSlowlogDetail> GetInstanceSlowLogDetail() const;

                    /**
                     * 判断参数 InstanceSlowLogDetail 是否已赋值
                     * @return InstanceSlowLogDetail 是否已赋值
                     * 
                     */
                    bool InstanceSlowLogDetailHasBeenSet() const;

                private:

                    /**
                     * Total number of slow queries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Slow query log details. This parameter has been deprecated and will be replaced by InstanceSlowLogDetail because it is not properly named.
                     */
                    std::vector<InstanceSlowlogDetail> m_instanceSlowlogDetail;
                    bool m_instanceSlowlogDetailHasBeenSet;

                    /**
                     * Details of slow queries.
                     */
                    std::vector<InstanceSlowlogDetail> m_instanceSlowLogDetail;
                    bool m_instanceSlowLogDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGRESPONSE_H_
