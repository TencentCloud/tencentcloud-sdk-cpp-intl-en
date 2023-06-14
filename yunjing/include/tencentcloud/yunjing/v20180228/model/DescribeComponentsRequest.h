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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeComponents request structure.
                */
                class DescribeComponentsRequest : public AbstractModel
                {
                public:
                    DescribeComponentsRequest();
                    ~DescribeComponentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CWP agent `Uuid`. Either `Uuid` or `ComponentId` must be specified. If `Uuid` is specified, it indicates to query the information list under the specified server.
                     * @return Uuid CWP agent `Uuid`. Either `Uuid` or `ComponentId` must be specified. If `Uuid` is specified, it indicates to query the information list under the specified server.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`. Either `Uuid` or `ComponentId` must be specified. If `Uuid` is specified, it indicates to query the information list under the specified server.
                     * @param _uuid CWP agent `Uuid`. Either `Uuid` or `ComponentId` must be specified. If `Uuid` is specified, it indicates to query the information list under the specified server.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Component ID. Either `Uuid` or `ComponentId` must be specified. If `ComponentId` is specified, it indicates to query the information list under the specified component.
                     * @return ComponentId Component ID. Either `Uuid` or `ComponentId` must be specified. If `ComponentId` is specified, it indicates to query the information list under the specified component.
                     * 
                     */
                    uint64_t GetComponentId() const;

                    /**
                     * 设置Component ID. Either `Uuid` or `ComponentId` must be specified. If `ComponentId` is specified, it indicates to query the information list under the specified component.
                     * @param _componentId Component ID. Either `Uuid` or `ComponentId` must be specified. If `ComponentId` is specified, it indicates to query the information list under the specified component.
                     * 
                     */
                    void SetComponentId(const uint64_t& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Filter.
<li>ComponentVersion - String - Required: No - Component version number</li>
<li>MachineIp - String - Required: No - Private IP of server</li>
                     * @return Filters Filter.
<li>ComponentVersion - String - Required: No - Component version number</li>
<li>MachineIp - String - Required: No - Private IP of server</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
<li>ComponentVersion - String - Required: No - Component version number</li>
<li>MachineIp - String - Required: No - Private IP of server</li>
                     * @param _filters Filter.
<li>ComponentVersion - String - Required: No - Component version number</li>
<li>MachineIp - String - Required: No - Private IP of server</li>
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
                     * CWP agent `Uuid`. Either `Uuid` or `ComponentId` must be specified. If `Uuid` is specified, it indicates to query the information list under the specified server.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Component ID. Either `Uuid` or `ComponentId` must be specified. If `ComponentId` is specified, it indicates to query the information list under the specified component.
                     */
                    uint64_t m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter.
<li>ComponentVersion - String - Required: No - Component version number</li>
<li>MachineIp - String - Required: No - Private IP of server</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBECOMPONENTSREQUEST_H_
