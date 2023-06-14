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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_

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
                * UpgradeDBInstanceEngineVersion request structure.
                */
                class UpgradeDBInstanceEngineVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceEngineVersionRequest();
                    ~UpgradeDBInstanceEngineVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
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
                     * 获取Version of primary instance database engine. Value range: 5.6, 5.7
                     * @return EngineVersion Version of primary instance database engine. Value range: 5.6, 5.7
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Version of primary instance database engine. Value range: 5.6, 5.7
                     * @param _engineVersion Version of primary instance database engine. Value range: 5.6, 5.7
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Mode of switch to a new instance. Value range: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [switching to new instance API](https://intl.cloud.tencent.com/document/product/236/15864?from_cn_redirect=1) to trigger the process.
                     * @return WaitSwitch Mode of switch to a new instance. Value range: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [switching to new instance API](https://intl.cloud.tencent.com/document/product/236/15864?from_cn_redirect=1) to trigger the process.
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置Mode of switch to a new instance. Value range: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [switching to new instance API](https://intl.cloud.tencent.com/document/product/236/15864?from_cn_redirect=1) to trigger the process.
                     * @param _waitSwitch Mode of switch to a new instance. Value range: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [switching to new instance API](https://intl.cloud.tencent.com/document/product/236/15864?from_cn_redirect=1) to trigger the process.
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to upgrade kernel minor version. Valid values: 1 (upgrade kernel minor version), 0 (upgrade database engine).
                     * @return UpgradeSubversion Whether to upgrade kernel minor version. Valid values: 1 (upgrade kernel minor version), 0 (upgrade database engine).
                     * 
                     */
                    int64_t GetUpgradeSubversion() const;

                    /**
                     * 设置Whether to upgrade kernel minor version. Valid values: 1 (upgrade kernel minor version), 0 (upgrade database engine).
                     * @param _upgradeSubversion Whether to upgrade kernel minor version. Valid values: 1 (upgrade kernel minor version), 0 (upgrade database engine).
                     * 
                     */
                    void SetUpgradeSubversion(const int64_t& _upgradeSubversion);

                    /**
                     * 判断参数 UpgradeSubversion 是否已赋值
                     * @return UpgradeSubversion 是否已赋值
                     * 
                     */
                    bool UpgradeSubversionHasBeenSet() const;

                    /**
                     * 获取Delay threshold. Value range: 1-10
                     * @return MaxDelayTime Delay threshold. Value range: 1-10
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置Delay threshold. Value range: 1-10
                     * @param _maxDelayTime Delay threshold. Value range: 1-10
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv or cdbro-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page. You can use the [instance list querying API](https://intl.cloud.tencent.com/document/api/236/15872?from_cn_redirect=1) to query the ID, whose value is the `InstanceId` value in output parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Version of primary instance database engine. Value range: 5.6, 5.7
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Mode of switch to a new instance. Value range: 0 (switch immediately), 1 (switch within a time window). Default value: 0. If the value is 1, the switch process will be performed within a time window. Or, you can call the [switching to new instance API](https://intl.cloud.tencent.com/document/product/236/15864?from_cn_redirect=1) to trigger the process.
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * Whether to upgrade kernel minor version. Valid values: 1 (upgrade kernel minor version), 0 (upgrade database engine).
                     */
                    int64_t m_upgradeSubversion;
                    bool m_upgradeSubversionHasBeenSet;

                    /**
                     * Delay threshold. Value range: 1-10
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
