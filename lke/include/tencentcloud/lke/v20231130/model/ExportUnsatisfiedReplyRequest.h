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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTUNSATISFIEDREPLYREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTUNSATISFIEDREPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Filters.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ExportUnsatisfiedReply request structure.
                */
                class ExportUnsatisfiedReplyRequest : public AbstractModel
                {
                public:
                    ExportUnsatisfiedReplyRequest();
                    ~ExportUnsatisfiedReplyRequest() = default;
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
                     * 获取Check to export ID list.
                     * @return ReplyBizIds Check to export ID list.
                     * 
                     */
                    std::vector<std::string> GetReplyBizIds() const;

                    /**
                     * 设置Check to export ID list.
                     * @param _replyBizIds Check to export ID list.
                     * 
                     */
                    void SetReplyBizIds(const std::vector<std::string>& _replyBizIds);

                    /**
                     * 判断参数 ReplyBizIds 是否已赋值
                     * @return ReplyBizIds 是否已赋值
                     * 
                     */
                    bool ReplyBizIdsHasBeenSet() const;

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
                     * 获取Retrieve filter.
                     * @return Filters Retrieve filter.
                     * 
                     */
                    Filters GetFilters() const;

                    /**
                     * 设置Retrieve filter.
                     * @param _filters Retrieve filter.
                     * 
                     */
                    void SetFilters(const Filters& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Check to export ID list.
                     */
                    std::vector<std::string> m_replyBizIds;
                    bool m_replyBizIdsHasBeenSet;

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
                     * Retrieve filter.
                     */
                    Filters m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTUNSATISFIEDREPLYREQUEST_H_
