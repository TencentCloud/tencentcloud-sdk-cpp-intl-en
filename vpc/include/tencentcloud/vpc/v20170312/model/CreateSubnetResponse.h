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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSubnet response structure.
                */
                class CreateSubnetResponse : public AbstractModel
                {
                public:
                    CreateSubnetResponse();
                    ~CreateSubnetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Subnet object.
                     * @return Subnet Subnet object.
                     * 
                     */
                    Subnet GetSubnet() const;

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                private:

                    /**
                     * Subnet object.
                     */
                    Subnet m_subnet;
                    bool m_subnetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETRESPONSE_H_
