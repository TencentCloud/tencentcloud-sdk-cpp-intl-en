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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeSupportedProducts response structure.
                */
                class DescribeSupportedProductsResponse : public AbstractModel
                {
                public:
                    DescribeSupportedProductsResponse();
                    ~DescribeSupportedProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of all supported Tencent Cloud products.
The correspondence between each cloud product and secrets type is as follows:When `SecretType` is 1, the list of supported cloud products includes: Mysql, Tdsql-mysql, Tdsql_C_Mysql;When `SecretType` is 2, the supported product list is: Cvm;When `SecretType` is 3, the supported product list is: Cam (To use this function, you need to contact the cloud assistant to activate the allowlist separately);When `SecretType` is 4, the supported product list is: Redis.
                     * @return Products List of all supported Tencent Cloud products.
The correspondence between each cloud product and secrets type is as follows:When `SecretType` is 1, the list of supported cloud products includes: Mysql, Tdsql-mysql, Tdsql_C_Mysql;When `SecretType` is 2, the supported product list is: Cvm;When `SecretType` is 3, the supported product list is: Cam (To use this function, you need to contact the cloud assistant to activate the allowlist separately);When `SecretType` is 4, the supported product list is: Redis.
                     * 
                     */
                    std::vector<std::string> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取Number of supported services
                     * @return TotalCount Number of supported services
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of all supported Tencent Cloud products.
The correspondence between each cloud product and secrets type is as follows:When `SecretType` is 1, the list of supported cloud products includes: Mysql, Tdsql-mysql, Tdsql_C_Mysql;When `SecretType` is 2, the supported product list is: Cvm;When `SecretType` is 3, the supported product list is: Cam (To use this function, you need to contact the cloud assistant to activate the allowlist separately);When `SecretType` is 4, the supported product list is: Redis.
                     */
                    std::vector<std::string> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * Number of supported services
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBESUPPORTEDPRODUCTSRESPONSE_H_
