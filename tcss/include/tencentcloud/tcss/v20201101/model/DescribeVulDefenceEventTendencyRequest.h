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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDefenceEventTendency request structure.
                */
                class DescribeVulDefenceEventTendencyRequest : public AbstractModel
                {
                public:
                    DescribeVulDefenceEventTendencyRequest();
                    ~DescribeVulDefenceEventTendencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDEFENCEEVENTTENDENCYREQUEST_H_
