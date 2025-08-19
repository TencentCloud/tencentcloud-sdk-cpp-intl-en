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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateEmbedToken request structure.
                */
                class CreateEmbedTokenRequest : public AbstractModel
                {
                public:
                    CreateEmbedTokenRequest();
                    ~CreateEmbedTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Shares the project ID.
                     * @return ProjectId Shares the project ID.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Shares the project ID.
                     * @param _projectId Shares the project ID.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.
                     * @return PageId Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.
                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.
                     * @param _pageId Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.
                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取"embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
                     * @return Intention "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置"embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
                     * @param _intention "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
                     * 
                     */
                    void SetIntention(const std::string& _intention);

                    /**
                     * 判断参数 Intention 是否已赋值
                     * @return Intention 是否已赋值
                     * 
                     */
                    bool IntentionHasBeenSet() const;

                    /**
                     * 获取"page" indicates embedding a page, "panel" indicates embedding the entire dashboard, and "project" is used for ChatBI embedding.
                     * @return Scope "page" indicates embedding a page, "panel" indicates embedding the entire dashboard, and "project" is used for ChatBI embedding.
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置"page" indicates embedding a page, "panel" indicates embedding the entire dashboard, and "project" is used for ChatBI embedding.
                     * @param _scope "page" indicates embedding a page, "panel" indicates embedding the entire dashboard, and "project" is used for ChatBI embedding.
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Expiration time. Unit: minutes. Maximum value: 240 (namely, 4 hours). Default value: 240.
                     * @return ExpireTime Expiration time. Unit: minutes. Maximum value: 240 (namely, 4 hours). Default value: 240.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time. Unit: minutes. Maximum value: 240 (namely, 4 hours). Default value: 240.
                     * @param _expireTime Expiration time. Unit: minutes. Maximum value: 240 (namely, 4 hours). Default value: 240.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Alternate field.
                     * @return ExtraParam Alternate field.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Alternate field.
                     * @param _extraParam Alternate field.
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取User enterprise ID (only used for multi-user).
                     * @return UserCorpId User enterprise ID (only used for multi-user).
                     * 
                     */
                    std::string GetUserCorpId() const;

                    /**
                     * 设置User enterprise ID (only used for multi-user).
                     * @param _userCorpId User enterprise ID (only used for multi-user).
                     * 
                     */
                    void SetUserCorpId(const std::string& _userCorpId);

                    /**
                     * 判断参数 UserCorpId 是否已赋值
                     * @return UserCorpId 是否已赋值
                     * 
                     */
                    bool UserCorpIdHasBeenSet() const;

                    /**
                     * 获取User ID (only used for multi-user).
                     * @return UserId User ID (only used for multi-user).
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID (only used for multi-user).
                     * @param _userId User ID (only used for multi-user).
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
                     * 获取Access count limit (range: 1-99999). Leave empty to disable access restrictions.
                     * @return TicketNum Access count limit (range: 1-99999). Leave empty to disable access restrictions.
                     * 
                     */
                    int64_t GetTicketNum() const;

                    /**
                     * 设置Access count limit (range: 1-99999). Leave empty to disable access restrictions.
                     * @param _ticketNum Access count limit (range: 1-99999). Leave empty to disable access restrictions.
                     * 
                     */
                    void SetTicketNum(const int64_t& _ticketNum);

                    /**
                     * 判断参数 TicketNum 是否已赋值
                     * @return TicketNum 是否已赋值
                     * 
                     */
                    bool TicketNumHasBeenSet() const;

                    /**
                     * 获取Global filter parameters: Applies to all report filter criteria. Should be formatted as a JSON string.
** Currently, only character-type page parameters can be bound to global parameters.
**
[
    {
"ParamKey": "name", page parameter name.
"JoinType": "AND", // connection method. Currently, only AND is supported.
        "WhereList": [
            {
"Operator": "-neq", // operator. Refer to the following instructions.
"Value": [ action value. For a single-value array, only one value is passed.
                    "zZWJMD",
                    "ZzVGHX",
"Hunan province".
"Hebei province".
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
"Male".
                ]
            }
        ]
    }
]



Currently supported operators.
 -neq not equal to != operator.
 -eq equal to = operator.
 -is in operator.

                     * @return GlobalParam Global filter parameters: Applies to all report filter criteria. Should be formatted as a JSON string.
** Currently, only character-type page parameters can be bound to global parameters.
**
[
    {
"ParamKey": "name", page parameter name.
"JoinType": "AND", // connection method. Currently, only AND is supported.
        "WhereList": [
            {
"Operator": "-neq", // operator. Refer to the following instructions.
"Value": [ action value. For a single-value array, only one value is passed.
                    "zZWJMD",
                    "ZzVGHX",
"Hunan province".
"Hebei province".
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
"Male".
                ]
            }
        ]
    }
]



Currently supported operators.
 -neq not equal to != operator.
 -eq equal to = operator.
 -is in operator.

                     * 
                     */
                    std::string GetGlobalParam() const;

                    /**
                     * 设置Global filter parameters: Applies to all report filter criteria. Should be formatted as a JSON string.
** Currently, only character-type page parameters can be bound to global parameters.
**
[
    {
"ParamKey": "name", page parameter name.
"JoinType": "AND", // connection method. Currently, only AND is supported.
        "WhereList": [
            {
"Operator": "-neq", // operator. Refer to the following instructions.
"Value": [ action value. For a single-value array, only one value is passed.
                    "zZWJMD",
                    "ZzVGHX",
"Hunan province".
"Hebei province".
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
"Male".
                ]
            }
        ]
    }
]



Currently supported operators.
 -neq not equal to != operator.
 -eq equal to = operator.
 -is in operator.

                     * @param _globalParam Global filter parameters: Applies to all report filter criteria. Should be formatted as a JSON string.
** Currently, only character-type page parameters can be bound to global parameters.
**
[
    {
"ParamKey": "name", page parameter name.
"JoinType": "AND", // connection method. Currently, only AND is supported.
        "WhereList": [
            {
"Operator": "-neq", // operator. Refer to the following instructions.
"Value": [ action value. For a single-value array, only one value is passed.
                    "zZWJMD",
                    "ZzVGHX",
"Hunan province".
"Hebei province".
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
"Male".
                ]
            }
        ]
    }
]



Currently supported operators.
 -neq not equal to != operator.
 -eq equal to = operator.
 -is in operator.

                     * 
                     */
                    void SetGlobalParam(const std::string& _globalParam);

                    /**
                     * 判断参数 GlobalParam 是否已赋值
                     * @return GlobalParam 是否已赋值
                     * 
                     */
                    bool GlobalParamHasBeenSet() const;

                    /**
                     * 获取100: no user bound. Create 1 token at a time. UserCorpId and UserId are optional. ChatBI embedding is not supported.
200: single token per user. Create 1 token at a time. UserCorpId and UserId required.
300: multiple tokens per user. Create multiple tokens at a time. UserCorpId and UserId required.
                     * @return TokenType 100: no user bound. Create 1 token at a time. UserCorpId and UserId are optional. ChatBI embedding is not supported.
200: single token per user. Create 1 token at a time. UserCorpId and UserId required.
300: multiple tokens per user. Create multiple tokens at a time. UserCorpId and UserId required.
                     * 
                     */
                    int64_t GetTokenType() const;

                    /**
                     * 设置100: no user bound. Create 1 token at a time. UserCorpId and UserId are optional. ChatBI embedding is not supported.
200: single token per user. Create 1 token at a time. UserCorpId and UserId required.
300: multiple tokens per user. Create multiple tokens at a time. UserCorpId and UserId required.
                     * @param _tokenType 100: no user bound. Create 1 token at a time. UserCorpId and UserId are optional. ChatBI embedding is not supported.
200: single token per user. Create 1 token at a time. UserCorpId and UserId required.
300: multiple tokens per user. Create multiple tokens at a time. UserCorpId and UserId required.
                     * 
                     */
                    void SetTokenType(const int64_t& _tokenType);

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取The number of tokens created at one time.
                     * @return TokenNum The number of tokens created at one time.
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 设置The number of tokens created at one time.
                     * @param _tokenNum The number of tokens created at one time.
                     * 
                     */
                    void SetTokenNum(const int64_t& _tokenNum);

                    /**
                     * 判断参数 TokenNum 是否已赋值
                     * @return TokenNum 是否已赋值
                     * 
                     */
                    bool TokenNumHasBeenSet() const;

                    /**
                     * 获取Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
                     * @return ConfigParam Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
                     * 
                     */
                    std::string GetConfigParam() const;

                    /**
                     * 设置Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
                     * @param _configParam Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
                     * 
                     */
                    void SetConfigParam(const std::string& _configParam);

                    /**
                     * 判断参数 ConfigParam 是否已赋值
                     * @return ConfigParam 是否已赋值
                     * 
                     */
                    bool ConfigParamHasBeenSet() const;

                private:

                    /**
                     * Shares the project ID.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Shares the page ID. This field is empty (0) for embedding a dashboard and is not passed for embedding ChatBI.
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * "page" indicates embedding a page, "panel" indicates embedding the entire dashboard, and "project" is used for ChatBI embedding.
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Expiration time. Unit: minutes. Maximum value: 240 (namely, 4 hours). Default value: 240.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Alternate field.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * User enterprise ID (only used for multi-user).
                     */
                    std::string m_userCorpId;
                    bool m_userCorpIdHasBeenSet;

                    /**
                     * User ID (only used for multi-user).
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Access count limit (range: 1-99999). Leave empty to disable access restrictions.
                     */
                    int64_t m_ticketNum;
                    bool m_ticketNumHasBeenSet;

                    /**
                     * Global filter parameters: Applies to all report filter criteria. Should be formatted as a JSON string.
** Currently, only character-type page parameters can be bound to global parameters.
**
[
    {
"ParamKey": "name", page parameter name.
"JoinType": "AND", // connection method. Currently, only AND is supported.
        "WhereList": [
            {
"Operator": "-neq", // operator. Refer to the following instructions.
"Value": [ action value. For a single-value array, only one value is passed.
                    "zZWJMD",
                    "ZzVGHX",
"Hunan province".
"Hebei province".
                ]
            }
        ]
    },
    {
        "ParamKey": "genderParam",
        "JoinType": "AND",
        "WhereList": [
            {
                "Operator": "-neq",
                "Value": [
"Male".
                ]
            }
        ]
    }
]



Currently supported operators.
 -neq not equal to != operator.
 -eq equal to = operator.
 -is in operator.

                     */
                    std::string m_globalParam;
                    bool m_globalParamHasBeenSet;

                    /**
                     * 100: no user bound. Create 1 token at a time. UserCorpId and UserId are optional. ChatBI embedding is not supported.
200: single token per user. Create 1 token at a time. UserCorpId and UserId required.
300: multiple tokens per user. Create multiple tokens at a time. UserCorpId and UserId required.
                     */
                    int64_t m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * The number of tokens created at one time.
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                    /**
                     * Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
                     */
                    std::string m_configParam;
                    bool m_configParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
