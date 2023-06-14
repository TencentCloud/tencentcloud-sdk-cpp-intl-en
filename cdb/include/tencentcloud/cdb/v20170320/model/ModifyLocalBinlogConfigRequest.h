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
                     * 获取Retention period of local binlog. Valid range: 72-168 hours. When there is disaster recovery instance, the valid range will be 120-168 hours.
                     * @return SaveHours Retention period of local binlog. Valid range: 72-168 hours. When there is disaster recovery instance, the valid range will be 120-168 hours.
                     * 
                     */
                    int64_t GetSaveHours() const;

                    /**
                     * 设置Retention period of local binlog. Valid range: 72-168 hours. When there is disaster recovery instance, the valid range will be 120-168 hours.
                     * @param _saveHours Retention period of local binlog. Valid range: 72-168 hours. When there is disaster recovery instance, the valid range will be 120-168 hours.
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
                     * 获取Space utilization of local binlog. Value range: [30,50].
                     * @return MaxUsage Space utilization of local binlog. Value range: [30,50].
                     * 
                     */
                    int64_t GetMaxUsage() const;

                    /**
                     * 设置Space utilization of local binlog. Value range: [30,50].
                     * @param _maxUsage Space utilization of local binlog. Value range: [30,50].
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
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Retention period of local binlog. Valid range: 72-168 hours. When there is disaster recovery instance, the valid range will be 120-168 hours.
                     */
                    int64_t m_saveHours;
                    bool m_saveHoursHasBeenSet;

                    /**
                     * Space utilization of local binlog. Value range: [30,50].
                     */
                    int64_t m_maxUsage;
                    bool m_maxUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYLOCALBINLOGCONFIGREQUEST_H_
