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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/TendisSlowLogDetail.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeTendisSlowLog response structure.
                */
                class DescribeTendisSlowLogResponse : public AbstractModel
                {
                public:
                    DescribeTendisSlowLogResponse();
                    ~DescribeTendisSlowLogResponse() = default;
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
                     * 获取Slow query details. Note: If the value of TotalCount is greater than 10,000, indicating that the number of slow logs exceeds 10,000, log details cannot be returned. Instead, the returned data is empty. It is recommended to reduce the interval between BeginTime and EndTime and perform multiple queries.
                     * @return TendisSlowLogDetail Slow query details. Note: If the value of TotalCount is greater than 10,000, indicating that the number of slow logs exceeds 10,000, log details cannot be returned. Instead, the returned data is empty. It is recommended to reduce the interval between BeginTime and EndTime and perform multiple queries.
                     * 
                     */
                    std::vector<TendisSlowLogDetail> GetTendisSlowLogDetail() const;

                    /**
                     * 判断参数 TendisSlowLogDetail 是否已赋值
                     * @return TendisSlowLogDetail 是否已赋值
                     * 
                     */
                    bool TendisSlowLogDetailHasBeenSet() const;

                private:

                    /**
                     * Total number of slow queries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Slow query details. Note: If the value of TotalCount is greater than 10,000, indicating that the number of slow logs exceeds 10,000, log details cannot be returned. Instead, the returned data is empty. It is recommended to reduce the interval between BeginTime and EndTime and perform multiple queries.
                     */
                    std::vector<TendisSlowLogDetail> m_tendisSlowLogDetail;
                    bool m_tendisSlowLogDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBETENDISSLOWLOGRESPONSE_H_
