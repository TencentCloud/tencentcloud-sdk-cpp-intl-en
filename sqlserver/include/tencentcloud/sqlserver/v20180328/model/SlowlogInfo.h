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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_

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
                * Slow query log file information
                */
                class SlowlogInfo : public AbstractModel
                {
                public:
                    SlowlogInfo();
                    ~SlowlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of slow query log file
                     * @return Id Unique ID of slow query log file
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Unique ID of slow query log file
                     * @param Id Unique ID of slow query log file
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取File generation start time
                     * @return StartTime File generation start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置File generation start time
                     * @param StartTime File generation start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取File generation end time
                     * @return EndTime File generation end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置File generation end time
                     * @param EndTime File generation end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取File size in KB
                     * @return Size File size in KB
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size in KB
                     * @param Size File size in KB
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Number of logs in file
                     * @return Count Number of logs in file
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of logs in file
                     * @param Count Number of logs in file
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Download address for private network
                     * @return InternalAddr Download address for private network
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置Download address for private network
                     * @param InternalAddr Download address for private network
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Download address for public network
                     * @return ExternalAddr Download address for public network
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置Download address for public network
                     * @param ExternalAddr Download address for public network
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取Status (1: success, 2: failure)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Status (1: success, 2: failure)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status (1: success, 2: failure)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Status (1: success, 2: failure)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Unique ID of slow query log file
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * File generation start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * File generation end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * File size in KB
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Number of logs in file
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Download address for private network
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Download address for public network
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * Status (1: success, 2: failure)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SLOWLOGINFO_H_
