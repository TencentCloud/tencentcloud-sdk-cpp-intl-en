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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODERESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/PolicyProductList.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryPolicyProductListByCode response structure.
                */
                class QueryPolicyProductListByCodeResponse : public AbstractModel
                {
                public:
                    QueryPolicyProductListByCodeResponse();
                    ~QueryPolicyProductListByCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取policy product list.
                     * @return ProductList policy product list.
                     * 
                     */
                    std::vector<PolicyProductList> GetProductList() const;

                    /**
                     * 判断参数 ProductList 是否已赋值
                     * @return ProductList 是否已赋值
                     * 
                     */
                    bool ProductListHasBeenSet() const;

                    /**
                     * 获取Total number of data entries
                     * @return Total Total number of data entries
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * policy product list.
                     */
                    std::vector<PolicyProductList> m_productList;
                    bool m_productListHasBeenSet;

                    /**
                     * Total number of data entries
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODERESPONSE_H_
