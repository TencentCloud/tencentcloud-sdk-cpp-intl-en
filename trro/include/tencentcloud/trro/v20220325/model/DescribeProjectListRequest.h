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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeProjectList request structure.
                */
                class DescribeProjectListRequest : public AbstractModel
                {
                public:
                    DescribeProjectListRequest();
                    ~DescribeProjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The maximum number of projects returned per page. the default value is 10 if it is not filled in.
                     * @return PageSize The maximum number of projects returned per page. the default value is 10 if it is not filled in.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置The maximum number of projects returned per page. the default value is 10 if it is not filled in.
                     * @param _pageSize The maximum number of projects returned per page. the default value is 10 if it is not filled in.
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
                     * 获取The current page number. the default value is 1 (homepage) if it is not filled in.
                     * @return PageNumber The current page number. the default value is 1 (homepage) if it is not filled in.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置The current page number. the default value is 1 (homepage) if it is not filled in.
                     * @param _pageNumber The current page number. the default value is 1 (homepage) if it is not filled in.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * The maximum number of projects returned per page. the default value is 10 if it is not filled in.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * The current page number. the default value is 1 (homepage) if it is not filled in.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
