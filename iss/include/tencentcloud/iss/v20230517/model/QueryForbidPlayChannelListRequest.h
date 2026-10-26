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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * QueryForbidPlayChannelList request structure.
                */
                class QueryForbidPlayChannelListRequest : public AbstractModel
                {
                public:
                    QueryForbidPlayChannelListRequest();
                    ~QueryForbidPlayChannelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-user uin, which can also be the root user uin.
                     * @return UserId Sub-user uin, which can also be the root user uin.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Sub-user uin, which can also be the root user uin.
                     * @param _userId Sub-user uin, which can also be the root user uin.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Maximum number of items per page. Maximum value: 200. If the number of items exceeds 200, 200 items are returned.
                     * @return PageSize Maximum number of items per page. Maximum value: 200. If the number of items exceeds 200, 200 items are returned.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Maximum number of items per page. Maximum value: 200. If the number of items exceeds 200, 200 items are returned.
                     * @param _pageSize Maximum number of items per page. Maximum value: 200. If the number of items exceeds 200, 200 items are returned.
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
                     * 获取Which page.
                     * @return PageNumber Which page.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Which page.
                     * @param _pageNumber Which page.
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
                     * Sub-user uin, which can also be the root user uin.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Maximum number of items per page. Maximum value: 200. If the number of items exceeds 200, 200 items are returned.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Which page.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_
