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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_

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
                * Speech-to-text information
                */
                class AsrData : public AbstractModel
                {
                public:
                    AsrData();
                    ~AsrData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User side.
                     * @return User User side.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置User side.
                     * @param _user User side.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Message content.
                     * @return Message Message content.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Message content.
                     * @param _message Message content.
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
                     * 获取Timestamp.
                     * @return Timestamp Timestamp.
                     * @deprecated
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp.
                     * @param _timestamp Timestamp.
                     * @deprecated
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * @deprecated
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Sentence start time, unix millisecond timestamp.
                     * @return Start Sentence start time, unix millisecond timestamp.
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置Sentence start time, unix millisecond timestamp.
                     * @param _start Sentence start time, unix millisecond timestamp.
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取Sentence end time, unix millisecond timestamp.
                     * @return End Sentence end time, unix millisecond timestamp.
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置Sentence end time, unix millisecond timestamp.
                     * @param _end Sentence end time, unix millisecond timestamp.
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * User side.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Message content.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Timestamp.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Sentence start time, unix millisecond timestamp.
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * Sentence end time, unix millisecond timestamp.
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_ASRDATA_H_
