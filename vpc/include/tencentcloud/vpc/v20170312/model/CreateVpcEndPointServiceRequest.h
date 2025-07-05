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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_

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
                * CreateVpcEndPointService request structure.
                */
                class CreateVpcEndPointServiceRequest : public AbstractModel
                {
                public:
                    CreateVpcEndPointServiceRequest();
                    ~CreateVpcEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID
                     * @return VpcId VPC instance ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID
                     * @param _vpcId VPC instance ID
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
                     * 获取Whether to automatically accept
                     * @return AutoAcceptFlag Whether to automatically accept
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置Whether to automatically accept
                     * @param _autoAcceptFlag Whether to automatically accept
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
                     * 获取Real server ID, such as `lb-xxx`.
                     * @return ServiceInstanceId Real server ID, such as `lb-xxx`.
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置Real server ID, such as `lb-xxx`.
                     * @param _serviceInstanceId Real server ID, such as `lb-xxx`.
                     * 
                     */
                    void SetServiceInstanceId(const std::string& _serviceInstanceId);

                    /**
                     * 判断参数 ServiceInstanceId 是否已赋值
                     * @return ServiceInstanceId 是否已赋值
                     * 
                     */
                    bool ServiceInstanceIdHasBeenSet() const;

                    /**
                     * 获取(Disused) Whether it’s a PaaS service
                     * @return IsPassService (Disused) Whether it’s a PaaS service
                     * 
                     */
                    bool GetIsPassService() const;

                    /**
                     * 设置(Disused) Whether it’s a PaaS service
                     * @param _isPassService (Disused) Whether it’s a PaaS service
                     * 
                     */
                    void SetIsPassService(const bool& _isPassService);

                    /**
                     * 判断参数 IsPassService 是否已赋值
                     * @return IsPassService 是否已赋值
                     * 
                     */
                    bool IsPassServiceHasBeenSet() const;

                    /**
                     * 获取Mounted PaaS service type. Values: `CLB` (default), `CDB`, `CRS`
                     * @return ServiceType Mounted PaaS service type. Values: `CLB` (default), `CDB`, `CRS`
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Mounted PaaS service type. Values: `CLB` (default), `CDB`, `CRS`
                     * @param _serviceType Mounted PaaS service type. Values: `CLB` (default), `CDB`, `CRS`
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Endpoint service name
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * Whether to automatically accept
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * Real server ID, such as `lb-xxx`.
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * (Disused) Whether it’s a PaaS service
                     */
                    bool m_isPassService;
                    bool m_isPassServiceHasBeenSet;

                    /**
                     * Mounted PaaS service type. Values: `CLB` (default), `CDB`, `CRS`
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICEREQUEST_H_
