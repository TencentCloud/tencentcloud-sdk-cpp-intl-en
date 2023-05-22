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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICSITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Resource statistical items
                */
                class ResourceStatisticsItem : public AbstractModel
                {
                public:
                    ResourceStatisticsItem();
                    ~ResourceStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type, such as CVM, ENI
                     * @return ResourceType Resource type, such as CVM, ENI
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type, such as CVM, ENI
                     * @param ResourceType Resource type, such as CVM, ENI
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource name.
                     * @return ResourceName Resource name.
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name.
                     * @param ResourceName Resource name.
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Number of resources
                     * @return ResourceCount Number of resources
                     */
                    uint64_t GetResourceCount() const;

                    /**
                     * 设置Number of resources
                     * @param ResourceCount Number of resources
                     */
                    void SetResourceCount(const uint64_t& _resourceCount);

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     */
                    bool ResourceCountHasBeenSet() const;

                private:

                    /**
                     * Resource type, such as CVM, ENI
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource name.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * Number of resources
                     */
                    uint64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCESTATISTICSITEM_H_
