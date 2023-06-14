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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Filter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs (if it is empty,
it indicates to get all instances under the current account)
                     * @return Registryids List of instance IDs (if it is empty,
it indicates to get all instances under the current account)
                     * 
                     */
                    std::vector<std::string> GetRegistryids() const;

                    /**
                     * 设置List of instance IDs (if it is empty,
it indicates to get all instances under the current account)
                     * @param _registryids List of instance IDs (if it is empty,
it indicates to get all instances under the current account)
                     * 
                     */
                    void SetRegistryids(const std::vector<std::string>& _registryids);

                    /**
                     * 判断参数 Registryids 是否已赋值
                     * @return Registryids 是否已赋值
                     * 
                     */
                    bool RegistryidsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Maximum number of output entries. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of output entries. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of output entries. Default value: 20. Maximum value: 100.
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
                     * 获取Filters
                     * @return Filters Filters
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
                     * @param _filters Filters
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
                     * 获取Whether to get the instances in all regions. Default value: False.
                     * @return AllRegion Whether to get the instances in all regions. Default value: False.
                     * 
                     */
                    bool GetAllRegion() const;

                    /**
                     * 设置Whether to get the instances in all regions. Default value: False.
                     * @param _allRegion Whether to get the instances in all regions. Default value: False.
                     * 
                     */
                    void SetAllRegion(const bool& _allRegion);

                    /**
                     * 判断参数 AllRegion 是否已赋值
                     * @return AllRegion 是否已赋值
                     * 
                     */
                    bool AllRegionHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs (if it is empty,
it indicates to get all instances under the current account)
                     */
                    std::vector<std::string> m_registryids;
                    bool m_registryidsHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filters
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Whether to get the instances in all regions. Default value: False.
                     */
                    bool m_allRegion;
                    bool m_allRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCESREQUEST_H_
