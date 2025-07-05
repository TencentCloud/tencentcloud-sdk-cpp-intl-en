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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisInstanceEvent.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceEvents response structure.
                */
                class DescribeInstanceEventsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceEventsResponse();
                    ~DescribeInstanceEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of events.
                     * @return TotalCount Total number of events.
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
                     * 获取Instance event information.
                     * @return RedisInstanceEvents Instance event information.
                     * 
                     */
                    std::vector<RedisInstanceEvent> GetRedisInstanceEvents() const;

                    /**
                     * 判断参数 RedisInstanceEvents 是否已赋值
                     * @return RedisInstanceEvents 是否已赋值
                     * 
                     */
                    bool RedisInstanceEventsHasBeenSet() const;

                private:

                    /**
                     * Total number of events.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Instance event information.
                     */
                    std::vector<RedisInstanceEvent> m_redisInstanceEvents;
                    bool m_redisInstanceEventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_
