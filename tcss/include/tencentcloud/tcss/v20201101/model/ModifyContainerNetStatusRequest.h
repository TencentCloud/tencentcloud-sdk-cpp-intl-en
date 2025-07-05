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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_

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
                * ModifyContainerNetStatus request structure.
                */
                class ModifyContainerNetStatusRequest : public AbstractModel
                {
                public:
                    ModifyContainerNetStatusRequest();
                    ~ModifyContainerNetStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Container ID
                     * @return ContainerID Container ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置Container ID
                     * @param _containerID Container ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取Status
`EVENT_ISOLATE_CONTAINER`: Isolate the container.
`EVENT_RESOTRE_CONTAINER`: Recover the container.
)
                     * @return Status Status
`EVENT_ISOLATE_CONTAINER`: Isolate the container.
`EVENT_RESOTRE_CONTAINER`: Recover the container.
)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
`EVENT_ISOLATE_CONTAINER`: Isolate the container.
`EVENT_RESOTRE_CONTAINER`: Recover the container.
)
                     * @param _status Status
`EVENT_ISOLATE_CONTAINER`: Isolate the container.
`EVENT_RESOTRE_CONTAINER`: Recover the container.
)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Container ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * Status
`EVENT_ISOLATE_CONTAINER`: Isolate the container.
`EVENT_RESOTRE_CONTAINER`: Recover the container.
)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYCONTAINERNETSTATUSREQUEST_H_
