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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTREQUEST_H_

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
                * DescribeConversationList request structure.
                */
                class DescribeConversationListRequest : public AbstractModel
                {
                public:
                    DescribeConversationListRequest();
                    ~DescribeConversationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Session type. Pass CONVERSATION_TYPE_UNSPECIFIED to indicate all. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * @return Type <p>Session type. Pass CONVERSATION_TYPE_UNSPECIFIED to indicate all. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Session type. Pass CONVERSATION_TYPE_UNSPECIFIED to indicate all. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * @param _type <p>Session type. Pass CONVERSATION_TYPE_UNSPECIFIED to indicate all. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>App ID</p>
                     * @return AppId <p>App ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>App ID</p>
                     * @param _appId <p>App ID</p>
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
                     * 获取<p>Required when Type=CONVERSATION_TYPE_API. Application key</p>
                     * @return AppKey <p>Required when Type=CONVERSATION_TYPE_API. Application key</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>Required when Type=CONVERSATION_TYPE_API. Application key</p>
                     * @param _appKey <p>Required when Type=CONVERSATION_TYPE_API. Application key</p>
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取<p>Keyword</p>
                     * @return Keyword <p>Keyword</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>Keyword</p>
                     * @param _keyword <p>Keyword</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>Number limit (integer), used in conjunction with Offset</p>
                     * @return Limit <p>Number limit (integer), used in conjunction with Offset</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number limit (integer), used in conjunction with Offset</p>
                     * @param _limit <p>Number limit (integer), used in conjunction with Offset</p>
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
                     * 获取<p>Sub-account Uin</p>
                     * @return LoginSubAccountUin <p>Sub-account Uin</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>Sub-account Uin</p>
                     * @param _loginSubAccountUin <p>Sub-account Uin</p>
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
                     * 获取<p>Root account Uin</p>
                     * @return LoginUin <p>Root account Uin</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>Root account Uin</p>
                     * @param _loginUin <p>Root account Uin</p>
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
                     * 获取<p>Offset (integer), used in conjunction with Limit, starts from 0</p>
                     * @return Offset <p>Offset (integer), used in conjunction with Limit, starts from 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset (integer), used in conjunction with Limit, starts from 0</p>
                     * @param _offset <p>Offset (integer), used in conjunction with Limit, starts from 0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Required when Type=CONVERSATION_TYPE_SHARE. Share code</p>
                     * @return ShareCode <p>Required when Type=CONVERSATION_TYPE_SHARE. Share code</p>
                     * 
                     */
                    std::string GetShareCode() const;

                    /**
                     * 设置<p>Required when Type=CONVERSATION_TYPE_SHARE. Share code</p>
                     * @param _shareCode <p>Required when Type=CONVERSATION_TYPE_SHARE. Share code</p>
                     * 
                     */
                    void SetShareCode(const std::string& _shareCode);

                    /**
                     * 判断参数 ShareCode 是否已赋值
                     * @return ShareCode 是否已赋值
                     * 
                     */
                    bool ShareCodeHasBeenSet() const;

                    /**
                     * 获取<p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
                     * @return UserId <p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
                     * @param _userId <p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
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
                     * 获取<p>Client-side AgentId, used when querying sessions created based on the client-side AgentId</p>
                     * @return AgentId <p>Client-side AgentId, used when querying sessions created based on the client-side AgentId</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Client-side AgentId, used when querying sessions created based on the client-side AgentId</p>
                     * @param _agentId <p>Client-side AgentId, used when querying sessions created based on the client-side AgentId</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>Session type. Pass CONVERSATION_TYPE_UNSPECIFIED to indicate all. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>App ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Required when Type=CONVERSATION_TYPE_API. Application key</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>Keyword</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>Number limit (integer), used in conjunction with Offset</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Sub-account Uin</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * <p>Root account Uin</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>Offset (integer), used in conjunction with Limit, starts from 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Required when Type=CONVERSATION_TYPE_SHARE. Share code</p>
                     */
                    std::string m_shareCode;
                    bool m_shareCodeHasBeenSet;

                    /**
                     * <p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Client-side AgentId, used when querying sessions created based on the client-side AgentId</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBECONVERSATIONLISTREQUEST_H_
