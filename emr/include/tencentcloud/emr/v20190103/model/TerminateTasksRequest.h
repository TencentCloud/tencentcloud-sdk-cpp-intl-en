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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATETASKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * TerminateTasks request structure.
                */
                class TerminateTasksRequest : public AbstractModel
                {
                public:
                    TerminateTasksRequest();
                    ~TerminateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Resource ID list for nodes pending termination. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * @return ResourceIds Resource ID list for nodes pending termination. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Resource ID list for nodes pending termination. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * @param _resourceIds Resource ID list for nodes pending termination. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Resource ID list for nodes pending termination. Resource ID format: emr-vm-xxxxxxxx. You can query valid resource IDs by logging in to the [console](https://console.cloud.tencent.com/emr).
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TERMINATETASKSREQUEST_H_
