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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWindowsPatchList request structure.
                */
                class DescribeWindowsPatchListRequest : public AbstractModel
                {
                public:
                    DescribeWindowsPatchListRequest();
                    ~DescribeWindowsPatchListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameter
                     * @return Limit Pagination parameter
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter
                     * @param _limit Pagination parameter
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
                     * 获取Sorting order: desc. Default value: asc.
                     * @return Order Sorting order: desc. Default value: asc.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order: desc. Default value: asc.
                     * @param _order Sorting order: desc. Default value: asc.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Selectable sorting field
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * @return By Selectable sorting field
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Selectable sorting field
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     * @param _by Selectable sorting field
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filter criteria. <li>Status: string type optional processing status 0-pending, 1-ignored, 3-fixed</li><li>ShowNew: int type optional show latest version 1-enable 0-disable</li><li>Name: string type optional patch name</li><li>KbNo: string type optional Patch Number</li><li>VulName: string type optional vulnerability name</li><li>CVEId: string type optional CVE number</li><li>Uuid: string type optional host uuid</li>
                     * @return Filters Filter criteria. <li>Status: string type optional processing status 0-pending, 1-ignored, 3-fixed</li><li>ShowNew: int type optional show latest version 1-enable 0-disable</li><li>Name: string type optional patch name</li><li>KbNo: string type optional Patch Number</li><li>VulName: string type optional vulnerability name</li><li>CVEId: string type optional CVE number</li><li>Uuid: string type optional host uuid</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria. <li>Status: string type optional processing status 0-pending, 1-ignored, 3-fixed</li><li>ShowNew: int type optional show latest version 1-enable 0-disable</li><li>Name: string type optional patch name</li><li>KbNo: string type optional Patch Number</li><li>VulName: string type optional vulnerability name</li><li>CVEId: string type optional CVE number</li><li>Uuid: string type optional host uuid</li>
                     * @param _filters Filter criteria. <li>Status: string type optional processing status 0-pending, 1-ignored, 3-fixed</li><li>ShowNew: int type optional show latest version 1-enable 0-disable</li><li>Name: string type optional patch name</li><li>KbNo: string type optional Patch Number</li><li>VulName: string type optional vulnerability name</li><li>CVEId: string type optional CVE number</li><li>Uuid: string type optional host uuid</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting order: desc. Default value: asc.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Selectable sorting field
<li>PublishTime</li>
<li>LastScanTime</li>
<li>HostCount</li>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter criteria. <li>Status: string type optional processing status 0-pending, 1-ignored, 3-fixed</li><li>ShowNew: int type optional show latest version 1-enable 0-disable</li><li>Name: string type optional patch name</li><li>KbNo: string type optional Patch Number</li><li>VulName: string type optional vulnerability name</li><li>CVEId: string type optional CVE number</li><li>Uuid: string type optional host uuid</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWINDOWSPATCHLISTREQUEST_H_
