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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Filters.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeDataDisks request structure.
                */
                class DescribeNodeDataDisksRequest : public AbstractModel
                {
                public:
                    DescribeNodeDataDisksRequest();
                    ~DescribeNodeDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the EMR cluster instance.
                     * @return InstanceId ID of the EMR cluster instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the EMR cluster instance.
                     * @param _instanceId ID of the EMR cluster instance.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ID list of node CVM instances.
                     * @return CvmInstanceIds ID list of node CVM instances.
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置ID list of node CVM instances.
                     * @param _cvmInstanceIds ID list of node CVM instances.
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria for querying cloud disks.
                     * @return Filters Filter criteria for querying cloud disks.
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter criteria for querying cloud disks.
                     * @param _filters Filter criteria for querying cloud disks.
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
                     * 获取Fuzzy search.
                     * @return InnerSearch Fuzzy search.
                     * 
                     */
                    std::string GetInnerSearch() const;

                    /**
                     * 设置Fuzzy search.
                     * @param _innerSearch Fuzzy search.
                     * 
                     */
                    void SetInnerSearch(const std::string& _innerSearch);

                    /**
                     * 判断参数 InnerSearch 是否已赋值
                     * @return InnerSearch 是否已赋值
                     * 
                     */
                    bool InnerSearchHasBeenSet() const;

                    /**
                     * 获取Number of items returned per page. The default value is 100, and the maximum value is 100.
                     * @return Limit Number of items returned per page. The default value is 100, and the maximum value is 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items returned per page. The default value is 100, and the maximum value is 100.
                     * @param _limit Number of items returned per page. The default value is 100, and the maximum value is 100.
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
                     * 获取Data offset.
                     * @return Offset Data offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset.
                     * @param _offset Data offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * ID of the EMR cluster instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID list of node CVM instances.
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * Filter criteria for querying cloud disks.
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Fuzzy search.
                     */
                    std::string m_innerSearch;
                    bool m_innerSearchHasBeenSet;

                    /**
                     * Number of items returned per page. The default value is 100, and the maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODEDATADISKSREQUEST_H_
