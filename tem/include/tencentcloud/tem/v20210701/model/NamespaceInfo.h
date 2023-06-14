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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_

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
                * Basic information of the namespace
                */
                class NamespaceInfo : public AbstractModel
                {
                public:
                    NamespaceInfo();
                    ~NamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return EnvironmentId ID
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置ID
                     * @param _environmentId ID
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
                     * 获取(Disused) Name
                     * @return NamespaceName (Disused) Name
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置(Disused) Name
                     * @param _namespaceName (Disused) Name
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
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
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
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
                     * 获取Array of subnet IDs
                     * @return SubnetIds Array of subnet IDs
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置Array of subnet IDs
                     * @param _subnetIds Array of subnet IDs
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Creation time
                     * @return CreatedDate Creation time
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置Creation time
                     * @param _createdDate Creation time
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentName Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _environmentName Environment name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取APM instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApmInstanceId APM instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApmInstanceId() const;

                    /**
                     * 设置APM instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apmInstanceId APM instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApmInstanceId(const std::string& _apmInstanceId);

                    /**
                     * 判断参数 ApmInstanceId 是否已赋值
                     * @return ApmInstanceId 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether the environment is locked. `1`: Locked, `0`: Not locked
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Locked Whether the environment is locked. `1`: Locked, `0`: Not locked
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置Whether the environment is locked. `1`: Locked, `0`: Not locked
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _locked Whether the environment is locked. `1`: Locked, `0`: Not locked
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Tags Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _tags Tag
Note: This field may return `null`, indicating that no valid value was found.
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

                private:

                    /**
                     * ID
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * (Disused) Name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Array of subnet IDs
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Environment name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * APM instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apmInstanceId;
                    bool m_apmInstanceIdHasBeenSet;

                    /**
                     * Whether the environment is locked. `1`: Locked, `0`: Not locked
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Tag
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Environment type. Values: `test`, `pre`, `prod`
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NAMESPACEINFO_H_
