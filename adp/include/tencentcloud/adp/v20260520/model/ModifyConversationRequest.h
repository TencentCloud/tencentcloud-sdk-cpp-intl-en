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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONVERSATIONREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONVERSATIONREQUEST_H_

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
                * ModifyConversation request structure.
                */
                class ModifyConversationRequest : public AbstractModel
                {
                public:
                    ModifyConversationRequest();
                    ~ModifyConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Session type. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * @return Type <p>Session type. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Session type. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
                     * @param _type <p>Session type. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
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
                     * 获取<p>User sub-account logged in (required in integrator mode)</p>
                     * @return LoginSubAccountUin <p>User sub-account logged in (required in integrator mode)</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>User sub-account logged in (required in integrator mode)</p>
                     * @param _loginSubAccountUin <p>User sub-account logged in (required in integrator mode)</p>
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
                     * 获取<p>User Main Account logged in (required in integrator mode)</p>
                     * @return LoginUin <p>User Main Account logged in (required in integrator mode)</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>User Main Account logged in (required in integrator mode)</p>
                     * @param _loginUin <p>User Main Account logged in (required in integrator mode)</p>
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
                     * 获取<p>Required when Type is CONVERSATION_TYPE_SHARE. Share code</p>
                     * @return ShareCode <p>Required when Type is CONVERSATION_TYPE_SHARE. Share code</p>
                     * 
                     */
                    std::string GetShareCode() const;

                    /**
                     * 设置<p>Required when Type is CONVERSATION_TYPE_SHARE. Share code</p>
                     * @param _shareCode <p>Required when Type is CONVERSATION_TYPE_SHARE. Share code</p>
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
                     * 获取Session ID.
                     * @return ConversationId Session ID.
                     * 
                     */
                    std::string GetConversationId() const;

                    /**
                     * 设置Session ID.
                     * @param _conversationId Session ID.
                     * 
                     */
                    void SetConversationId(const std::string& _conversationId);

                    /**
                     * 判断参数 ConversationId 是否已赋值
                     * @return ConversationId 是否已赋值
                     * 
                     */
                    bool ConversationIdHasBeenSet() const;

                    /**
                     * 获取Session heading
                     * @return Title Session heading
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Session heading
                     * @param _title Session heading
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * <p>Session type. Enumeration values: 0-CONVERSATION_TYPE_UNSPECIFIED (not specified; means all in list query), 1-CONVERSATION_TYPE_VISITOR (visitor trial), 2-CONVERSATION_TYPE_EVALUATION (evaluation), 5-CONVERSATION_TYPE_API (API integration), 10-CONVERSATION_TYPE_WORKFLOW (workflow debugging), 20-CONVERSATION_TYPE_SHARE (share a link)</p>
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
                     * <p>User sub-account logged in (required in integrator mode)</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * <p>User Main Account logged in (required in integrator mode)</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>Required when Type is CONVERSATION_TYPE_SHARE. Share code</p>
                     */
                    std::string m_shareCode;
                    bool m_shareCodeHasBeenSet;

                    /**
                     * <p>Required when Type=CONVERSATION_TYPE_API. Visitor ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Session ID.
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * Session heading
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONVERSATIONREQUEST_H_
