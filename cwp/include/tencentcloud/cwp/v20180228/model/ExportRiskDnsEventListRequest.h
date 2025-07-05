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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_

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
                * ExportRiskDnsEventList request structure.
                */
                class ExportRiskDnsEventListRequest : public AbstractModel
                {
                public:
                    ExportRiskDnsEventListRequest();
                    ~ExportRiskDnsEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>IpOrName - String - required: no - filter by host IP or alias</li>
<li>HostId - String - required: no - host ID</li>
<li>AgentId - String - required: no - client ID</li>
<li>PolicyType - String - required: no - policy type: 0 - system policy; 1 - user-defined policy</li>
<li>Domain - String - required: no - domain name (First convert the domain name into the urlencode format, and then encode it using base64.)</li>
<li>HandleStatus - String - required: no - filter by status: 0 - pending; 2 - trusted; 3 - untrusted</li>
<li>BeginTime - String - required: no - start time of last access</li>
<li>EndTime - String - required: no - end time of last access</li>
                     * @return Filters <li>IpOrName - String - required: no - filter by host IP or alias</li>
<li>HostId - String - required: no - host ID</li>
<li>AgentId - String - required: no - client ID</li>
<li>PolicyType - String - required: no - policy type: 0 - system policy; 1 - user-defined policy</li>
<li>Domain - String - required: no - domain name (First convert the domain name into the urlencode format, and then encode it using base64.)</li>
<li>HandleStatus - String - required: no - filter by status: 0 - pending; 2 - trusted; 3 - untrusted</li>
<li>BeginTime - String - required: no - start time of last access</li>
<li>EndTime - String - required: no - end time of last access</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>IpOrName - String - required: no - filter by host IP or alias</li>
<li>HostId - String - required: no - host ID</li>
<li>AgentId - String - required: no - client ID</li>
<li>PolicyType - String - required: no - policy type: 0 - system policy; 1 - user-defined policy</li>
<li>Domain - String - required: no - domain name (First convert the domain name into the urlencode format, and then encode it using base64.)</li>
<li>HandleStatus - String - required: no - filter by status: 0 - pending; 2 - trusted; 3 - untrusted</li>
<li>BeginTime - String - required: no - start time of last access</li>
<li>EndTime - String - required: no - end time of last access</li>
                     * @param _filters <li>IpOrName - String - required: no - filter by host IP or alias</li>
<li>HostId - String - required: no - host ID</li>
<li>AgentId - String - required: no - client ID</li>
<li>PolicyType - String - required: no - policy type: 0 - system policy; 1 - user-defined policy</li>
<li>Domain - String - required: no - domain name (First convert the domain name into the urlencode format, and then encode it using base64.)</li>
<li>HandleStatus - String - required: no - filter by status: 0 - pending; 2 - trusted; 3 - untrusted</li>
<li>BeginTime - String - required: no - start time of last access</li>
<li>EndTime - String - required: no - end time of last access</li>
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
                     * 获取Sorting method: [ASC: ascending order|DESC: descending order]
                     * @return Order Sorting method: [ASC: ascending order|DESC: descending order]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method: [ASC: ascending order|DESC: descending order]
                     * @param _order Sorting method: [ASC: ascending order|DESC: descending order]
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
                     * 获取Sorting field: [AccessCount: number of requests|LastTime: last request time]
                     * @return By Sorting field: [AccessCount: number of requests|LastTime: last request time]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field: [AccessCount: number of requests|LastTime: last request time]
                     * @param _by Sorting field: [AccessCount: number of requests|LastTime: last request time]
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
                     * <li>IpOrName - String - required: no - filter by host IP or alias</li>
<li>HostId - String - required: no - host ID</li>
<li>AgentId - String - required: no - client ID</li>
<li>PolicyType - String - required: no - policy type: 0 - system policy; 1 - user-defined policy</li>
<li>Domain - String - required: no - domain name (First convert the domain name into the urlencode format, and then encode it using base64.)</li>
<li>HandleStatus - String - required: no - filter by status: 0 - pending; 2 - trusted; 3 - untrusted</li>
<li>BeginTime - String - required: no - start time of last access</li>
<li>EndTime - String - required: no - end time of last access</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting method: [ASC: ascending order|DESC: descending order]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field: [AccessCount: number of requests|LastTime: last request time]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_
