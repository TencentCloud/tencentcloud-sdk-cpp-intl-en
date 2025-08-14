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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Timestamp range within which second-level backup is missing
                */
                class SecondLevelBackupMissingTimestamps : public AbstractModel
                {
                public:
                    SecondLevelBackupMissingTimestamps();
                    ~SecondLevelBackupMissingTimestamps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start timestamp.
                     * @return StartTimeStamp Start timestamp.
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置Start timestamp.
                     * @param _startTimeStamp Start timestamp.
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取End timestamp.
                     * @return EndTimeStamp End timestamp.
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置End timestamp.
                     * @param _endTimeStamp End timestamp.
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                private:

                    /**
                     * Start timestamp.
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * End timestamp.
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_
