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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/Task.h>
#include <tencentcloud/cfg/v20210820/model/TaskReportInfo.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTask response structure.
                */
                class DescribeTaskResponse : public AbstractModel
                {
                public:
                    DescribeTaskResponse();
                    ~DescribeTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task information
                     * @return Task Task information
                     * 
                     */
                    Task GetTask() const;

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取Experiment report information corresponding to the task. The value null indicates that no report is exported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReportInfo Experiment report information corresponding to the task. The value null indicates that no report is exported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TaskReportInfo GetReportInfo() const;

                    /**
                     * 判断参数 ReportInfo 是否已赋值
                     * @return ReportInfo 是否已赋值
                     * 
                     */
                    bool ReportInfoHasBeenSet() const;

                private:

                    /**
                     * Task information
                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * Experiment report information corresponding to the task. The value null indicates that no report is exported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TaskReportInfo m_reportInfo;
                    bool m_reportInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETASKRESPONSE_H_
