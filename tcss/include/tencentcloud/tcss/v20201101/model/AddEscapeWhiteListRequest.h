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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDESCAPEWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDESCAPEWHITELISTREQUEST_H_

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
                * AddEscapeWhiteList request structure.
                */
                class AddEscapeWhiteListRequest : public AbstractModel
                {
                public:
                    AddEscapeWhiteListRequest();
                    ~AddEscapeWhiteListRequest() = default;
                    std::string ToJsonString() const;


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

                private:

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

                    /**
                     * Array of allowed image IDs
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDESCAPEWHITELISTREQUEST_H_
