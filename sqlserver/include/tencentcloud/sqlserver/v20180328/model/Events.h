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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Details of an extended event
                */
                class Events : public AbstractModel
                {
                public:
                    Events();
                    ~Events() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return Id ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
                     * @param _id ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取File name of an extended event
                     * @return FileName File name of an extended event
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name of an extended event
                     * @param _fileName File name of an extended event
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size of an extended event
                     * @return Size File size of an extended event
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size of an extended event
                     * @param _size File size of an extended event
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  `deadlock` (deadlock event).
                     * @return EventType Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  `deadlock` (deadlock event).
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  `deadlock` (deadlock event).
                     * @param _eventType Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  `deadlock` (deadlock event).
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Event record status. Valid values: `1` (succeeded), `2` (failed).
                     * @return Status Event record status. Valid values: `1` (succeeded), `2` (failed).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Event record status. Valid values: `1` (succeeded), `2` (failed).
                     * @param _status Event record status. Valid values: `1` (succeeded), `2` (failed).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Generation start time of an extended file
                     * @return StartTime Generation start time of an extended file
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Generation start time of an extended file
                     * @param _startTime Generation start time of an extended file
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
                     * 获取Generation end time of an extended file
                     * @return EndTime Generation end time of an extended file
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Generation end time of an extended file
                     * @param _endTime Generation end time of an extended file
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
                     * 获取Download address on the private network
                     * @return InternalAddr Download address on the private network
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置Download address on the private network
                     * @param _internalAddr Download address on the private network
                     * 
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Download address on the public network
                     * @return ExternalAddr Download address on the public network
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置Download address on the public network
                     * @param _externalAddr Download address on the public network
                     * 
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * File name of an extended event
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size of an extended event
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Event type. Valid values: `slow` (Slow SQL event), `blocked` (blocking event),  `deadlock` (deadlock event).
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event record status. Valid values: `1` (succeeded), `2` (failed).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Generation start time of an extended file
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Generation end time of an extended file
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Download address on the private network
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Download address on the public network
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_EVENTS_H_
