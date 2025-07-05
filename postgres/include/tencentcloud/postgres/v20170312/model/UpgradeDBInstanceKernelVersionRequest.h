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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UpgradeDBInstanceKernelVersion request structure.
                */
                class UpgradeDBInstanceKernelVersionRequest : public AbstractModel
                {
                public:
                    UpgradeDBInstanceKernelVersionRequest();
                    ~UpgradeDBInstanceKernelVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target kernel version, which can be obtained in the `AvailableUpgradeTarget` field in the returned value of the [DescribeDBVersions](https://intl.cloud.tencent.com/document/api/409/89018?from_cn_redirect=1) API.

                     * @return TargetDBKernelVersion Target kernel version, which can be obtained in the `AvailableUpgradeTarget` field in the returned value of the [DescribeDBVersions](https://intl.cloud.tencent.com/document/api/409/89018?from_cn_redirect=1) API.

                     * 
                     */
                    std::string GetTargetDBKernelVersion() const;

                    /**
                     * 设置Target kernel version, which can be obtained in the `AvailableUpgradeTarget` field in the returned value of the [DescribeDBVersions](https://intl.cloud.tencent.com/document/api/409/89018?from_cn_redirect=1) API.

                     * @param _targetDBKernelVersion Target kernel version, which can be obtained in the `AvailableUpgradeTarget` field in the returned value of the [DescribeDBVersions](https://intl.cloud.tencent.com/document/api/409/89018?from_cn_redirect=1) API.

                     * 
                     */
                    void SetTargetDBKernelVersion(const std::string& _targetDBKernelVersion);

                    /**
                     * 判断参数 TargetDBKernelVersion 是否已赋值
                     * @return TargetDBKernelVersion 是否已赋值
                     * 
                     */
                    bool TargetDBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Switch time after the kernel version upgrade for the specified instance. Valid values:
<li>`0`: Switch now.
<li>`1`: Switch at the specified time.
<li>`2`: Switch in the maintenance time.
Default value: `0`. 
                     * @return SwitchTag Switch time after the kernel version upgrade for the specified instance. Valid values:
<li>`0`: Switch now.
<li>`1`: Switch at the specified time.
<li>`2`: Switch in the maintenance time.
Default value: `0`. 
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置Switch time after the kernel version upgrade for the specified instance. Valid values:
<li>`0`: Switch now.
<li>`1`: Switch at the specified time.
<li>`2`: Switch in the maintenance time.
Default value: `0`. 
                     * @param _switchTag Switch time after the kernel version upgrade for the specified instance. Valid values:
<li>`0`: Switch now.
<li>`1`: Switch at the specified time.
<li>`2`: Switch in the maintenance time.
Default value: `0`. 
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                    /**
                     * 获取Switch start time in the format of `HH:MM:SS`, such as 01:00:00. When `SwitchTag` is `0` or `2`, this parameter is invalid.
                     * @return SwitchStartTime Switch start time in the format of `HH:MM:SS`, such as 01:00:00. When `SwitchTag` is `0` or `2`, this parameter is invalid.
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置Switch start time in the format of `HH:MM:SS`, such as 01:00:00. When `SwitchTag` is `0` or `2`, this parameter is invalid.
                     * @param _switchStartTime Switch start time in the format of `HH:MM:SS`, such as 01:00:00. When `SwitchTag` is `0` or `2`, this parameter is invalid.
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取Switch end time in the format of `HH:MM:SS`, such as 01:30:00. When `SwitchTag` is `0` or `2`, this parameter is invalid. The difference between `SwitchStartTime` and `SwitchEndTime` cannot be less than 30 minutes.
                     * @return SwitchEndTime Switch end time in the format of `HH:MM:SS`, such as 01:30:00. When `SwitchTag` is `0` or `2`, this parameter is invalid. The difference between `SwitchStartTime` and `SwitchEndTime` cannot be less than 30 minutes.
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置Switch end time in the format of `HH:MM:SS`, such as 01:30:00. When `SwitchTag` is `0` or `2`, this parameter is invalid. The difference between `SwitchStartTime` and `SwitchEndTime` cannot be less than 30 minutes.
                     * @param _switchEndTime Switch end time in the format of `HH:MM:SS`, such as 01:30:00. When `SwitchTag` is `0` or `2`, this parameter is invalid. The difference between `SwitchStartTime` and `SwitchEndTime` cannot be less than 30 minutes.
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to perform a pre-check on the current operation of upgrading the instance kernel version. Valid values:
u200c<li>u200c`true`: Performs a pre-check without upgrading the kernel version. Check items include request parameters, kernel version compatibility, and instance parameters.
u200cu200c<li>`false`: Sends a normal request and upgrades the kernel version directly after the check is passed.
Default value: `false`.
                     * @return DryRun Whether to perform a pre-check on the current operation of upgrading the instance kernel version. Valid values:
u200c<li>u200c`true`: Performs a pre-check without upgrading the kernel version. Check items include request parameters, kernel version compatibility, and instance parameters.
u200cu200c<li>`false`: Sends a normal request and upgrades the kernel version directly after the check is passed.
Default value: `false`.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to perform a pre-check on the current operation of upgrading the instance kernel version. Valid values:
u200c<li>u200c`true`: Performs a pre-check without upgrading the kernel version. Check items include request parameters, kernel version compatibility, and instance parameters.
u200cu200c<li>`false`: Sends a normal request and upgrades the kernel version directly after the check is passed.
Default value: `false`.
                     * @param _dryRun Whether to perform a pre-check on the current operation of upgrading the instance kernel version. Valid values:
u200c<li>u200c`true`: Performs a pre-check without upgrading the kernel version. Check items include request parameters, kernel version compatibility, and instance parameters.
u200cu200c<li>`false`: Sends a normal request and upgrades the kernel version directly after the check is passed.
Default value: `false`.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Target kernel version, which can be obtained in the `AvailableUpgradeTarget` field in the returned value of the [DescribeDBVersions](https://intl.cloud.tencent.com/document/api/409/89018?from_cn_redirect=1) API.

                     */
                    std::string m_targetDBKernelVersion;
                    bool m_targetDBKernelVersionHasBeenSet;

                    /**
                     * Switch time after the kernel version upgrade for the specified instance. Valid values:
<li>`0`: Switch now.
<li>`1`: Switch at the specified time.
<li>`2`: Switch in the maintenance time.
Default value: `0`. 
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                    /**
                     * Switch start time in the format of `HH:MM:SS`, such as 01:00:00. When `SwitchTag` is `0` or `2`, this parameter is invalid.
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * Switch end time in the format of `HH:MM:SS`, such as 01:30:00. When `SwitchTag` is `0` or `2`, this parameter is invalid. The difference between `SwitchStartTime` and `SwitchEndTime` cannot be less than 30 minutes.
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * Whether to perform a pre-check on the current operation of upgrading the instance kernel version. Valid values:
u200c<li>u200c`true`: Performs a pre-check without upgrading the kernel version. Check items include request parameters, kernel version compatibility, and instance parameters.
u200cu200c<li>`false`: Sends a normal request and upgrades the kernel version directly after the check is passed.
Default value: `false`.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_UPGRADEDBINSTANCEKERNELVERSIONREQUEST_H_
