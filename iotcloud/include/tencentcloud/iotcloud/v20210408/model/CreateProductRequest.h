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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/ProductProperties.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateProduct request structure.
                */
                class CreateProductRequest : public AbstractModel
                {
                public:
                    CreateProductRequest();
                    ~CreateProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product name, which cannot be same as that of an existing product. Naming rule: [a-zA-Z0-9:_-]{1,32}.
                     * @return ProductName Product name, which cannot be same as that of an existing product. Naming rule: [a-zA-Z0-9:_-]{1,32}.
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name, which cannot be same as that of an existing product. Naming rule: [a-zA-Z0-9:_-]{1,32}.
                     * @param ProductName Product name, which cannot be same as that of an existing product. Naming rule: [a-zA-Z0-9:_-]{1,32}.
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Product properties
                     * @return ProductProperties Product properties
                     */
                    ProductProperties GetProductProperties() const;

                    /**
                     * 设置Product properties
                     * @param ProductProperties Product properties
                     */
                    void SetProductProperties(const ProductProperties& _productProperties);

                    /**
                     * 判断参数 ProductProperties 是否已赋值
                     * @return ProductProperties 是否已赋值
                     */
                    bool ProductPropertiesHasBeenSet() const;

                    /**
                     * 获取Skey, which is required to create a CLAA product.
                     * @return Skey Skey, which is required to create a CLAA product.
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置Skey, which is required to create a CLAA product.
                     * @param Skey Skey, which is required to create a CLAA product.
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * Product name, which cannot be same as that of an existing product. Naming rule: [a-zA-Z0-9:_-]{1,32}.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Product properties
                     */
                    ProductProperties m_productProperties;
                    bool m_productPropertiesHasBeenSet;

                    /**
                     * Skey, which is required to create a CLAA product.
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEPRODUCTREQUEST_H_
