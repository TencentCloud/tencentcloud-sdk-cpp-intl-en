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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_

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
                * ModifyLocalBinlogConfig request structure.
                */
                class ModifyLocalBinlogConfigRequest : public AbstractModel
                {
                public:
                    ModifyLocalBinlogConfigRequest();
                    ~ModifyLocalBinlogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * @return InstanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * @param _instanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
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
                     * 获取Local binlog retention duration. Values for different instances are as follows:
1. The local binlog retention duration (hr) for cloud disk edition instances, dual-node instances, and three-node instances defaults to 120, with a range of 6 - 168.
2. The retention duration of local binlog for disaster recovery instance defaults to 120 hr, with a range of 120 - 168.
3. The retention duration (hr) of local binlog for a single-node cloud disk instance defaults to 120, with a range of 0 - 168.
4. If a dual-node instance or three-node instance has no disaster recovery instance, the retention duration (hr) of local binlog for the primary instance ranges from 6 to 168. If a dual-node instance or three-node instance has a disaster recovery instance, or you want to add a disaster recovery instance to a dual-node instance or three-node instance, to avoid synchronization exception, the retention duration (hr) of local binlog for the primary instance cannot be set to less than 120 hr, ranging from 120 to 168.
                     * @return SaveHours Local binlog retention duration. Values for different instances are as follows:
1. The local binlog retention duration (hr) for cloud disk edition instances, dual-node instances, and three-node instances defaults to 120, with a range of 6 - 168.
2. The retention duration of local binlog for disaster recovery instance defaults to 120 hr, with a range of 120 - 168.
3. The retention duration (hr) of local binlog for a single-node cloud disk instance defaults to 120, with a range of 0 - 168.
4. If a dual-node instance or three-node instance has no disaster recovery instance, the retention duration (hr) of local binlog for the primary instance ranges from 6 to 168. If a dual-node instance or three-node instance has a disaster recovery instance, or you want to add a disaster recovery instance to a dual-node instance or three-node instance, to avoid synchronization exception, the retention duration (hr) of local binlog for the primary instance cannot be set to less than 120 hr, ranging from 120 to 168.
                     * 
                     */
                    int64_t GetSaveHours() const;

                    /**
                     * 设置Local binlog retention duration. Values for different instances are as follows:
1. The local binlog retention duration (hr) for cloud disk edition instances, dual-node instances, and three-node instances defaults to 120, with a range of 6 - 168.
2. The retention duration of local binlog for disaster recovery instance defaults to 120 hr, with a range of 120 - 168.
3. The retention duration (hr) of local binlog for a single-node cloud disk instance defaults to 120, with a range of 0 - 168.
4. If a dual-node instance or three-node instance has no disaster recovery instance, the retention duration (hr) of local binlog for the primary instance ranges from 6 to 168. If a dual-node instance or three-node instance has a disaster recovery instance, or you want to add a disaster recovery instance to a dual-node instance or three-node instance, to avoid synchronization exception, the retention duration (hr) of local binlog for the primary instance cannot be set to less than 120 hr, ranging from 120 to 168.
                     * @param _saveHours Local binlog retention duration. Values for different instances are as follows:
1. The local binlog retention duration (hr) for cloud disk edition instances, dual-node instances, and three-node instances defaults to 120, with a range of 6 - 168.
2. The retention duration of local binlog for disaster recovery instance defaults to 120 hr, with a range of 120 - 168.
3. The retention duration (hr) of local binlog for a single-node cloud disk instance defaults to 120, with a range of 0 - 168.
4. If a dual-node instance or three-node instance has no disaster recovery instance, the retention duration (hr) of local binlog for the primary instance ranges from 6 to 168. If a dual-node instance or three-node instance has a disaster recovery instance, or you want to add a disaster recovery instance to a dual-node instance or three-node instance, to avoid synchronization exception, the retention duration (hr) of local binlog for the primary instance cannot be set to less than 120 hr, ranging from 120 to 168.
                     * 
                     */
                    void SetSaveHours(const int64_t& _saveHours);

                    /**
                     * 判断参数 SaveHours 是否已赋值
                     * @return SaveHours 是否已赋值
                     * 
                     */
                    bool SaveHoursHasBeenSet() const;

                    /**
                     * 获取Local binlog space utilization. Valid values: [30,50].
                     * @return MaxUsage Local binlog space utilization. Valid values: [30,50].
                     * 
                     */
                    int64_t GetMaxUsage() const;

                    /**
                     * 设置Local binlog space utilization. Valid values: [30,50].
                     * @param _maxUsage Local binlog space utilization. Valid values: [30,50].
                     * 
                     */
                    void SetMaxUsage(const int64_t& _maxUsage);

                    /**
                     * 判断参数 MaxUsage 是否已赋值
                     * @return MaxUsage 是否已赋值
                     * 
                     */
                    bool MaxUsageHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Local binlog retention duration. Values for different instances are as follows:
1. The local binlog retention duration (hr) for cloud disk edition instances, dual-node instances, and three-node instances defaults to 120, with a range of 6 - 168.
2. The retention duration of local binlog for disaster recovery instance defaults to 120 hr, with a range of 120 - 168.
3. The retention duration (hr) of local binlog for a single-node cloud disk instance defaults to 120, with a range of 0 - 168.
4. If a dual-node instance or three-node instance has no disaster recovery instance, the retention duration (hr) of local binlog for the primary instance ranges from 6 to 168. If a dual-node instance or three-node instance has a disaster recovery instance, or you want to add a disaster recovery instance to a dual-node instance or three-node instance, to avoid synchronization exception, the retention duration (hr) of local binlog for the primary instance cannot be set to less than 120 hr, ranging from 120 to 168.
                     */
                    int64_t m_saveHours;
                    bool m_saveHoursHasBeenSet;

                    /**
                     * Local binlog space utilization. Valid values: [30,50].
                     */
                    int64_t m_maxUsage;
                    bool m_maxUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_
