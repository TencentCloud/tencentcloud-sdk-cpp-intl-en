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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR alarm quantity statistics item
                */
                class EdrAlertCountItem : public AbstractModel
                {
                public:
                    EdrAlertCountItem();
                    ~EdrAlertCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Query instance ID</p>
                     * @return InstanceId <p>Query instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Query instance ID</p>
                     * @param _instanceId <p>Query instance ID</p>
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
                     * 获取<p>Total number of alarms</p>
                     * @return TotalCount <p>Total number of alarms</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>Total number of alarms</p>
                     * @param _totalCount <p>Total number of alarms</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of viruses and trojans (VIRUS_TROJAN)</p>
                     * @return VirusTrojanCount <p>Number of viruses and trojans (VIRUS_TROJAN)</p>
                     * 
                     */
                    int64_t GetVirusTrojanCount() const;

                    /**
                     * 设置<p>Number of viruses and trojans (VIRUS_TROJAN)</p>
                     * @param _virusTrojanCount <p>Number of viruses and trojans (VIRUS_TROJAN)</p>
                     * 
                     */
                    void SetVirusTrojanCount(const int64_t& _virusTrojanCount);

                    /**
                     * 判断参数 VirusTrojanCount 是否已赋值
                     * @return VirusTrojanCount 是否已赋值
                     * 
                     */
                    bool VirusTrojanCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of abnormal logins (ABNORMAL_LOGIN)</p>
                     * @return AbnormalLoginCount <p>Number of abnormal logins (ABNORMAL_LOGIN)</p>
                     * 
                     */
                    int64_t GetAbnormalLoginCount() const;

                    /**
                     * 设置<p>Number of abnormal logins (ABNORMAL_LOGIN)</p>
                     * @param _abnormalLoginCount <p>Number of abnormal logins (ABNORMAL_LOGIN)</p>
                     * 
                     */
                    void SetAbnormalLoginCount(const int64_t& _abnormalLoginCount);

                    /**
                     * 判断参数 AbnormalLoginCount 是否已赋值
                     * @return AbnormalLoginCount 是否已赋值
                     * 
                     */
                    bool AbnormalLoginCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of server behaviors (HOST_BEHAVIOR)</p>
                     * @return HostBehaviorCount <p>Number of server behaviors (HOST_BEHAVIOR)</p>
                     * 
                     */
                    int64_t GetHostBehaviorCount() const;

                    /**
                     * 设置<p>Number of server behaviors (HOST_BEHAVIOR)</p>
                     * @param _hostBehaviorCount <p>Number of server behaviors (HOST_BEHAVIOR)</p>
                     * 
                     */
                    void SetHostBehaviorCount(const int64_t& _hostBehaviorCount);

                    /**
                     * 判断参数 HostBehaviorCount 是否已赋值
                     * @return HostBehaviorCount 是否已赋值
                     * 
                     */
                    bool HostBehaviorCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of network behaviors (NETWORK_BEHAVIOR)</p>
                     * @return NetworkBehaviorCount <p>Number of network behaviors (NETWORK_BEHAVIOR)</p>
                     * 
                     */
                    int64_t GetNetworkBehaviorCount() const;

                    /**
                     * 设置<p>Number of network behaviors (NETWORK_BEHAVIOR)</p>
                     * @param _networkBehaviorCount <p>Number of network behaviors (NETWORK_BEHAVIOR)</p>
                     * 
                     */
                    void SetNetworkBehaviorCount(const int64_t& _networkBehaviorCount);

                    /**
                     * 判断参数 NetworkBehaviorCount 是否已赋值
                     * @return NetworkBehaviorCount 是否已赋值
                     * 
                     */
                    bool NetworkBehaviorCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of hosts with alarms (only available in GlobalCount mode)</p>
                     * @return InstancesCount <p>Number of hosts with alarms (only available in GlobalCount mode)</p>
                     * 
                     */
                    uint64_t GetInstancesCount() const;

                    /**
                     * 设置<p>Number of hosts with alarms (only available in GlobalCount mode)</p>
                     * @param _instancesCount <p>Number of hosts with alarms (only available in GlobalCount mode)</p>
                     * 
                     */
                    void SetInstancesCount(const uint64_t& _instancesCount);

                    /**
                     * 判断参数 InstancesCount 是否已赋值
                     * @return InstancesCount 是否已赋值
                     * 
                     */
                    bool InstancesCountHasBeenSet() const;

                private:

                    /**
                     * <p>Query instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Total number of alarms</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Number of viruses and trojans (VIRUS_TROJAN)</p>
                     */
                    int64_t m_virusTrojanCount;
                    bool m_virusTrojanCountHasBeenSet;

                    /**
                     * <p>Number of abnormal logins (ABNORMAL_LOGIN)</p>
                     */
                    int64_t m_abnormalLoginCount;
                    bool m_abnormalLoginCountHasBeenSet;

                    /**
                     * <p>Number of server behaviors (HOST_BEHAVIOR)</p>
                     */
                    int64_t m_hostBehaviorCount;
                    bool m_hostBehaviorCountHasBeenSet;

                    /**
                     * <p>Number of network behaviors (NETWORK_BEHAVIOR)</p>
                     */
                    int64_t m_networkBehaviorCount;
                    bool m_networkBehaviorCountHasBeenSet;

                    /**
                     * <p>Number of hosts with alarms (only available in GlobalCount mode)</p>
                     */
                    uint64_t m_instancesCount;
                    bool m_instancesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTCOUNTITEM_H_
