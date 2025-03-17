/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_NORMALLOG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_NORMALLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * General log struct.
                */
                class NormalLog : public AbstractModel
                {
                public:
                    NormalLog();
                    ~NormalLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp in milliseconds.

Note: This field may return null, indicating that no valid value is found.
                     * @return Timestamp Timestamp in milliseconds.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Timestamp in milliseconds.

Note: This field may return null, indicating that no valid value is found.
                     * @param _timestamp Timestamp in milliseconds.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Log level.

Note: This field may return null, indicating that no valid value is found.
                     * @return SeverityText Log level.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSeverityText() const;

                    /**
                     * 设置Log level.

Note: This field may return null, indicating that no valid value is found.
                     * @param _severityText Log level.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSeverityText(const std::string& _severityText);

                    /**
                     * 判断参数 SeverityText 是否已赋值
                     * @return SeverityText 是否已赋值
                     * 
                     */
                    bool SeverityTextHasBeenSet() const;

                    /**
                     * 获取Log output content.

Note: This field may return null, indicating that no valid value is found.
                     * @return Body Log output content.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Log output content.

Note: This field may return null, indicating that no valid value is found.
                     * @param _body Log output content.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                private:

                    /**
                     * Timestamp in milliseconds.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Log level.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_severityText;
                    bool m_severityTextHasBeenSet;

                    /**
                     * Log output content.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_NORMALLOG_H_
