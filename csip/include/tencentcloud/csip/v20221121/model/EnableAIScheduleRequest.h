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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ENABLEAISCHEDULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ENABLEAISCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EnableAISchedule request structure.
                */
                class EnableAIScheduleRequest : public AbstractModel
                {
                public:
                    EnableAIScheduleRequest();
                    ~EnableAIScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the AI scheduled task. Obtain through the DescribeAIScheduleList API.</p>
                     * @return ScheduleId <p>ID of the AI scheduled task. Obtain through the DescribeAIScheduleList API.</p>
                     * 
                     */
                    std::string GetScheduleId() const;

                    /**
                     * 设置<p>ID of the AI scheduled task. Obtain through the DescribeAIScheduleList API.</p>
                     * @param _scheduleId <p>ID of the AI scheduled task. Obtain through the DescribeAIScheduleList API.</p>
                     * 
                     */
                    void SetScheduleId(const std::string& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the AI scheduled task. Obtain through the DescribeAIScheduleList API.</p>
                     */
                    std::string m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ENABLEAISCHEDULEREQUEST_H_
