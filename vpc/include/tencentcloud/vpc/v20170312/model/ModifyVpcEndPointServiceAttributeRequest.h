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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_

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
                * ModifyVpcEndPointServiceAttribute request structure.
                */
                class ModifyVpcEndPointServiceAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcEndPointServiceAttributeRequest();
                    ~ModifyVpcEndPointServiceAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Endpoint service ID
                     * @return EndPointServiceId Endpoint service ID
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置Endpoint service ID
                     * @param _endPointServiceId Endpoint service ID
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取Endpoint service name
                     * @return EndPointServiceName Endpoint service name
                     * 
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置Endpoint service name
                     * @param _endPointServiceName Endpoint service name
                     * 
                     */
                    void SetEndPointServiceName(const std::string& _endPointServiceName);

                    /**
                     * 判断参数 EndPointServiceName 是否已赋值
                     * @return EndPointServiceName 是否已赋值
                     * 
                     */
                    bool EndPointServiceNameHasBeenSet() const;

                    /**
                     * 获取Whether to automatically accept VPC endpoint connection requests. Valid values: <ui><li>`true`: yes<li>`false`: no</ul>
                     * @return AutoAcceptFlag Whether to automatically accept VPC endpoint connection requests. Valid values: <ui><li>`true`: yes<li>`false`: no</ul>
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置Whether to automatically accept VPC endpoint connection requests. Valid values: <ui><li>`true`: yes<li>`false`: no</ul>
                     * @param _autoAcceptFlag Whether to automatically accept VPC endpoint connection requests. Valid values: <ui><li>`true`: yes<li>`false`: no</ul>
                     * 
                     */
                    void SetAutoAcceptFlag(const bool& _autoAcceptFlag);

                    /**
                     * 判断参数 AutoAcceptFlag 是否已赋值
                     * @return AutoAcceptFlag 是否已赋值
                     * 
                     */
                    bool AutoAcceptFlagHasBeenSet() const;

                    /**
                     * 获取Real server ID in the format of `lb-xxx`.
                     * @return ServiceInstanceId Real server ID in the format of `lb-xxx`.
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置Real server ID in the format of `lb-xxx`.
                     * @param _serviceInstanceId Real server ID in the format of `lb-xxx`.
                     * 
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     * 
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Endpoint service name
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * Whether to automatically accept VPC endpoint connection requests. Valid values: <ui><li>`true`: yes<li>`false`: no</ul>
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * Real server ID in the format of `lb-xxx`.
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCENDPOINTSERVICEATTRIBUTEREQUEST_H_
