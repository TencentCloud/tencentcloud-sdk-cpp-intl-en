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
`Proxy`: connections;
`ProxyGroup`: connection groups;
`RealServer`: origin servers.
                     * @return ResourceType Resource types:
`Proxy`: connections;
`ProxyGroup`: connection groups;
`RealServer`: origin servers.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource types:
`Proxy`: connections;
`ProxyGroup`: connection groups;
`RealServer`: origin servers.
                     * @param ResourceType Resource types:
`Proxy`: connections;
`ProxyGroup`: connection groups;
`RealServer`: origin servers.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param ResourceId Resource ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * Resource types:
`Proxy`: connections;
`ProxyGroup`: connection groups;
`RealServer`: origin servers.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_TAGRESOURCEINFO_H_
