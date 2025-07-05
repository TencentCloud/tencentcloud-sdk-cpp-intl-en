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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveForbidStreamList request structure.
                */
                class DescribeLiveForbidStreamListRequest : public AbstractModel
                {
                public:
                    DescribeLiveForbidStreamListRequest();
                    ~DescribeLiveForbidStreamListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Page number to get. Default value: 1.
                     * @return PageNum Page number to get. Default value: 1.
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置Page number to get. Default value: 1.
                     * @param _pageNum Page number to get. Default value: 1.
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
                     * 获取Number of entries per page. Maximum value: 100. 
Value: any integer between 1 and 100.
Default value: 10.
                     * @return PageSize Number of entries per page. Maximum value: 100. 
Value: any integer between 1 and 100.
Default value: 10.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Maximum value: 100. 
Value: any integer between 1 and 100.
Default value: 10.
                     * @param _pageSize Number of entries per page. Maximum value: 100. 
Value: any integer between 1 and 100.
Default value: 10.
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
                     * 获取Stream name for query
                     * @return StreamName Stream name for query
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name for query
                     * @param _streamName Stream name for query
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * Page number to get. Default value: 1.
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Maximum value: 100. 
Value: any integer between 1 and 100.
Default value: 10.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Stream name for query
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEFORBIDSTREAMLISTREQUEST_H_
