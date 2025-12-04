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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * SetInstanceMaintenance request structure.
                */
                class SetInstanceMaintenanceRequest : public AbstractModel
                {
                public:
                    SetInstanceMaintenanceRequest();
                    ~SetInstanceMaintenanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @return InstanceId Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     * @param _instanceId Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

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
                     * 获取Start time of the maintenance window. The value range is any hour or half-hour between 00:00 and 23:00, such as 00:00 or 00:30.
                     * @return MaintenanceStart Start time of the maintenance window. The value range is any hour or half-hour between 00:00 and 23:00, such as 00:00 or 00:30.
                     * 
                     */
                    std::string GetMaintenanceStart() const;

                    /**
                     * 设置Start time of the maintenance window. The value range is any hour or half-hour between 00:00 and 23:00, such as 00:00 or 00:30.
                     * @param _maintenanceStart Start time of the maintenance window. The value range is any hour or half-hour between 00:00 and 23:00, such as 00:00 or 00:30.
                     * 
                     */
                    void SetMaintenanceStart(const std::string& _maintenanceStart);

                    /**
                     * 判断参数 MaintenanceStart 是否已赋值
                     * @return MaintenanceStart 是否已赋值
                     * 
                     */
                    bool MaintenanceStartHasBeenSet() const;

                    /**
                     * 获取End time of the maintenance window.
- The value range is any hour or half-hour between 00:00 and 23:00. The minimum value of maintenance time is 30 minutes, and the maximum value is 3 hours.
- The end time should be later than the start time.
                     * @return MaintenanceEnd End time of the maintenance window.
- The value range is any hour or half-hour between 00:00 and 23:00. The minimum value of maintenance time is 30 minutes, and the maximum value is 3 hours.
- The end time should be later than the start time.
                     * 
                     */
                    std::string GetMaintenanceEnd() const;

                    /**
                     * 设置End time of the maintenance window.
- The value range is any hour or half-hour between 00:00 and 23:00. The minimum value of maintenance time is 30 minutes, and the maximum value is 3 hours.
- The end time should be later than the start time.
                     * @param _maintenanceEnd End time of the maintenance window.
- The value range is any hour or half-hour between 00:00 and 23:00. The minimum value of maintenance time is 30 minutes, and the maximum value is 3 hours.
- The end time should be later than the start time.
                     * 
                     */
                    void SetMaintenanceEnd(const std::string& _maintenanceEnd);

                    /**
                     * 判断参数 MaintenanceEnd 是否已赋值
                     * @return MaintenanceEnd 是否已赋值
                     * 
                     */
                    bool MaintenanceEndHasBeenSet() const;

                private:

                    /**
                     * Specifies the instance ID. For example, cmgo-p8vn****. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time of the maintenance window. The value range is any hour or half-hour between 00:00 and 23:00, such as 00:00 or 00:30.
                     */
                    std::string m_maintenanceStart;
                    bool m_maintenanceStartHasBeenSet;

                    /**
                     * End time of the maintenance window.
- The value range is any hour or half-hour between 00:00 and 23:00. The minimum value of maintenance time is 30 minutes, and the maximum value is 3 hours.
- The end time should be later than the start time.
                     */
                    std::string m_maintenanceEnd;
                    bool m_maintenanceEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_
