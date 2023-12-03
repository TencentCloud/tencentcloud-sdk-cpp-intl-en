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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribePayType request structure.
                */
                class DescribePayTypeRequest : public AbstractModel
                {
                public:
                    DescribePayTypeRequest();
                    ~DescribePayTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the service area.
`mainland`: Queries billing methods available in the Chinese mainland.
`overseas`: Queries billing methods available in the regions outside the Chinese mainland.
`Global`: Queries billing methods available across the globe.
If it is not specified, it defaults to `mainland`.
                     * @return Area Specifies the service area.
`mainland`: Queries billing methods available in the Chinese mainland.
`overseas`: Queries billing methods available in the regions outside the Chinese mainland.
`Global`: Queries billing methods available across the globe.
If it is not specified, it defaults to `mainland`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the service area.
`mainland`: Queries billing methods available in the Chinese mainland.
`overseas`: Queries billing methods available in the regions outside the Chinese mainland.
`Global`: Queries billing methods available across the globe.
If it is not specified, it defaults to `mainland`.
                     * @param _area Specifies the service area.
`mainland`: Queries billing methods available in the Chinese mainland.
`overseas`: Queries billing methods available in the regions outside the Chinese mainland.
`Global`: Queries billing methods available across the globe.
If it is not specified, it defaults to `mainland`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @return Product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @param _product Specifies the product to query, either `cdn` (default) or `ecdn`.
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
                     * 获取Specifies resources.
`flux`: Traffic package
`https`: HTTPS requests
It defaults to `flux` if not specified. 
                     * @return Type Specifies resources.
`flux`: Traffic package
`https`: HTTPS requests
It defaults to `flux` if not specified. 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies resources.
`flux`: Traffic package
`https`: HTTPS requests
It defaults to `flux` if not specified. 
                     * @param _type Specifies resources.
`flux`: Traffic package
`https`: HTTPS requests
It defaults to `flux` if not specified. 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Specifies the service area.
`mainland`: Queries billing methods available in the Chinese mainland.
`overseas`: Queries billing methods available in the regions outside the Chinese mainland.
`Global`: Queries billing methods available across the globe.
If it is not specified, it defaults to `mainland`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Specifies resources.
`flux`: Traffic package
`https`: HTTPS requests
It defaults to `flux` if not specified. 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
