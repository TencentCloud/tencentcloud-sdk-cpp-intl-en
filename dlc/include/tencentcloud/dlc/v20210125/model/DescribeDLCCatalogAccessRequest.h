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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDLCCatalogAccess request structure.
                */
                class DescribeDLCCatalogAccessRequest : public AbstractModel
                {
                public:
                    DescribeDLCCatalogAccessRequest();
                    ~DescribeDLCCatalogAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Displayed records
                     * @return Limit Displayed records
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Displayed records
                     * @param _limit Displayed records
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Number of records
                     * @return Offset Number of records
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Number of records
                     * @param _offset Number of records
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter criteria
                     * @return Filter Filter criteria
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filter criteria
                     * @param _filter Filter criteria
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * Displayed records
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Number of records
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDLCCATALOGACCESSREQUEST_H_
