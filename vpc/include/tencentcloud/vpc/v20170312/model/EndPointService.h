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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPoint.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Endpoint service
                */
                class EndPointService : public AbstractModel
                {
                public:
                    EndPointService();
                    ~EndPointService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取APP ID
                     * @return ServiceOwner APP ID
                     * 
                     */
                    std::string GetServiceOwner() const;

                    /**
                     * 设置APP ID
                     * @param _serviceOwner APP ID
                     * 
                     */
                    void SetServiceOwner(const std::string& _serviceOwner);

                    /**
                     * 判断参数 ServiceOwner 是否已赋值
                     * @return ServiceOwner 是否已赋值
                     * 
                     */
                    bool ServiceOwnerHasBeenSet() const;

                    /**
                     * 获取Endpoint service name
                     * @return ServiceName Endpoint service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Endpoint service name
                     * @param _serviceName Endpoint service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Real server VIP
                     * @return ServiceVip Real server VIP
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置Real server VIP
                     * @param _serviceVip Real server VIP
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

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
                     * 获取Number of associated endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndPointCount Number of associated endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEndPointCount() const;

                    /**
                     * 设置Number of associated endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _endPointCount Number of associated endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndPointCount(const uint64_t& _endPointCount);

                    /**
                     * 判断参数 EndPointCount 是否已赋值
                     * @return EndPointCount 是否已赋值
                     * 
                     */
                    bool EndPointCountHasBeenSet() const;

                    /**
                     * 获取Array of endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndPointSet Array of endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EndPoint> GetEndPointSet() const;

                    /**
                     * 设置Array of endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _endPointSet Array of endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndPointSet(const std::vector<EndPoint>& _endPointSet);

                    /**
                     * 判断参数 EndPointSet 是否已赋值
                     * @return EndPointSet 是否已赋值
                     * 
                     */
                    bool EndPointSetHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Mounted PaaS service type. Values: `CLB`, `CDB`, `CRS`
                     * @return ServiceType Mounted PaaS service type. Values: `CLB`, `CDB`, `CRS`
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Mounted PaaS service type. Values: `CLB`, `CDB`, `CRS`
                     * @param _serviceType Mounted PaaS service type. Values: `CLB`, `CDB`, `CRS`
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
                     * APP ID
                     */
                    std::string m_serviceOwner;
                    bool m_serviceOwnerHasBeenSet;

                    /**
                     * Endpoint service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Real server VIP
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * Real server ID in the format of `lb-xxx`.
                     */
                    std::string m_serviceInstanceId;
                    bool m_serviceInstanceIdHasBeenSet;

                    /**
                     * Whether to automatically accept
                     */
                    bool m_autoAcceptFlag;
                    bool m_autoAcceptFlagHasBeenSet;

                    /**
                     * Number of associated endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endPointCount;
                    bool m_endPointCountHasBeenSet;

                    /**
                     * Array of endpoints
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<EndPoint> m_endPointSet;
                    bool m_endPointSetHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Mounted PaaS service type. Values: `CLB`, `CDB`, `CRS`
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINTSERVICE_H_
