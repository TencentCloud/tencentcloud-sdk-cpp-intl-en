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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateEndPointAndEndPointService request structure.
                */
                class CreateEndPointAndEndPointServiceRequest : public AbstractModel
                {
                public:
                    CreateEndPointAndEndPointServiceRequest();
                    ~CreateEndPointAndEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param _vpcId VPC instance ID.
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
                     * 获取Whether automatic forwarding is supported.
                     * @return AutoAcceptFlag Whether automatic forwarding is supported.
                     * 
                     */
                    bool GetAutoAcceptFlag() const;

                    /**
                     * 设置Whether automatic forwarding is supported.
                     * @param _autoAcceptFlag Whether automatic forwarding is supported.
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
                     * 获取Backend service ID.
                     * @return ServiceInstanceId Backend service ID.
                     * 
                     */
                    std::string GetServiceInstanceId() const;

                    /**
                     * 设置Backend service ID.
                     * @param _serviceInstanceId Backend service ID.
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
                     * 获取Endpoint name.
                     * @return EndPointName Endpoint name.
                     * 
                     */
                    std::string GetEndPointName() const;

                    /**
                     * 设置Endpoint name.
                     * @param _endPointName Endpoint name.
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
                     * 获取Endpoint region, which should be consistent with the region of the endpoint service.
                     * @return EndPointRegion Endpoint region, which should be consistent with the region of the endpoint service.
                     * 
                     */
                    std::string GetEndPointRegion() const;

                    /**
                     * 设置Endpoint region, which should be consistent with the region of the endpoint service.
                     * @param _endPointRegion Endpoint region, which should be consistent with the region of the endpoint service.
                     * 
                     */
                    void SetEndPointRegion(const std::string& _endPointRegion);

                    /**
                     * 判断参数 EndPointRegion 是否已赋值
                     * @return EndPointRegion 是否已赋值
                     * 
                     */
                    bool EndPointRegionHasBeenSet() const;

                    /**
                     * 获取Endpoint service name.
                     * @return EndPointServiceName Endpoint service name.
                     * 
                     */
                    std::string GetEndPointServiceName() const;

                    /**
                     * 设置Endpoint service name.
                     * @param _endPointServiceName Endpoint service name.
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
                     * 获取Mounted PaaS service type. Valid values: CLB, CDB, and CRS.
                     * @return ServiceType Mounted PaaS service type. Valid values: CLB, CDB, and CRS.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Mounted PaaS service type. Valid values: CLB, CDB, and CRS.
                     * @param _serviceType Mounted PaaS service type. Valid values: CLB, CDB, and CRS.
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Number of endpoint IP addresses.
                     * @return IpNum Number of endpoint IP addresses.
                     * 
                     */
                    int64_t GetIpNum() const;

                    /**
                     * 设置Number of endpoint IP addresses.
                     * @param _ipNum Number of endpoint IP addresses.
                     * 
                     */
                    void SetIpNum(const int64_t& _ipNum);

                    /**
                     * 判断参数 IpNum 是否已赋值
                     * @return IpNum 是否已赋值
                     * 
                     */
                    bool IpNumHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Whether automatic forwarding is supported.
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * Backend service ID.
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * Endpoint name.
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint region, which should be consistent with the region of the endpoint service.
                     */
                    std::string m_endPointRegion;
                    bool m_endPointRegionHasBeenSet;

                    /**
                     * Endpoint service name.
                     */
                    std::string m_endPointServiceName;
                    bool m_endPointServiceNameHasBeenSet;

                    /**
                     * Mounted PaaS service type. Valid values: CLB, CDB, and CRS.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Number of endpoint IP addresses.
                     */
                    int64_t m_ipNum;
                    bool m_ipNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEENDPOINTANDENDPOINTSERVICEREQUEST_H_
