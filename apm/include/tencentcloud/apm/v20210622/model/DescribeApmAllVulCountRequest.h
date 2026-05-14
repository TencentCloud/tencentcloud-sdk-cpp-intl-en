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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMALLVULCOUNTREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMALLVULCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmAllVulCount request structure.
                */
                class DescribeApmAllVulCountRequest : public AbstractModel
                {
                public:
                    DescribeApmAllVulCountRequest();
                    ~DescribeApmAllVulCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取unix second-level timestamp
                     * @return StartTime unix second-level timestamp
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置unix second-level timestamp
                     * @param _startTime unix second-level timestamp
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取unix second-level timestamp
                     * @return EndTime unix second-level timestamp
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置unix second-level timestamp
                     * @param _endTime unix second-level timestamp
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * unix second-level timestamp
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * unix second-level timestamp
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMALLVULCOUNTREQUEST_H_
