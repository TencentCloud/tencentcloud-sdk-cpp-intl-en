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
                * Resource list information
                */
                class ResourceListInfo : public AbstractModel
                {
                public:
                    ResourceListInfo();
                    ~ResourceListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type.
                     * @return ResourceType Resource type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type.
                     * @param _resourceType Resource type.
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
                     * 获取Region.
                     * @return ResourceRegion Region.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Region.
                     * @param _resourceRegion Region.
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
                     * 获取Resource status.
                     * @return ResourceStatus Resource status.
                     * 
                     */
                    std::string GetResourceStatus() const;

                    /**
                     * 设置Resource status.
                     * @param _resourceStatus Resource status.
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
                     * 获取Valid values: 1 (deleted) and 2 (not deleted).
                     * @return ResourceDelete Valid values: 1 (deleted) and 2 (not deleted).
                     * 
                     */
                    uint64_t GetResourceDelete() const;

                    /**
                     * 设置Valid values: 1 (deleted) and 2 (not deleted).
                     * @param _resourceDelete Valid values: 1 (deleted) and 2 (not deleted).
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
                     * @return ResourceCreateTime Resource creation time
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 设置Resource creation time
                     * @param _resourceCreateTime Resource creation time
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
                     * 获取Tag information.
                     * @return Tags Tag information.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information.
                     * @param _tags Tag information.
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
                     * 获取AZ.
                     * @return ResourceZone AZ.
                     * 
                     */
                    std::string GetResourceZone() const;

                    /**
                     * 设置AZ.
                     * @param _resourceZone AZ.
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
                     * 获取Compliance status
                     * @return ComplianceResult Compliance status
                     * 
                     */
                    std::string GetComplianceResult() const;

                    /**
                     * 设置Compliance status
                     * @param _complianceResult Compliance status
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
                     * Resource type.
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
                     * Region.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource status.
                     */
                    std::string m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * Valid values: 1 (deleted) and 2 (not deleted).
                     */
                    uint64_t m_resourceDelete;
                    bool m_resourceDeleteHasBeenSet;

                    /**
                     * Resource creation time
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * Tag information.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * AZ.
                     */
                    std::string m_resourceZone;
                    bool m_resourceZoneHasBeenSet;

                    /**
                     * Compliance status
                     */
                    std::string m_complianceResult;
                    bool m_complianceResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_RESOURCELISTINFO_H_
