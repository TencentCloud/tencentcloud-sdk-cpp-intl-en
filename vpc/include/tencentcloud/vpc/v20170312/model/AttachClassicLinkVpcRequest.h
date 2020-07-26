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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHCLASSICLINKVPCREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHCLASSICLINKVPCREQUEST_H_

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
                * AttachClassicLinkVpc request structure.
                */
                class AttachClassicLinkVpcRequest : public AbstractModel
                {
                public:
                    AttachClassicLinkVpcRequest();
                    ~AttachClassicLinkVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param VpcId VPC instance ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取CVM Instance ID
                     * @return InstanceIds CVM Instance ID
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置CVM Instance ID
                     * @param InstanceIds CVM Instance ID
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * CVM Instance ID
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ATTACHCLASSICLINKVPCREQUEST_H_
