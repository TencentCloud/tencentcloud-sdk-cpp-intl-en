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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_

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
                * ModifyDBInstanceModes request structure.
                */
                class ModifyDBInstanceModesRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceModesRequest();
                    ~ModifyDBInstanceModesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @return InstanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     * @param _instanceId <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
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
                     * 获取<p>The mode of cloud databases currently only supports input "protectMode" to modify the Primary-standby sync mode.</p>
                     * @return Mode <p>The mode of cloud databases currently only supports input "protectMode" to modify the Primary-standby sync mode.</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>The mode of cloud databases currently only supports input "protectMode" to modify the Primary-standby sync mode.</p>
                     * @param _mode <p>The mode of cloud databases currently only supports input "protectMode" to modify the Primary-standby sync mode.</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Data synchronization mode, available values: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication.</p>
                     * @return ProtectMode <p>Data synchronization mode, available values: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication.</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>Data synchronization mode, available values: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication.</p>
                     * @param _protectMode <p>Data synchronization mode, available values: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication.</p>
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>The mode of cloud databases currently only supports input "protectMode" to modify the Primary-standby sync mode.</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Data synchronization mode, available values: 0 - async replication, 1 - semi-sync replication, 2 - strong sync replication.</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYDBINSTANCEMODESREQUEST_H_
