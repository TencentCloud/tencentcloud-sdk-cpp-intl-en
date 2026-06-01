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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/UpgradeEngineVersionParams.h>


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
                     * 获取<p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * @return InstanceId <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     * @param _instanceId <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
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
                     * 获取<p>Database engine version of the primary instance. Supported values include 5.6, 5.7, 8.0.<br>Description: Cross-version upgrade is not supported. Downgrade is not supported after upgrade.</p>
                     * @return EngineVersion <p>Database engine version of the primary instance. Supported values include 5.6, 5.7, 8.0.<br>Description: Cross-version upgrade is not supported. Downgrade is not supported after upgrade.</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Database engine version of the primary instance. Supported values include 5.6, 5.7, 8.0.<br>Description: Cross-version upgrade is not supported. Downgrade is not supported after upgrade.</p>
                     * @param _engineVersion <p>Database engine version of the primary instance. Supported values include 5.6, 5.7, 8.0.<br>Description: Cross-version upgrade is not supported. Downgrade is not supported after upgrade.</p>
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
                     * 获取<p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch in a time window. When the value is 1, during the upgrade process, the switchover to a new instance will be performed in the time window, or the user can proactively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">switch to a new instance</a> to trigger the process.</p>
                     * @return WaitSwitch <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch in a time window. When the value is 1, during the upgrade process, the switchover to a new instance will be performed in the time window, or the user can proactively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">switch to a new instance</a> to trigger the process.</p>
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置<p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch in a time window. When the value is 1, during the upgrade process, the switchover to a new instance will be performed in the time window, or the user can proactively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">switch to a new instance</a> to trigger the process.</p>
                     * @param _waitSwitch <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch in a time window. When the value is 1, during the upgrade process, the switchover to a new instance will be performed in the time window, or the user can proactively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">switch to a new instance</a> to trigger the process.</p>
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
                     * 获取<p>Whether to upgrade the kernel subversion. Supported values: 1 - upgrade kernel subversion; 0 - upgrade database engine version. No default value. Specify the version type to upgrade.</p>
                     * @return UpgradeSubversion <p>Whether to upgrade the kernel subversion. Supported values: 1 - upgrade kernel subversion; 0 - upgrade database engine version. No default value. Specify the version type to upgrade.</p>
                     * 
                     */
                    int64_t GetUpgradeSubversion() const;

                    /**
                     * 设置<p>Whether to upgrade the kernel subversion. Supported values: 1 - upgrade kernel subversion; 0 - upgrade database engine version. No default value. Specify the version type to upgrade.</p>
                     * @param _upgradeSubversion <p>Whether to upgrade the kernel subversion. Supported values: 1 - upgrade kernel subversion; 0 - upgrade database engine version. No default value. Specify the version type to upgrade.</p>
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
                     * 获取<p>Delay threshold. Value ranges from 1 to 10. No default value. When not specified, the delay threshold is 0, which means the delay threshold is not set.</p>
                     * @return MaxDelayTime <p>Delay threshold. Value ranges from 1 to 10. No default value. When not specified, the delay threshold is 0, which means the delay threshold is not set.</p>
                     * 
                     */
                    int64_t GetMaxDelayTime() const;

                    /**
                     * 设置<p>Delay threshold. Value ranges from 1 to 10. No default value. When not specified, the delay threshold is 0, which means the delay threshold is not set.</p>
                     * @param _maxDelayTime <p>Delay threshold. Value ranges from 1 to 10. No default value. When not specified, the delay threshold is 0, which means the delay threshold is not set.</p>
                     * 
                     */
                    void SetMaxDelayTime(const int64_t& _maxDelayTime);

                    /**
                     * 判断参数 MaxDelayTime 是否已赋值
                     * @return MaxDelayTime 是否已赋值
                     * 
                     */
                    bool MaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to ignore keyword errors when upgrading from 5.7 to 8.0. The value ranges from 0 to 1. 1 means ignored, 0 means not ignored. No default value. Not specified means no action taken.</p>
                     * @return IgnoreErrKeyword <p>Whether to ignore keyword errors when upgrading from 5.7 to 8.0. The value ranges from 0 to 1. 1 means ignored, 0 means not ignored. No default value. Not specified means no action taken.</p>
                     * 
                     */
                    int64_t GetIgnoreErrKeyword() const;

                    /**
                     * 设置<p>Whether to ignore keyword errors when upgrading from 5.7 to 8.0. The value ranges from 0 to 1. 1 means ignored, 0 means not ignored. No default value. Not specified means no action taken.</p>
                     * @param _ignoreErrKeyword <p>Whether to ignore keyword errors when upgrading from 5.7 to 8.0. The value ranges from 0 to 1. 1 means ignored, 0 means not ignored. No default value. Not specified means no action taken.</p>
                     * 
                     */
                    void SetIgnoreErrKeyword(const int64_t& _ignoreErrKeyword);

                    /**
                     * 判断参数 IgnoreErrKeyword 是否已赋值
                     * @return IgnoreErrKeyword 是否已赋值
                     * 
                     */
                    bool IgnoreErrKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Upgrade support for specified parameters</p>
                     * @return ParamList <p>Upgrade support for specified parameters</p>
                     * 
                     */
                    std::vector<UpgradeEngineVersionParams> GetParamList() const;

                    /**
                     * 设置<p>Upgrade support for specified parameters</p>
                     * @param _paramList <p>Upgrade support for specified parameters</p>
                     * 
                     */
                    void SetParamList(const std::vector<UpgradeEngineVersionParams>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID, in the format such as cdb-c1nl9rpv or cdbro-c1nl9rpv. This matches the instance ID displayed on the TencentDB console. You can obtain it through the <a href="https://www.tencentcloud.com/document/api/236/15872?from_cn_redirect=1">Query Instance List</a> API, with its value being the InstanceId field in the output parameter.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Database engine version of the primary instance. Supported values include 5.6, 5.7, 8.0.<br>Description: Cross-version upgrade is not supported. Downgrade is not supported after upgrade.</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>The way to switch to a new instance defaults to 0. Supported values include: 0 - switch immediately, 1 - switch in a time window. When the value is 1, during the upgrade process, the switchover to a new instance will be performed in the time window, or the user can proactively call the API <a href="https://www.tencentcloud.com/document/product/236/15864?from_cn_redirect=1">switch to a new instance</a> to trigger the process.</p>
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * <p>Whether to upgrade the kernel subversion. Supported values: 1 - upgrade kernel subversion; 0 - upgrade database engine version. No default value. Specify the version type to upgrade.</p>
                     */
                    int64_t m_upgradeSubversion;
                    bool m_upgradeSubversionHasBeenSet;

                    /**
                     * <p>Delay threshold. Value ranges from 1 to 10. No default value. When not specified, the delay threshold is 0, which means the delay threshold is not set.</p>
                     */
                    int64_t m_maxDelayTime;
                    bool m_maxDelayTimeHasBeenSet;

                    /**
                     * <p>Whether to ignore keyword errors when upgrading from 5.7 to 8.0. The value ranges from 0 to 1. 1 means ignored, 0 means not ignored. No default value. Not specified means no action taken.</p>
                     */
                    int64_t m_ignoreErrKeyword;
                    bool m_ignoreErrKeywordHasBeenSet;

                    /**
                     * <p>Upgrade support for specified parameters</p>
                     */
                    std::vector<UpgradeEngineVersionParams> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_H_
