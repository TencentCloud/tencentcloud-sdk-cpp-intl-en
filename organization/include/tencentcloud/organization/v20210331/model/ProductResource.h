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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PRODUCTRESOURCE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PRODUCTRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Product resources
                */
                class ProductResource : public AbstractModel
                {
                public:
                    ProductResource();
                    ~ProductResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product resource ID.
                     * @return ProductResourceId Product resource ID.
                     * 
                     */
                    std::string GetProductResourceId() const;

                    /**
                     * 设置Product resource ID.
                     * @param _productResourceId Product resource ID.
                     * 
                     */
                    void SetProductResourceId(const std::string& _productResourceId);

                    /**
                     * 判断参数 ProductResourceId 是否已赋值
                     * @return ProductResourceId 是否已赋值
                     * 
                     */
                    bool ProductResourceIdHasBeenSet() const;

                    /**
                     * 获取The last section of the six-segment resource description.
                     * @return ResourceGrantLast The last section of the six-segment resource description.
                     * @deprecated
                     */
                    std::string GetResourceGrantLast() const;

                    /**
                     * 设置The last section of the six-segment resource description.
                     * @param _resourceGrantLast The last section of the six-segment resource description.
                     * @deprecated
                     */
                    void SetResourceGrantLast(const std::string& _resourceGrantLast);

                    /**
                     * 判断参数 ResourceGrantLast 是否已赋值
                     * @return ResourceGrantLast 是否已赋值
                     * @deprecated
                     */
                    bool ResourceGrantLastHasBeenSet() const;

                private:

                    /**
                     * Product resource ID.
                     */
                    std::string m_productResourceId;
                    bool m_productResourceIdHasBeenSet;

                    /**
                     * The last section of the six-segment resource description.
                     */
                    std::string m_resourceGrantLast;
                    bool m_resourceGrantLastHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_PRODUCTRESOURCE_H_
