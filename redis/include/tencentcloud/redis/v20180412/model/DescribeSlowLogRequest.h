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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取The start time
                     * @return BeginTime The start time
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time
                     * @param _beginTime The start time
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
                     * 获取The end time
                     * @return EndTime The end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time
                     * @param _endTime The end time
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
                     * 获取The average execution time threshold of slow query in ms.
                     * @return MinQueryTime The average execution time threshold of slow query in ms.
                     * 
                     */
                    int64_t GetMinQueryTime() const;

                    /**
                     * 设置The average execution time threshold of slow query in ms.
                     * @param _minQueryTime The average execution time threshold of slow query in ms.
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
                     * 获取Number of slow queries displayed per page. Default value: `20`.
                     * @return Limit Number of slow queries displayed per page. Default value: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of slow queries displayed per page. Default value: `20`.
                     * @param _limit Number of slow queries displayed per page. Default value: `20`.
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
                     * 获取Slow query offset, which is an integral multiple of `Limit`.
                     * @return Offset Slow query offset, which is an integral multiple of `Limit`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Slow query offset, which is an integral multiple of `Limit`.
                     * @param _offset Slow query offset, which is an integral multiple of `Limit`.
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The start time
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The average execution time threshold of slow query in ms.
                     */
                    int64_t m_minQueryTime;
                    bool m_minQueryTimeHasBeenSet;

                    /**
                     * Number of slow queries displayed per page. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Slow query offset, which is an integral multiple of `Limit`.
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
