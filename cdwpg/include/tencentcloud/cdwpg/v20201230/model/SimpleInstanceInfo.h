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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ChargeProperties.h>
#include <tencentcloud/cdwpg/v20201230/model/ResourceInfo.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Cluster information.
                */
                class SimpleInstanceInfo : public AbstractModel
                {
                public:
                    SimpleInstanceInfo();
                    ~SimpleInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ID ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iD ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Instance Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance Id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Instance Id
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance Name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Zone
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取User VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserVPCID User VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserVPCID() const;

                    /**
                     * 设置User VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userVPCID User VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserVPCID(const std::string& _userVPCID);

                    /**
                     * 判断参数 UserVPCID 是否已赋值
                     * @return UserVPCID 是否已赋值
                     * 
                     */
                    bool UserVPCIDHasBeenSet() const;

                    /**
                     * 获取User Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserSubnetID User Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserSubnetID() const;

                    /**
                     * 设置User Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userSubnetID User Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserSubnetID(const std::string& _userSubnetID);

                    /**
                     * 判断参数 UserSubnetID 是否已赋值
                     * @return UserSubnetID 是否已赋值
                     * 
                     */
                    bool UserSubnetIDHasBeenSet() const;

                    /**
                     * 获取CreateTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime CreateTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置CreateTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime CreateTime
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取ExpireTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime ExpireTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置ExpireTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime ExpireTime
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Access Infomation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessInfo Access Infomation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置Access Infomation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessInfo Access Infomation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取Renew Flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Renew Flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Renew Flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Renew Flag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Charge Properties
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeProperties Charge Properties
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置Charge Properties
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeProperties Charge Properties
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取Resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resources Resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ResourceInfo> GetResources() const;

                    /**
                     * 设置Resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resources Resources
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResources(const std::vector<ResourceInfo>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tags
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance Id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance Name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Zone
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * User VPC ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userVPCID;
                    bool m_userVPCIDHasBeenSet;

                    /**
                     * User Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userSubnetID;
                    bool m_userSubnetIDHasBeenSet;

                    /**
                     * CreateTime
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * ExpireTime
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Access Infomation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * Renew Flag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Charge Properties
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * Resources
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ResourceInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Tags
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_
