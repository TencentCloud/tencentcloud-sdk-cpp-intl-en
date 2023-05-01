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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for Pulsar network access point information
                */
                class PulsarNetworkAccessPointInfo : public AbstractModel
                {
                public:
                    PulsarNetworkAccessPointInfo();
                    ~PulsarNetworkAccessPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubnetId Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Access address
                     * @return Endpoint Access address
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Access address
                     * @param Endpoint Access address
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     * @return RouteType Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     */
                    uint64_t GetRouteType() const;

                    /**
                     * 设置Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     * @param RouteType Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     */
                    void SetRouteType(const uint64_t& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                private:

                    /**
                     * VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Access address
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     */
                    uint64_t m_routeType;
                    bool m_routeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
