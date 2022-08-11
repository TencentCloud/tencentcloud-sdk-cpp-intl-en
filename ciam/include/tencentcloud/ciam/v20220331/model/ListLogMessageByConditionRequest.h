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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListLogMessageByCondition request structure.
                */
                class ListLogMessageByConditionRequest : public AbstractModel
                {
                public:
                    ListLogMessageByConditionRequest();
                    ~ListLogMessageByConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User pool ID
                     * @return UserStoreId User pool ID
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User pool ID
                     * @param UserStoreId User pool ID
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Pagination data
                     * @return Pageable Pagination data
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置Pagination data
                     * @param Pageable Pagination data
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取Start timestamp accurate to the millisecond
                     * @return StartTime Start timestamp accurate to the millisecond
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp accurate to the millisecond
                     * @param StartTime Start timestamp accurate to the millisecond
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Valid values of `Key`: `events`.

<li> **events** </li>	Values can be one or multiple items in ["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"].
                     * @return Filters Valid values of `Key`: `events`.

<li> **events** </li>	Values can be one or multiple items in ["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"].
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Valid values of `Key`: `events`.

<li> **events** </li>	Values can be one or multiple items in ["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"].
                     * @param Filters Valid values of `Key`: `events`.

<li> **events** </li>	Values can be one or multiple items in ["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"].
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * User pool ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Pagination data
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * Start timestamp accurate to the millisecond
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Valid values of `Key`: `events`.

<li> **events** </li>	Values can be one or multiple items in ["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"].
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_
