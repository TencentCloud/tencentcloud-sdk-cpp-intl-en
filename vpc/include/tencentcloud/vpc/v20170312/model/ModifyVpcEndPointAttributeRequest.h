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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_

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
                * ModifyVpcEndPointAttribute request structure.
                */
                class ModifyVpcEndPointAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcEndPointAttributeRequest();
                    ~ModifyVpcEndPointAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Endpoint ID
                     * @return EndPointId Endpoint ID
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 设置Endpoint ID
                     * @param _endPointId Endpoint ID
                     * 
                     */
                    void SetEndPointId(const std::string& _endPointId);

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取Endpoint name
                     * @return EndPointName Endpoint name
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name
                     * @param _endPointName Endpoint name
                     * 
                     */
                    void SetEndPointName(const std::string& _endPointName);

                    /**
                     * 判断参数 EndPointName 是否已赋值
                     * @return EndPointName 是否已赋值
                     * 
                     */
                    bool EndPointNameHasBeenSet() const;

                    /**
                     * 获取List of security group IDs
                     * @return SecurityGroupIds List of security group IDs
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of security group IDs
                     * @param _securityGroupIds List of security group IDs
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * Endpoint name
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * List of security group IDs
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTATTRIBUTEREQUEST_H_
