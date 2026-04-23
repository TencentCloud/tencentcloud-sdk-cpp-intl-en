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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTARESPONSE_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * DescribeUserQuota response structure.
                */
                class DescribeUserQuotaResponse : public AbstractModel
                {
                public:
                    DescribeUserQuotaResponse();
                    ~DescribeUserQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quota Id
                     * @return QuotaId Quota Id
                     * 
                     */
                    int64_t GetQuotaId() const;

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取quota name
                     * @return QuotaName quota name
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 判断参数 QuotaName 是否已赋值
                     * @return QuotaName 是否已赋值
                     * 
                     */
                    bool QuotaNameHasBeenSet() const;

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
                     * 获取Quota unit
                     * @return QuotaUnit Quota unit
                     * 
                     */
                    std::string GetQuotaUnit() const;

                    /**
                     * 判断参数 QuotaUnit 是否已赋值
                     * @return QuotaUnit 是否已赋值
                     * 
                     */
                    bool QuotaUnitHasBeenSet() const;

                    /**
                     * 获取User Quota
                     * @return TotalQuota User Quota
                     * 
                     */
                    int64_t GetTotalQuota() const;

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取Quota usage
                     * @return TotalUsage Quota usage
                     * 
                     */
                    int64_t GetTotalUsage() const;

                    /**
                     * 判断参数 TotalUsage 是否已赋值
                     * @return TotalUsage 是否已赋值
                     * 
                     */
                    bool TotalUsageHasBeenSet() const;

                    /**
                     * 获取Quota description
                     * @return QuotaDescription Quota description
                     * 
                     */
                    std::string GetQuotaDescription() const;

                    /**
                     * 判断参数 QuotaDescription 是否已赋值
                     * @return QuotaDescription 是否已赋值
                     * 
                     */
                    bool QuotaDescriptionHasBeenSet() const;

                private:

                    /**
                     * Quota Id
                     */
                    int64_t m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * quota name
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Quota unit
                     */
                    std::string m_quotaUnit;
                    bool m_quotaUnitHasBeenSet;

                    /**
                     * User Quota
                     */
                    int64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * Quota usage
                     */
                    int64_t m_totalUsage;
                    bool m_totalUsageHasBeenSet;

                    /**
                     * Quota description
                     */
                    std::string m_quotaDescription;
                    bool m_quotaDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEUSERQUOTARESPONSE_H_
