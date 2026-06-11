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
                     * 获取<p>Consistency Type eventual-final consistency,global-global consistency,session-session consistency</p>
                     * @return ConsistencyType <p>Consistency Type eventual-final consistency,global-global consistency,session-session consistency</p>
                     * 
                     */
                    std::string GetConsistencyType() const;

                    /**
                     * 设置<p>Consistency Type eventual-final consistency,global-global consistency,session-session consistency</p>
                     * @param _consistencyType <p>Consistency Type eventual-final consistency,global-global consistency,session-session consistency</p>
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
                     * 获取<p>Consistency timeout</p>
                     * @return ConsistencyTimeOut <p>Consistency timeout</p>
                     * 
                     */
                    int64_t GetConsistencyTimeOut() const;

                    /**
                     * 设置<p>Consistency timeout</p>
                     * @param _consistencyTimeOut <p>Consistency timeout</p>
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
                     * 获取<p>Weight mode system-system-assigned, custom-custom</p>
                     * @return WeightMode <p>Weight mode system-system-assigned, custom-custom</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>Weight mode system-system-assigned, custom-custom</p>
                     * @param _weightMode <p>Weight mode system-system-assigned, custom-custom</p>
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
                     * 获取<p>Whether fault migration is enabled</p>
                     * @return FailOver <p>Whether fault migration is enabled</p>
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>Whether fault migration is enabled</p>
                     * @param _failOver <p>Whether fault migration is enabled</p>
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
                     * 获取<p>Automatically add read-only instance, yes-yes, no-no</p>
                     * @return AutoAddRo <p>Automatically add read-only instance, yes-yes, no-no</p>
                     * 
                     */
                    std::string GetAutoAddRo() const;

                    /**
                     * 设置<p>Automatically add read-only instance, yes-yes, no-no</p>
                     * @param _autoAddRo <p>Automatically add read-only instance, yes-yes, no-no</p>
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
                     * 获取<p>Instance weight array</p>
                     * @return InstanceWeights <p>Instance weight array</p>
                     * 
                     */
                    std::vector<ProxyInstanceWeight> GetInstanceWeights() const;

                    /**
                     * 设置<p>Instance weight array</p>
                     * @param _instanceWeights <p>Instance weight array</p>
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
                     * 获取<p>Whether to enable the read-write node, yes - enable, no - disable</p>
                     * @return OpenRw <p>Whether to enable the read-write node, yes - enable, no - disable</p>
                     * 
                     */
                    std::string GetOpenRw() const;

                    /**
                     * 设置<p>Whether to enable the read-write node, yes - enable, no - disable</p>
                     * @param _openRw <p>Whether to enable the read-write node, yes - enable, no - disable</p>
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
                     * 获取<p>Read-write attribute, value range: READWRITE, READONLY</p>
                     * @return RwType <p>Read-write attribute, value range: READWRITE, READONLY</p>
                     * 
                     */
                    std::string GetRwType() const;

                    /**
                     * 设置<p>Read-write attribute, value range: READWRITE, READONLY</p>
                     * @param _rwType <p>Read-write attribute, value range: READWRITE, READONLY</p>
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
                     * 获取<p>Transaction split</p>
                     * @return TransSplit <p>Transaction split</p>
                     * 
                     */
                    bool GetTransSplit() const;

                    /**
                     * 设置<p>Transaction split</p>
                     * @param _transSplit <p>Transaction split</p>
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
                     * 获取<p>Connection mode, available values: balance, nearby</p>
                     * @return AccessMode <p>Connection mode, available values: balance, nearby</p>
                     * 
                     */
                    std::string GetAccessMode() const;

                    /**
                     * 设置<p>Connection mode, available values: balance, nearby</p>
                     * @param _accessMode <p>Connection mode, available values: balance, nearby</p>
                     * 
                     */
                    void SetAccessMode(const std::string& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to treat the libra node as an ordinary RO node</p>
                     * @return ApNodeAsRoNode <p>Whether to treat the libra node as an ordinary RO node</p>
                     * 
                     */
                    bool GetApNodeAsRoNode() const;

                    /**
                     * 设置<p>Whether to treat the libra node as an ordinary RO node</p>
                     * @param _apNodeAsRoNode <p>Whether to treat the libra node as an ordinary RO node</p>
                     * 
                     */
                    void SetApNodeAsRoNode(const bool& _apNodeAsRoNode);

                    /**
                     * 判断参数 ApNodeAsRoNode 是否已赋值
                     * @return ApNodeAsRoNode 是否已赋值
                     * 
                     */
                    bool ApNodeAsRoNodeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * @return ApQueryToOtherNode <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * 
                     */
                    bool GetApQueryToOtherNode() const;

                    /**
                     * 设置<p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * @param _apQueryToOtherNode <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     * 
                     */
                    void SetApQueryToOtherNode(const bool& _apQueryToOtherNode);

                    /**
                     * 判断参数 ApQueryToOtherNode 是否已赋值
                     * @return ApQueryToOtherNode 是否已赋值
                     * 
                     */
                    bool ApQueryToOtherNodeHasBeenSet() const;

                    /**
                     * 获取
                     * @return LoadBalanceMode 
                     * 
                     */
                    std::string GetLoadBalanceMode() const;

                    /**
                     * 设置
                     * @param _loadBalanceMode 
                     * 
                     */
                    void SetLoadBalanceMode(const std::string& _loadBalanceMode);

                    /**
                     * 判断参数 LoadBalanceMode 是否已赋值
                     * @return LoadBalanceMode 是否已赋值
                     * 
                     */
                    bool LoadBalanceModeHasBeenSet() const;

                private:

                    /**
                     * <p>Consistency Type eventual-final consistency,global-global consistency,session-session consistency</p>
                     */
                    std::string m_consistencyType;
                    bool m_consistencyTypeHasBeenSet;

                    /**
                     * <p>Consistency timeout</p>
                     */
                    int64_t m_consistencyTimeOut;
                    bool m_consistencyTimeOutHasBeenSet;

                    /**
                     * <p>Weight mode system-system-assigned, custom-custom</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>Whether fault migration is enabled</p>
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>Automatically add read-only instance, yes-yes, no-no</p>
                     */
                    std::string m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * <p>Instance weight array</p>
                     */
                    std::vector<ProxyInstanceWeight> m_instanceWeights;
                    bool m_instanceWeightsHasBeenSet;

                    /**
                     * <p>Whether to enable the read-write node, yes - enable, no - disable</p>
                     */
                    std::string m_openRw;
                    bool m_openRwHasBeenSet;

                    /**
                     * <p>Read-write attribute, value range: READWRITE, READONLY</p>
                     */
                    std::string m_rwType;
                    bool m_rwTypeHasBeenSet;

                    /**
                     * <p>Transaction split</p>
                     */
                    bool m_transSplit;
                    bool m_transSplitHasBeenSet;

                    /**
                     * <p>Connection mode, available values: balance, nearby</p>
                     */
                    std::string m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * <p>Whether to treat the libra node as an ordinary RO node</p>
                     */
                    bool m_apNodeAsRoNode;
                    bool m_apNodeAsRoNodeHasBeenSet;

                    /**
                     * <p>Whether to forward to other nodes when a libra node fault occurs</p>
                     */
                    bool m_apQueryToOtherNode;
                    bool m_apQueryToOtherNodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_loadBalanceMode;
                    bool m_loadBalanceModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYGROUPRWINFO_H_
