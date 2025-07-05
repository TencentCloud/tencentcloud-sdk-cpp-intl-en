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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeProjects request structure.
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取If this parameter is 1, all projects (including hidden ones) will be queried. If it is 0, only non-hidden projects will be queried.
                     * @return AllList If this parameter is 1, all projects (including hidden ones) will be queried. If it is 0, only non-hidden projects will be queried.
                     * 
                     */
                    uint64_t GetAllList() const;

                    /**
                     * 设置If this parameter is 1, all projects (including hidden ones) will be queried. If it is 0, only non-hidden projects will be queried.
                     * @param _allList If this parameter is 1, all projects (including hidden ones) will be queried. If it is 0, only non-hidden projects will be queried.
                     * 
                     */
                    void SetAllList(const uint64_t& _allList);

                    /**
                     * 判断参数 AllList 是否已赋值
                     * @return AllList 是否已赋值
                     * 
                     */
                    bool AllListHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Fixed value: 1,000.
                     * @return Limit Number of entries per page. Fixed value: 1,000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Fixed value: 1,000.
                     * @param _limit Number of entries per page. Fixed value: 1,000.
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
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
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
                     * If this parameter is 1, all projects (including hidden ones) will be queried. If it is 0, only non-hidden projects will be queried.
                     */
                    uint64_t m_allList;
                    bool m_allListHasBeenSet;

                    /**
                     * Number of entries per page. Fixed value: 1,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_
