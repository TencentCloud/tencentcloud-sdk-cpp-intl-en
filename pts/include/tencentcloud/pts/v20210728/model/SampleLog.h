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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Attributes.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Sampled request logs.
                */
                class SampleLog : public AbstractModel
                {
                public:
                    SampleLog();
                    ~SampleLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Millisecond timestamp.

Note: This field may return null, indicating that no valid value is found.
                     * @return Timestamp Millisecond timestamp.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置Millisecond timestamp.

Note: This field may return null, indicating that no valid value is found.
                     * @param _timestamp Millisecond timestamp.

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
                     * 获取Log attributes.

Note: This field may return null, indicating that no valid value is found.
                     * @return Attributes Log attributes.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    Attributes GetAttributes() const;

                    /**
                     * 设置Log attributes.

Note: This field may return null, indicating that no valid value is found.
                     * @param _attributes Log attributes.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAttributes(const Attributes& _attributes);

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                    /**
                     * 获取Request in har format in log.

Note: This field may return null, indicating that no valid value is found.
                     * @return Body Request in har format in log.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Request in har format in log.

Note: This field may return null, indicating that no valid value is found.
                     * @param _body Request in har format in log.

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
                     * Millisecond timestamp.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Log attributes.

Note: This field may return null, indicating that no valid value is found.
                     */
                    Attributes m_attributes;
                    bool m_attributesHasBeenSet;

                    /**
                     * Request in har format in log.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SAMPLELOG_H_
