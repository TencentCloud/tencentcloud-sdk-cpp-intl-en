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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBESITESRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBESITESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/Site.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeSites response structure.
                */
                class DescribeSitesResponse : public AbstractModel
                {
                public:
                    DescribeSitesResponse();
                    ~DescribeSitesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of sites that meet the query conditions
                     * @return SiteSet List of sites that meet the query conditions
                     * 
                     */
                    std::vector<Site> GetSiteSet() const;

                    /**
                     * 判断参数 SiteSet 是否已赋值
                     * @return SiteSet 是否已赋值
                     * 
                     */
                    bool SiteSetHasBeenSet() const;

                    /**
                     * 获取Number of sites that meet the conditions
                     * @return TotalCount Number of sites that meet the conditions
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
                     * List of sites that meet the query conditions
                     */
                    std::vector<Site> m_siteSet;
                    bool m_siteSetHasBeenSet;

                    /**
                     * Number of sites that meet the conditions
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBESITESRESPONSE_H_
