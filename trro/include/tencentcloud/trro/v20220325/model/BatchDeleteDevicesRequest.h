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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEDEVICESREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * BatchDeleteDevices request structure.
                */
                class BatchDeleteDevicesRequest : public AbstractModel
                {
                public:
                    BatchDeleteDevicesRequest();
                    ~BatchDeleteDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project id of the targeted deleted device.
                     * @return ProjectId Project id of the targeted deleted device.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id of the targeted deleted device.
                     * @param _projectId Project id of the targeted deleted device.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Device id array of the targeted deleted device.
                     * @return DeviceIds Device id array of the targeted deleted device.
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置Device id array of the targeted deleted device.
                     * @param _deviceIds Device id array of the targeted deleted device.
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * Project id of the targeted deleted device.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Device id array of the targeted deleted device.
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_BATCHDELETEDEVICESREQUEST_H_
