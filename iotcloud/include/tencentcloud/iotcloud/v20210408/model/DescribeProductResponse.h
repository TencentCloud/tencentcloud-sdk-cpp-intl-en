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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRODUCTRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRODUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/ProductMetadata.h>
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
                * DescribeProduct response structure.
                */
                class DescribeProductResponse : public AbstractModel
                {
                public:
                    DescribeProductResponse();
                    ~DescribeProductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Product ID
                     * @return ProductId Product ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Product metadata
                     * @return ProductMetadata Product metadata
                     * 
                     */
                    ProductMetadata GetProductMetadata() const;

                    /**
                     * 判断参数 ProductMetadata 是否已赋值
                     * @return ProductMetadata 是否已赋值
                     * 
                     */
                    bool ProductMetadataHasBeenSet() const;

                    /**
                     * 获取Product properties
                     * @return ProductProperties Product properties
                     * 
                     */
                    ProductProperties GetProductProperties() const;

                    /**
                     * 判断参数 ProductProperties 是否已赋值
                     * @return ProductProperties 是否已赋值
                     * 
                     */
                    bool ProductPropertiesHasBeenSet() const;

                private:

                    /**
                     * Product ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Product metadata
                     */
                    ProductMetadata m_productMetadata;
                    bool m_productMetadataHasBeenSet;

                    /**
                     * Product properties
                     */
                    ProductProperties m_productProperties;
                    bool m_productPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRODUCTRESPONSE_H_
