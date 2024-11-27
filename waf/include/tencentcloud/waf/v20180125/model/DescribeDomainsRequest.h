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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/FiltersItemNew.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomains request structure.
                */
                class DescribeDomainsRequest : public AbstractModel
                {
                public:
                    DescribeDomainsRequest();
                    ~DescribeDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * @return Offset Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     * @param _offset Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
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
                     * 获取Number of returned domains
                     * @return Limit Number of returned domains
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned domains
                     * @param _limit Number of returned domains
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
                     * 获取Filter array. The filter fields are as follows. Edition: instance version, which can be set to sparta-waf or clb-waf; Domain: domain name; DomainId: domain name ID; InstanceName: instance name; InstanceId: instance ID; FlowMode: traffic access mode, which supports only CLB WAF; FlowCheckMode: traffic inspection mode, which supports only CLB WAF; ClsStatus: log switch; Status: WAF switch; BotStatus: BOT switch; ApiStatus: API security switch; Engine: engine mode; UpstreamIP: origin server IP address, which supports only SaaS WAF; UpstreamDomain: origin server domain name, which supports only SaaS WAF; DomainState: domain name status, which supports only SaaS WAF; SgState: security group status, which supports only SaaS WAF; Label: group tag, which supports the filtering of only one tag at a time.
                     * @return Filters Filter array. The filter fields are as follows. Edition: instance version, which can be set to sparta-waf or clb-waf; Domain: domain name; DomainId: domain name ID; InstanceName: instance name; InstanceId: instance ID; FlowMode: traffic access mode, which supports only CLB WAF; FlowCheckMode: traffic inspection mode, which supports only CLB WAF; ClsStatus: log switch; Status: WAF switch; BotStatus: BOT switch; ApiStatus: API security switch; Engine: engine mode; UpstreamIP: origin server IP address, which supports only SaaS WAF; UpstreamDomain: origin server domain name, which supports only SaaS WAF; DomainState: domain name status, which supports only SaaS WAF; SgState: security group status, which supports only SaaS WAF; Label: group tag, which supports the filtering of only one tag at a time.
                     * 
                     */
                    std::vector<FiltersItemNew> GetFilters() const;

                    /**
                     * 设置Filter array. The filter fields are as follows. Edition: instance version, which can be set to sparta-waf or clb-waf; Domain: domain name; DomainId: domain name ID; InstanceName: instance name; InstanceId: instance ID; FlowMode: traffic access mode, which supports only CLB WAF; FlowCheckMode: traffic inspection mode, which supports only CLB WAF; ClsStatus: log switch; Status: WAF switch; BotStatus: BOT switch; ApiStatus: API security switch; Engine: engine mode; UpstreamIP: origin server IP address, which supports only SaaS WAF; UpstreamDomain: origin server domain name, which supports only SaaS WAF; DomainState: domain name status, which supports only SaaS WAF; SgState: security group status, which supports only SaaS WAF; Label: group tag, which supports the filtering of only one tag at a time.
                     * @param _filters Filter array. The filter fields are as follows. Edition: instance version, which can be set to sparta-waf or clb-waf; Domain: domain name; DomainId: domain name ID; InstanceName: instance name; InstanceId: instance ID; FlowMode: traffic access mode, which supports only CLB WAF; FlowCheckMode: traffic inspection mode, which supports only CLB WAF; ClsStatus: log switch; Status: WAF switch; BotStatus: BOT switch; ApiStatus: API security switch; Engine: engine mode; UpstreamIP: origin server IP address, which supports only SaaS WAF; UpstreamDomain: origin server domain name, which supports only SaaS WAF; DomainState: domain name status, which supports only SaaS WAF; SgState: security group status, which supports only SaaS WAF; Label: group tag, which supports the filtering of only one tag at a time.
                     * 
                     */
                    void SetFilters(const std::vector<FiltersItemNew>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Paging offset, a multiple of limit. The minimum value is 0, and the maximum value is Total/Limit rounded up.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned domains
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter array. The filter fields are as follows. Edition: instance version, which can be set to sparta-waf or clb-waf; Domain: domain name; DomainId: domain name ID; InstanceName: instance name; InstanceId: instance ID; FlowMode: traffic access mode, which supports only CLB WAF; FlowCheckMode: traffic inspection mode, which supports only CLB WAF; ClsStatus: log switch; Status: WAF switch; BotStatus: BOT switch; ApiStatus: API security switch; Engine: engine mode; UpstreamIP: origin server IP address, which supports only SaaS WAF; UpstreamDomain: origin server domain name, which supports only SaaS WAF; DomainState: domain name status, which supports only SaaS WAF; SgState: security group status, which supports only SaaS WAF; Label: group tag, which supports the filtering of only one tag at a time.
                     */
                    std::vector<FiltersItemNew> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINSREQUEST_H_
