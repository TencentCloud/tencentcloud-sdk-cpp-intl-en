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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Resource instance information
                */
                class RenewInstance : public AbstractModel
                {
                public:
                    RenewInstance();
                    ~RenewInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Product code
                     * @return ProductCode Product code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product code
                     * @param _productCode Product code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Subproduct code
                     * @return SubProductCode Subproduct code
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Subproduct code
                     * @param _subProductCode Subproduct code
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取Region encoding
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionCode Region encoding
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region encoding
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionCode Region encoding
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取Instance status:
NORMAL
ISOLATED Isolated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance status:
NORMAL
ISOLATED Isolated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status:
NORMAL
ISOLATED Isolated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Instance status:
NORMAL
ISOLATED Isolated
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Renewal flag:
NOTIFY_AND_MANUAL_RENEW: manual renewal
NOTIFY_AND_AUTO_RENEW: auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Renewal flag:
NOTIFY_AND_MANUAL_RENEW: manual renewal
NOTIFY_AND_AUTO_RENEW: auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Renewal flag:
NOTIFY_AND_MANUAL_RENEW: manual renewal
NOTIFY_AND_AUTO_RENEW: auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Renewal flag:
NOTIFY_AND_MANUAL_RENEW: manual renewal
NOTIFY_AND_AUTO_RENEW: auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Instance expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Instance expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Instance expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Instance expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Instance alias: The name set by the user for the instance in the console, which is empty by default if not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance alias: The name set by the user for the instance in the console, which is empty by default if not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance alias: The name set by the user for the instance in the console, which is empty by default if not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance alias: The name set by the user for the instance in the console, which is empty by default if not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Product name: Cloud products purchased by users, such as Cloud Virtual Machine (CVM)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Product name: Cloud products purchased by users, such as Cloud Virtual Machine (CVM)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name: Cloud products purchased by users, such as Cloud Virtual Machine (CVM)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productName Product name: Cloud products purchased by users, such as Cloud Virtual Machine (CVM)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Project name: Instance Ownership of the project. User can autonomously assign project to the instance on the console. Default project if not allocated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectName Project name: Instance Ownership of the project. User can autonomously assign project to the instance on the console. Default project if not allocated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name: Instance Ownership of the project. User can autonomously assign project to the instance on the console. Default project if not allocated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectName Project name: Instance Ownership of the project. User can autonomously assign project to the instance on the console. Default project if not allocated.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Automatic renewal cycle length
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewPeriod Automatic renewal cycle length
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRenewPeriod() const;

                    /**
                     * 设置Automatic renewal cycle length
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewPeriod Automatic renewal cycle length
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewPeriod(const uint64_t& _renewPeriod);

                    /**
                     * 判断参数 RenewPeriod 是否已赋值
                     * @return RenewPeriod 是否已赋值
                     * 
                     */
                    bool RenewPeriodHasBeenSet() const;

                    /**
                     * 获取Automatic renewal cycle unit: y year, m month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewPeriodUnit Automatic renewal cycle unit: y year, m month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRenewPeriodUnit() const;

                    /**
                     * 设置Automatic renewal cycle unit: y year, m month
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewPeriodUnit Automatic renewal cycle unit: y year, m month
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewPeriodUnit(const std::string& _renewPeriodUnit);

                    /**
                     * 判断参数 RenewPeriodUnit 是否已赋值
                     * @return RenewPeriodUnit 是否已赋值
                     * 
                     */
                    bool RenewPeriodUnitHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Product code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * Region encoding
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Instance status:
NORMAL
ISOLATED Isolated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Renewal flag:
NOTIFY_AND_MANUAL_RENEW: manual renewal
NOTIFY_AND_AUTO_RENEW: auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Instance expiration time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Instance alias: The name set by the user for the instance in the console, which is empty by default if not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Product name: Cloud products purchased by users, such as Cloud Virtual Machine (CVM)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Project name: Instance Ownership of the project. User can autonomously assign project to the instance on the console. Default project if not allocated.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Automatic renewal cycle length
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_renewPeriod;
                    bool m_renewPeriodHasBeenSet;

                    /**
                     * Automatic renewal cycle unit: y year, m month
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_renewPeriodUnit;
                    bool m_renewPeriodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_RENEWINSTANCE_H_
