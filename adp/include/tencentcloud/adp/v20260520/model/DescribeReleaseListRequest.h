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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeReleaseList request structure.
                */
                class DescribeReleaseListRequest : public AbstractModel
                {
                public:
                    DescribeReleaseListRequest();
                    ~DescribeReleaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Page number, starting from 0.
                     * @return PageNumber Page number, starting from 0.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 0.
                     * @param _pageNumber Page number, starting from 0.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page. Maximum: 100.
                     * @return PageSize Number of items per page. Maximum: 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Maximum: 100.
                     * @param _pageSize Number of items per page. Maximum: 100.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Page number, starting from 0.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Maximum: 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERELEASELISTREQUEST_H_
