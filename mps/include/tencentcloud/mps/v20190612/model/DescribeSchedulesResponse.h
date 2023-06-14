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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SchedulesInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeSchedules response structure.
                */
                class DescribeSchedulesResponse : public AbstractModel
                {
                public:
                    DescribeSchedulesResponse();
                    ~DescribeSchedulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of records that meet the conditions.
                     * @return TotalCount The total number of records that meet the conditions.
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
                     * 获取The information of the schemes.
                     * @return ScheduleInfoSet The information of the schemes.
                     * 
                     */
                    std::vector<SchedulesInfo> GetScheduleInfoSet() const;

                    /**
                     * 判断参数 ScheduleInfoSet 是否已赋值
                     * @return ScheduleInfoSet 是否已赋值
                     * 
                     */
                    bool ScheduleInfoSetHasBeenSet() const;

                private:

                    /**
                     * The total number of records that meet the conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The information of the schemes.
                     */
                    std::vector<SchedulesInfo> m_scheduleInfoSet;
                    bool m_scheduleInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESCHEDULESRESPONSE_H_
