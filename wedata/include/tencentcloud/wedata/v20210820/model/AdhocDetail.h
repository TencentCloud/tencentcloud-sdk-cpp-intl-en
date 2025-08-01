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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Subtask records
                */
                class AdhocDetail : public AbstractModel
                {
                public:
                    AdhocDetail();
                    ~AdhocDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtask record Id
                     * @return Id Subtask record Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Subtask record Id
                     * @param _id Subtask record Id
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
                     * 获取Script Content
                     * @return ScriptContent Script Content
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script Content
                     * @param _scriptContent Script Content
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task termination time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime Task termination time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task termination time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime Task termination time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Current Task Status
                     * @return Status Current Task Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Current Task Status
                     * @param _status Current Task Status
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
                     * 获取Submit Task ID
                     * @return RecordId Submit Task ID
                     * 
                     */
                    uint64_t GetRecordId() const;

                    /**
                     * 设置Submit Task ID
                     * @param _recordId Submit Task ID
                     * 
                     */
                    void SetRecordId(const uint64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * Subtask record Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Script Content
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Task start time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task termination time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Current Task Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Submit Task ID
                     */
                    uint64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCDETAIL_H_
