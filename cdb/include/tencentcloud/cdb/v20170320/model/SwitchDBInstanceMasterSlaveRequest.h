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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_

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
                * SwitchDBInstanceMasterSlave request structure.
                */
                class SwitchDBInstanceMasterSlaveRequest : public AbstractModel
                {
                public:
                    SwitchDBInstanceMasterSlaveRequest();
                    ~SwitchDBInstanceMasterSlaveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Specifies the replica server to switched to. Valid values: `first` (the first replica server), `second` (the second replica server). Default value: `first`. `second` is valid only for a multi-AZ instance.
                     * @return DstSlave Specifies the replica server to switched to. Valid values: `first` (the first replica server), `second` (the second replica server). Default value: `first`. `second` is valid only for a multi-AZ instance.
                     * 
                     */
                    std::string GetDstSlave() const;

                    /**
                     * 设置Specifies the replica server to switched to. Valid values: `first` (the first replica server), `second` (the second replica server). Default value: `first`. `second` is valid only for a multi-AZ instance.
                     * @param _dstSlave Specifies the replica server to switched to. Valid values: `first` (the first replica server), `second` (the second replica server). Default value: `first`. `second` is valid only for a multi-AZ instance.
                     * 
                     */
                    void SetDstSlave(const std::string& _dstSlave);

                    /**
                     * 判断参数 DstSlave 是否已赋值
                     * @return DstSlave 是否已赋值
                     * 
                     */
                    bool DstSlaveHasBeenSet() const;

                    /**
                     * 获取Whether to force the switch. Valid values: `True`, `False` (default). If this parameter is set to `True`, instance data may be lost during the switch.
                     * @return ForceSwitch Whether to force the switch. Valid values: `True`, `False` (default). If this parameter is set to `True`, instance data may be lost during the switch.
                     * 
                     */
                    bool GetForceSwitch() const;

                    /**
                     * 设置Whether to force the switch. Valid values: `True`, `False` (default). If this parameter is set to `True`, instance data may be lost during the switch.
                     * @param _forceSwitch Whether to force the switch. Valid values: `True`, `False` (default). If this parameter is set to `True`, instance data may be lost during the switch.
                     * 
                     */
                    void SetForceSwitch(const bool& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to perform the switch during a time window. Valid values: `True`, `False` (default). If `ForceSwitch` is set to `True`, this parameter is invalid.
                     * @return WaitSwitch Whether to perform the switch during a time window. Valid values: `True`, `False` (default). If `ForceSwitch` is set to `True`, this parameter is invalid.
                     * 
                     */
                    bool GetWaitSwitch() const;

                    /**
                     * 设置Whether to perform the switch during a time window. Valid values: `True`, `False` (default). If `ForceSwitch` is set to `True`, this parameter is invalid.
                     * @param _waitSwitch Whether to perform the switch during a time window. Valid values: `True`, `False` (default). If `ForceSwitch` is set to `True`, this parameter is invalid.
                     * 
                     */
                    void SetWaitSwitch(const bool& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the replica server to switched to. Valid values: `first` (the first replica server), `second` (the second replica server). Default value: `first`. `second` is valid only for a multi-AZ instance.
                     */
                    std::string m_dstSlave;
                    bool m_dstSlaveHasBeenSet;

                    /**
                     * Whether to force the switch. Valid values: `True`, `False` (default). If this parameter is set to `True`, instance data may be lost during the switch.
                     */
                    bool m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * Whether to perform the switch during a time window. Valid values: `True`, `False` (default). If `ForceSwitch` is set to `True`, this parameter is invalid.
                     */
                    bool m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_
