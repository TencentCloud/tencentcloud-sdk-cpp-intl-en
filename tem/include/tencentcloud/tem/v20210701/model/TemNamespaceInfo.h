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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Namespace object
                */
                class TemNamespaceInfo : public AbstractModel
                {
                public:
                    TemNamespaceInfo();
                    ~TemNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Environment ID
                     * @return EnvironmentId Environment ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment ID
                     * @param _environmentId Environment ID
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Channel
                     * @return Channel Channel
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Channel
                     * @param _channel Channel
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取Environment name
                     * @return EnvironmentName Environment name
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
                     * @param _environmentName Environment name
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return Region Region name
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name
                     * @param _region Region name
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
                     * 获取Environment description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Description Environment description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Environment description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _description Environment description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Status. `1`: terminated; `0`: normal
                     * @return Status Status. `1`: terminated; `0`: normal
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. `1`: terminated; `0`: normal
                     * @param _status Status. `1`: terminated; `0`: normal
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取VPC network
                     * @return Vpc VPC network
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置VPC network
                     * @param _vpc VPC network
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateDate Creation time
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置Creation time
                     * @param _createDate Creation time
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyDate Modification time
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置Modification time
                     * @param _modifyDate Modification time
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取Modifier
                     * @return Modifier Modifier
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置Modifier
                     * @param _modifier Modifier
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Number of applications
                     * @return ApplicationNum Number of applications
                     * 
                     */
                    int64_t GetApplicationNum() const;

                    /**
                     * 设置Number of applications
                     * @param _applicationNum Number of applications
                     * 
                     */
                    void SetApplicationNum(const int64_t& _applicationNum);

                    /**
                     * 判断参数 ApplicationNum 是否已赋值
                     * @return ApplicationNum 是否已赋值
                     * 
                     */
                    bool ApplicationNumHasBeenSet() const;

                    /**
                     * 获取Number of running instances
                     * @return RunInstancesNum Number of running instances
                     * 
                     */
                    int64_t GetRunInstancesNum() const;

                    /**
                     * 设置Number of running instances
                     * @param _runInstancesNum Number of running instances
                     * 
                     */
                    void SetRunInstancesNum(const int64_t& _runInstancesNum);

                    /**
                     * 判断参数 RunInstancesNum 是否已赋值
                     * @return RunInstancesNum 是否已赋值
                     * 
                     */
                    bool RunInstancesNumHasBeenSet() const;

                    /**
                     * 获取Subnet
                     * @return SubnetId Subnet
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet
                     * @param _subnetId Subnet
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
                     * 获取Environment cluster status
                     * @return ClusterStatus Environment cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置Environment cluster status
                     * @param _clusterStatus Environment cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable TSW
                     * @return EnableTswTraceService Whether to enable TSW
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置Whether to enable TSW
                     * @param _enableTswTraceService Whether to enable TSW
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                    /**
                     * 获取Whether the environment is locked. `1`: locked; `0`: not locked
                     * @return Locked Whether the environment is locked. `1`: locked; `0`: not locked
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置Whether the environment is locked. `1`: locked; `0`: not locked
                     * @param _locked Whether the environment is locked. `1`: locked; `0`: not locked
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AppId User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _appId User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取The UIN of sub-account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubAccountUin The UIN of sub-account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置The UIN of sub-account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subAccountUin The UIN of sub-account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Tag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Tag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tags Tag.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasAuthority Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasAuthority() const;

                    /**
                     * 设置Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasAuthority Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasAuthority(const bool& _hasAuthority);

                    /**
                     * 判断参数 HasAuthority 是否已赋值
                     * @return HasAuthority 是否已赋值
                     * 
                     */
                    bool HasAuthorityHasBeenSet() const;

                    /**
                     * 获取Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     * @return EnvType Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _envType Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取Region code
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RegionId Region code
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region code
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _regionId Region code
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Environment ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Channel
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * Environment name
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Environment description
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Status. `1`: terminated; `0`: normal
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * VPC network
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * Modifier
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Number of applications
                     */
                    int64_t m_applicationNum;
                    bool m_applicationNumHasBeenSet;

                    /**
                     * Number of running instances
                     */
                    int64_t m_runInstancesNum;
                    bool m_runInstancesNumHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Environment cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * Whether to enable TSW
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                    /**
                     * Whether the environment is locked. `1`: locked; `0`: not locked
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * User AppId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * The UIN of sub-account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Tag.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether it’s authorized to access the resource
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasAuthority;
                    bool m_hasAuthorityHasBeenSet;

                    /**
                     * Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * Region code
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_
