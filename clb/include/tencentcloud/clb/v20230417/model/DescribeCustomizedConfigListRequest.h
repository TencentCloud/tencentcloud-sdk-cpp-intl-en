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

#ifndef TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20230417/model/Filter.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20230417
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
                     * 获取Configuration type. CLB: CLB dimension; SERVER: Domain name dimension; LOCATION: Rule dimension.
                     * @return ConfigType Configuration type. CLB: CLB dimension; SERVER: Domain name dimension; LOCATION: Rule dimension.
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置Configuration type. CLB: CLB dimension; SERVER: Domain name dimension; LOCATION: Rule dimension.
                     * @param _configType Configuration type. CLB: CLB dimension; SERVER: Domain name dimension; LOCATION: Rule dimension.
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default: 0
                     * @return Offset Pagination offset. Default: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default: 0
                     * @param _offset Pagination offset. Default: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results. Default: 20
                     * @return Limit Number of results. Default: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results. Default: 20
                     * @param _limit Number of results. Default: 20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specify the name of configurations to query. Fuzzy match is supported.
                     * @return ConfigName Specify the name of configurations to query. Fuzzy match is supported.
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Specify the name of configurations to query. Fuzzy match is supported.
                     * @param _configName Specify the name of configurations to query. Fuzzy match is supported.
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Configuration ID
                     * @return ConfigIds Configuration ID
                     * 
                     */
                    std::vector<std::string> GetConfigIds() const;

                    /**
                     * 设置Configuration ID
                     * @param _configIds Configuration ID
                     * 
                     */
                    void SetConfigIds(const std::vector<std::string>& _configIds);

                    /**
                     * 判断参数 ConfigIds 是否已赋值
                     * @return ConfigIds 是否已赋值
                     * 
                     */
                    bool ConfigIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria are as follows:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
                     * @return Filters Filter criteria are as follows:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria are as follows:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
                     * @param _filters Filter criteria are as follows:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Configuration type. CLB: CLB dimension; SERVER: Domain name dimension; LOCATION: Rule dimension.
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Pagination offset. Default: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results. Default: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specify the name of configurations to query. Fuzzy match is supported.
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration ID
                     */
                    std::vector<std::string> m_configIds;
                    bool m_configIdsHasBeenSet;

                    /**
                     * Filter criteria are as follows:
<li> loadbalancer-id - String - Required: No - (Filter condition) Filter by CLB ID, for example: "lb-12345678".</li>
<li> vip - String - Required: No - (Filter condition) Filter by CLB vip, for example: "1.1.1.1", "2204::22:3".</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20230417_MODEL_DESCRIBECUSTOMIZEDCONFIGLISTREQUEST_H_
