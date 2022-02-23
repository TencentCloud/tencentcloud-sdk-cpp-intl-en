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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMINSTANCEINFO_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Tag.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * RUM instance information
                */
                class RumInstanceInfo : public AbstractModel
                {
                public:
                    RumInstanceInfo();
                    ~RumInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance status (1: creating; 2: running; 3: exceptional; 4: restarting; 5: stopping; 6: stopped; 7: deleted)
                     * @return InstanceStatus Instance status (1: creating; 2: running; 3: exceptional; 4: restarting; 5: stopping; 6: stopped; 7: deleted)
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Instance status (1: creating; 2: running; 3: exceptional; 4: restarting; 5: stopping; 6: stopped; 7: deleted)
                     * @param InstanceStatus Instance status (1: creating; 2: running; 3: exceptional; 4: restarting; 5: stopping; 6: stopped; 7: deleted)
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return AreaId Region ID
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置Region ID
                     * @param AreaId Region ID
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取Tag list
                     * @return Tags Tag list
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param Tags Tag list
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance description
                     * @return InstanceDesc Instance description
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置Instance description
                     * @param InstanceDesc Instance description
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取Billing status (1: in use; 2: expired; 3: terminated; 4: assigning; 5: assignment failed)
                     * @return ChargeStatus Billing status (1: in use; 2: expired; 3: terminated; 4: assigning; 5: assignment failed)
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置Billing status (1: in use; 2: expired; 3: terminated; 4: assigning; 5: assignment failed)
                     * @param ChargeStatus Billing status (1: in use; 2: expired; 3: terminated; 4: assigning; 5: assignment failed)
                     */
                    void SetChargeStatus(const int64_t& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取Billing type (1: free; 2: prepaid; 3: postpaid)
                     * @return ChargeType Billing type (1: free; 2: prepaid; 3: postpaid)
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Billing type (1: free; 2: prepaid; 3: postpaid)
                     * @param ChargeType Billing type (1: free; 2: prepaid; 3: postpaid)
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdatedAt Update time
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time
                     * @param UpdatedAt Update time
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Data retention period (in days)
                     * @return DataRetentionDays Data retention period (in days)
                     */
                    int64_t GetDataRetentionDays() const;

                    /**
                     * 设置Data retention period (in days)
                     * @param DataRetentionDays Data retention period (in days)
                     */
                    void SetDataRetentionDays(const int64_t& _dataRetentionDays);

                    /**
                     * 判断参数 DataRetentionDays 是否已赋值
                     * @return DataRetentionDays 是否已赋值
                     */
                    bool DataRetentionDaysHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param InstanceName Instance name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param CreatedAt Creation time
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * Instance status (1: creating; 2: running; 3: exceptional; 4: restarting; 5: stopping; 6: stopped; 7: deleted)
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance description
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * Billing status (1: in use; 2: expired; 3: terminated; 4: assigning; 5: assignment failed)
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * Billing type (1: free; 2: prepaid; 3: postpaid)
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Data retention period (in days)
                     */
                    int64_t m_dataRetentionDays;
                    bool m_dataRetentionDaysHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMINSTANCEINFO_H_
