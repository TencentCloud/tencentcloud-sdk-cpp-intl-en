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
                     * 获取User AppID
                     * @return AppId User AppID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User AppID
                     * @param AppId User AppID
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
                     * 获取Region ID. <ul><li>`1`: Guangzhou. </li><li>`4`: Shanghai. </li><li>`5`: Hong Kong (China). </li> <li>`6`: Toronto. </li> <li>`7`: Shanghai Finance. </li> <li>`8`: Beijing. </li> <li>`9`: Singapore. </li> <li>`11`: Shenzhen Finance. </li> <li>`15`: West US (Silicon Valley). </li> </ul>
                     * @return RegionId Region ID. <ul><li>`1`: Guangzhou. </li><li>`4`: Shanghai. </li><li>`5`: Hong Kong (China). </li> <li>`6`: Toronto. </li> <li>`7`: Shanghai Finance. </li> <li>`8`: Beijing. </li> <li>`9`: Singapore. </li> <li>`11`: Shenzhen Finance. </li> <li>`15`: West US (Silicon Valley). </li> </ul>
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID. <ul><li>`1`: Guangzhou. </li><li>`4`: Shanghai. </li><li>`5`: Hong Kong (China). </li> <li>`6`: Toronto. </li> <li>`7`: Shanghai Finance. </li> <li>`8`: Beijing. </li> <li>`9`: Singapore. </li> <li>`11`: Shenzhen Finance. </li> <li>`15`: West US (Silicon Valley). </li> </ul>
                     * @param RegionId Region ID. <ul><li>`1`: Guangzhou. </li><li>`4`: Shanghai. </li><li>`5`: Hong Kong (China). </li> <li>`6`: Toronto. </li> <li>`7`: Shanghai Finance. </li> <li>`8`: Beijing. </li> <li>`9`: Singapore. </li> <li>`11`: Shenzhen Finance. </li> <li>`15`: West US (Silicon Valley). </li> </ul>
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
                     * 获取Shard memory size.
                     * @return RedisShardSize Shard memory size.
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置Shard memory size.
                     * @param RedisShardSize Shard memory size.
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
                     * 获取Engine: Redis Community Edition, Tencent Cloud CKV.
                     * @return Engine Engine: Redis Community Edition, Tencent Cloud CKV.
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine: Redis Community Edition, Tencent Cloud CKV.
                     * @param Engine Engine: Redis Community Edition, Tencent Cloud CKV.
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Read-write permission of the instance. <ul><li>`rw`: Read/Write. </li><li>`r`: Read-only. </li></ul>
                     * @return Role Read-write permission of the instance. <ul><li>`rw`: Read/Write. </li><li>`r`: Read-only. </li></ul>
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Read-write permission of the instance. <ul><li>`rw`: Read/Write. </li><li>`r`: Read-only. </li></ul>
                     * @param Role Read-write permission of the instance. <ul><li>`rw`: Read/Write. </li><li>`r`: Read-only. </li></ul>
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip6 Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Vip6 Internal parameter, which can be ignored.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取VPC ID, such as `75101`.
                     * @return VpcID VPC ID, such as `75101`.
                     */
                    int64_t GetVpcID() const;

                    /**
                     * 设置VPC ID, such as `75101`.
                     * @param VpcID VPC ID, such as `75101`.
                     */
                    void SetVpcID(const int64_t& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取Instance port
                     * @return VPort Instance port
                     */
                    int64_t GetVPort() const;

                    /**
                     * 设置Instance port
                     * @param VPort Instance port
                     */
                    void SetVPort(const int64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     * @return Status Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     * @param Status Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
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
                     * 获取Instance type. <ul><li>`1`: Redis 2.8 Memory Edition (Cluster Architecture). </li><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`5`: Redis 2.8 Standalone Edition. </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li></ul>
                     * @return ProductType Instance type. <ul><li>`1`: Redis 2.8 Memory Edition (Cluster Architecture). </li><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`5`: Redis 2.8 Standalone Edition. </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li></ul>
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置Instance type. <ul><li>`1`: Redis 2.8 Memory Edition (Cluster Architecture). </li><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`5`: Redis 2.8 Standalone Edition. </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li></ul>
                     * @param ProductType Instance type. <ul><li>`1`: Redis 2.8 Memory Edition (Cluster Architecture). </li><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`5`: Redis 2.8 Standalone Edition. </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li></ul>
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取The time when the instance was added to the replication group.
                     * @return CreateTime The time when the instance was added to the replication group.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the instance was added to the replication group.
                     * @param CreateTime The time when the instance was added to the replication group.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The time when instances in the replication group were updated.
                     * @return UpdateTime The time when instances in the replication group were updated.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The time when instances in the replication group were updated.
                     * @param UpdateTime The time when instances in the replication group were updated.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * User AppID
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
                     * Region ID. <ul><li>`1`: Guangzhou. </li><li>`4`: Shanghai. </li><li>`5`: Hong Kong (China). </li> <li>`6`: Toronto. </li> <li>`7`: Shanghai Finance. </li> <li>`8`: Beijing. </li> <li>`9`: Singapore. </li> <li>`11`: Shenzhen Finance. </li> <li>`15`: West US (Silicon Valley). </li> </ul>
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
                     * Shard memory size.
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
                     * Engine: Redis Community Edition, Tencent Cloud CKV.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Read-write permission of the instance. <ul><li>`rw`: Read/Write. </li><li>`r`: Read-only. </li></ul>
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * VPC ID, such as `75101`.
                     */
                    int64_t m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * Instance port
                     */
                    int64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * Instance status. <ul><li>`0`: Uninitialized. </li><li>`1`: In the process. </li><li>`2`: Running. </li><li>`-2`: Isolated. </li><li>`-3`: To be deleted. </li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Repository ID
                     */
                    int64_t m_grocerySysId;
                    bool m_grocerySysIdHasBeenSet;

                    /**
                     * Instance type. <ul><li>`1`: Redis 2.8 Memory Edition (Cluster Architecture). </li><li>`2`: Redis 2.8 Memory Edition (Standard Architecture). </li><li>`3`: CKV 3.2 Memory Edition (Standard Architecture). </li><li>`4`: CKV 3.2 Memory Edition (Cluster Architecture). </li><li>`5`: Redis 2.8 Standalone Edition. </li><li>`6`: Redis 4.0 Memory Edition (Standard Architecture). </li><li>`7`: Redis 4.0 Memory Edition (Cluster Architecture). </li><li>`8`: Redis 5.0 Memory Edition (Standard Architecture). </li><li>`9`: Redis 5.0 Memory Edition (Cluster Architecture). </li></ul>
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * The time when the instance was added to the replication group.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The time when instances in the replication group were updated.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCES_H_
