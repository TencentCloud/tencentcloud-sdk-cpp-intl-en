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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_

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
                * AssignIpv6CidrBlock request structure.
                */
                class AssignIpv6CidrBlockRequest : public AbstractModel
                {
                public:
                    AssignIpv6CidrBlockRequest();
                    ~AssignIpv6CidrBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @return VpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     * @param VpcId The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * The `ID` of the `VPC`, such as `vpc-f49l6u0z`.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSIGNIPV6CIDRBLOCKREQUEST_H_
