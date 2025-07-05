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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDiscoveredResource response structure.
                */
                class DescribeDiscoveredResourceResponse : public AbstractModel
                {
                public:
                    DescribeDiscoveredResourceResponse();
                    ~DescribeDiscoveredResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceId Resource ID

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource type

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceType Resource type

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource Name

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceName Resource Name

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Resource region

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceRegion Resource region

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Resource availability zone
Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceZone Resource availability zone
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceZone() const;

                    /**
                     * 判断参数 ResourceZone 是否已赋值
                     * @return ResourceZone 是否已赋值
                     * 
                     */
                    bool ResourceZoneHasBeenSet() const;

                    /**
                     * 获取Resource configuration

Note: This field may return null, indicating that no valid value is found.
                     * @return Configuration Resource configuration

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetConfiguration() const;

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * @return ResourceCreateTime Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取Resource tag

Note: This field may return null, indicating that no valid value is found.
                     * @return Tags Resource tag

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Resource update time
Note: This field may return null, indicating that no valid value is found.
                     * @return UpdateTime Resource update time
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Resource ID

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource Name

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Resource region

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Resource availability zone
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceZone;
                    bool m_resourceZoneHasBeenSet;

                    /**
                     * Resource configuration

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * Resource creation time

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * Resource tag

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Resource update time
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_DESCRIBEDISCOVEREDRESOURCERESPONSE_H_
