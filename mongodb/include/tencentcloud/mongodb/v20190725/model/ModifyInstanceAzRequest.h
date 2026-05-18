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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_

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
                * ModifyInstanceAz request structure.
                */
                class ModifyInstanceAzRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAzRequest();
                    ~ModifyInstanceAzRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID, such as cmgo-p8vn****. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Instance ID, such as cmgo-p8vn****. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, such as cmgo-p8vn****. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Instance ID, such as cmgo-p8vn****. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
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
                     * 获取<p>Availability zone ID where the primary node is located. For the method for obtaining, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @return PrimaryNodeZone <p>Availability zone ID where the primary node is located. For the method for obtaining, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    std::string GetPrimaryNodeZone() const;

                    /**
                     * 设置<p>Availability zone ID where the primary node is located. For the method for obtaining, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * @param _primaryNodeZone <p>Availability zone ID where the primary node is located. For the method for obtaining, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     * 
                     */
                    void SetPrimaryNodeZone(const std::string& _primaryNodeZone);

                    /**
                     * 判断参数 PrimaryNodeZone 是否已赋值
                     * @return PrimaryNodeZone 是否已赋值
                     * 
                     */
                    bool PrimaryNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>ID list of the availability zone where the secondary node resides.<br><strong>Note</strong>: It cannot contain the availability zones where the primary node and Hidden nodes reside.</p>
                     * @return SecondaryNodeZone <p>ID list of the availability zone where the secondary node resides.<br><strong>Note</strong>: It cannot contain the availability zones where the primary node and Hidden nodes reside.</p>
                     * 
                     */
                    std::vector<std::string> GetSecondaryNodeZone() const;

                    /**
                     * 设置<p>ID list of the availability zone where the secondary node resides.<br><strong>Note</strong>: It cannot contain the availability zones where the primary node and Hidden nodes reside.</p>
                     * @param _secondaryNodeZone <p>ID list of the availability zone where the secondary node resides.<br><strong>Note</strong>: It cannot contain the availability zones where the primary node and Hidden nodes reside.</p>
                     * 
                     */
                    void SetSecondaryNodeZone(const std::vector<std::string>& _secondaryNodeZone);

                    /**
                     * 判断参数 SecondaryNodeZone 是否已赋值
                     * @return SecondaryNodeZone 是否已赋值
                     * 
                     */
                    bool SecondaryNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>If the current instance has no configuration for Hidden nodes, this parameter is not required.</p>
                     * @return HiddenNodeZone <p>If the current instance has no configuration for Hidden nodes, this parameter is not required.</p>
                     * 
                     */
                    std::string GetHiddenNodeZone() const;

                    /**
                     * 设置<p>If the current instance has no configuration for Hidden nodes, this parameter is not required.</p>
                     * @param _hiddenNodeZone <p>If the current instance has no configuration for Hidden nodes, this parameter is not required.</p>
                     * 
                     */
                    void SetHiddenNodeZone(const std::string& _hiddenNodeZone);

                    /**
                     * 判断参数 HiddenNodeZone 是否已赋值
                     * @return HiddenNodeZone 是否已赋值
                     * 
                     */
                    bool HiddenNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>List of AZ IDs where read-only nodes reside.<br><strong>Note</strong>: If the current instance contains read-only nodes, this parameter is required.</p>
                     * @return ReadonlyNodeZone <p>List of AZ IDs where read-only nodes reside.<br><strong>Note</strong>: If the current instance contains read-only nodes, this parameter is required.</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeZone() const;

                    /**
                     * 设置<p>List of AZ IDs where read-only nodes reside.<br><strong>Note</strong>: If the current instance contains read-only nodes, this parameter is required.</p>
                     * @param _readonlyNodeZone <p>List of AZ IDs where read-only nodes reside.<br><strong>Note</strong>: If the current instance contains read-only nodes, this parameter is required.</p>
                     * 
                     */
                    void SetReadonlyNodeZone(const std::vector<std::string>& _readonlyNodeZone);

                    /**
                     * 判断参数 ReadonlyNodeZone 是否已赋值
                     * @return ReadonlyNodeZone 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>Specify the time policy for executing the availability zone switch.</p><ul><li>0: Execute the switch immediately.</li><li>1: Execute the switch within the set maintenance window. For details, please refer to <a href="https://www.tencentcloud.com/document/product/240/19910?from_cn_redirect=1">setting instance maintenance time</a>.</li></ul>
                     * @return InMaintenance <p>Specify the time policy for executing the availability zone switch.</p><ul><li>0: Execute the switch immediately.</li><li>1: Execute the switch within the set maintenance window. For details, please refer to <a href="https://www.tencentcloud.com/document/product/240/19910?from_cn_redirect=1">setting instance maintenance time</a>.</li></ul>
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置<p>Specify the time policy for executing the availability zone switch.</p><ul><li>0: Execute the switch immediately.</li><li>1: Execute the switch within the set maintenance window. For details, please refer to <a href="https://www.tencentcloud.com/document/product/240/19910?from_cn_redirect=1">setting instance maintenance time</a>.</li></ul>
                     * @param _inMaintenance <p>Specify the time policy for executing the availability zone switch.</p><ul><li>0: Execute the switch immediately.</li><li>1: Execute the switch within the set maintenance window. For details, please refer to <a href="https://www.tencentcloud.com/document/product/240/19910?from_cn_redirect=1">setting instance maintenance time</a>.</li></ul>
                     * 
                     */
                    void SetInMaintenance(const uint64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, such as cmgo-p8vn****. Log in to the <a href="https://console.cloud.tencent.com/mongodb">MongoDB console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Availability zone ID where the primary node is located. For the method for obtaining, please see <a href="https://www.tencentcloud.com/document/product/240/3637?from_cn_redirect=1">Regions and Availability Zones</a>.</p>
                     */
                    std::string m_primaryNodeZone;
                    bool m_primaryNodeZoneHasBeenSet;

                    /**
                     * <p>ID list of the availability zone where the secondary node resides.<br><strong>Note</strong>: It cannot contain the availability zones where the primary node and Hidden nodes reside.</p>
                     */
                    std::vector<std::string> m_secondaryNodeZone;
                    bool m_secondaryNodeZoneHasBeenSet;

                    /**
                     * <p>If the current instance has no configuration for Hidden nodes, this parameter is not required.</p>
                     */
                    std::string m_hiddenNodeZone;
                    bool m_hiddenNodeZoneHasBeenSet;

                    /**
                     * <p>List of AZ IDs where read-only nodes reside.<br><strong>Note</strong>: If the current instance contains read-only nodes, this parameter is required.</p>
                     */
                    std::vector<std::string> m_readonlyNodeZone;
                    bool m_readonlyNodeZoneHasBeenSet;

                    /**
                     * <p>Specify the time policy for executing the availability zone switch.</p><ul><li>0: Execute the switch immediately.</li><li>1: Execute the switch within the set maintenance window. For details, please refer to <a href="https://www.tencentcloud.com/document/product/240/19910?from_cn_redirect=1">setting instance maintenance time</a>.</li></ul>
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_
