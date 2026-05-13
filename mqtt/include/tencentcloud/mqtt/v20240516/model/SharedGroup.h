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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * Shared subscription group
                */
                class SharedGroup : public AbstractModel
                {
                public:
                    SharedGroup();
                    ~SharedGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tencent Cloud MQTT instance ID
                     * @return InstanceId Tencent Cloud MQTT instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Tencent Cloud MQTT instance ID
                     * @param _instanceId Tencent Cloud MQTT instance ID
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
                     * 获取Shared subscription group name
                     * @return SharedName Shared subscription group name
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置Shared subscription group name
                     * @param _sharedName Shared subscription group name
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取Shared group load balancing strategy 1.RANDOM 2.HASH_PARTITION
                     * @return LbStrategy Shared group load balancing strategy 1.RANDOM 2.HASH_PARTITION
                     * 
                     */
                    int64_t GetLbStrategy() const;

                    /**
                     * 设置Shared group load balancing strategy 1.RANDOM 2.HASH_PARTITION
                     * @param _lbStrategy Shared group load balancing strategy 1.RANDOM 2.HASH_PARTITION
                     * 
                     */
                    void SetLbStrategy(const int64_t& _lbStrategy);

                    /**
                     * 判断参数 LbStrategy 是否已赋值
                     * @return LbStrategy 是否已赋值
                     * 
                     */
                    bool LbStrategyHasBeenSet() const;

                    /**
                     * 获取Takes effect under the HASH_PARTITION policy. It indicates the delay time when a Client disconnects or a new Client comes online to join the subscription group for consumption.
Range: 0–600 seconds
                     * @return ExpiryInterval Takes effect under the HASH_PARTITION policy. It indicates the delay time when a Client disconnects or a new Client comes online to join the subscription group for consumption.
Range: 0–600 seconds
                     * 
                     */
                    int64_t GetExpiryInterval() const;

                    /**
                     * 设置Takes effect under the HASH_PARTITION policy. It indicates the delay time when a Client disconnects or a new Client comes online to join the subscription group for consumption.
Range: 0–600 seconds
                     * @param _expiryInterval Takes effect under the HASH_PARTITION policy. It indicates the delay time when a Client disconnects or a new Client comes online to join the subscription group for consumption.
Range: 0–600 seconds
                     * 
                     */
                    void SetExpiryInterval(const int64_t& _expiryInterval);

                    /**
                     * 判断参数 ExpiryInterval 是否已赋值
                     * @return ExpiryInterval 是否已赋值
                     * 
                     */
                    bool ExpiryIntervalHasBeenSet() const;

                    /**
                     * 获取Remark, length not exceeding 128 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Remark, length not exceeding 128 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remark, length not exceeding 128 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Remark, length not exceeding 128 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取createTime, millisecond-level timestamp.
                     * @return CreateTime createTime, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置createTime, millisecond-level timestamp.
                     * @param _createTime createTime, millisecond-level timestamp.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last update time, millisecond-level timestamp.
                     * @return UpdateTime Last update time, millisecond-level timestamp.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Last update time, millisecond-level timestamp.
                     * @param _updateTime Last update time, millisecond-level timestamp.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud MQTT instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Shared subscription group name
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * Shared group load balancing strategy 1.RANDOM 2.HASH_PARTITION
                     */
                    int64_t m_lbStrategy;
                    bool m_lbStrategyHasBeenSet;

                    /**
                     * Takes effect under the HASH_PARTITION policy. It indicates the delay time when a Client disconnects or a new Client comes online to join the subscription group for consumption.
Range: 0–600 seconds
                     */
                    int64_t m_expiryInterval;
                    bool m_expiryIntervalHasBeenSet;

                    /**
                     * Remark, length not exceeding 128 characters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * createTime, millisecond-level timestamp.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time, millisecond-level timestamp.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDGROUP_H_
