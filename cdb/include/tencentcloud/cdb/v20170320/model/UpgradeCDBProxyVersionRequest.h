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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_

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
                * UpgradeCDBProxyVersion request structure.
                */
                class UpgradeCDBProxyVersionRequest : public AbstractModel
                {
                public:
                    UpgradeCDBProxyVersionRequest();
                    ~UpgradeCDBProxyVersionRequest() = default;
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
                     * 获取Database proxy ID
                     * @return ProxyGroupId Database proxy ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Database proxy ID
                     * @param _proxyGroupId Database proxy ID
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Current version of database proxy
                     * @return SrcProxyVersion Current version of database proxy
                     * 
                     */
                    std::string GetSrcProxyVersion() const;

                    /**
                     * 设置Current version of database proxy
                     * @param _srcProxyVersion Current version of database proxy
                     * 
                     */
                    void SetSrcProxyVersion(const std::string& _srcProxyVersion);

                    /**
                     * 判断参数 SrcProxyVersion 是否已赋值
                     * @return SrcProxyVersion 是否已赋值
                     * 
                     */
                    bool SrcProxyVersionHasBeenSet() const;

                    /**
                     * 获取Target version of database proxy
                     * @return DstProxyVersion Target version of database proxy
                     * 
                     */
                    std::string GetDstProxyVersion() const;

                    /**
                     * 设置Target version of database proxy
                     * @param _dstProxyVersion Target version of database proxy
                     * 
                     */
                    void SetDstProxyVersion(const std::string& _dstProxyVersion);

                    /**
                     * 判断参数 DstProxyVersion 是否已赋值
                     * @return DstProxyVersion 是否已赋值
                     * 
                     */
                    bool DstProxyVersionHasBeenSet() const;

                    /**
                     * 获取Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * @return UpgradeTime Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * @param _upgradeTime Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     * 
                     */
                    void SetUpgradeTime(const std::string& _upgradeTime);

                    /**
                     * 判断参数 UpgradeTime 是否已赋值
                     * @return UpgradeTime 是否已赋值
                     * 
                     */
                    bool UpgradeTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database proxy ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Current version of database proxy
                     */
                    std::string m_srcProxyVersion;
                    bool m_srcProxyVersionHasBeenSet;

                    /**
                     * Target version of database proxy
                     */
                    std::string m_dstProxyVersion;
                    bool m_dstProxyVersionHasBeenSet;

                    /**
                     * Upgrade time. Valid values: `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time)
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADECDBPROXYVERSIONREQUEST_H_
