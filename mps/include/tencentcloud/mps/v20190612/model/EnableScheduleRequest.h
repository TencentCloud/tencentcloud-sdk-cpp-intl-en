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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ENABLESCHEDULEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ENABLESCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * EnableSchedule request structure.
                */
                class EnableScheduleRequest : public AbstractModel
                {
                public:
                    EnableScheduleRequest();
                    ~EnableScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The scheme ID.
                     * @return ScheduleId The scheme ID.
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置The scheme ID.
                     * @param _scheduleId The scheme ID.
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * The scheme ID.
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ENABLESCHEDULEREQUEST_H_
