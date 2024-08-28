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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportVulList request structure.
                */
                class ExportVulListRequest : public AbstractModel
                {
                public:
                    ExportVulListRequest();
                    ~ExportVulListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria
<li>VulCategory - int - required: no - filter by vulnerability category: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities</li>
<li>IfEmergency - String - required: no - whether an emergency vulnerability; if you need to query an emergency vulnerability, please pass yes to this parameter.</li>
<li>Status - String - required: yes - filter by vulnerability status: 0 - pending; 1 - ignored; 3 - fixed; 5 - detecting. The console only handles four statuses: 0, 1, 3, and 5.</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - search by vulnerability name</li>
                     * @return Filters Filter criteria
<li>VulCategory - int - required: no - filter by vulnerability category: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities</li>
<li>IfEmergency - String - required: no - whether an emergency vulnerability; if you need to query an emergency vulnerability, please pass yes to this parameter.</li>
<li>Status - String - required: yes - filter by vulnerability status: 0 - pending; 1 - ignored; 3 - fixed; 5 - detecting. The console only handles four statuses: 0, 1, 3, and 5.</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - search by vulnerability name</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria
<li>VulCategory - int - required: no - filter by vulnerability category: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities</li>
<li>IfEmergency - String - required: no - whether an emergency vulnerability; if you need to query an emergency vulnerability, please pass yes to this parameter.</li>
<li>Status - String - required: yes - filter by vulnerability status: 0 - pending; 1 - ignored; 3 - fixed; 5 - detecting. The console only handles four statuses: 0, 1, 3, and 5.</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - search by vulnerability name</li>
                     * @param _filters Filter criteria
<li>VulCategory - int - required: no - filter by vulnerability category: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities</li>
<li>IfEmergency - String - required: no - whether an emergency vulnerability; if you need to query an emergency vulnerability, please pass yes to this parameter.</li>
<li>Status - String - required: yes - filter by vulnerability status: 0 - pending; 1 - ignored; 3 - fixed; 5 - detecting. The console only handles four statuses: 0, 1, 3, and 5.</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - search by vulnerability name</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Whether to export details: 1 - yes; 0 - no
                     * @return IfDetail Whether to export details: 1 - yes; 0 - no
                     * 
                     */
                    uint64_t GetIfDetail() const;

                    /**
                     * 设置Whether to export details: 1 - yes; 0 - no
                     * @param _ifDetail Whether to export details: 1 - yes; 0 - no
                     * 
                     */
                    void SetIfDetail(const uint64_t& _ifDetail);

                    /**
                     * 判断参数 IfDetail 是否已赋值
                     * @return IfDetail 是否已赋值
                     * 
                     */
                    bool IfDetailHasBeenSet() const;

                private:

                    /**
                     * Filter criteria
<li>VulCategory - int - required: no - filter by vulnerability category: 1 - web-cms vulnerabilities; 2 - application vulnerabilities; 4 - Linux software vulnerabilities; 5 - Windows system vulnerabilities</li>
<li>IfEmergency - String - required: no - whether an emergency vulnerability; if you need to query an emergency vulnerability, please pass yes to this parameter.</li>
<li>Status - String - required: yes - filter by vulnerability status: 0 - pending; 1 - ignored; 3 - fixed; 5 - detecting. The console only handles four statuses: 0, 1, 3, and 5.</li>
<li>Level - String - required: no - filter by vulnerability level: 1 - low; 2 - medium; 3 - high; 4 - prompt</li>
<li>VulName - String - required: no - search by vulnerability name</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether to export details: 1 - yes; 0 - no
                     */
                    uint64_t m_ifDetail;
                    bool m_ifDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULLISTREQUEST_H_
