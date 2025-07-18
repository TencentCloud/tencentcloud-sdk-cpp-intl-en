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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_

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
                * DescribeEscapeEventTypeSummary response structure.
                */
                class DescribeEscapeEventTypeSummaryResponse : public AbstractModel
                {
                public:
                    DescribeEscapeEventTypeSummaryResponse();
                    ~DescribeEscapeEventTypeSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of container escape events
                     * @return ContainerEscapeEventCount Number of container escape events
                     * 
                     */
                    int64_t GetContainerEscapeEventCount() const;

                    /**
                     * 判断参数 ContainerEscapeEventCount 是否已赋值
                     * @return ContainerEscapeEventCount 是否已赋值
                     * 
                     */
                    bool ContainerEscapeEventCountHasBeenSet() const;

                    /**
                     * 获取Number of program privilege escalation events
                     * @return ProcessPrivilegeEventCount Number of program privilege escalation events
                     * 
                     */
                    int64_t GetProcessPrivilegeEventCount() const;

                    /**
                     * 判断参数 ProcessPrivilegeEventCount 是否已赋值
                     * @return ProcessPrivilegeEventCount 是否已赋值
                     * 
                     */
                    bool ProcessPrivilegeEventCountHasBeenSet() const;

                    /**
                     * 获取Number of risky container events
                     * @return RiskContainerEventCount Number of risky container events
                     * 
                     */
                    int64_t GetRiskContainerEventCount() const;

                    /**
                     * 判断参数 RiskContainerEventCount 是否已赋值
                     * @return RiskContainerEventCount 是否已赋值
                     * 
                     */
                    bool RiskContainerEventCountHasBeenSet() const;

                    /**
                     * 获取Number of pending escape events
                     * @return PendingEscapeEventCount Number of pending escape events
                     * 
                     */
                    int64_t GetPendingEscapeEventCount() const;

                    /**
                     * 判断参数 PendingEscapeEventCount 是否已赋值
                     * @return PendingEscapeEventCount 是否已赋值
                     * 
                     */
                    bool PendingEscapeEventCountHasBeenSet() const;

                private:

                    /**
                     * Number of container escape events
                     */
                    int64_t m_containerEscapeEventCount;
                    bool m_containerEscapeEventCountHasBeenSet;

                    /**
                     * Number of program privilege escalation events
                     */
                    int64_t m_processPrivilegeEventCount;
                    bool m_processPrivilegeEventCountHasBeenSet;

                    /**
                     * Number of risky container events
                     */
                    int64_t m_riskContainerEventCount;
                    bool m_riskContainerEventCountHasBeenSet;

                    /**
                     * Number of pending escape events
                     */
                    int64_t m_pendingEscapeEventCount;
                    bool m_pendingEscapeEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPEEVENTTYPESUMMARYRESPONSE_H_
