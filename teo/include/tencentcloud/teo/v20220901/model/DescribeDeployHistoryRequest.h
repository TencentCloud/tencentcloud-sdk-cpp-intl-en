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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDEPLOYHISTORYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDEPLOYHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeDeployHistory request structure.
                */
                class DescribeDeployHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDeployHistoryRequest();
                    ~DescribeDeployHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Environment ID.
                     * @return EnvId Environment ID.
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Environment ID.
                     * @param _envId Environment ID.
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>record-id: Filter by release record ID. </li>
                     * @return Filters Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>record-id: Filter by release record ID. </li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>record-id: Filter by release record ID. </li>
                     * @param _filters Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>record-id: Filter by release record ID. </li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Environment ID.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>record-id: Filter by release record ID. </li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEDEPLOYHISTORYREQUEST_H_
