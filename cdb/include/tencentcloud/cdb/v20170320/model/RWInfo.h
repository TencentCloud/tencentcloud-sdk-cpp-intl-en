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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RWInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Read/Write separation information of the proxy
                */
                class RWInfo : public AbstractModel
                {
                public:
                    RWInfo();
                    ~RWInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return InstCount Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetInstCount() const;

                    /**
                     * 设置Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _instCount Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetInstCount(const uint64_t& _instCount);

                    /**
                     * 判断参数 InstCount 是否已赋值
                     * @return InstCount 是否已赋值
                     * 
                     */
                    bool InstCountHasBeenSet() const;

                    /**
                     * 获取Assignment mode of read/write weights
Valid values: `system` (auto-assigned), `custom`
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return WeightMode Assignment mode of read/write weights
Valid values: `system` (auto-assigned), `custom`
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置Assignment mode of read/write weights
Valid values: `system` (auto-assigned), `custom`
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _weightMode Assignment mode of read/write weights
Valid values: `system` (auto-assigned), `custom`
Note: this field may return `null`, indicating that no valid value can be found.
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
                     * 获取Whether to remove delayed read-only instances from the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return IsKickOut Whether to remove delayed read-only instances from the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    bool GetIsKickOut() const;

                    /**
                     * 设置Whether to remove delayed read-only instances from the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _isKickOut Whether to remove delayed read-only instances from the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetIsKickOut(const bool& _isKickOut);

                    /**
                     * 判断参数 IsKickOut 是否已赋值
                     * @return IsKickOut 是否已赋值
                     * 
                     */
                    bool IsKickOutHasBeenSet() const;

                    /**
                     * 获取The minimum number of read-only instances allowed by the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return MinCount The minimum number of read-only instances allowed by the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetMinCount() const;

                    /**
                     * 设置The minimum number of read-only instances allowed by the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _minCount The minimum number of read-only instances allowed by the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetMinCount(const uint64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     * 
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取Delay threshold
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return MaxDelay Delay threshold
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置Delay threshold
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _maxDelay Delay threshold
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取Whether to enable failover
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return FailOver Whether to enable failover
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    bool GetFailOver() const;

                    /**
                     * 设置Whether to enable failover
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _failOver Whether to enable failover
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetFailOver(const bool& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取Whether to automatically add newly created read-only instances to the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return AutoAddRo Whether to automatically add newly created read-only instances to the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    bool GetAutoAddRo() const;

                    /**
                     * 设置Whether to automatically add newly created read-only instances to the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _autoAddRo Whether to automatically add newly created read-only instances to the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetAutoAddRo(const bool& _autoAddRo);

                    /**
                     * 判断参数 AutoAddRo 是否已赋值
                     * @return AutoAddRo 是否已赋值
                     * 
                     */
                    bool AutoAddRoHasBeenSet() const;

                    /**
                     * 获取Information of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return RWInstInfo Information of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    RWInstanceInfo GetRWInstInfo() const;

                    /**
                     * 设置Information of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param _rWInstInfo Information of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    void SetRWInstInfo(const RWInstanceInfo& _rWInstInfo);

                    /**
                     * 判断参数 RWInstInfo 是否已赋值
                     * @return RWInstInfo 是否已赋值
                     * 
                     */
                    bool RWInstInfoHasBeenSet() const;

                private:

                    /**
                     * Number of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_instCount;
                    bool m_instCountHasBeenSet;

                    /**
                     * Assignment mode of read/write weights
Valid values: `system` (auto-assigned), `custom`
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * Whether to remove delayed read-only instances from the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_isKickOut;
                    bool m_isKickOutHasBeenSet;

                    /**
                     * The minimum number of read-only instances allowed by the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * Delay threshold
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * Whether to enable failover
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * Whether to automatically add newly created read-only instances to the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    bool m_autoAddRo;
                    bool m_autoAddRoHasBeenSet;

                    /**
                     * Information of instances in the proxy group
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    RWInstanceInfo m_rWInstInfo;
                    bool m_rWInstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RWINFO_H_
