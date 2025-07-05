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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSFILESTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSFILESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVirusFileStatus request structure.
                */
                class ModifyVirusFileStatusRequest : public AbstractModel
                {
                public:
                    ModifyVirusFileStatusRequest();
                    ~ModifyVirusFileStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of events
                     * @return EventIdSet IDs of events
                     * 
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置IDs of events
                     * @param _eventIdSet IDs of events
                     * 
                     */
                    void SetEventIdSet(const std::vector<std::string>& _eventIdSet);

                    /**
                     * 判断参数 EventIdSet 是否已赋值
                     * @return EventIdSet 是否已赋值
                     * 
                     */
                    bool EventIdSetHasBeenSet() const;

                    /**
                     * 获取Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_DEL`: Deleted.
    `EVENT_ADD_WHITE`: Allowed.
    `EVENT_PENDING`: Pending.
	`EVENT_ISOLATE_CONTAINER`: Container isolated.
	`EVENT_RESOTRE_CONTAINER`: Container recovered.
                     * @return Status Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_DEL`: Deleted.
    `EVENT_ADD_WHITE`: Allowed.
    `EVENT_PENDING`: Pending.
	`EVENT_ISOLATE_CONTAINER`: Container isolated.
	`EVENT_RESOTRE_CONTAINER`: Container recovered.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_DEL`: Deleted.
    `EVENT_ADD_WHITE`: Allowed.
    `EVENT_PENDING`: Pending.
	`EVENT_ISOLATE_CONTAINER`: Container isolated.
	`EVENT_RESOTRE_CONTAINER`: Container recovered.
                     * @param _status Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_DEL`: Deleted.
    `EVENT_ADD_WHITE`: Allowed.
    `EVENT_PENDING`: Pending.
	`EVENT_ISOLATE_CONTAINER`: Container isolated.
	`EVENT_RESOTRE_CONTAINER`: Container recovered.
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
                     * 获取Event remarks
                     * @return Remark Event remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Event remarks
                     * @param _remark Event remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether to automatically isolate files with the same MD5 checksum
                     * @return AutoIsolate Whether to automatically isolate files with the same MD5 checksum
                     * 
                     */
                    bool GetAutoIsolate() const;

                    /**
                     * 设置Whether to automatically isolate files with the same MD5 checksum
                     * @param _autoIsolate Whether to automatically isolate files with the same MD5 checksum
                     * 
                     */
                    void SetAutoIsolate(const bool& _autoIsolate);

                    /**
                     * 判断参数 AutoIsolate 是否已赋值
                     * @return AutoIsolate 是否已赋值
                     * 
                     */
                    bool AutoIsolateHasBeenSet() const;

                private:

                    /**
                     * IDs of events
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                    /**
                     * Event status   
    `EVENT_DEALED`: Processed.
    `EVENT_INGNORE`: Ignored.
    `EVENT_DEL`: Deleted.
    `EVENT_ADD_WHITE`: Allowed.
    `EVENT_PENDING`: Pending.
	`EVENT_ISOLATE_CONTAINER`: Container isolated.
	`EVENT_RESOTRE_CONTAINER`: Container recovered.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Event remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to automatically isolate files with the same MD5 checksum
                     */
                    bool m_autoIsolate;
                    bool m_autoIsolateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSFILESTATUSREQUEST_H_
