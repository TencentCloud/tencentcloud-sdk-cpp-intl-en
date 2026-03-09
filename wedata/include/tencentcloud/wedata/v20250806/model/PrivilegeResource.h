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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_

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
                * Permission resource model.
                */
                class PrivilegeResource : public AbstractModel
                {
                public:
                    PrivilegeResource();
                    ~PrivilegeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type, Catalog, Schema.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type, Catalog, Schema.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type, Catalog, Schema.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Resource type, Catalog, Schema.
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
                     * 获取Resource URI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceUri Resource URI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置Resource URI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceUri Resource URI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceUri(const std::string& _resourceUri);

                    /**
                     * 判断参数 ResourceUri 是否已赋值
                     * @return ResourceUri 是否已赋值
                     * 
                     */
                    bool ResourceUriHasBeenSet() const;

                private:

                    /**
                     * Resource type, Catalog, Schema.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource URI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_
