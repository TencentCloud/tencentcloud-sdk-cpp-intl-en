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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_TAGRESOURCEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_TAGRESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Resource information of the tag
                */
                class TagResourceInfo : public AbstractModel
                {
                public:
                    TagResourceInfo();
                    ~TagResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource types:
`Proxy`: Connection
`ProxyGroup`: Connection group
`RealServer`: Origin server
                     * @return ResourceType Resource types:
`Proxy`: Connection
`ProxyGroup`: Connection group
`RealServer`: Origin server
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource types:
`Proxy`: Connection
`ProxyGroup`: Connection group
`RealServer`: Origin server
                     * @param _resourceType Resource types:
`Proxy`: Connection
`ProxyGroup`: Connection group
`RealServer`: Origin server
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
                     * 获取Instance ID
                     * @return ResourceId Instance ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Instance ID
                     * @param _resourceId Instance ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Resource types:
`Proxy`: Connection
`ProxyGroup`: Connection group
`RealServer`: Origin server
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_TAGRESOURCEINFO_H_
