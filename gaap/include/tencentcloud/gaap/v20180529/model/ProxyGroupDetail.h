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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_

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
                * Connection group details
                */
                class ProxyGroupDetail : public AbstractModel
                {
                public:
                    ProxyGroupDetail();
                    ~ProxyGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Number of connections in connection group
                     * @return ProxyNum Number of connections in connection group
                     */
                    int64_t GetProxyNum() const;

                    /**
                     * 设置Number of connections in connection group
                     * @param ProxyNum Number of connections in connection group
                     */
                    void SetProxyNum(const int64_t& _proxyNum);

                    /**
                     * 判断参数 ProxyNum 是否已赋值
                     * @return ProxyNum 是否已赋值
                     */
                    bool ProxyNumHasBeenSet() const;

                    /**
                     * 获取Connection group status:
0: running normally;
1: creating;
4: terminating;
11: migrating;
                     * @return Status Connection group status:
0: running normally;
1: creating;
4: terminating;
11: migrating;
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Connection group status:
0: running normally;
1: creating;
4: terminating;
11: migrating;
                     * @param Status Connection group status:
0: running normally;
1: creating;
4: terminating;
11: migrating;
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Owner UIN
                     * @return OwnerUin Owner UIN
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner UIN
                     * @param OwnerUin Owner UIN
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Creation UIN
                     * @return CreateUin Creation UIN
                     */
                    std::string GetCreateUin() const;

                    /**
                     * 设置Creation UIN
                     * @param CreateUin Creation UIN
                     */
                    void SetCreateUin(const std::string& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Connection name
                     * @return GroupName Connection name
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Connection name
                     * @param GroupName Connection name
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Default IP of domain name resolution for connection groups
                     * @return DnsDefaultIp Default IP of domain name resolution for connection groups
                     */
                    std::string GetDnsDefaultIp() const;

                    /**
                     * 设置Default IP of domain name resolution for connection groups
                     * @param DnsDefaultIp Default IP of domain name resolution for connection groups
                     */
                    void SetDnsDefaultIp(const std::string& _dnsDefaultIp);

                    /**
                     * 判断参数 DnsDefaultIp 是否已赋值
                     * @return DnsDefaultIp 是否已赋值
                     */
                    bool DnsDefaultIpHasBeenSet() const;

                    /**
                     * 获取Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Domain Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Target region
                     * @return RealServerRegionInfo Target region
                     */
                    RegionDetail GetRealServerRegionInfo() const;

                    /**
                     * 设置Target region
                     * @param RealServerRegionInfo Target region
                     */
                    void SetRealServerRegionInfo(const RegionDetail& _realServerRegionInfo);

                    /**
                     * 判断参数 RealServerRegionInfo 是否已赋值
                     * @return RealServerRegionInfo 是否已赋值
                     */
                    bool RealServerRegionInfoHasBeenSet() const;

                    /**
                     * 获取Whether it is an old connection group, i.e., those created before August 3, 2018.
                     * @return IsOldGroup Whether it is an old connection group, i.e., those created before August 3, 2018.
                     */
                    bool GetIsOldGroup() const;

                    /**
                     * 设置Whether it is an old connection group, i.e., those created before August 3, 2018.
                     * @param IsOldGroup Whether it is an old connection group, i.e., those created before August 3, 2018.
                     */
                    void SetIsOldGroup(const bool& _isOldGroup);

                    /**
                     * 判断参数 IsOldGroup 是否已赋值
                     * @return IsOldGroup 是否已赋值
                     */
                    bool IsOldGroupHasBeenSet() const;

                    /**
                     * 获取Connection group ID
                     * @return GroupId Connection group ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID
                     * @param GroupId Connection group ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagSet Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Security policy ID. This field exists if security policies are set.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PolicyId Security policy ID. This field exists if security policies are set.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID. This field exists if security policies are set.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param PolicyId Security policy ID. This field exists if security policies are set.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Connection group version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Version Connection group version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Connection group version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Version Connection group version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Describes how the connection obtains client IPs. 0: TOA; 1: Proxy Protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClientIPMethod Describes how the connection obtains client IPs. 0: TOA; 1: Proxy Protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetClientIPMethod() const;

                    /**
                     * 设置Describes how the connection obtains client IPs. 0: TOA; 1: Proxy Protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ClientIPMethod Describes how the connection obtains client IPs. 0: TOA; 1: Proxy Protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClientIPMethod(const std::vector<int64_t>& _clientIPMethod);

                    /**
                     * 判断参数 ClientIPMethod 是否已赋值
                     * @return ClientIPMethod 是否已赋值
                     */
                    bool ClientIPMethodHasBeenSet() const;

                    /**
                     * 获取IP version. Valid values: `IPv4` (default), `IPv6`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return IPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP version. Valid values: `IPv4` (default), `IPv6`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param IPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (silver connection group), and `CrossBorder` (cross-MLC-border connection group).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return PackageType Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (silver connection group), and `CrossBorder` (cross-MLC-border connection group).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (silver connection group), and `CrossBorder` (cross-MLC-border connection group).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param PackageType Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (silver connection group), and `CrossBorder` (cross-MLC-border connection group).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP3. Valid values:
`0`: disable;
`1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable;
`1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Specifies whether to enable HTTP3. Valid values:
`0`: disable;
`1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: disable;
`1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Number of connections in connection group
                     */
                    int64_t m_proxyNum;
                    bool m_proxyNumHasBeenSet;

                    /**
                     * Connection group status:
0: running normally;
1: creating;
4: terminating;
11: migrating;
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Owner UIN
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creation UIN
                     */
                    std::string m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Connection name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Default IP of domain name resolution for connection groups
                     */
                    std::string m_dnsDefaultIp;
                    bool m_dnsDefaultIpHasBeenSet;

                    /**
                     * Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Target region
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * Whether it is an old connection group, i.e., those created before August 3, 2018.
                     */
                    bool m_isOldGroup;
                    bool m_isOldGroupHasBeenSet;

                    /**
                     * Connection group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Security policy ID. This field exists if security policies are set.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Connection group version
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Describes how the connection obtains client IPs. 0: TOA; 1: Proxy Protocol.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_clientIPMethod;
                    bool m_clientIPMethodHasBeenSet;

                    /**
                     * IP version. Valid values: `IPv4` (default), `IPv6`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (silver connection group), and `CrossBorder` (cross-MLC-border connection group).
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Specifies whether to enable HTTP3. Valid values:
`0`: disable;
`1`: enable.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPDETAIL_H_
