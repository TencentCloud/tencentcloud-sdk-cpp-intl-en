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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKLISTREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QueryTaskFilter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAigcTaskList request structure.
                */
                class DescribeAigcTaskListRequest : public AbstractModel
                {
                public:
                    DescribeAigcTaskListRequest();
                    ~DescribeAigcTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Query page started</p>
                     * @return PageNum <p>Query page started</p>
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>Query page started</p>
                     * @param _pageNum <p>Query page started</p>
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取<p>How many data to get on the current page</p>
                     * @return PageSize <p>How many data to get on the current page</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>How many data to get on the current page</p>
                     * @param _pageSize <p>How many data to get on the current page</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Query filter criteria</p>
                     * @return QueryTaskFilter <p>Query filter criteria</p>
                     * 
                     */
                    QueryTaskFilter GetQueryTaskFilter() const;

                    /**
                     * 设置<p>Query filter criteria</p>
                     * @param _queryTaskFilter <p>Query filter criteria</p>
                     * 
                     */
                    void SetQueryTaskFilter(const QueryTaskFilter& _queryTaskFilter);

                    /**
                     * 判断参数 QueryTaskFilter 是否已赋值
                     * @return QueryTaskFilter 是否已赋值
                     * 
                     */
                    bool QueryTaskFilterHasBeenSet() const;

                private:

                    /**
                     * <p>Query page started</p>
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>How many data to get on the current page</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Query filter criteria</p>
                     */
                    QueryTaskFilter m_queryTaskFilter;
                    bool m_queryTaskFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAIGCTASKLISTREQUEST_H_
