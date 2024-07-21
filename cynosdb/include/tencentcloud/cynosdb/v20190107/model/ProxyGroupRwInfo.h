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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyInstanceWeight.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Read/write separation information of the database proxy group
                */
                class ProxyGroupRwInfo : public AbstractModel
                {
                public:
                    ProxyGroupRwInfo();
                    ~ProxyGroupRwInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * @return ConsistencyType Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * @param _consistencyType Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     * 
                     */
                    void SetConsistencyType(const std::string& _consistencyType);

                    /**
                     * 判断参数 ConsistencyType 是否已赋值
                     * @return ConsistencyType 是否已赋值
                     * 
                     */
                    bool ConsistencyTypeHasBeenSet() const;

                    /**
                     * 获取Consistency timeout period
                     * @return ConsistencyTimeOut Consistency timeout period
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置Consistency timeout period
                     * @param _consistencyTimeOut Consistency timeout period
                     * 
                     */
                    void SetConsistencyTimeOut(const int64_t& _consistencyTimeOut);

                    /**
                     * 判断参数 ConsistencyTimeOut 是否已赋值
                     * @return ConsistencyTimeOut 是否已赋值
                     * 
                     */
                    bool ConsistencyTimeOutHasBeenSet() const;

                    /**
                     * 获取Weight mode. Valid values: `system` (auto-assigned), `custom`.
                     * @return WeightMode Weight mode. Valid values: `system` (auto-assigned), `custom`.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Weight mode. Valid values: `system` (auto-assigned), `custom`.
                     * @param _weightMode Weight mode. Valid values: `system` (auto-assigned), `custom`.
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取Whether to enable failover
                     * @return FailOver Whether to enable failover
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置Whether to enable failover
                     * @param _failOver Whether to enable failover
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * @return AutoAddRo Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * @param _autoAddRo Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     * 
                     */
                    void SetAutoAddRo(const std::string& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取Instance weight array
                     * @return InstanceWeights Instance weight array
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置Instance weight array
                     * @param _instanceWeights Instance weight array
                     * 
                     */
                    void SetInstanceWeights(const std::vector<ProxyInstanceWeight>& _instanceWeights);

                    /**
                     * 判断参数 InstanceWeights 是否已赋值
                     * @return InstanceWeights 是否已赋值
                     * 
                     */
                    bool InstanceWeightsHasBeenSet() const;

                    /**
                     * 获取Whether to enable read-write node. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OpenRw Whether to enable read-write node. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置Whether to enable read-write node. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _openRw Whether to enable read-write node. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOpenRw(const std::string& _openRw);

                    /**
                     * 判断参数 OpenRw 是否已赋值
                     * @return OpenRw 是否已赋值
                     * 
                     */
                    bool OpenRwHasBeenSet() const;

                    /**
                     * 获取Read/write attribute. Valid values: `READWRITE`, `READONLY`.
                     * @return RwType Read/write attribute. Valid values: `READWRITE`, `READONLY`.
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置Read/write attribute. Valid values: `READWRITE`, `READONLY`.
                     * @param _rwType Read/write attribute. Valid values: `READWRITE`, `READONLY`.
                     * 
                     */
                    void SetRwType(const std::string& _rwType);

                    /**
                     * 判断参数 RwType 是否已赋值
                     * @return RwType 是否已赋值
                     * 
                     */
                    bool RwTypeHasBeenSet() const;

                    /**
                     * 获取Transaction split
                     * @return TransSplit Transaction split
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置Transaction split
                     * @param _transSplit Transaction split
                     * 
                     */
                    void SetTransSplit(const bool& _transSplit);

                    /**
                     * 判断参数 TransSplit 是否已赋值
                     * @return TransSplit 是否已赋值
                     * 
                     */
                    bool TransSplitHasBeenSet() const;

                    /**
                     * 获取Connection mode. Valid values: `balance`, `nearby`.
                     * @return AccessMode Connection mode. Valid values: `balance`, `nearby`.
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置Connection mode. Valid values: `balance`, `nearby`.
                     * @param _accessMode Connection mode. Valid values: `balance`, `nearby`.
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                private:

                    /**
                     * Consistency type. Valid values: `eventual` (eventual consistency), `session` (session consistency), `global` (global consistency).
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * Consistency timeout period
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * Weight mode. Valid values: `system` (auto-assigned), `custom`.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to enable failover
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to automatically add read-only instance. Valid value: `yes`, `no`.
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Instance weight array
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * Whether to enable read-write node. Valid values: `yes`, `no`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * Read/write attribute. Valid values: `READWRITE`, `READONLY`.
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * Transaction split
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * Connection mode. Valid values: `balance`, `nearby`.
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
