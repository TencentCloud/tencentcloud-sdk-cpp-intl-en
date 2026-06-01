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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ProxyNodeCustom.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * AdjustCdbProxy request structure.
                */
                class AdjustCdbProxyRequest : public AbstractModel
                {
                public:
                    AdjustCdbProxyRequest();
                    ~AdjustCdbProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @return InstanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     * @param _instanceId Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
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
                     * 获取Proxy group ID, which can be obtained through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @return ProxyGroupId Proxy group ID, which can be obtained through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID, which can be obtained through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     * @param _proxyGroupId Proxy group ID, which can be obtained through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
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
                     * 获取Node specification configuration
Remark: Database proxy supported node specifications are 2C4000MB, 4C8000MB, 8C16000MB.
Parameter description in the example.
NodeCount: Number of nodes
Region: Node region
Zone: Node availability zone
Cpu: Number of node cores for one agent (Unit: core)
Mem: Memory size of each proxy node (unit: MB)
                     * @return ProxyNodeCustom Node specification configuration
Remark: Database proxy supported node specifications are 2C4000MB, 4C8000MB, 8C16000MB.
Parameter description in the example.
NodeCount: Number of nodes
Region: Node region
Zone: Node availability zone
Cpu: Number of node cores for one agent (Unit: core)
Mem: Memory size of each proxy node (unit: MB)
                     * 
                     */
                    std::vector<ProxyNodeCustom> GetProxyNodeCustom() const;

                    /**
                     * 设置Node specification configuration
Remark: Database proxy supported node specifications are 2C4000MB, 4C8000MB, 8C16000MB.
Parameter description in the example.
NodeCount: Number of nodes
Region: Node region
Zone: Node availability zone
Cpu: Number of node cores for one agent (Unit: core)
Mem: Memory size of each proxy node (unit: MB)
                     * @param _proxyNodeCustom Node specification configuration
Remark: Database proxy supported node specifications are 2C4000MB, 4C8000MB, 8C16000MB.
Parameter description in the example.
NodeCount: Number of nodes
Region: Node region
Zone: Node availability zone
Cpu: Number of node cores for one agent (Unit: core)
Mem: Memory size of each proxy node (unit: MB)
                     * 
                     */
                    void SetProxyNodeCustom(const std::vector<ProxyNodeCustom>& _proxyNodeCustom);

                    /**
                     * 判断参数 ProxyNodeCustom 是否已赋值
                     * @return ProxyNodeCustom 是否已赋值
                     * 
                     */
                    bool ProxyNodeCustomHasBeenSet() const;

                    /**
                     * 获取Rebalance. Valid values:  `auto` (automatic), `manual` (manual).
                     * @return ReloadBalance Rebalance. Valid values:  `auto` (automatic), `manual` (manual).
                     * 
                     */
                    std::string GetReloadBalance() const;

                    /**
                     * 设置Rebalance. Valid values:  `auto` (automatic), `manual` (manual).
                     * @param _reloadBalance Rebalance. Valid values:  `auto` (automatic), `manual` (manual).
                     * 
                     */
                    void SetReloadBalance(const std::string& _reloadBalance);

                    /**
                     * 判断参数 ReloadBalance 是否已赋值
                     * @return ReloadBalance 是否已赋值
                     * 
                     */
                    bool ReloadBalanceHasBeenSet() const;

                    /**
                     * 获取The upgrade switch time. Valid values:  `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time).
                     * @return UpgradeTime The upgrade switch time. Valid values:  `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time).
                     * 
                     */
                    std::string GetUpgradeTime() const;

                    /**
                     * 设置The upgrade switch time. Valid values:  `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time).
                     * @param _upgradeTime The upgrade switch time. Valid values:  `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time).
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
                     * Instance ID, which can be obtained through the [DescribeDBInstances](https://www.tencentcloud.com/document/product/236/15872?from_cn_redirect=1) API.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Proxy group ID, which can be obtained through the [DescribeCdbProxyInfo](https://www.tencentcloud.com/document/api/236/90585?from_cn_redirect=1) API.
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Node specification configuration
Remark: Database proxy supported node specifications are 2C4000MB, 4C8000MB, 8C16000MB.
Parameter description in the example.
NodeCount: Number of nodes
Region: Node region
Zone: Node availability zone
Cpu: Number of node cores for one agent (Unit: core)
Mem: Memory size of each proxy node (unit: MB)
                     */
                    std::vector<ProxyNodeCustom> m_proxyNodeCustom;
                    bool m_proxyNodeCustomHasBeenSet;

                    /**
                     * Rebalance. Valid values:  `auto` (automatic), `manual` (manual).
                     */
                    std::string m_reloadBalance;
                    bool m_reloadBalanceHasBeenSet;

                    /**
                     * The upgrade switch time. Valid values:  `nowTime` (upgrade immediately), `timeWindow` (upgrade during instance maintenance time).
                     */
                    std::string m_upgradeTime;
                    bool m_upgradeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ADJUSTCDBPROXYREQUEST_H_
