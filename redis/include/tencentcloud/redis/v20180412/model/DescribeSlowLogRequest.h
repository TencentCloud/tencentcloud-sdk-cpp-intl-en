/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSlowLog request structure.
                */
                class DescribeSlowLogRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogRequest();
                    ~DescribeSlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * @return InstanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * @param _instanceId ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time for prequerying a slow log
                     * @return BeginTime Start time for prequerying a slow log
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time for prequerying a slow log
                     * @param _beginTime Start time for prequerying a slow log
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time for prequerying a slow log
                     * @return EndTime End time for prequerying a slow log
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for prequerying a slow log
                     * @param _endTime End time for prequerying a slow log
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The average execution time threshold of slow query  in microseconds
                     * @return MinQueryTime The average execution time threshold of slow query  in microseconds
                     * 
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置The average execution time threshold of slow query  in microseconds
                     * @param _minQueryTime The average execution time threshold of slow query  in microseconds
                     * 
                     */
                    void SetMinQueryTime(const int64_t& _minQueryTime);

                    /**
                     * 判断参数 MinQueryTime 是否已赋值
                     * @return MinQueryTime 是否已赋值
                     * 
                     */
                    bool MinQueryTimeHasBeenSet() const;

                    /**
                     * 获取Number of slow queries displayed per page. Default value: `20`. Value range:  [20,1000].
                     * @return Limit Number of slow queries displayed per page. Default value: `20`. Value range:  [20,1000].
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of slow queries displayed per page. Default value: `20`. Value range:  [20,1000].
                     * @param _limit Number of slow queries displayed per page. Default value: `20`. Value range:  [20,1000].
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Slow query offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @return Offset Slow query offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Slow query offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * @param _offset Slow query offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Node role. <ul><li>`Master`: Master node</li><li>`Slave`: Replica node</li></ul>
                     * @return Role Node role. <ul><li>`Master`: Master node</li><li>`Slave`: Replica node</li></ul>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node role. <ul><li>`Master`: Master node</li><li>`Slave`: Replica node</li></ul>
                     * @param _role Node role. <ul><li>`Master`: Master node</li><li>`Slave`: Replica node</li></ul>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * ID of a specified instance,  such as  "crs-xjhsdj****" Log in to the [Redis console](https://console.cloud.tencent.com/redis) and copy the instance ID in the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time for prequerying a slow log
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time for prequerying a slow log
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The average execution time threshold of slow query  in microseconds
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * Number of slow queries displayed per page. Default value: `20`. Value range:  [20,1000].
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Slow query offset, which is an integral multiple of `Limit`. Calculation formula:  `offset` = `limit` * (page number - 1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Node role. <ul><li>`Master`: Master node</li><li>`Slave`: Replica node</li></ul>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESLOWLOGREQUEST_H_
