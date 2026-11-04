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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Skill exception notification.
                */
                class SkillNotice : public AbstractModel
                {
                public:
                    SkillNotice();
                    ~SkillNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Notification level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Success, string literal: "success" |
| 2 | Warning, string literal: "warning" |
| 3 | Error, string literal: "error" |
                     * @return Level Notification level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Success, string literal: "success" |
| 2 | Warning, string literal: "warning" |
| 3 | Error, string literal: "error" |
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Notification level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Success, string literal: "success" |
| 2 | Warning, string literal: "warning" |
| 3 | Error, string literal: "error" |
                     * @param _level Notification level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Success, string literal: "success" |
| 2 | Warning, string literal: "warning" |
| 3 | Error, string literal: "error" |
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Copywriting (post-i18n string)
                     * @return NoticeContent Copywriting (post-i18n string)
                     * 
                     */
                    std::string GetNoticeContent() const;

                    /**
                     * 设置Copywriting (post-i18n string)
                     * @param _noticeContent Copywriting (post-i18n string)
                     * 
                     */
                    void SetNoticeContent(const std::string& _noticeContent);

                    /**
                     * 判断参数 NoticeContent 是否已赋值
                     * @return NoticeContent 是否已赋值
                     * 
                     */
                    bool NoticeContentHasBeenSet() const;

                    /**
                     * 获取Version ID of the Skill that triggers this notice
                     * @return TriggerVersionId Version ID of the Skill that triggers this notice
                     * 
                     */
                    std::string GetTriggerVersionId() const;

                    /**
                     * 设置Version ID of the Skill that triggers this notice
                     * @param _triggerVersionId Version ID of the Skill that triggers this notice
                     * 
                     */
                    void SetTriggerVersionId(const std::string& _triggerVersionId);

                    /**
                     * 判断参数 TriggerVersionId 是否已赋值
                     * @return TriggerVersionId 是否已赋值
                     * 
                     */
                    bool TriggerVersionIdHasBeenSet() const;

                    /**
                     * 获取Notification type 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Release failure |
| 2 | Shared approval rejected |
                     * @return Type Notification type 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Release failure |
| 2 | Shared approval rejected |
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Notification type 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Release failure |
| 2 | Shared approval rejected |
                     * @param _type Notification type 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Release failure |
| 2 | Shared approval rejected |
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Notification level

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Success, string literal: "success" |
| 2 | Warning, string literal: "warning" |
| 3 | Error, string literal: "error" |
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Copywriting (post-i18n string)
                     */
                    std::string m_noticeContent;
                    bool m_noticeContentHasBeenSet;

                    /**
                     * Version ID of the Skill that triggers this notice
                     */
                    std::string m_triggerVersionId;
                    bool m_triggerVersionIdHasBeenSet;

                    /**
                     * Notification type 

Enumeration values:
| uint | Description |
| --- | --- |
| 0 | Placeholder |
| 1 | Release failure |
| 2 | Shared approval rejected |
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLNOTICE_H_
