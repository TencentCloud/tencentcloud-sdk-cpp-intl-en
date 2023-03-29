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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/PriceInfoNew.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeIntlDomainPriceNewList response structure.
                */
                class DescribeIntlDomainPriceNewListResponse : public AbstractModel
                {
                public:
                    DescribeIntlDomainPriceNewListResponse();
                    ~DescribeIntlDomainPriceNewListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The price list of domains.
                     * @return PriceList The price list of domains.
                     */
                    std::vector<PriceInfoNew> GetPriceList() const;

                    /**
                     * 判断参数 PriceList 是否已赋值
                     * @return PriceList 是否已赋值
                     */
                    bool PriceListHasBeenSet() const;

                private:

                    /**
                     * The price list of domains.
                     */
                    std::vector<PriceInfoNew> m_priceList;
                    bool m_priceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEINTLDOMAINPRICENEWLISTRESPONSE_H_
