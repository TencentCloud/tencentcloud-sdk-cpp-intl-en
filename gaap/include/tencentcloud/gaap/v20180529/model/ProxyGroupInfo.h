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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_

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
                * Connection group details list
                */
                class ProxyGroupInfo : public AbstractModel
                {
                public:
                    ProxyGroupInfo();
                    ~ProxyGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Connection group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Connection group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Connection group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GroupName Connection group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

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
                     * 获取Connection group status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`MOVING`: Migrating
`CHANGING`: Deploying
                     * @return Status Connection group status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`MOVING`: Migrating
`CHANGING`: Deploying
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Connection group status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`MOVING`: Migrating
`CHANGING`: Deploying
                     * @param Status Connection group status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`MOVING`: Migrating
`CHANGING`: Deploying
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tag list.
                     * @return TagSet Tag list.
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置Tag list.
                     * @param TagSet Tag list.
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Connection group version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Version Connection group version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Connection group version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Version Connection group version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether the connection group contains a Microsoft connection
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProxyType Whether the connection group contains a Microsoft connection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetProxyType() const;

                    /**
                     * 设置Whether the connection group contains a Microsoft connection
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ProxyType Whether the connection group contains a Microsoft connection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProxyType(const uint64_t& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable HTTP3. Valid values:
`0`: Disable
`1`: Enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: Disable
`1`: Enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置Specifies whether to enable HTTP3. Valid values:
`0`: Disable
`1`: Enable
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Http3Supported Specifies whether to enable HTTP3. Valid values:
`0`: Disable
`1`: Enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     */
                    bool Http3SupportedHasBeenSet() const;

                    /**
                     * 获取Feature bitmap. Valid values:
`0`: Feature not supported
`1`: Feature supported
Each bit in the bitmap represents a feature:
1st bit: Layer-4 acceleration;
2nd bit: Layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: Dedicated BGP access;
6th bit: Non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FeatureBitmap Feature bitmap. Valid values:
`0`: Feature not supported
`1`: Feature supported
Each bit in the bitmap represents a feature:
1st bit: Layer-4 acceleration;
2nd bit: Layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: Dedicated BGP access;
6th bit: Non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetFeatureBitmap() const;

                    /**
                     * 设置Feature bitmap. Valid values:
`0`: Feature not supported
`1`: Feature supported
Each bit in the bitmap represents a feature:
1st bit: Layer-4 acceleration;
2nd bit: Layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: Dedicated BGP access;
6th bit: Non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FeatureBitmap Feature bitmap. Valid values:
`0`: Feature not supported
`1`: Feature supported
Each bit in the bitmap represents a feature:
1st bit: Layer-4 acceleration;
2nd bit: Layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: Dedicated BGP access;
6th bit: Non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFeatureBitmap(const int64_t& _featureBitmap);

                    /**
                     * 判断参数 FeatureBitmap 是否已赋值
                     * @return FeatureBitmap 是否已赋值
                     */
                    bool FeatureBitmapHasBeenSet() const;

                private:

                    /**
                     * Connection group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Connection group domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Connection group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Target region
                     */
                    RegionDetail m_realServerRegionInfo;
                    bool m_realServerRegionInfoHasBeenSet;

                    /**
                     * Connection group status.
Where:
`RUNNING`: Running
`CREATING`: Creating
`DESTROYING`: Terminating
`MOVING`: Migrating
`CHANGING`: Deploying
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Connection group version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Creation time
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the connection group contains a Microsoft connection
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * Specifies whether to enable HTTP3. Valid values:
`0`: Disable
`1`: Enable
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                    /**
                     * Feature bitmap. Valid values:
`0`: Feature not supported
`1`: Feature supported
Each bit in the bitmap represents a feature:
1st bit: Layer-4 acceleration;
2nd bit: Layer-7 acceleration;
3rd bit: HTTP3 access;
4th bit: IPv6;
5th bit: Dedicated BGP access;
6th bit: Non-BGP access;
7th bit: QoS acceleration.
Note: this field may return `null`, indicating that no valid values can be obtained.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_featureBitmap;
                    bool m_featureBitmapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYGROUPINFO_H_
