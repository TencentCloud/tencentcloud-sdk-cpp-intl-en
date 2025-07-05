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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Session definition
                */
                class SessionItem : public AbstractModel
                {
                public:
                    SessionItem();
                    ~SessionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type to match
                     * @return Category Type to match
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Type to match
                     * @param _category Type to match
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
                     * 获取Start Mode
                     * @return KeyOrStartMat Start Mode
                     * 
                     */
                    std::string GetKeyOrStartMat() const;

                    /**
                     * 设置Start Mode
                     * @param _keyOrStartMat Start Mode
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
                     * 获取End Mode
                     * @return EndMat End Mode
                     * 
                     */
                    std::string GetEndMat() const;

                    /**
                     * 设置End Mode
                     * @param _endMat End Mode
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
                     * 获取Starting Offset
                     * @return StartOffset Starting Offset
                     * 
                     */
                    std::string GetStartOffset() const;

                    /**
                     * 设置Starting Offset
                     * @param _startOffset Starting Offset
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
                     * 获取End Offset
                     * @return EndOffset End Offset
                     * 
                     */
                    std::string GetEndOffset() const;

                    /**
                     * 设置End Offset
                     * @param _endOffset End Offset
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
                     * 获取Data source
                     * @return Source Data source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Data source
                     * @param _source Data source
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
                     * 获取Update Timestamp
                     * @return TsVersion Update Timestamp
                     * 
                     */
                    std::string GetTsVersion() const;

                    /**
                     * 设置Update Timestamp
                     * @param _tsVersion Update Timestamp
                     * 
                     */
                    void SetTsVersion(const std::string& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取SessionID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionId SessionID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSessionId() const;

                    /**
                     * 设置SessionID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionId SessionID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionId(const int64_t& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Session Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionName Session Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionName() const;

                    /**
                     * 设置Session Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionName Session Name

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the session is being enabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SessionInUsed Whether the session is being enabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSessionInUsed() const;

                    /**
                     * 设置Whether the session is being enabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sessionInUsed Whether the session is being enabled

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionInUsed(const bool& _sessionInUsed);

                    /**
                     * 判断参数 SessionInUsed 是否已赋值
                     * @return SessionInUsed 是否已赋值
                     * 
                     */
                    bool SessionInUsedHasBeenSet() const;

                    /**
                     * 获取Session-related CC Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RelatedRuleID Session-related CC Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetRelatedRuleID() const;

                    /**
                     * 设置Session-related CC Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _relatedRuleID Session-related CC Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRelatedRuleID(const std::vector<int64_t>& _relatedRuleID);

                    /**
                     * 判断参数 RelatedRuleID 是否已赋值
                     * @return RelatedRuleID 是否已赋值
                     * 
                     */
                    bool RelatedRuleIDHasBeenSet() const;

                private:

                    /**
                     * Type to match
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Start Mode
                     */
                    std::string m_keyOrStartMat;
                    bool m_keyOrStartMatHasBeenSet;

                    /**
                     * End Mode
                     */
                    std::string m_endMat;
                    bool m_endMatHasBeenSet;

                    /**
                     * Starting Offset
                     */
                    std::string m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * End Offset
                     */
                    std::string m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * Data source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Update Timestamp
                     */
                    std::string m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * SessionID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Session Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionName;
                    bool m_sessionNameHasBeenSet;

                    /**
                     * Whether the session is being enabled

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_sessionInUsed;
                    bool m_sessionInUsedHasBeenSet;

                    /**
                     * Session-related CC Rule ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_relatedRuleID;
                    bool m_relatedRuleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SESSIONITEM_H_
