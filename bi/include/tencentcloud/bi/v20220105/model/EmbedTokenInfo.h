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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Report embedding data structure with strong authentication
                */
                class EmbedTokenInfo : public AbstractModel
                {
                public:
                    EmbedTokenInfo();
                    ~EmbedTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Information identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Information identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Information identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Information identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BIToken Token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBIToken() const;

                    /**
                     * 设置Token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bIToken Token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBIToken(const std::string& _bIToken);

                    /**
                     * 判断参数 BIToken 是否已赋值
                     * @return BIToken 是否已赋值
                     * 
                     */
                    bool BITokenHasBeenSet() const;

                    /**
                     * 获取Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdUser Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createdAt Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedUser Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedUser Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PageId Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pageId Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraParam Backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置Backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraParam Backup.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Embedding type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Scope Embedding type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置Embedding type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scope Embedding type.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Expiration time (in minutes), with a maximum value of 240.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time (in minutes), with a maximum value of 240.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Expiration time (in minutes), with a maximum value of 240.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time (in minutes), with a maximum value of 240.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取User enterprise ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserCorpId User enterprise ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserCorpId() const;

                    /**
                     * 设置User enterprise ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userCorpId User enterprise ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Access count limit (range: 1–99999). Leave empty to disable access restrictions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TicketNum Access count limit (range: 1–99999). Leave empty to disable access restrictions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTicketNum() const;

                    /**
                     * 设置Access count limit (range: 1–99999). Leave empty to disable access restrictions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ticketNum Access count limit (range: 1–99999). Leave empty to disable access restrictions.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Global parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GlobalParam Global parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGlobalParam() const;

                    /**
                     * 设置Global parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _globalParam Global parameter.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取"embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Intention "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置"embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intention "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取100: no bound user.
200: single token per user.
300: multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TokenType 100: no bound user.
200: single token per user.
300: multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTokenType() const;

                    /**
                     * 设置100: no bound user.
200: single token per user.
300: multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tokenType 100: no bound user.
200: single token per user.
300: multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of tokens.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TokenNum Number of tokens.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTokenNum() const;

                    /**
                     * 设置Number of tokens.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tokenNum Number of tokens.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether it is multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SingleUserMultiToken Whether it is multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSingleUserMultiToken() const;

                    /**
                     * 设置Whether it is multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _singleUserMultiToken Whether it is multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSingleUserMultiToken(const bool& _singleUserMultiToken);

                    /**
                     * 判断参数 SingleUserMultiToken 是否已赋值
                     * @return SingleUserMultiToken 是否已赋值
                     * 
                     */
                    bool SingleUserMultiTokenHasBeenSet() const;

                    /**
                     * 获取Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConfigParam Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConfigParam() const;

                    /**
                     * 设置Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _configParam Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Information identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Token.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bIToken;
                    bool m_bITokenHasBeenSet;

                    /**
                     * Project ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Creator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Updater.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Page ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Backup.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * Embedding type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Expiration time (in minutes), with a maximum value of 240.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * User enterprise ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userCorpId;
                    bool m_userCorpIdHasBeenSet;

                    /**
                     * User ID (only used for multi-user).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Access count limit (range: 1–99999). Leave empty to disable access restrictions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ticketNum;
                    bool m_ticketNumHasBeenSet;

                    /**
                     * Global parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_globalParam;
                    bool m_globalParamHasBeenSet;

                    /**
                     * "embed" indicates page dashboard embedding, and "chatBIEmbed" indicates ChatBI embedding.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * 100: no bound user.
200: single token per user.
300: multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * Number of tokens.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tokenNum;
                    bool m_tokenNumHasBeenSet;

                    /**
                     * Whether it is multiple tokens per user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_singleUserMultiToken;
                    bool m_singleUserMultiTokenHasBeenSet;

                    /**
                     * Embedded display configurations: Currently for ChatBI embedding scenarios; TableFilter represents data table list filtering, SqlView represents SQL view feature.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_configParam;
                    bool m_configParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EMBEDTOKENINFO_H_
