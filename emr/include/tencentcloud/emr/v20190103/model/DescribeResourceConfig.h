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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCECONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeResource.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Output parameters of the DescribeResourceConfig API.
                */
                class DescribeResourceConfig : public AbstractModel
                {
                public:
                    DescribeResourceConfig();
                    ~DescribeResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification management type.
                     * @return ResourceType Specification management type.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Specification management type.
                     * @param _resourceType Specification management type.
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
                     * 获取Specification management data.
                     * @return ResourceData Specification management data.
                     * 
                     */
                    std::vector<NodeResource> GetResourceData() const;

                    /**
                     * 设置Specification management data.
                     * @param _resourceData Specification management data.
                     * 
                     */
                    void SetResourceData(const std::vector<NodeResource>& _resourceData);

                    /**
                     * 判断参数 ResourceData 是否已赋值
                     * @return ResourceData 是否已赋值
                     * 
                     */
                    bool ResourceDataHasBeenSet() const;

                private:

                    /**
                     * Specification management type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Specification management data.
                     */
                    std::vector<NodeResource> m_resourceData;
                    bool m_resourceDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCECONFIG_H_
