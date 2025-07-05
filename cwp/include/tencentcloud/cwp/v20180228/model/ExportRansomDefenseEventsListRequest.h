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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSEEVENTSLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSEEVENTSLISTREQUEST_H_

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
                * ExportRansomDefenseEventsList request structure.
                */
                class ExportRansomDefenseEventsListRequest : public AbstractModel
                {
                public:
                    ExportRansomDefenseEventsListRequest();
                    ~ExportRansomDefenseEventsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>HostName- string- host name</li>
<li>Status - Uint64: 0 - pending; 1 processed; 2 -trusted</li>
<li>HostIp - String - host IP</li>
                     * @return Filters Filter criteria
<li>HostName- string- host name</li>
<li>Status - Uint64: 0 - pending; 1 processed; 2 -trusted</li>
<li>HostIp - String - host IP</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>HostName- string- host name</li>
<li>Status - Uint64: 0 - pending; 1 processed; 2 -trusted</li>
<li>HostIp - String - host IP</li>
                     * @param _filters Filter criteria
<li>HostName- string- host name</li>
<li>Status - Uint64: 0 - pending; 1 processed; 2 -trusted</li>
<li>HostIp - String - host IP</li>
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
                     * 获取Sorting method: ASC / DESC
                     * @return Order Sorting method: ASC / DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: ASC / DESC
                     * @param _order Sorting method: ASC / DESC
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
                     * 获取Sorting field, supporting CreateTime
                     * @return By Sorting field, supporting CreateTime
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field, supporting CreateTime
                     * @param _by Sorting field, supporting CreateTime
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>HostName- string- host name</li>
<li>Status - Uint64: 0 - pending; 1 processed; 2 -trusted</li>
<li>HostIp - String - host IP</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: ASC / DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field, supporting CreateTime
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRANSOMDEFENSEEVENTSLISTREQUEST_H_
