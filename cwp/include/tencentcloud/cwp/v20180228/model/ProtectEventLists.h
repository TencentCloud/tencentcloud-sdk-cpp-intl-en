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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Information on the list of protection events
                */
                class ProtectEventLists : public AbstractModel
                {
                public:
                    ProtectEventLists();
                    ~ProtectEventLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server name
                     * @return HostName Server name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param _hostName Server name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP address
                     * @return HostIp Server IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server IP address
                     * @param _hostIp Server IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Event address
                     * @return EventDir Event address
                     * 
                     */
                    std::string GetEventDir() const;

                    /**
                     * 设置Event address
                     * @param _eventDir Event address
                     * 
                     */
                    void SetEventDir(const std::string& _eventDir);

                    /**
                     * 判断参数 EventDir 是否已赋值
                     * @return EventDir 是否已赋值
                     * 
                     */
                    bool EventDirHasBeenSet() const;

                    /**
                     * 获取Event type. 0: Content Modification Recovery; 1: Permission Modification Recovery; 2: Ownership Modification Recovery; 3: Deletion Recovery; 4: Newly-added Deletion
                     * @return EventType Event type. 0: Content Modification Recovery; 1: Permission Modification Recovery; 2: Ownership Modification Recovery; 3: Deletion Recovery; 4: Newly-added Deletion
                     * 
                     */
                    uint64_t GetEventType() const;

                    /**
                     * 设置Event type. 0: Content Modification Recovery; 1: Permission Modification Recovery; 2: Ownership Modification Recovery; 3: Deletion Recovery; 4: Newly-added Deletion
                     * @param _eventType Event type. 0: Content Modification Recovery; 1: Permission Modification Recovery; 2: Ownership Modification Recovery; 3: Deletion Recovery; 4: Newly-added Deletion
                     * 
                     */
                    void SetEventType(const uint64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Event status. 1: restored. 0: unrecovered
                     * @return EventStatus Event status. 1: restored. 0: unrecovered
                     * 
                     */
                    uint64_t GetEventStatus() const;

                    /**
                     * 设置Event status. 1: restored. 0: unrecovered
                     * @param _eventStatus Event status. 1: restored. 0: unrecovered
                     * 
                     */
                    void SetEventStatus(const uint64_t& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Detection time
                     * @return CreateTime Detection time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Detection time
                     * @param _createTime Detection time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Recovery time
                     * @return RestoreTime Recovery time
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置Recovery time
                     * @param _restoreTime Recovery time
                     * 
                     */
                    void SetRestoreTime(const std::string& _restoreTime);

                    /**
                     * 判断参数 RestoreTime 是否已赋值
                     * @return RestoreTime 是否已赋值
                     * 
                     */
                    bool RestoreTimeHasBeenSet() const;

                    /**
                     * 获取Unique ID
                     * @return Id Unique ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID
                     * @param _id Unique ID
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
                     * 获取File type. 0: normal file; 1: directory; 2: soft link
                     * @return FileType File type. 0: normal file; 1: directory; 2: soft link
                     * 
                     */
                    uint64_t GetFileType() const;

                    /**
                     * 设置File type. 0: normal file; 1: directory; 2: soft link
                     * @param _fileType File type. 0: normal file; 1: directory; 2: soft link
                     * 
                     */
                    void SetFileType(const uint64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
                     * @return MachineExtraInfo Host Additional Information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
                     * @param _machineExtraInfo Host Additional Information
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取Machine instance UUID.
                     * @return Quuid Machine instance UUID.
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine instance UUID.
                     * @param _quuid Machine instance UUID.
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Event address
                     */
                    std::string m_eventDir;
                    bool m_eventDirHasBeenSet;

                    /**
                     * Event type. 0: Content Modification Recovery; 1: Permission Modification Recovery; 2: Ownership Modification Recovery; 3: Deletion Recovery; 4: Newly-added Deletion
                     */
                    uint64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Event status. 1: restored. 0: unrecovered
                     */
                    uint64_t m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Detection time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Recovery time
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * Unique ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * File type. 0: normal file; 1: directory; 2: soft link
                     */
                    uint64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Host Additional Information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * Machine instance UUID.
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTEVENTLISTS_H_
