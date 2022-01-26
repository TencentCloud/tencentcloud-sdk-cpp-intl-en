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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_

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
                * ModifyFlowLogAttribute request structure.
                */
                class ModifyFlowLogAttributeRequest : public AbstractModel
                {
                public:
                    ModifyFlowLogAttributeRequest();
                    ~ModifyFlowLogAttributeRequest() = default;
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
                     * 获取The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the attributes of a CCN flow log is modified.
                     * @return VpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the attributes of a CCN flow log is modified.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the attributes of a CCN flow log is modified.
                     * @param VpcId The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the attributes of a CCN flow log is modified.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The name of the flow log.
                     * @return FlowLogName The name of the flow log.
                     */
                    std::string GetFlowLogName() const;

                    /**
                     * 设置The name of the flow log.
                     * @param FlowLogName The name of the flow log.
                     */
                    void SetFlowLogName(const std::string& _flowLogName);

                    /**
                     * 判断参数 FlowLogName 是否已赋值
                     * @return FlowLogName 是否已赋值
                     */
                    bool FlowLogNameHasBeenSet() const;

                    /**
                     * 获取The description of the flow log.
                     * @return FlowLogDescription The description of the flow log.
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置The description of the flow log.
                     * @param FlowLogDescription The description of the flow log.
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the flow log.
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * The VPC ID or unique ID of the resource. We recommend using the unique ID. This parameter is required unless the attributes of a CCN flow log is modified.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The name of the flow log.
                     */
                    std::string m_flowLogName;
                    bool m_flowLogNameHasBeenSet;

                    /**
                     * The description of the flow log.
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYFLOWLOGATTRIBUTEREQUEST_H_
