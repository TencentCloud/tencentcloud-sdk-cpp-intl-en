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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Resource list information response parameters structure
                */
                class ResourceListInfo : public AbstractModel
                {
                public:
                    ResourceListInfo();
                    ~ResourceListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type
                     * @return ResourceType Resource type
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
                     * @param _resourceType Resource type
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource name
                     * @return ResourceName Resource name
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
                     * @param _resourceName Resource name
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Region

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceRegion Region

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Region

Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceRegion Region

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Resource Status

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceStatus Resource Status

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceStatus() const;

                    /**
                     * 设置Resource Status

Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceStatus Resource Status

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceStatus(const std::string& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取1: Deleted. 2: Not deleted.
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceDelete 1: Deleted. 2: Not deleted.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    uint64_t GetResourceDelete() const;

                    /**
                     * 设置1: Deleted. 2: Not deleted.
Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceDelete 1: Deleted. 2: Not deleted.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceDelete(const uint64_t& _resourceDelete);

                    /**
                     * 判断参数 ResourceDelete 是否已赋值
                     * @return ResourceDelete 是否已赋值
                     * 
                     */
                    bool ResourceDeleteHasBeenSet() const;

                    /**
                     * 获取Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceCreateTime Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 设置Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceCreateTime Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceCreateTime(const std::string& _resourceCreateTime);

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Tag information

Note: This field may return null, indicating that no valid value is found.
                     * @return Tags Tag information

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information

Note: This field may return null, indicating that no valid value is found.
                     * @param _tags Tag information

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Availability zone

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceZone Availability zone

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceZone() const;

                    /**
                     * 设置Availability zone

Note: This field may return null, indicating that no valid value is found.
                     * @param _resourceZone Availability zone

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResourceZone(const std::string& _resourceZone);

                    /**
                     * 判断参数 ResourceZone 是否已赋值
                     * @return ResourceZone 是否已赋值
                     * 
                     */
                    bool ResourceZoneHasBeenSet() const;

                    /**
                     * 获取Compliance status.
Note: This field may return null, indicating that no valid value is found.
                     * @return ComplianceResult Compliance status.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置Compliance status.
Note: This field may return null, indicating that no valid value is found.
                     * @param _complianceResult Compliance status.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetComplianceResult(const std::string& _complianceResult);

                    /**
                     * 判断参数 ComplianceResult 是否已赋值
                     * @return ComplianceResult 是否已赋值
                     * 
                     */
                    bool ComplianceResultHasBeenSet() const;

                private:

                    /**
                     * Resource type
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource name
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Region

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource Status

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 1: Deleted. 2: Not deleted.
Note: This field may return null, indicating that no valid value is found.
                     */
                    uint64_t m_resourceDelete;
                    bool m_resourceDeleteHasBeenSet;

                    /**
                     * Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * Tag information

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Availability zone

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceZone;
                    bool m_resourceZoneHasBeenSet;

                    /**
                     * Compliance status.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_
