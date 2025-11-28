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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/SecurityPolicy.h>


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
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID. This field is left empty for supporting network and public network access points.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Access address
                     * @return Endpoint Access address
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置Access address
                     * @param _endpoint Access address
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
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
                     * 
                     */
                    uint64_t GetRouteType() const;

                    /**
                     * 设置Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     * @param _routeType Access point type: 
`0`: Supporting network access point 
`1`: VPC access point 
`2`: Public network access point
                     * 
                     */
                    void SetRouteType(const uint64_t& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     * 
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取0: local region access. since cross-region disaster recovery is not configured, this type of access point cannot perform cross-region switchover or switch back from remote access.
Local region access. due to the configuration of cross-region disaster recovery, switchover can be performed at any time in a different location. this state is used for the primary cluster access point.
Cross-Region access, completed offsite switchover, this state is used for the access point of the source cluster. the access point in this state is non-deletable.
3: cross-region access can be switched back from remote access at any time. this state is for the access point of the target cluster. the access point in this state is non-deletable.
Cross-Region access. the target cluster has completed offsite switchback and is in the state of waiting for deletion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationType 0: local region access. since cross-region disaster recovery is not configured, this type of access point cannot perform cross-region switchover or switch back from remote access.
Local region access. due to the configuration of cross-region disaster recovery, switchover can be performed at any time in a different location. this state is used for the primary cluster access point.
Cross-Region access, completed offsite switchover, this state is used for the access point of the source cluster. the access point in this state is non-deletable.
3: cross-region access can be switched back from remote access at any time. this state is for the access point of the target cluster. the access point in this state is non-deletable.
Cross-Region access. the target cluster has completed offsite switchback and is in the state of waiting for deletion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOperationType() const;

                    /**
                     * 设置0: local region access. since cross-region disaster recovery is not configured, this type of access point cannot perform cross-region switchover or switch back from remote access.
Local region access. due to the configuration of cross-region disaster recovery, switchover can be performed at any time in a different location. this state is used for the primary cluster access point.
Cross-Region access, completed offsite switchover, this state is used for the access point of the source cluster. the access point in this state is non-deletable.
3: cross-region access can be switched back from remote access at any time. this state is for the access point of the target cluster. the access point in this state is non-deletable.
Cross-Region access. the target cluster has completed offsite switchback and is in the state of waiting for deletion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operationType 0: local region access. since cross-region disaster recovery is not configured, this type of access point cannot perform cross-region switchover or switch back from remote access.
Local region access. due to the configuration of cross-region disaster recovery, switchover can be performed at any time in a different location. this state is used for the primary cluster access point.
Cross-Region access, completed offsite switchover, this state is used for the access point of the source cluster. the access point in this state is non-deletable.
3: cross-region access can be switched back from remote access at any time. this state is for the access point of the target cluster. the access point in this state is non-deletable.
Cross-Region access. the target cluster has completed offsite switchback and is in the state of waiting for deletion.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperationType(const uint64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取Access point type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessPointsType Access point type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessPointsType() const;

                    /**
                     * 设置Access point type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessPointsType Access point type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessPointsType(const std::string& _accessPointsType);

                    /**
                     * 判断参数 AccessPointsType 是否已赋值
                     * @return AccessPointsType 是否已赋值
                     * 
                     */
                    bool AccessPointsTypeHasBeenSet() const;

                    /**
                     * 获取Bandwidth. currently only public network has this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bandwidth Bandwidth. currently only public network has this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth. currently only public network has this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidth Bandwidth. currently only public network has this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Class.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecurityPolicy Class.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SecurityPolicy> GetSecurityPolicy() const;

                    /**
                     * 设置Class.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _securityPolicy Class.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecurityPolicy(const std::vector<SecurityPolicy>& _securityPolicy);

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is a standard access point. valid values: true (standard), false (not standard).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StandardAccessPoint Indicates whether it is a standard access point. valid values: true (standard), false (not standard).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetStandardAccessPoint() const;

                    /**
                     * 设置Indicates whether it is a standard access point. valid values: true (standard), false (not standard).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _standardAccessPoint Indicates whether it is a standard access point. valid values: true (standard), false (not standard).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandardAccessPoint(const bool& _standardAccessPoint);

                    /**
                     * 判断参数 StandardAccessPoint 是否已赋值
                     * @return StandardAccessPoint 是否已赋值
                     * 
                     */
                    bool StandardAccessPointHasBeenSet() const;

                    /**
                     * 获取AZ information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneName AZ information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneName AZ information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether TLS encryption is enabled.
                     * @return Tls Specifies whether TLS encryption is enabled.
                     * 
                     */
                    bool GetTls() const;

                    /**
                     * 设置Specifies whether TLS encryption is enabled.
                     * @param _tls Specifies whether TLS encryption is enabled.
                     * 
                     */
                    void SetTls(const bool& _tls);

                    /**
                     * 判断参数 Tls 是否已赋值
                     * @return Tls 是否已赋值
                     * 
                     */
                    bool TlsHasBeenSet() const;

                    /**
                     * 获取Access point custom domain name.
                     * @return CustomUrl Access point custom domain name.
                     * 
                     */
                    std::string GetCustomUrl() const;

                    /**
                     * 设置Access point custom domain name.
                     * @param _customUrl Access point custom domain name.
                     * 
                     */
                    void SetCustomUrl(const std::string& _customUrl);

                    /**
                     * 判断参数 CustomUrl 是否已赋值
                     * @return CustomUrl 是否已赋值
                     * 
                     */
                    bool CustomUrlHasBeenSet() const;

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

                    /**
                     * 0: local region access. since cross-region disaster recovery is not configured, this type of access point cannot perform cross-region switchover or switch back from remote access.
Local region access. due to the configuration of cross-region disaster recovery, switchover can be performed at any time in a different location. this state is used for the primary cluster access point.
Cross-Region access, completed offsite switchover, this state is used for the access point of the source cluster. the access point in this state is non-deletable.
3: cross-region access can be switched back from remote access at any time. this state is for the access point of the target cluster. the access point in this state is non-deletable.
Cross-Region access. the target cluster has completed offsite switchback and is in the state of waiting for deletion.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * Access point type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessPointsType;
                    bool m_accessPointsTypeHasBeenSet;

                    /**
                     * Bandwidth. currently only public network has this value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Class.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SecurityPolicy> m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                    /**
                     * Indicates whether it is a standard access point. valid values: true (standard), false (not standard).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_standardAccessPoint;
                    bool m_standardAccessPointHasBeenSet;

                    /**
                     * AZ information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Specifies whether TLS encryption is enabled.
                     */
                    bool m_tls;
                    bool m_tlsHasBeenSet;

                    /**
                     * Access point custom domain name.
                     */
                    std::string m_customUrl;
                    bool m_customUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARNETWORKACCESSPOINTINFO_H_
