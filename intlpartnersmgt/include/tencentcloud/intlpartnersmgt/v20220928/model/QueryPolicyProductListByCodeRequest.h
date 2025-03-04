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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODEREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryPolicyProductListByCode request structure.
                */
                class QueryPolicyProductListByCodeRequest : public AbstractModel
                {
                public:
                    QueryPolicyProductListByCodeRequest();
                    ~QueryPolicyProductListByCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy code.
                     * @return PolicyCode Policy code.
                     * 
                     */
                    std::string GetPolicyCode() const;

                    /**
                     * 设置Policy code.
                     * @param _policyCode Policy code.
                     * 
                     */
                    void SetPolicyCode(const std::string& _policyCode);

                    /**
                     * 判断参数 PolicyCode 是否已赋值
                     * @return PolicyCode 是否已赋值
                     * 
                     */
                    bool PolicyCodeHasBeenSet() const;

                    /**
                     * 获取The code of the ProductName field in the  bill data.
                     * @return ProductCode The code of the ProductName field in the  bill data.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置The code of the ProductName field in the  bill data.
                     * @param _productCode The code of the ProductName field in the  bill data.
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取The ProductName field value in the billing data.
                     * @return ProductName The ProductName field value in the billing data.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置The ProductName field value in the billing data.
                     * @param _productName The ProductName field value in the billing data.
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
                     * 获取The code of the SubProductName field in the  bill data.
                     * @return SubProductCode The code of the SubProductName field in the  bill data.
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置The code of the SubProductName field in the  bill data.
                     * @param _subProductCode The code of the SubProductName field in the  bill data.
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取The SubProductName field value in the billing data.
                     * @return SubProductName The SubProductName field value in the billing data.
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置The SubProductName field value in the billing data.
                     * @param _subProductName The SubProductName field value in the billing data.
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取Page parameter: current page number. The minimum value is 1.
                     * @return Page Page parameter: current page number. The minimum value is 1.
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置Page parameter: current page number. The minimum value is 1.
                     * @param _page Page parameter: current page number. The minimum value is 1.
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Page parameter: Indicates the number of entries per page. Value range: [1, 200], default is 200.
                     * @return PageSize Page parameter: Indicates the number of entries per page. Value range: [1, 200], default is 200.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page parameter: Indicates the number of entries per page. Value range: [1, 200], default is 200.
                     * @param _pageSize Page parameter: Indicates the number of entries per page. Value range: [1, 200], default is 200.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Policy code.
                     */
                    std::string m_policyCode;
                    bool m_policyCodeHasBeenSet;

                    /**
                     * The code of the ProductName field in the  bill data.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * The ProductName field value in the billing data.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * The code of the SubProductName field in the  bill data.
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * The SubProductName field value in the billing data.
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * Page parameter: current page number. The minimum value is 1.
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Page parameter: Indicates the number of entries per page. Value range: [1, 200], default is 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPOLICYPRODUCTLISTBYCODEREQUEST_H_
