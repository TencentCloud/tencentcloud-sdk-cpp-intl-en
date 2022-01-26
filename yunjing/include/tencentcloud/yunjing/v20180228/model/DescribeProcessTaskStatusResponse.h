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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEPROCESSTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEPROCESSTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeProcessTaskStatus response structure.
                */
                class DescribeProcessTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeProcessTaskStatusResponse();
                    ~DescribeProcessTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task status.
<li>COMPLETE: completed (at this point, you can call the `DescribeProcesses` API to get the list of real-time processes)</li>
<li>AGENT_OFFLINE: CWP agent is offline</li>
<li>COLLECTING: getting process</li>
<li>FAILED: failed to get processes</li>
                     * @return Status Task status.
<li>COMPLETE: completed (at this point, you can call the `DescribeProcesses` API to get the list of real-time processes)</li>
<li>AGENT_OFFLINE: CWP agent is offline</li>
<li>COLLECTING: getting process</li>
<li>FAILED: failed to get processes</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Task status.
<li>COMPLETE: completed (at this point, you can call the `DescribeProcesses` API to get the list of real-time processes)</li>
<li>AGENT_OFFLINE: CWP agent is offline</li>
<li>COLLECTING: getting process</li>
<li>FAILED: failed to get processes</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEPROCESSTASKSTATUSRESPONSE_H_
