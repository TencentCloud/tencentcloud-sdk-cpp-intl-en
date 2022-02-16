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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoWeight.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyCDBProxy request structure.
                */
                class ModifyCDBProxyRequest : public AbstractModel
                {
                public:
                    ModifyCDBProxyRequest();
                    ~ModifyCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the database proxy group
                     * @return ProxyGroupId Unique ID of the database proxy group
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Unique ID of the database proxy group
                     * @param ProxyGroupId Unique ID of the database proxy group
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`
                     * @return IsKickout Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`
                     */
                    bool GetIsKickout() const;

                    /**
                     * 设置Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`
                     * @param IsKickout Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`
                     */
                    void SetIsKickout(const bool& _isKickout);

                    /**
                     * 判断参数 IsKickout 是否已赋值
                     * @return IsKickout 是否已赋值
                     */
                    bool IsKickoutHasBeenSet() const;

                    /**
                     * 获取The minimum number of read-only instances allowed by the proxy group
                     * @return MinCount The minimum number of read-only instances allowed by the proxy group
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置The minimum number of read-only instances allowed by the proxy group
                     * @param MinCount The minimum number of read-only instances allowed by the proxy group
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取Delay threshold. If `IsKickOut` is set to `true`, this parameter is required.
                     * @return MaxDelay Delay threshold. If `IsKickOut` is set to `true`, this parameter is required.
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置Delay threshold. If `IsKickOut` is set to `true`, this parameter is required.
                     * @param MaxDelay Delay threshold. If `IsKickOut` is set to `true`, this parameter is required.
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * @return WeightMode Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     * @param WeightMode Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取Read-Only weight of an instance
                     * @return RoWeightValues Read-Only weight of an instance
                     */
                    RoWeight GetRoWeightValues() const;

                    /**
                     * 设置Read-Only weight of an instance
                     * @param RoWeightValues Read-Only weight of an instance
                     */
                    void SetRoWeightValues(const RoWeight& _roWeightValues);

                    /**
                     * 判断参数 RoWeightValues 是否已赋值
                     * @return RoWeightValues 是否已赋值
                     */
                    bool RoWeightValuesHasBeenSet() const;

                    /**
                     * 获取Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`
                     * @return FailOver Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`
                     * @param FailOver Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Whether to automatically add newly created read-only instances to the proxy group. Valid values: `true`, `false`
                     * @return AutoAddRo Whether to automatically add newly created read-only instances to the proxy group. Valid values: `true`, `false`
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add newly created read-only instances to the proxy group. Valid values: `true`, `false`
                     * @param AutoAddRo Whether to automatically add newly created read-only instances to the proxy group. Valid values: `true`, `false`
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     */
                    bool AutoAddRoHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the database proxy group
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Whether to remove delayed read-only instances from the proxy group. Valid values: `true`, `false`
                     */
                    bool m_isKickout;
                    bool m_isKickoutHasBeenSet;

                    /**
                     * The minimum number of read-only instances allowed by the proxy group
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * Delay threshold. If `IsKickOut` is set to `true`, this parameter is required.
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Assignment mode of read/write weights. Valid values: `system` (auto-assigned), `custom`
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Read-Only weight of an instance
                     */
                    RoWeight m_roWeightValues;
                    bool m_roWeightValuesHasBeenSet;

                    /**
                     * Whether to enable failover. If it is enabled, the connection address will route requests to the source instance in case of proxy failure. Valid values: `true`, `false`
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to automatically add newly created read-only instances to the proxy group. Valid values: `true`, `false`
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYREQUEST_H_
