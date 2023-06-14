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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomainPriceNewList request structure.
                */
                class DescribeIntlDomainPriceNewListRequest : public AbstractModel
                {
                public:
                    DescribeIntlDomainPriceNewListRequest();
                    ~DescribeIntlDomainPriceNewListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of domain suffixes for which you want to query prices. This parameter defaults to all suffixes.
                     * @return TldList The list of domain suffixes for which you want to query prices. This parameter defaults to all suffixes.
                     * 
                     */
                    std::vector<std::string> GetTldList() const;

                    /**
                     * 设置The list of domain suffixes for which you want to query prices. This parameter defaults to all suffixes.
                     * @param _tldList The list of domain suffixes for which you want to query prices. This parameter defaults to all suffixes.
                     * 
                     */
                    void SetTldList(const std::vector<std::string>& _tldList);

                    /**
                     * 判断参数 TldList 是否已赋值
                     * @return TldList 是否已赋值
                     * 
                     */
                    bool TldListHasBeenSet() const;

                    /**
                     * 获取The purchase year of the domains for which you want to query prices. This parameter defaults to all years.
                     * @return Year The purchase year of the domains for which you want to query prices. This parameter defaults to all years.
                     * 
                     */
                    std::vector<int64_t> GetYear() const;

                    /**
                     * 设置The purchase year of the domains for which you want to query prices. This parameter defaults to all years.
                     * @param _year The purchase year of the domains for which you want to query prices. This parameter defaults to all years.
                     * 
                     */
                    void SetYear(const std::vector<int64_t>& _year);

                    /**
                     * 判断参数 Year 是否已赋值
                     * @return Year 是否已赋值
                     * 
                     */
                    bool YearHasBeenSet() const;

                    /**
                     * 获取The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * @return Operation The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * 
                     */
                    std::vector<std::string> GetOperation() const;

                    /**
                     * 设置The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * @param _operation The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     * 
                     */
                    void SetOperation(const std::vector<std::string>& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * The list of domain suffixes for which you want to query prices. This parameter defaults to all suffixes.
                     */
                    std::vector<std::string> m_tldList;
                    bool m_tldListHasBeenSet;

                    /**
                     * The purchase year of the domains for which you want to query prices. This parameter defaults to all years.
                     */
                    std::vector<int64_t> m_year;
                    bool m_yearHasBeenSet;

                    /**
                     * The domain purchase type. Valid values: `new`, `renew`, `redem` (redeem), `tran` (transfer in).
                     */
                    std::vector<std::string> m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTREQUEST_H_
