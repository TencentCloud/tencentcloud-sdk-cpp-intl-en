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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data exploration file resources.
                */
                class ExploreFileResource : public AbstractModel
                {
                public:
                    ExploreFileResource();
                    ~ExploreFileResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type, can only be two types: folder, script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type, can only be two types: folder, script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type, can only be two types: folder, script.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Resource type, can only be two types: folder, script.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource ID: directory ID or script ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID: directory ID or script ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID: directory ID or script ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceId Resource ID: directory ID or script ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Full path id for recursive authentication.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceIdForPath Full path id for recursive authentication.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceIdForPath() const;

                    /**
                     * 设置Full path id for recursive authentication.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceIdForPath Full path id for recursive authentication.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceIdForPath(const std::string& _resourceIdForPath);

                    /**
                     * 判断参数 ResourceIdForPath 是否已赋值
                     * @return ResourceIdForPath 是否已赋值
                     * 
                     */
                    bool ResourceIdForPathHasBeenSet() const;

                    /**
                     * 获取cfs path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceCFSPath cfs path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceCFSPath() const;

                    /**
                     * 设置cfs path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceCFSPath cfs path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceCFSPath(const std::string& _resourceCFSPath);

                    /**
                     * 判断参数 ResourceCFSPath 是否已赋值
                     * @return ResourceCFSPath 是否已赋值
                     * 
                     */
                    bool ResourceCFSPathHasBeenSet() const;

                private:

                    /**
                     * Resource type, can only be two types: folder, script.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource ID: directory ID or script ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Full path id for recursive authentication.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceIdForPath;
                    bool m_resourceIdForPathHasBeenSet;

                    /**
                     * cfs path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceCFSPath;
                    bool m_resourceCFSPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_
