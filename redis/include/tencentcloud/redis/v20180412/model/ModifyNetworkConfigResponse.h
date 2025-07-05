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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyNetworkConfig response structure.
                */
                class ModifyNetworkConfigResponse : public AbstractModel
                {
                public:
                    ModifyNetworkConfigResponse();
                    ~ModifyNetworkConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution status. Ignore this parameter.
                     * @return Status Execution status. Ignore this parameter.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取New subnet ID of the instance
                     * @return SubnetId New subnet ID of the instance
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取New VPC ID of the instance
                     * @return VpcId New VPC ID of the instance
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取New private IPv4 address of the instance
                     * @return Vip New private IPv4 address of the instance
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Task ID. Obtain **taskId** and query the task execution status through the API [DescribeTaskInfo](https://intl.cloud.tencent.com/document/product/239/30601?from_cn_redirect=1).
                     * @return TaskId Task ID. Obtain **taskId** and query the task execution status through the API [DescribeTaskInfo](https://intl.cloud.tencent.com/document/product/239/30601?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * Execution status. Ignore this parameter.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * New subnet ID of the instance
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * New VPC ID of the instance
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * New private IPv4 address of the instance
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Task ID. Obtain **taskId** and query the task execution status through the API [DescribeTaskInfo](https://intl.cloud.tencent.com/document/product/239/30601?from_cn_redirect=1).
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYNETWORKCONFIGRESPONSE_H_
