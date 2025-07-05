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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRemoteBackupConfig request structure.
                */
                class ModifyRemoteBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyRemoteBackupConfigRequest();
                    ~ModifyRemoteBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
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
                     * 获取Remote data backup. Valid values:`off` (disable), `on` (enable).
                     * @return RemoteBackupSave Remote data backup. Valid values:`off` (disable), `on` (enable).
                     * 
                     */
                    std::string GetRemoteBackupSave() const;

                    /**
                     * 设置Remote data backup. Valid values:`off` (disable), `on` (enable).
                     * @param _remoteBackupSave Remote data backup. Valid values:`off` (disable), `on` (enable).
                     * 
                     */
                    void SetRemoteBackupSave(const std::string& _remoteBackupSave);

                    /**
                     * 判断参数 RemoteBackupSave 是否已赋值
                     * @return RemoteBackupSave 是否已赋值
                     * 
                     */
                    bool RemoteBackupSaveHasBeenSet() const;

                    /**
                     * 获取Remote log backup. Valid values: `off` (disable), `on` (enable). Only when the parameter `RemoteBackupSave` is `on`, the `RemoteBinlogSave` parameter can be set to `on`.
                     * @return RemoteBinlogSave Remote log backup. Valid values: `off` (disable), `on` (enable). Only when the parameter `RemoteBackupSave` is `on`, the `RemoteBinlogSave` parameter can be set to `on`.
                     * 
                     */
                    std::string GetRemoteBinlogSave() const;

                    /**
                     * 设置Remote log backup. Valid values: `off` (disable), `on` (enable). Only when the parameter `RemoteBackupSave` is `on`, the `RemoteBinlogSave` parameter can be set to `on`.
                     * @param _remoteBinlogSave Remote log backup. Valid values: `off` (disable), `on` (enable). Only when the parameter `RemoteBackupSave` is `on`, the `RemoteBinlogSave` parameter can be set to `on`.
                     * 
                     */
                    void SetRemoteBinlogSave(const std::string& _remoteBinlogSave);

                    /**
                     * 判断参数 RemoteBinlogSave 是否已赋值
                     * @return RemoteBinlogSave 是否已赋值
                     * 
                     */
                    bool RemoteBinlogSaveHasBeenSet() const;

                    /**
                     * 获取The custom backup region list
                     * @return RemoteRegion The custom backup region list
                     * 
                     */
                    std::vector<std::string> GetRemoteRegion() const;

                    /**
                     * 设置The custom backup region list
                     * @param _remoteRegion The custom backup region list
                     * 
                     */
                    void SetRemoteRegion(const std::vector<std::string>& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                    /**
                     * 获取Remote backup retention period in days
                     * @return ExpireDays Remote backup retention period in days
                     * 
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置Remote backup retention period in days
                     * @param _expireDays Remote backup retention period in days
                     * 
                     */
                    void SetExpireDays(const int64_t& _expireDays);

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     * 
                     */
                    bool ExpireDaysHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Remote data backup. Valid values:`off` (disable), `on` (enable).
                     */
                    std::string m_remoteBackupSave;
                    bool m_remoteBackupSaveHasBeenSet;

                    /**
                     * Remote log backup. Valid values: `off` (disable), `on` (enable). Only when the parameter `RemoteBackupSave` is `on`, the `RemoteBinlogSave` parameter can be set to `on`.
                     */
                    std::string m_remoteBinlogSave;
                    bool m_remoteBinlogSaveHasBeenSet;

                    /**
                     * The custom backup region list
                     */
                    std::vector<std::string> m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                    /**
                     * Remote backup retention period in days
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_
