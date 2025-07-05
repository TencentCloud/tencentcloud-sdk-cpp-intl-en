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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSREQUEST_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlows request structure.
                */
                class DescribeStreamLinkFlowsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowsRequest();
                    ~DescribeStreamLinkFlowsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of the current page. Default value: `1`
                     * @return PageNum Number of the current page. Default value: `1`
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Number of the current page. Default value: `1`
                     * @param _pageNum Number of the current page. Default value: `1`
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
                     * 获取Number of entries per page. Default value: `10`
                     * @return PageSize Number of entries per page. Default value: `10`
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Default value: `10`
                     * @param _pageSize Number of entries per page. Default value: `10`
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Number of the current page. Default value: `1`
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Default value: `10`
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSREQUEST_H_
