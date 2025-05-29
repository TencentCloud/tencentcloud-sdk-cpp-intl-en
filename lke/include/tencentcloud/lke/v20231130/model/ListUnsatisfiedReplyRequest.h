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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListUnsatisfiedReply request structure.
                */
                class ListUnsatisfiedReplyRequest : public AbstractModel
                {
                public:
                    ListUnsatisfiedReplyRequest();
                    ~ListUnsatisfiedReplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return BotBizId Application ID.
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _botBizId Application ID.
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取Page number.
                     * @return PageNumber Page number.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number.
                     * @param _pageNumber Page number.
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
                     * 获取Number of items per page.
                     * @return PageSize Number of items per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page.
                     * @param _pageSize Number of items per page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取User request (question or answer).
                     * @return Query User request (question or answer).
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置User request (question or answer).
                     * @param _query User request (question or answer).
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Error type retrieval.
                     * @return Reasons Error type retrieval.
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置Error type retrieval.
                     * @param _reasons Error type retrieval.
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Page number.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * User request (question or answer).
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Error type retrieval.
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTUNSATISFIEDREPLYREQUEST_H_
