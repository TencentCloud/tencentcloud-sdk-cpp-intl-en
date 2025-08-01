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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/FlowLog.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeFlowLogs response structure.
                */
                class DescribeFlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeFlowLogsResponse();
                    ~DescribeFlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The instance set of flow logs.
                     * @return FlowLog The instance set of flow logs.
                     * 
                     */
                    std::vector<FlowLog> GetFlowLog() const;

                    /**
                     * 判断参数 FlowLog 是否已赋值
                     * @return FlowLog 是否已赋值
                     * 
                     */
                    bool FlowLogHasBeenSet() const;

                    /**
                     * 获取The total number of flow logs.
                     * @return TotalNum The total number of flow logs.
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * The instance set of flow logs.
                     */
                    std::vector<FlowLog> m_flowLog;
                    bool m_flowLogHasBeenSet;

                    /**
                     * The total number of flow logs.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGSRESPONSE_H_
