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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeCustomizedConfigList request structure.
                */
                class DescribeCustomizedConfigListRequest : public AbstractModel
                {
                public:
                    DescribeCustomizedConfigListRequest();
                    ~DescribeCustomizedConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration type. Valid values: `CLB` (CLB-specific configs), `SERVER` (domain name-specific configs), and `LOCATION` (forwarding rule-specific configs).
                     * @return ConfigType Configuration type. Valid values: `CLB` (CLB-specific configs), `SERVER` (domain name-specific configs), and `LOCATION` (forwarding rule-specific configs).
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置Configuration type. Valid values: `CLB` (CLB-specific configs), `SERVER` (domain name-specific configs), and `LOCATION` (forwarding rule-specific configs).
                     * @param ConfigType Configuration type. Valid values: `CLB` (CLB-specific configs), `SERVER` (domain name-specific configs), and `LOCATION` (forwarding rule-specific configs).
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default: 0.
                     * @return Offset Pagination offset. Default: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default: 0.
                     * @param Offset Pagination offset. Default: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page. Default: 20.
                     * @return Limit Number of results per page. Default: 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Default: 20.
                     * @param Limit Number of results per page. Default: 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies the name of configs to query. Fuzzy match is supported.
                     * @return ConfigName Specifies the name of configs to query. Fuzzy match is supported.
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Specifies the name of configs to query. Fuzzy match is supported.
                     * @param ConfigName Specifies the name of configs to query. Fuzzy match is supported.
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Configuration ID.
                     * @return UconfigIds Configuration ID.
                     */
                    std::vector<std::string> GetUconfigIds() const;

                    /**
                     * 设置Configuration ID.
                     * @param UconfigIds Configuration ID.
                     */
                    void SetUconfigIds(const std::vector<std::string>& _uconfigIds);

                    /**
                     * 判断参数 UconfigIds 是否已赋值
                     * @return UconfigIds 是否已赋值
                     */
                    bool UconfigIdsHasBeenSet() const;

                    /**
                     * 获取The filters are:
<li> loadbalancer-id - String - Required: no - (filter) CLB instance ID, such as "lb-12345678". </li>
<li> vip - String - Required: no - (filter) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
                     * @return Filters The filters are:
<li> loadbalancer-id - String - Required: no - (filter) CLB instance ID, such as "lb-12345678". </li>
<li> vip - String - Required: no - (filter) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The filters are:
<li> loadbalancer-id - String - Required: no - (filter) CLB instance ID, such as "lb-12345678". </li>
<li> vip - String - Required: no - (filter) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
                     * @param Filters The filters are:
<li> loadbalancer-id - String - Required: no - (filter) CLB instance ID, such as "lb-12345678". </li>
<li> vip - String - Required: no - (filter) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Configuration type. Valid values: `CLB` (CLB-specific configs), `SERVER` (domain name-specific configs), and `LOCATION` (forwarding rule-specific configs).
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Pagination offset. Default: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page. Default: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the name of configs to query. Fuzzy match is supported.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration ID.
                     */
                    std::vector<std::string> m_uconfigIds;
                    bool m_uconfigIdsHasBeenSet;

                    /**
                     * The filters are:
<li> loadbalancer-id - String - Required: no - (filter) CLB instance ID, such as "lb-12345678". </li>
<li> vip - String - Required: no - (filter) CLB instance VIP, such as "1.1.1.1" and "2204::22:3". </li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
