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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaInstances request structure.
                */
                class DescribeGrafanaInstancesRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaInstancesRequest();
                    ~DescribeGrafanaInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset for query
                     * @return Offset Offset for query
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for query
                     * @param _offset Offset for query
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
                     * 获取Number of items to be queried
                     * @return Limit Number of items to be queried
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items to be queried
                     * @param _limit Number of items to be queried
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
                     * 获取Array of TCMG instance IDs
                     * @return InstanceIds Array of TCMG instance IDs
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Array of TCMG instance IDs
                     * @param _instanceIds Array of TCMG instance IDs
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取TCMG instance name, which can be fuzzily matched by prefix.
                     * @return InstanceName TCMG instance name, which can be fuzzily matched by prefix.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置TCMG instance name, which can be fuzzily matched by prefix.
                     * @param _instanceName TCMG instance name, which can be fuzzily matched by prefix.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Query status
                     * @return InstanceStatus Query status
                     * 
                     */
                    std::vector<int64_t> GetInstanceStatus() const;

                    /**
                     * 设置Query status
                     * @param _instanceStatus Query status
                     * 
                     */
                    void SetInstanceStatus(const std::vector<int64_t>& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Array of tag filters
                     * @return TagFilters Array of tag filters
                     * 
                     */
                    std::vector<PrometheusTag> GetTagFilters() const;

                    /**
                     * 设置Array of tag filters
                     * @param _tagFilters Array of tag filters
                     * 
                     */
                    void SetTagFilters(const std::vector<PrometheusTag>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * Offset for query
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items to be queried
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Array of TCMG instance IDs
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * TCMG instance name, which can be fuzzily matched by prefix.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Query status
                     */
                    std::vector<int64_t> m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Array of tag filters
                     */
                    std::vector<PrometheusTag> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANAINSTANCESREQUEST_H_
