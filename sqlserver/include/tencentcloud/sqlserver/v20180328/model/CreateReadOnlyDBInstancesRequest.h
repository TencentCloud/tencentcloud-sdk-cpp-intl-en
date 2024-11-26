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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateReadOnlyDBInstances request structure.
                */
                class CreateReadOnlyDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateReadOnlyDBInstancesRequest();
                    ~CreateReadOnlyDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
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
                     * 获取
                     * @return Zone 
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置
                     * @param _zone 
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupType 
                     * 
                     */
                    int64_t GetReadOnlyGroupType() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupType 
                     * 
                     */
                    void SetReadOnlyGroupType(const int64_t& _readOnlyGroupType);

                    /**
                     * 判断参数 ReadOnlyGroupType 是否已赋值
                     * @return ReadOnlyGroupType 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Memory 
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置
                     * @param _memory 
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return Storage 
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置
                     * @param _storage 
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupForcedUpgrade 
                     * 
                     */
                    int64_t GetReadOnlyGroupForcedUpgrade() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupForcedUpgrade 
                     * 
                     */
                    void SetReadOnlyGroupForcedUpgrade(const int64_t& _readOnlyGroupForcedUpgrade);

                    /**
                     * 判断参数 ReadOnlyGroupForcedUpgrade 是否已赋值
                     * @return ReadOnlyGroupForcedUpgrade 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupForcedUpgradeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupId 
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupId 
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupName 
                     * 
                     */
                    std::string GetReadOnlyGroupName() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupName 
                     * 
                     */
                    void SetReadOnlyGroupName(const std::string& _readOnlyGroupName);

                    /**
                     * 判断参数 ReadOnlyGroupName 是否已赋值
                     * @return ReadOnlyGroupName 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupIsOfflineDelay 
                     * 
                     */
                    int64_t GetReadOnlyGroupIsOfflineDelay() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupIsOfflineDelay 
                     * 
                     */
                    void SetReadOnlyGroupIsOfflineDelay(const int64_t& _readOnlyGroupIsOfflineDelay);

                    /**
                     * 判断参数 ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * @return ReadOnlyGroupIsOfflineDelay 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIsOfflineDelayHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupMaxDelayTime 
                     * 
                     */
                    int64_t GetReadOnlyGroupMaxDelayTime() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupMaxDelayTime 
                     * 
                     */
                    void SetReadOnlyGroupMaxDelayTime(const int64_t& _readOnlyGroupMaxDelayTime);

                    /**
                     * 判断参数 ReadOnlyGroupMaxDelayTime 是否已赋值
                     * @return ReadOnlyGroupMaxDelayTime 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReadOnlyGroupMinInGroup 
                     * 
                     */
                    int64_t GetReadOnlyGroupMinInGroup() const;

                    /**
                     * 设置
                     * @param _readOnlyGroupMinInGroup 
                     * 
                     */
                    void SetReadOnlyGroupMinInGroup(const int64_t& _readOnlyGroupMinInGroup);

                    /**
                     * 判断参数 ReadOnlyGroupMinInGroup 是否已赋值
                     * @return ReadOnlyGroupMinInGroup 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupMinInGroupHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceChargeType 
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置
                     * @param _instanceChargeType 
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return GoodsNum 
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置
                     * @param _goodsNum 
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubnetId 
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置
                     * @param _subnetId 
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return VpcId 
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置
                     * @param _vpcId 
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Period 
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置
                     * @param _period 
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取
                     * @return SecurityGroupList 
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置
                     * @param _securityGroupList 
                     * 
                     */
                    void SetSecurityGroupList(const std::vector<std::string>& _securityGroupList);

                    /**
                     * 判断参数 SecurityGroupList 是否已赋值
                     * @return SecurityGroupList 是否已赋值
                     * 
                     */
                    bool SecurityGroupListHasBeenSet() const;

                    /**
                     * 获取
                     * @return AutoVoucher 
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置
                     * @param _autoVoucher 
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoucherIds 
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置
                     * @param _voucherIds 
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ResourceTags 
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置
                     * @param _resourceTags 
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取
                     * @return Collation 
                     * 
                     */
                    std::string GetCollation() const;

                    /**
                     * 设置
                     * @param _collation 
                     * 
                     */
                    void SetCollation(const std::string& _collation);

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     * 
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取
                     * @return TimeZone 
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置
                     * @param _timeZone 
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_readOnlyGroupType;
                    bool m_readOnlyGroupTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_readOnlyGroupForcedUpgrade;
                    bool m_readOnlyGroupForcedUpgradeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_readOnlyGroupName;
                    bool m_readOnlyGroupNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_readOnlyGroupIsOfflineDelay;
                    bool m_readOnlyGroupIsOfflineDelayHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_readOnlyGroupMaxDelayTime;
                    bool m_readOnlyGroupMaxDelayTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_readOnlyGroupMinInGroup;
                    bool m_readOnlyGroupMinInGroupHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEREADONLYDBINSTANCESREQUEST_H_
