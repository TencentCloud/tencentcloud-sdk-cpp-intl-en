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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertSession request structure.
                */
                class UpsertSessionRequest : public AbstractModel
                {
                public:
                    UpsertSessionRequest();
                    ~UpsertSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Session source location
                     * @return Source Session source location
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Session source location
                     * @param _source Session source location
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Extraction category
                     * @return Category Extraction category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Extraction category
                     * @param _category Extraction category
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Extract key or initial match mode
                     * @return KeyOrStartMat Extract key or initial match mode
                     * 
                     */
                    std::string GetKeyOrStartMat() const;

                    /**
                     * 设置Extract key or initial match mode
                     * @param _keyOrStartMat Extract key or initial match mode
                     * 
                     */
                    void SetKeyOrStartMat(const std::string& _keyOrStartMat);

                    /**
                     * 判断参数 KeyOrStartMat 是否已赋值
                     * @return KeyOrStartMat 是否已赋值
                     * 
                     */
                    bool KeyOrStartMatHasBeenSet() const;

                    /**
                     * 获取End match mode
                     * @return EndMat End match mode
                     * 
                     */
                    std::string GetEndMat() const;

                    /**
                     * 设置End match mode
                     * @param _endMat End match mode
                     * 
                     */
                    void SetEndMat(const std::string& _endMat);

                    /**
                     * 判断参数 EndMat 是否已赋值
                     * @return EndMat 是否已赋值
                     * 
                     */
                    bool EndMatHasBeenSet() const;

                    /**
                     * 获取Start offset position
                     * @return StartOffset Start offset position
                     * 
                     */
                    std::string GetStartOffset() const;

                    /**
                     * 设置Start offset position
                     * @param _startOffset Start offset position
                     * 
                     */
                    void SetStartOffset(const std::string& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取End offset position
                     * @return EndOffset End offset position
                     * 
                     */
                    std::string GetEndOffset() const;

                    /**
                     * 设置End offset position
                     * @param _endOffset End offset position
                     * 
                     */
                    void SetEndOffset(const std::string& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                    /**
                     * 获取Version
                     * @return Edition Version
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Version
                     * @param _edition Version
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取Session Name
                     * @return SessionName Session Name
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置Session Name
                     * @param _sessionName Session Name
                     * 
                     */
                    void SetSessionName(const std::string& _sessionName);

                    /**
                     * 判断参数 SessionName 是否已赋值
                     * @return SessionName 是否已赋值
                     * 
                     */
                    bool SessionNameHasBeenSet() const;

                    /**
                     * 获取ID corresponding to session
                     * @return SessionID ID corresponding to session
                     * 
                     */
                    int64_t GetSessionID() const;

                    /**
                     * 设置ID corresponding to session
                     * @param _sessionID ID corresponding to session
                     * 
                     */
                    void SetSessionID(const int64_t& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Session source location
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Extraction category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Extract key or initial match mode
                     */
                    std::string m_keyOrStartMat;
                    bool m_keyOrStartMatHasBeenSet;

                    /**
                     * End match mode
                     */
                    std::string m_endMat;
                    bool m_endMatHasBeenSet;

                    /**
                     * Start offset position
                     */
                    std::string m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * End offset position
                     */
                    std::string m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Session Name
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * ID corresponding to session
                     */
                    int64_t m_sessionID;
                    bool m_sessionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTSESSIONREQUEST_H_
