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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_

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
                * DeleteFlowLog request structure.
                */
                class DeleteFlowLogRequest : public AbstractModel
                {
                public:
                    DeleteFlowLogRequest();
                    ~DeleteFlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the flow log.
                     * @return FlowLogId The unique ID of the flow log.
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置The unique ID of the flow log.
                     * @param FlowLogId The unique ID of the flow log.
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless a CCN flow log is deleted.
                     * @return VpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless a CCN flow log is deleted.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless a CCN flow log is deleted.
                     * @param VpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless a CCN flow log is deleted.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the flow log.
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless a CCN flow log is deleted.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_
