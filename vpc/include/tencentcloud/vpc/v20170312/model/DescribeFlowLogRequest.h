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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeFlowLog request structure.
                */
                class DescribeFlowLogRequest : public AbstractModel
                {
                public:
                    DescribeFlowLogRequest();
                    ~DescribeFlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the VPC instance.
                     * @return VpcId ID of the VPC instance.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC instance.
                     * @param _vpcId ID of the VPC instance.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of the flow log.
                     * @return FlowLogId The unique ID of the flow log.
                     * 
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置The unique ID of the flow log.
                     * @param _flowLogId The unique ID of the flow log.
                     * 
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     * 
                     */
                    bool FlowLogIdHasBeenSet() const;

                private:

                    /**
                     * ID of the VPC instance.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The unique ID of the flow log.
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEFLOWLOGREQUEST_H_
