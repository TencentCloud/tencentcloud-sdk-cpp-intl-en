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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Agent status.
                */
                class StaffStatus : public AbstractModel
                {
                public:
                    StaffStatus();
                    ~StaffStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the cursor used for querying in pagination scenarios.
                     * @return Cursor Specifies the cursor used for querying in pagination scenarios.
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置Specifies the cursor used for querying in pagination scenarios.
                     * @param _cursor Specifies the cursor used for querying in pagination scenarios.
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取Status timestamp. Unix second-level timestamp.
                     * @return Timestamp Status timestamp. Unix second-level timestamp.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Status timestamp. Unix second-level timestamp.
                     * @param _timestamp Status timestamp. Unix second-level timestamp.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Agent status free | busy | rest | notReady | afterCallWork | offline.
                     * @return Status Agent status free | busy | rest | notReady | afterCallWork | offline.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Agent status free | busy | rest | notReady | afterCallWork | offline.
                     * @param _status Agent status free | busy | rest | notReady | afterCallWork | offline.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Specifies the session Id for status association.
                     * @return SessionId Specifies the session Id for status association.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Specifies the session Id for status association.
                     * @param _sessionId Specifies the session Id for status association.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the cursor used for querying in pagination scenarios.
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * Status timestamp. Unix second-level timestamp.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Agent status free | busy | rest | notReady | afterCallWork | offline.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Specifies the session Id for status association.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_
