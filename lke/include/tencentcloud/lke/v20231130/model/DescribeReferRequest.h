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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEREFERREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEREFERREQUEST_H_

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
                * DescribeRefer request structure.
                */
                class DescribeReferRequest : public AbstractModel
                {
                public:
                    DescribeReferRequest();
                    ~DescribeReferRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return BotBizId Application ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置Application ID
                     * @param _botBizId Application ID
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
                     * 获取Quota ID
                     * @return ReferBizIds Quota ID
                     * 
                     */
                    std::vector<std::string> GetReferBizIds() const;

                    /**
                     * 设置Quota ID
                     * @param _referBizIds Quota ID
                     * 
                     */
                    void SetReferBizIds(const std::vector<std::string>& _referBizIds);

                    /**
                     * 判断参数 ReferBizIds 是否已赋值
                     * @return ReferBizIds 是否已赋值
                     * 
                     */
                    bool ReferBizIdsHasBeenSet() const;

                    /**
                     * 获取Log in to the user's root account (required in the integrator mode).
                     * @return LoginUin Log in to the user's root account (required in the integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Log in to the user's root account (required in the integrator mode).
                     * @param _loginUin Log in to the user's root account (required in the integrator mode).
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
                     * 获取Login user sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login user sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login user sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login user sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Quota ID
                     */
                    std::vector<std::string> m_referBizIds;
                    bool m_referBizIdsHasBeenSet;

                    /**
                     * Log in to the user's root account (required in the integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login user sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEREFERREQUEST_H_
