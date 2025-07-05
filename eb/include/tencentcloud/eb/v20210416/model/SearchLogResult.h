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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESULT_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Retails of returned logs
                */
                class SearchLogResult : public AbstractModel
                {
                public:
                    SearchLogResult();
                    ~SearchLogResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log reported time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Timestamp Log reported time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Log reported time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _timestamp Log reported time
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Log details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Message Log details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Log details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _message Log details
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Event source
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Source Event source
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Event source
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _source Event source
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取The event type.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Type The event type.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The event type.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _type The event type.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Event matching rule
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return RuleIds Event matching rule
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleIds() const;

                    /**
                     * 设置Event matching rule
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _ruleIds Event matching rule
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleIds(const std::string& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取The instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Subject The instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置The instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subject The instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取The region.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Region The region.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The region.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _region The region.
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Event status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Status Event status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _status Event status
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Log reported time
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Log details
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Event source
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * The event type.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event matching rule
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * The instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * The region.
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Event status
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGRESULT_H_
