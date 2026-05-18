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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RestoreDatabases.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * RestoreDBInstance request structure.
                */
                class RestoreDBInstanceRequest : public AbstractModel
                {
                public:
                    RestoreDBInstanceRequest();
                    ~RestoreDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Specify the target time point to roll back. The time must be in the backup retention period of the instance.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return RestoreTime <p>Specify the target time point to roll back. The time must be in the backup retention period of the instance.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetRestoreTime() const;

                    /**
                     * 设置<p>Specify the target time point to roll back. The time must be in the backup retention period of the instance.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _restoreTime <p>Specify the target time point to roll back. The time must be in the backup retention period of the instance.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>Database table information to be rolled back.</p>
                     * @return Databases <p>Database table information to be rolled back.</p>
                     * 
                     */
                    std::vector<RestoreDatabases> GetDatabases() const;

                    /**
                     * 设置<p>Database table information to be rolled back.</p>
                     * @param _databases <p>Database table information to be rolled back.</p>
                     * 
                     */
                    void SetDatabases(const std::vector<RestoreDatabases>& _databases);

                    /**
                     * 判断参数 Databases 是否已赋值
                     * @return Databases 是否已赋值
                     * 
                     */
                    bool DatabasesHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/mongodb/instance">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Specify the target time point to roll back. The time must be in the backup retention period of the instance.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_restoreTime;
                    bool m_restoreTimeHasBeenSet;

                    /**
                     * <p>Database table information to be rolled back.</p>
                     */
                    std::vector<RestoreDatabases> m_databases;
                    bool m_databasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDBINSTANCEREQUEST_H_
