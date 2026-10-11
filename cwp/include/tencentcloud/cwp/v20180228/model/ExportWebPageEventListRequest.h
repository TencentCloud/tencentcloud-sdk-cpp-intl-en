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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTWEBPAGEEVENTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTWEBPAGEEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportWebPageEventList request structure.
                */
                class ExportWebPageEventListRequest : public AbstractModel
                {
                public:
                    ExportWebPageEventListRequest();
                    ~ExportWebPageEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>EventType - String - required: no - event type</li>
<li>EventStatus - String - required: no - event status</li>
                     * @return Filters Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>EventType - String - required: no - event type</li>
<li>EventStatus - String - required: no - event status</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>EventType - String - required: no - event type</li>
<li>EventStatus - String - required: no - event status</li>
                     * @param _filters Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>EventType - String - required: no - event type</li>
<li>EventStatus - String - required: no - event status</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting method: CreateTime or RestoreTime, with a default value of CreateTime
                     * @return By Sorting method: CreateTime or RestoreTime, with a default value of CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting method: CreateTime or RestoreTime, with a default value of CreateTime
                     * @param _by Sorting method: CreateTime or RestoreTime, with a default value of CreateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sorting method. 0: descending order. 1: ascending order. Default value: 0.
                     * @return Order Sorting method. 0: descending order. 1: ascending order. Default value: 0.
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置Sorting method. 0: descending order. 1: ascending order. Default value: 0.
                     * @param _order Sorting method. 0: descending order. 1: ascending order. Default value: 0.
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>IpOrAlias - String - required: no - filter by host IP or alias</li>
<li>EventType - String - required: no - event type</li>
<li>EventStatus - String - required: no - event status</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: CreateTime or RestoreTime, with a default value of CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sorting method. 0: descending order. 1: ascending order. Default value: 0.
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTWEBPAGEEVENTLISTREQUEST_H_
