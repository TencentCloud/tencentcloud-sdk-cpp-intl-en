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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPOrderList request structure.
                */
                class DescribeCWPOrderListRequest : public AbstractModel
                {
                public:
                    DescribeCWPOrderListRequest();
                    ~DescribeCWPOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Take the intersection when filtering with multiple conditions</p><li>ProductCode: product code, starting with p_</li><li>SubProductCode: subproduct code, starting with sp_</li><li>InquireKey: billing item, starting with sv_</li><li>Status: resource status. 1: normal, 2: isolated, 3: terminated</li><li>PayMode: payment mode. 0: pay-as-you-go billing, 1: monthly subscription</li><li>ResourceId: resource ID</li><li>RenewFlag: auto-renewal label. 0: not needed by default (major customers have the auto-renewal ability), 1: auto-renewal, 2: manually set not to automatically renew</li><li>DealNames: sub-order number</li>
                     * @return Filters <p>Take the intersection when filtering with multiple conditions</p><li>ProductCode: product code, starting with p_</li><li>SubProductCode: subproduct code, starting with sp_</li><li>InquireKey: billing item, starting with sv_</li><li>Status: resource status. 1: normal, 2: isolated, 3: terminated</li><li>PayMode: payment mode. 0: pay-as-you-go billing, 1: monthly subscription</li><li>ResourceId: resource ID</li><li>RenewFlag: auto-renewal label. 0: not needed by default (major customers have the auto-renewal ability), 1: auto-renewal, 2: manually set not to automatically renew</li><li>DealNames: sub-order number</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Take the intersection when filtering with multiple conditions</p><li>ProductCode: product code, starting with p_</li><li>SubProductCode: subproduct code, starting with sp_</li><li>InquireKey: billing item, starting with sv_</li><li>Status: resource status. 1: normal, 2: isolated, 3: terminated</li><li>PayMode: payment mode. 0: pay-as-you-go billing, 1: monthly subscription</li><li>ResourceId: resource ID</li><li>RenewFlag: auto-renewal label. 0: not needed by default (major customers have the auto-renewal ability), 1: auto-renewal, 2: manually set not to automatically renew</li><li>DealNames: sub-order number</li>
                     * @param _filters <p>Take the intersection when filtering with multiple conditions</p><li>ProductCode: product code, starting with p_</li><li>SubProductCode: subproduct code, starting with sp_</li><li>InquireKey: billing item, starting with sv_</li><li>Status: resource status. 1: normal, 2: isolated, 3: terminated</li><li>PayMode: payment mode. 0: pay-as-you-go billing, 1: monthly subscription</li><li>ResourceId: resource ID</li><li>RenewFlag: auto-renewal label. 0: not needed by default (major customers have the auto-renewal ability), 1: auto-renewal, 2: manually set not to automatically renew</li><li>DealNames: sub-order number</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Offset. Default value: 0</p>
                     * @return Offset <p>Offset. Default value: 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0</p>
                     * @param _offset <p>Offset. Default value: 0</p>
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
                     * 获取<p>Limit entries. Default: 10. Maximum: 100</p>
                     * @return Limit <p>Limit entries. Default: 10. Maximum: 100</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Limit entries. Default: 10. Maximum: 100</p>
                     * @param _limit <p>Limit entries. Default: 10. Maximum: 100</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>Take the intersection when filtering with multiple conditions</p><li>ProductCode: product code, starting with p_</li><li>SubProductCode: subproduct code, starting with sp_</li><li>InquireKey: billing item, starting with sv_</li><li>Status: resource status. 1: normal, 2: isolated, 3: terminated</li><li>PayMode: payment mode. 0: pay-as-you-go billing, 1: monthly subscription</li><li>ResourceId: resource ID</li><li>RenewFlag: auto-renewal label. 0: not needed by default (major customers have the auto-renewal ability), 1: auto-renewal, 2: manually set not to automatically renew</li><li>DealNames: sub-order number</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Limit entries. Default: 10. Maximum: 100</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPORDERLISTREQUEST_H_
