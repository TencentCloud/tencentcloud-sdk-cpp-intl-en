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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Connection information
                */
                class ProxyInfo : public AbstractModel
                {
                public:
                    ProxyInfo();
                    ~ProxyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection instance ID; It's an old parameter, please switch to ProxyId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Connection instance ID; It's an old parameter, please switch to ProxyId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Connection instance ID; It's an old parameter, please switch to ProxyId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId Connection instance ID; It's an old parameter, please switch to ProxyId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     * @return CreateTime Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     * @param CreateTime Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param ProjectId Project ID.
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Connection name.
                     * @return ProxyName Connection name.
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Connection name.
                     * @param ProxyName Connection name.
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Access region.
                     * @return AccessRegion Access region.
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Access region.
                     * @param AccessRegion Access region.
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Origin server region.
                     * @return RealServerRegion Origin server region.
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region.
                     * @param RealServerRegion Origin server region.
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取Bandwidth. Unit: Mbps.
                     * @return Bandwidth Bandwidth. Unit: Mbps.
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置Bandwidth. Unit: Mbps.
                     * @param Bandwidth Bandwidth. Unit: Mbps.
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Concurrence. Unit: requests/second.
                     * @return Concurrent Concurrence. Unit: requests/second.
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置Concurrence. Unit: requests/second.
                     * @param Concurrent Concurrence. Unit: requests/second.
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取Connection status:
RUNNING: running;
CREATING: creating;
DESTROYING: terminating;
OPENING: enabling;
CLOSING: disabling;
CLOSED: disabled;
ADJUSTING: adjusting configuration
ISOLATING: isolating (it's triggered when the account is in arrears);
ISOLATED: isolated (it's triggered when the account is in arrears);
UNKNOWN: unknown status.
                     * @return Status Connection status:
RUNNING: running;
CREATING: creating;
DESTROYING: terminating;
OPENING: enabling;
CLOSING: disabling;
CLOSED: disabled;
ADJUSTING: adjusting configuration
ISOLATING: isolating (it's triggered when the account is in arrears);
ISOLATED: isolated (it's triggered when the account is in arrears);
UNKNOWN: unknown status.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Connection status:
RUNNING: running;
CREATING: creating;
DESTROYING: terminating;
OPENING: enabling;
CLOSING: disabling;
CLOSED: disabled;
ADJUSTING: adjusting configuration
ISOLATING: isolating (it's triggered when the account is in arrears);
ISOLATED: isolated (it's triggered when the account is in arrears);
UNKNOWN: unknown status.
                     * @param Status Connection status:
RUNNING: running;
CREATING: creating;
DESTROYING: terminating;
OPENING: enabling;
CLOSING: disabling;
CLOSED: disabled;
ADJUSTING: adjusting configuration
ISOLATING: isolating (it's triggered when the account is in arrears);
ISOLATED: isolated (it's triggered when the account is in arrears);
UNKNOWN: unknown status.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Accessed domain name.
                     * @return Domain Accessed domain name.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Accessed domain name.
                     * @param Domain Accessed domain name.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Accessed IP.
                     * @return IP Accessed IP.
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Accessed IP.
                     * @param IP Accessed IP.
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Connection versions: 1.0, 2.0, 3.0.
                     * @return Version Connection versions: 1.0, 2.0, 3.0.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Connection versions: 1.0, 2.0, 3.0.
                     * @param Version Connection versions: 1.0, 2.0, 3.0.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Connection instance ID; It's a new parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyId Connection instance ID; It's a new parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection instance ID; It's a new parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProxyId Connection instance ID; It's a new parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取1: this connection is expandable; 0: this connection is not expandable.
                     * @return Scalarable 1: this connection is expandable; 0: this connection is not expandable.
                     */
                    int64_t GetScalarable() const;

                    /**
                     * 设置1: this connection is expandable; 0: this connection is not expandable.
                     * @param Scalarable 1: this connection is expandable; 0: this connection is not expandable.
                     */
                    void SetScalarable(const int64_t& _scalarable);

                    /**
                     * 判断参数 Scalarable 是否已赋值
                     * @return Scalarable 是否已赋值
                     */
                    bool ScalarableHasBeenSet() const;

                    /**
                     * 获取Supported protocol types.
                     * @return SupportProtocols Supported protocol types.
                     */
                    std::vector<std::string> GetSupportProtocols() const;

                    /**
                     * 设置Supported protocol types.
                     * @param SupportProtocols Supported protocol types.
                     */
                    void SetSupportProtocols(const std::vector<std::string>& _supportProtocols);

                    /**
                     * 判断参数 SupportProtocols 是否已赋值
                     * @return SupportProtocols 是否已赋值
                     */
                    bool SupportProtocolsHasBeenSet() const;

                    /**
                     * 获取Connection group ID. This field exists if a connection belongs to a connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Connection group ID. This field exists if a connection belongs to a connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID. This field exists if a connection belongs to a connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupId Connection group ID. This field exists if a connection belongs to a connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Security policy ID. This field exists if security policies are configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyId Security policy ID. This field exists if security policies are configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID. This field exists if security policies are configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PolicyId Security policy ID. This field exists if security policies are configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Access region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessRegionInfo Access region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RegionDetail GetAccessRegionInfo() const;

                    /**
                     * 设置Access region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AccessRegionInfo Access region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccessRegionInfo(const RegionDetail& _accessRegionInfo);

                    /**
                     * 判断参数 AccessRegionInfo 是否已赋值
                     * @return AccessRegionInfo 是否已赋值
                     */
                    bool AccessRegionInfoHasBeenSet() const;

                    /**
                     * 获取Origin server region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerRegionInfo Origin server region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置Origin server region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RealServerRegionInfo Origin server region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取Forwarding IP of the connection
                     * @return ForwardIP Forwarding IP of the connection
                     */
                    std::string GetForwardIP() const;

                    /**
                     * 设置Forwarding IP of the connection
                     * @param ForwardIP Forwarding IP of the connection
                     */
                    void SetForwardIP(const std::string& _forwardIP);

                    /**
                     * 判断参数 ForwardIP 是否已赋值
                     * @return ForwardIP 是否已赋值
                     */
                    bool ForwardIPHasBeenSet() const;

                    /**
                     * 获取Tag list. This field is an empty list if no tags exist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag list. This field is an empty list if no tags exist.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list. This field is an empty list if no tags exist.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagSet Tag list. This field is an empty list if no tags exist.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Whether security groups are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportSecurity Whether security groups are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSupportSecurity() const;

                    /**
                     * 设置Whether security groups are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SupportSecurity Whether security groups are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSupportSecurity(const int64_t& _supportSecurity);

                    /**
                     * 判断参数 SupportSecurity 是否已赋值
                     * @return SupportSecurity 是否已赋值
                     */
                    bool SupportSecurityHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: bill-by-bandwidth; 1: bill-by-traffic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BillingType Billing mode. 0: bill-by-bandwidth; 1: bill-by-traffic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置Billing mode. 0: bill-by-bandwidth; 1: bill-by-traffic.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param BillingType Billing mode. 0: bill-by-bandwidth; 1: bill-by-traffic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取List of domain names associated with resolution record
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RelatedGlobalDomains List of domain names associated with resolution record
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetRelatedGlobalDomains() const;

                    /**
                     * 设置List of domain names associated with resolution record
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RelatedGlobalDomains List of domain names associated with resolution record
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRelatedGlobalDomains(const std::vector<std::string>& _relatedGlobalDomains);

                    /**
                     * 判断参数 RelatedGlobalDomains 是否已赋值
                     * @return RelatedGlobalDomains 是否已赋值
                     */
                    bool RelatedGlobalDomainsHasBeenSet() const;

                    /**
                     * 获取Configuration change time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifyConfigTime Configuration change time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetModifyConfigTime() const;

                    /**
                     * 设置Configuration change time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ModifyConfigTime Configuration change time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetModifyConfigTime(const uint64_t& _modifyConfigTime);

                    /**
                     * 判断参数 ModifyConfigTime 是否已赋值
                     * @return ModifyConfigTime 是否已赋值
                     */
                    bool ModifyConfigTimeHasBeenSet() const;

                private:

                    /**
                     * Connection instance ID; It's an old parameter, please switch to ProxyId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Project ID.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Connection name.
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Access region.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Origin server region.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * Bandwidth. Unit: Mbps.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Concurrence. Unit: requests/second.
                     */
                    int64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * Connection status:
RUNNING: running;
CREATING: creating;
DESTROYING: terminating;
OPENING: enabling;
CLOSING: disabling;
CLOSED: disabled;
ADJUSTING: adjusting configuration
ISOLATING: isolating (it's triggered when the account is in arrears);
ISOLATED: isolated (it's triggered when the account is in arrears);
UNKNOWN: unknown status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Accessed domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Accessed IP.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Connection versions: 1.0, 2.0, 3.0.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Connection instance ID; It's a new parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 1: this connection is expandable; 0: this connection is not expandable.
                     */
                    int64_t m_scalarable;
                    bool m_scalarableHasBeenSet;

                    /**
                     * Supported protocol types.
                     */
                    std::vector<std::string> m_supportProtocols;
                    bool m_supportProtocolsHasBeenSet;

                    /**
                     * Connection group ID. This field exists if a connection belongs to a connection group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Security policy ID. This field exists if security policies are configured.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Access region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RegionDetail m_accessRegionInfo;
                    bool m_accessRegionInfoHasBeenSet;

                    /**
                     * Origin server region details, including region ID and region name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * Forwarding IP of the connection
                     */
                    std::string m_forwardIP;
                    bool m_forwardIPHasBeenSet;

                    /**
                     * Tag list. This field is an empty list if no tags exist.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Whether security groups are supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_supportSecurity;
                    bool m_supportSecurityHasBeenSet;

                    /**
                     * Billing mode. 0: bill-by-bandwidth; 1: bill-by-traffic.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * List of domain names associated with resolution record
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_relatedGlobalDomains;
                    bool m_relatedGlobalDomainsHasBeenSet;

                    /**
                     * Configuration change time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_modifyConfigTime;
                    bool m_modifyConfigTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYINFO_H_
