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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRESOURCE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Resource type information.
                */
                class ConfigResource : public AbstractModel
                {
                public:
                    ConfigResource();
                    ~ConfigResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取product
                     * @return Product product
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置product
                     * @param _product product
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

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
                     * 获取Resource type name
                     * @return ResourceTypeName Resource type name
                     * 
                     */
                    std::string GetResourceTypeName() const;

                    /**
                     * 设置Resource type name
                     * @param _resourceTypeName Resource type name
                     * 
                     */
                    void SetResourceTypeName(const std::string& _resourceTypeName);

                    /**
                     * 判断参数 ResourceTypeName 是否已赋值
                     * @return ResourceTypeName 是否已赋值
                     * 
                     */
                    bool ResourceTypeNameHasBeenSet() const;

                private:

                    /**
                     * product
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Resource type.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource type name
                     */
                    std::string m_resourceTypeName;
                    bool m_resourceTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_CONFIGRESOURCE_H_
