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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONLOG_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Synchronization log
                */
                class ReplicationLog : public AbstractModel
                {
                public:
                    ReplicationLog();
                    ~ReplicationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ResourceType Resource type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Path of the source resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Source Path of the source resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Path of the source resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Source Path of the source resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Path of the destination resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Destination Path of the destination resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置Path of the destination resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Destination Path of the destination resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Synchronization status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Status Synchronization status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Synchronization status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Status Synchronization status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Start time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StartTime Start time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param StartTime Start time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndTime End time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EndTime End time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Resource type
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Path of the source resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Path of the destination resource
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Synchronization status
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Start time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONLOG_H_
