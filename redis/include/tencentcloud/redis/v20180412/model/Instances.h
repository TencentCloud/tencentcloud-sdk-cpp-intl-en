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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instances in replication group
                */
                class Instances : public AbstractModel
                {
                public:
                    Instances();
                    ~Instances() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User App ID
                     * @return AppId User App ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User App ID
                     * @param AppId User App ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong (China); 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley)
                     * @return RegionId Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong (China); 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley)
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong (China); 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley)
                     * @param RegionId Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong (China); 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley)
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return ZoneId Region ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置Region ID
                     * @param ZoneId Region ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return RedisReplicasNum Number of replicas
                     */
                    uint64_t GetRedisReplicasNum() const;

                    /**
                     * 设置Number of replicas
                     * @param RedisReplicasNum Number of replicas
                     */
                    void SetRedisReplicasNum(const uint64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取Number of shards
                     * @return RedisShardNum Number of shards
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置Number of shards
                     * @param RedisShardNum Number of shards
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取Shard size
                     * @return RedisShardSize Shard size
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置Shard size
                     * @param RedisShardSize Shard size
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取Instance disk size
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DiskSize Instance disk size
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Instance disk size
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DiskSize Instance disk size
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Engine: Redis community edition, Tencent Cloud CKV
                     * @return Engine Engine: Redis community edition, Tencent Cloud CKV
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine: Redis community edition, Tencent Cloud CKV
                     * @param Engine Engine: Redis community edition, Tencent Cloud CKV
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Instance role. Valid values: `rw` (read-write), `r`( read-only)
                     * @return Role Instance role. Valid values: `rw` (read-write), `r`( read-only)
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Instance role. Valid values: `rw` (read-write), `r`( read-only)
                     * @param Role Instance role. Valid values: `rw` (read-write), `r`( read-only)
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Instance VIP
                     * @return Vip Instance VIP
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Instance VIP
                     * @param Vip Instance VIP
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Internal parameter, which can be ignored.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Vip6 Internal parameter, which can be ignored.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Vip6 Internal parameter, which can be ignored.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取VPC ID, such as 75101
                     * @return VpcID VPC ID, such as 75101
                     */
                    int64_t GetVpcID() const;

                    /**
                     * 设置VPC ID, such as 75101
                     * @param VpcID VPC ID, such as 75101
                     */
                    void SetVpcID(const int64_t& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取Instance Port
                     * @return VPort Instance Port
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置Instance Port
                     * @param VPort Instance Port
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     * @return Status Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     * @param Status Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Repository ID
                     * @return GrocerySysId Repository ID
                     */
                    int64_t GetGrocerySysId() const;

                    /**
                     * 设置Repository ID
                     * @param GrocerySysId Repository ID
                     */
                    void SetGrocerySysId(const int64_t& _grocerySysId);

                    /**
                     * 判断参数 GrocerySysId 是否已赋值
                     * @return GrocerySysId 是否已赋值
                     */
                    bool GrocerySysIdHasBeenSet() const;

                    /**
                     * 获取Instance type. Valid values: `1` (Redis 2.8 memory edition in cluster architecture), `2` (Redis 2.8 memory edition in standard architecture), `3` (CKV 3.2 memory edition in standard architecture), `4` (CKV 3.2 memory edition in cluster architecture), `5` (Redis 2.8 memory edition in standalone architecture), `6` (Redis 4.0 memory edition in standard architecture), `7` (Redis 4.0 memory edition in cluster architecture), `8` (Redis 5.0 memory edition in standard architecture), `9` (Redis 5.0 memory edition in cluster architecture)
                     * @return ProductType Instance type. Valid values: `1` (Redis 2.8 memory edition in cluster architecture), `2` (Redis 2.8 memory edition in standard architecture), `3` (CKV 3.2 memory edition in standard architecture), `4` (CKV 3.2 memory edition in cluster architecture), `5` (Redis 2.8 memory edition in standalone architecture), `6` (Redis 4.0 memory edition in standard architecture), `7` (Redis 4.0 memory edition in cluster architecture), `8` (Redis 5.0 memory edition in standard architecture), `9` (Redis 5.0 memory edition in cluster architecture)
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置Instance type. Valid values: `1` (Redis 2.8 memory edition in cluster architecture), `2` (Redis 2.8 memory edition in standard architecture), `3` (CKV 3.2 memory edition in standard architecture), `4` (CKV 3.2 memory edition in cluster architecture), `5` (Redis 2.8 memory edition in standalone architecture), `6` (Redis 4.0 memory edition in standard architecture), `7` (Redis 4.0 memory edition in cluster architecture), `8` (Redis 5.0 memory edition in standard architecture), `9` (Redis 5.0 memory edition in cluster architecture)
                     * @param ProductType Instance type. Valid values: `1` (Redis 2.8 memory edition in cluster architecture), `2` (Redis 2.8 memory edition in standard architecture), `3` (CKV 3.2 memory edition in standard architecture), `4` (CKV 3.2 memory edition in cluster architecture), `5` (Redis 2.8 memory edition in standalone architecture), `6` (Redis 4.0 memory edition in standard architecture), `7` (Redis 4.0 memory edition in cluster architecture), `8` (Redis 5.0 memory edition in standard architecture), `9` (Redis 5.0 memory edition in cluster architecture)
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param UpdateTime Update time
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * User App ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Region ID. 1: Guangzhou; 4: Shanghai; 5: Hong Kong (China); 6: Toronto; 7: Shanghai Finance; 8: Beijing; 9: Singapore; 11: Shenzhen Finance; 15: West US (Silicon Valley)
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    uint64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * Number of shards
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * Shard size
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * Instance disk size
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Engine: Redis community edition, Tencent Cloud CKV
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Instance role. Valid values: `rw` (read-write), `r`( read-only)
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Instance VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Internal parameter, which can be ignored.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * VPC ID, such as 75101
                     */
                    int64_t m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * Instance Port
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Instance status. 0: to be initialized; 1: in process; 2: running; -2: isolated; -3: to be deleted
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Repository ID
                     */
                    int64_t m_grocerySysId;
                    bool m_grocerySysIdHasBeenSet;

                    /**
                     * Instance type. Valid values: `1` (Redis 2.8 memory edition in cluster architecture), `2` (Redis 2.8 memory edition in standard architecture), `3` (CKV 3.2 memory edition in standard architecture), `4` (CKV 3.2 memory edition in cluster architecture), `5` (Redis 2.8 memory edition in standalone architecture), `6` (Redis 4.0 memory edition in standard architecture), `7` (Redis 4.0 memory edition in cluster architecture), `8` (Redis 5.0 memory edition in standard architecture), `9` (Redis 5.0 memory edition in cluster architecture)
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
