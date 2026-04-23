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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/quota/v20241204/model/Sort.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * DescribeUserQuota request structure.
                */
                class DescribeUserQuotaRequest : public AbstractModel
                {
                public:
                    DescribeUserQuotaRequest();
                    ~DescribeUserQuotaRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Quota id
                     * @return QuotaId Quota id
                     * 
                     */
                    Sort GetQuotaId() const;

                    /**
                     * 设置Quota id
                     * @param _quotaId Quota id
                     * 
                     */
                    void SetQuotaId(const Sort& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取Quota ID of each product
                     * @return QuotaInstanceId Quota ID of each product
                     * 
                     */
                    std::string GetQuotaInstanceId() const;

                    /**
                     * 设置Quota ID of each product
                     * @param _quotaInstanceId Quota ID of each product
                     * 
                     */
                    void SetQuotaInstanceId(const std::string& _quotaInstanceId);

                    /**
                     * 判断参数 QuotaInstanceId 是否已赋值
                     * @return QuotaInstanceId 是否已赋值
                     * 
                     */
                    bool QuotaInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Quota id
                     */
                    Sort m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * Quota ID of each product
                     */
                    std::string m_quotaInstanceId;
                    bool m_quotaInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
