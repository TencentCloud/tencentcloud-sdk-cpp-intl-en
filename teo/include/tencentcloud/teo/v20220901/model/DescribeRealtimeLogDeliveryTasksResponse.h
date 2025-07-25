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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RealtimeLogDeliveryTask.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeRealtimeLogDeliveryTasks response structure.
                */
                class DescribeRealtimeLogDeliveryTasksResponse : public AbstractModel
                {
                public:
                    DescribeRealtimeLogDeliveryTasksResponse();
                    ~DescribeRealtimeLogDeliveryTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of real-time log delivery tasks which match the query conditions.
                     * @return TotalCount The number of real-time log delivery tasks which match the query conditions.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取The list of all real-time log delivery tasks which match the query conditions.
                     * @return RealtimeLogDeliveryTasks The list of all real-time log delivery tasks which match the query conditions.
                     * 
                     */
                    std::vector<RealtimeLogDeliveryTask> GetRealtimeLogDeliveryTasks() const;

                    /**
                     * 判断参数 RealtimeLogDeliveryTasks 是否已赋值
                     * @return RealtimeLogDeliveryTasks 是否已赋值
                     * 
                     */
                    bool RealtimeLogDeliveryTasksHasBeenSet() const;

                private:

                    /**
                     * The number of real-time log delivery tasks which match the query conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The list of all real-time log delivery tasks which match the query conditions.
                     */
                    std::vector<RealtimeLogDeliveryTask> m_realtimeLogDeliveryTasks;
                    bool m_realtimeLogDeliveryTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEREALTIMELOGDELIVERYTASKSRESPONSE_H_
