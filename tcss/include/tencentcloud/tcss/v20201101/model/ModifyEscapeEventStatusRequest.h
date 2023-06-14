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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_

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
                * ModifyEscapeEventStatus request structure.
                */
                class ModifyEscapeEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyEscapeEventStatusRequest();
                    ~ModifyEscapeEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of event IDs
                     * @return EventIdSet List of event IDs
                     * 
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置List of event IDs
                     * @param _eventIdSet List of event IDs
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
                     * 获取Event status:
`EVENT_UNDEAL`: Pending (Unignored).
`EVENT_DEALED`: Processed.
`EVENT_IGNORE`: Ignored.
`EVENT_DELETE`: Deleted.
`EVENT_ADD_WHITE`: Allowed.
                     * @return Status Event status:
`EVENT_UNDEAL`: Pending (Unignored).
`EVENT_DEALED`: Processed.
`EVENT_IGNORE`: Ignored.
`EVENT_DELETE`: Deleted.
`EVENT_ADD_WHITE`: Allowed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Event status:
`EVENT_UNDEAL`: Pending (Unignored).
`EVENT_DEALED`: Processed.
`EVENT_IGNORE`: Ignored.
`EVENT_DELETE`: Deleted.
`EVENT_ADD_WHITE`: Allowed.
                     * @param _status Event status:
`EVENT_UNDEAL`: Pending (Unignored).
`EVENT_DEALED`: Processed.
`EVENT_IGNORE`: Ignored.
`EVENT_DELETE`: Deleted.
`EVENT_ADD_WHITE`: Allowed.
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
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
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
                     * 获取Array of allowed image IDs
                     * @return ImageIDs Array of allowed image IDs
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置Array of allowed image IDs
                     * @param _imageIDs Array of allowed image IDs
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取Allowed event type
   `ESCAPE_CGROUPS`: Cgroup escape.
   `ESCAPE_TAMPER_SENSITIVE_FILE`: File tamper escape.
   `ESCAPE_DOCKER_API`: Docker API access escape.
   `ESCAPE_VUL_OCCURRED`: Vulnerability exploit.
   `MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `PRIVILEGE_CONTAINER_START`: Privileged container.
   `PRIVILEGE`: Program privilege escalation escape.
                     * @return EventType Allowed event type
   `ESCAPE_CGROUPS`: Cgroup escape.
   `ESCAPE_TAMPER_SENSITIVE_FILE`: File tamper escape.
   `ESCAPE_DOCKER_API`: Docker API access escape.
   `ESCAPE_VUL_OCCURRED`: Vulnerability exploit.
   `MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `PRIVILEGE_CONTAINER_START`: Privileged container.
   `PRIVILEGE`: Program privilege escalation escape.
                     * 
                     */
                    std::vector<std::string> GetEventType() const;

                    /**
                     * 设置Allowed event type
   `ESCAPE_CGROUPS`: Cgroup escape.
   `ESCAPE_TAMPER_SENSITIVE_FILE`: File tamper escape.
   `ESCAPE_DOCKER_API`: Docker API access escape.
   `ESCAPE_VUL_OCCURRED`: Vulnerability exploit.
   `MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `PRIVILEGE_CONTAINER_START`: Privileged container.
   `PRIVILEGE`: Program privilege escalation escape.
                     * @param _eventType Allowed event type
   `ESCAPE_CGROUPS`: Cgroup escape.
   `ESCAPE_TAMPER_SENSITIVE_FILE`: File tamper escape.
   `ESCAPE_DOCKER_API`: Docker API access escape.
   `ESCAPE_VUL_OCCURRED`: Vulnerability exploit.
   `MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `PRIVILEGE_CONTAINER_START`: Privileged container.
   `PRIVILEGE`: Program privilege escalation escape.
                     * 
                     */
                    void SetEventType(const std::vector<std::string>& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * List of event IDs
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                    /**
                     * Event status:
`EVENT_UNDEAL`: Pending (Unignored).
`EVENT_DEALED`: Processed.
`EVENT_IGNORE`: Ignored.
`EVENT_DELETE`: Deleted.
`EVENT_ADD_WHITE`: Allowed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Array of allowed image IDs
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * Allowed event type
   `ESCAPE_CGROUPS`: Cgroup escape.
   `ESCAPE_TAMPER_SENSITIVE_FILE`: File tamper escape.
   `ESCAPE_DOCKER_API`: Docker API access escape.
   `ESCAPE_VUL_OCCURRED`: Vulnerability exploit.
   `MOUNT_SENSITIVE_PTAH`: Sensitive path mount.
   `PRIVILEGE_CONTAINER_START`: Privileged container.
   `PRIVILEGE`: Program privilege escalation escape.
                     */
                    std::vector<std::string> m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYESCAPEEVENTSTATUSREQUEST_H_
