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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Endpoint details
                */
                class EndPoint : public AbstractModel
                {
                public:
                    EndPoint();
                    ~EndPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取APP ID
                     * @return EndPointOwner APP ID
                     * 
                     */
                    std::string GetEndPointOwner() const;

                    /**
                     * 设置APP ID
                     * @param _endPointOwner APP ID
                     * 
                     */
                    void SetEndPointOwner(const std::string& _endPointOwner);

                    /**
                     * 判断参数 EndPointOwner 是否已赋值
                     * @return EndPointOwner 是否已赋值
                     * 
                     */
                    bool EndPointOwnerHasBeenSet() const;

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
                     * 获取Endpoint service VPC ID
                     * @return ServiceVpcId Endpoint service VPC ID
                     * 
                     */
                    std::string GetServiceVpcId() const;

                    /**
                     * 设置Endpoint service VPC ID
                     * @param _serviceVpcId Endpoint service VPC ID
                     * 
                     */
                    void SetServiceVpcId(const std::string& _serviceVpcId);

                    /**
                     * 判断参数 ServiceVpcId 是否已赋值
                     * @return ServiceVpcId 是否已赋值
                     * 
                     */
                    bool ServiceVpcIdHasBeenSet() const;

                    /**
                     * 获取Endpoint service VIP
                     * @return ServiceVip Endpoint service VIP
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置Endpoint service VIP
                     * @param _serviceVip Endpoint service VIP
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
                     * 获取Endpoint VIP
                     * @return EndPointVip Endpoint VIP
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 设置Endpoint VIP
                     * @param _endPointVip Endpoint VIP
                     * 
                     */
                    void SetEndPointVip(const std::string& _endPointVip);

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取Endpoint status. Valid values: `ACTIVE` (available), `PENDING` (to be accepted), `ACCEPTING` (being accepted), `REJECTED` (rejected), and `FAILED` (failed).
                     * @return State Endpoint status. Valid values: `ACTIVE` (available), `PENDING` (to be accepted), `ACCEPTING` (being accepted), `REJECTED` (rejected), and `FAILED` (failed).
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Endpoint status. Valid values: `ACTIVE` (available), `PENDING` (to be accepted), `ACCEPTING` (being accepted), `REJECTED` (rejected), and `FAILED` (failed).
                     * @param _state Endpoint status. Valid values: `ACTIVE` (available), `PENDING` (to be accepted), `ACCEPTING` (being accepted), `REJECTED` (rejected), and `FAILED` (failed).
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

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
                     * 获取ID list of security group instances bound with endpoints
                     * @return GroupSet ID list of security group instances bound with endpoints
                     * 
                     */
                    std::vector<std::string> GetGroupSet() const;

                    /**
                     * 设置ID list of security group instances bound with endpoints
                     * @param _groupSet ID list of security group instances bound with endpoints
                     * 
                     */
                    void SetGroupSet(const std::vector<std::string>& _groupSet);

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取Endpoint service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ServiceName Endpoint service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Endpoint service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _serviceName Endpoint service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * Endpoint ID
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * APP ID
                     */
                    std::string m_endPointOwner;
                    bool m_endPointOwnerHasBeenSet;

                    /**
                     * Endpoint name
                     */
                    std::string m_endPointName;
                    bool m_endPointNameHasBeenSet;

                    /**
                     * Endpoint service VPC ID
                     */
                    std::string m_serviceVpcId;
                    bool m_serviceVpcIdHasBeenSet;

                    /**
                     * Endpoint service VIP
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * Endpoint service ID
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * Endpoint VIP
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * Endpoint status. Valid values: `ACTIVE` (available), `PENDING` (to be accepted), `ACCEPTING` (being accepted), `REJECTED` (rejected), and `FAILED` (failed).
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ID list of security group instances bound with endpoints
                     */
                    std::vector<std::string> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * Endpoint service name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ENDPOINT_H_
