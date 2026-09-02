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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineMainTaskList request structure.
                */
                class DescribeBaselineMainTaskListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineMainTaskListRequest();
                    ~DescribeBaselineMainTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Universal Filter Criteria. Supported Name: JobID (exact search by task ID), TaskStatus (task status: INIT/SCANNING/SUCCESS/FAILED), TaskType (task type: PERIODIC/MANUAL).</p>
                     * @return Filters <p>Universal Filter Criteria. Supported Name: JobID (exact search by task ID), TaskStatus (task status: INIT/SCANNING/SUCCESS/FAILED), TaskType (task type: PERIODIC/MANUAL).</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Universal Filter Criteria. Supported Name: JobID (exact search by task ID), TaskStatus (task status: INIT/SCANNING/SUCCESS/FAILED), TaskType (task type: PERIODIC/MANUAL).</p>
                     * @param _filters <p>Universal Filter Criteria. Supported Name: JobID (exact search by task ID), TaskStatus (task status: INIT/SCANNING/SUCCESS/FAILED), TaskType (task type: PERIODIC/MANUAL).</p>
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
                     * 获取<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @return Limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @param _limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
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
                     * 获取<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @return Offset <p>Starting offset amount for paging query. It starts from 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @param _offset <p>Starting offset amount for paging query. It starts from 0.</p>
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
                     * 获取<p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * @return Order <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * @param _order <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
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
                     * 获取<p>Sort field name, an optional field defined by the specific API.</p>
                     * @return By <p>Sort field name, an optional field defined by the specific API.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sort field name, an optional field defined by the specific API.</p>
                     * @param _by <p>Sort field name, an optional field defined by the specific API.</p>
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
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Universal Filter Criteria. Supported Name: JobID (exact search by task ID), TaskStatus (task status: INIT/SCANNING/SUCCESS/FAILED), TaskType (task type: PERIODIC/MANUAL).</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Starting offset amount for paging query. It starts from 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sort field name, an optional field defined by the specific API.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKLISTREQUEST_H_
