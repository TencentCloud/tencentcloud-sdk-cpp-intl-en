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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_

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
                * DescribeAttributeLabel request structure.
                */
                class DescribeAttributeLabelRequest : public AbstractModel
                {
                public:
                    DescribeAttributeLabelRequest();
                    ~DescribeAttributeLabelRequest() = default;
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
                     * 获取Attribute ID.
                     * @return AttributeBizId Attribute ID.
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置Attribute ID.
                     * @param _attributeBizId Attribute ID.
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取Quantity loaded each time. 
                     * @return Limit Quantity loaded each time. 
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity loaded each time. 
                     * @param _limit Quantity loaded each time. 
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Log in to user's root account (required in integrator mode).
                     * @return LoginUin Log in to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Log in to user's root account (required in integrator mode).
                     * @param _loginUin Log in to user's root account (required in integrator mode).
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
                     * 获取Log in to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Log in to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Log in to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Log in to user's sub-account (required in integrator mode).
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
                     * 获取Query a label or similar labels.
                     * @return Query Query a label or similar labels.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query a label or similar labels.
                     * @param _query Query a label or similar labels.
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
                     * 获取The label ID of the scroll loading cursor.
                     * @return LastLabelBizId The label ID of the scroll loading cursor.
                     * 
                     */
                    std::string GetLastLabelBizId() const;

                    /**
                     * 设置The label ID of the scroll loading cursor.
                     * @param _lastLabelBizId The label ID of the scroll loading cursor.
                     * 
                     */
                    void SetLastLabelBizId(const std::string& _lastLabelBizId);

                    /**
                     * 判断参数 LastLabelBizId 是否已赋值
                     * @return LastLabelBizId 是否已赋值
                     * 
                     */
                    bool LastLabelBizIdHasBeenSet() const;

                    /**
                     * 获取Query scope: 
all (or leave it blank): standard words and similar words 
standard: standard words 
similar: similar words
                     * @return QueryScope Query scope: 
all (or leave it blank): standard words and similar words 
standard: standard words 
similar: similar words
                     * 
                     */
                    std::string GetQueryScope() const;

                    /**
                     * 设置Query scope: 
all (or leave it blank): standard words and similar words 
standard: standard words 
similar: similar words
                     * @param _queryScope Query scope: 
all (or leave it blank): standard words and similar words 
standard: standard words 
similar: similar words
                     * 
                     */
                    void SetQueryScope(const std::string& _queryScope);

                    /**
                     * 判断参数 QueryScope 是否已赋值
                     * @return QueryScope 是否已赋值
                     * 
                     */
                    bool QueryScopeHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * Attribute ID.
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * Quantity loaded each time. 
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Log in to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Log in to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Query a label or similar labels.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * The label ID of the scroll loading cursor.
                     */
                    std::string m_lastLabelBizId;
                    bool m_lastLabelBizIdHasBeenSet;

                    /**
                     * Query scope: 
all (or leave it blank): standard words and similar words 
standard: standard words 
similar: similar words
                     */
                    std::string m_queryScope;
                    bool m_queryScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEATTRIBUTELABELREQUEST_H_
