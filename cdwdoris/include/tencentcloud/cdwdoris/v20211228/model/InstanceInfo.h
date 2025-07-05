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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/NodesSummary.h>
#include <tencentcloud/cdwdoris/v20211228/model/Tag.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceDetail.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Instance description information
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster instance ID, "cdw-xxxx" string type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Cluster instance ID, "cdw-xxxx" string type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster instance ID, "cdw-xxxx" string type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Cluster instance ID, "cdw-xxxx" string type
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cluster instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Cluster instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Cluster instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Cluster instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Status,
Init is being created. Serving is running. 
Deleted indicates the cluster has been terminated. Deleting indicates the cluster is being terminated.
Modify indicates the cluster is being changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Status,
Init is being created. Serving is running. 
Deleted indicates the cluster has been terminated. Deleting indicates the cluster is being terminated.
Modify indicates the cluster is being changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status,
Init is being created. Serving is running. 
Deleted indicates the cluster has been terminated. Deleting indicates the cluster is being terminated.
Modify indicates the cluster is being changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Status,
Init is being created. Serving is running. 
Deleted indicates the cluster has been terminated. Deleting indicates the cluster is being terminated.
Modify indicates the cluster is being changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _version Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Region, ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region, ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region, ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region, ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone, ap-guangzhou-3
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Availability zone, ap-guangzhou-3
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone, ap-guangzhou-3
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Availability zone, ap-guangzhou-3
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subnet name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Payment type: hour and prepay
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Payment type: hour and prepay
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment type: hour and prepay
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Payment type: hour and prepay
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Data node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterSummary Data node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodesSummary GetMasterSummary() const;

                    /**
                     * 设置Data node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterSummary Data node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMasterSummary(const NodesSummary& _masterSummary);

                    /**
                     * 判断参数 MasterSummary 是否已赋值
                     * @return MasterSummary 是否已赋值
                     * 
                     */
                    bool MasterSummaryHasBeenSet() const;

                    /**
                     * 获取Zookeeper node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoreSummary Zookeeper node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NodesSummary GetCoreSummary() const;

                    /**
                     * 设置Zookeeper node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coreSummary Zookeeper node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoreSummary(const NodesSummary& _coreSummary);

                    /**
                     * 判断参数 CoreSummary 是否已赋值
                     * @return CoreSummary 是否已赋值
                     * 
                     */
                    bool CoreSummaryHasBeenSet() const;

                    /**
                     * 获取High availability, being true or false
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HA High availability, being true or false
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHA() const;

                    /**
                     * 设置High availability, being true or false
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hA High availability, being true or false
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHA(const std::string& _hA);

                    /**
                     * 判断参数 HA 是否已赋值
                     * @return HA 是否已赋值
                     * 
                     */
                    bool HAHasBeenSet() const;

                    /**
                     * 获取High availability type:
0: non-high availability
1: read high availability
2: read-write high availability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HaType High availability type:
0: non-high availability
1: read high availability
2: read-write high availability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置High availability type:
0: non-high availability
1: read high availability
2: read-write high availability
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _haType High availability type:
0: non-high availability
1: read high availability
2: read-write high availability
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取Access address. Example: 10.0.0.1:9000
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessInfo Access address. Example: 10.0.0.1:9000
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置Access address. Example: 10.0.0.1:9000
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessInfo Access address. Example: 10.0.0.1:9000
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取Record ID, in numerical type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id Record ID, in numerical type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Record ID, in numerical type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id Record ID, in numerical type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Region ID, indicating the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID, indicating the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID, indicating the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionId Region ID, indicating the region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Note about availability zone, such as Guangzhou Zone 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneDesc Note about availability zone, such as Guangzhou Zone 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneDesc() const;

                    /**
                     * 设置Note about availability zone, such as Guangzhou Zone 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneDesc Note about availability zone, such as Guangzhou Zone 2
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneDesc(const std::string& _zoneDesc);

                    /**
                     * 判断参数 ZoneDesc 是否已赋值
                     * @return ZoneDesc 是否已赋值
                     * 
                     */
                    bool ZoneDescHasBeenSet() const;

                    /**
                     * 获取Error process description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FlowMsg Error process description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置Error process description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _flowMsg Error process description information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取Status description, such as "running"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusDesc Status description, such as "running"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置Status description, such as "running"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusDesc Status description, such as "running"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取Automatic renewal marker
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Automatic renewal marker
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置Automatic renewal marker
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Automatic renewal marker
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Monitoring Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Monitor Monitoring Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMonitor() const;

                    /**
                     * 设置Monitoring Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _monitor Monitoring Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMonitor(const std::string& _monitor);

                    /**
                     * 判断参数 Monitor 是否已赋值
                     * @return Monitor 是否已赋值
                     * 
                     */
                    bool MonitorHasBeenSet() const;

                    /**
                     * 获取Whether to enable logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasClsTopic Whether to enable logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasClsTopic() const;

                    /**
                     * 设置Whether to enable logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasClsTopic Whether to enable logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasClsTopic(const bool& _hasClsTopic);

                    /**
                     * 判断参数 HasClsTopic 是否已赋值
                     * @return HasClsTopic 是否已赋值
                     * 
                     */
                    bool HasClsTopicHasBeenSet() const;

                    /**
                     * 获取Log Topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClsTopicId Log Topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置Log Topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clsTopicId Log Topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取Logset ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClsLogSetId Logset ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置Logset ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clsLogSetId Logset ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取Whether to support XML configuration management.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableXMLConfig Whether to support XML configuration management.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnableXMLConfig() const;

                    /**
                     * 设置Whether to support XML configuration management.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableXMLConfig Whether to support XML configuration management.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableXMLConfig(const int64_t& _enableXMLConfig);

                    /**
                     * 判断参数 EnableXMLConfig 是否已赋值
                     * @return EnableXMLConfig 是否已赋值
                     * 
                     */
                    bool EnableXMLConfigHasBeenSet() const;

                    /**
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionDesc Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionDesc() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _regionDesc Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionDesc(const std::string& _regionDesc);

                    /**
                     * 判断参数 RegionDesc 是否已赋值
                     * @return RegionDesc 是否已赋值
                     * 
                     */
                    bool RegionDescHasBeenSet() const;

                    /**
                     * 获取Elastic network interface address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Eip Elastic network interface address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置Elastic network interface address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eip Elastic network interface address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取Cold and hot stratification coefficient
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosMoveFactor Cold and hot stratification coefficient
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCosMoveFactor() const;

                    /**
                     * 设置Cold and hot stratification coefficient
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosMoveFactor Cold and hot stratification coefficient
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosMoveFactor(const int64_t& _cosMoveFactor);

                    /**
                     * 判断参数 CosMoveFactor 是否已赋值
                     * @return CosMoveFactor 是否已赋值
                     * 
                     */
                    bool CosMoveFactorHasBeenSet() const;

                    /**
                     * 获取external/local/yunti
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Kind external/local/yunti
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置external/local/yunti
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kind external/local/yunti
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取COS bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosBucketName COS bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosBucketName COS bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取cbs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanAttachCbs cbs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCanAttachCbs() const;

                    /**
                     * 设置cbs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canAttachCbs cbs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanAttachCbs(const bool& _canAttachCbs);

                    /**
                     * 判断参数 CanAttachCbs 是否已赋值
                     * @return CanAttachCbs 是否已赋值
                     * 
                     */
                    bool CanAttachCbsHasBeenSet() const;

                    /**
                     * 获取Minor versions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BuildVersion Minor versions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBuildVersion() const;

                    /**
                     * 设置Minor versions
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _buildVersion Minor versions
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBuildVersion(const std::string& _buildVersion);

                    /**
                     * 判断参数 BuildVersion 是否已赋值
                     * @return BuildVersion 是否已赋值
                     * 
                     */
                    bool BuildVersionHasBeenSet() const;

                    /**
                     * 获取Component Information
Note: The return type here is map[string]struct, not the string type displayed. You can refer to "Sample Value" to parse the data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Components Component Information
Note: The return type here is map[string]struct, not the string type displayed. You can refer to "Sample Value" to parse the data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComponents() const;

                    /**
                     * 设置Component Information
Note: The return type here is map[string]struct, not the string type displayed. You can refer to "Sample Value" to parse the data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _components Component Information
Note: The return type here is map[string]struct, not the string type displayed. You can refer to "Sample Value" to parse the data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetComponents(const std::string& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取Determine whether the audit log table has a catalog field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IfExistCatalog Determine whether the audit log table has a catalog field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetIfExistCatalog() const;

                    /**
                     * 设置Determine whether the audit log table has a catalog field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ifExistCatalog Determine whether the audit log table has a catalog field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetIfExistCatalog(const int64_t& _ifExistCatalog);

                    /**
                     * 判断参数 IfExistCatalog 是否已赋值
                     * @return IfExistCatalog 是否已赋值
                     * @deprecated
                     */
                    bool IfExistCatalogHasBeenSet() const;

                    /**
                     * 获取Page features, used to block some page entrances on the front end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Characteristic Page features, used to block some page entrances on the front end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCharacteristic() const;

                    /**
                     * 设置Page features, used to block some page entrances on the front end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _characteristic Page features, used to block some page entrances on the front end.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCharacteristic(const std::vector<std::string>& _characteristic);

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取Timeout period, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestartTimeout Timeout period, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestartTimeout() const;

                    /**
                     * 设置Timeout period, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restartTimeout Timeout period, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestartTimeout(const std::string& _restartTimeout);

                    /**
                     * 判断参数 RestartTimeout 是否已赋值
                     * @return RestartTimeout 是否已赋值
                     * 
                     */
                    bool RestartTimeoutHasBeenSet() const;

                    /**
                     * 获取The timeout time for the graceful restart of the kernel. If it is -1, it means it is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GraceShutdownWaitSeconds The timeout time for the graceful restart of the kernel. If it is -1, it means it is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGraceShutdownWaitSeconds() const;

                    /**
                     * 设置The timeout time for the graceful restart of the kernel. If it is -1, it means it is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _graceShutdownWaitSeconds The timeout time for the graceful restart of the kernel. If it is -1, it means it is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGraceShutdownWaitSeconds(const std::string& _graceShutdownWaitSeconds);

                    /**
                     * 判断参数 GraceShutdownWaitSeconds 是否已赋值
                     * @return GraceShutdownWaitSeconds 是否已赋值
                     * 
                     */
                    bool GraceShutdownWaitSecondsHasBeenSet() const;

                    /**
                     * 获取Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CaseSensitive Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCaseSensitive() const;

                    /**
                     * 设置Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _caseSensitive Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCaseSensitive(const int64_t& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取Whether users can bind security groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsWhiteSGs Whether users can bind security groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsWhiteSGs() const;

                    /**
                     * 设置Whether users can bind security groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isWhiteSGs Whether users can bind security groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsWhiteSGs(const bool& _isWhiteSGs);

                    /**
                     * 判断参数 IsWhiteSGs 是否已赋值
                     * @return IsWhiteSGs 是否已赋值
                     * 
                     */
                    bool IsWhiteSGsHasBeenSet() const;

                    /**
                     * 获取Bound security group information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BindSGs Bound security group information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBindSGs() const;

                    /**
                     * 设置Bound security group information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bindSGs Bound security group information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindSGs(const std::vector<std::string>& _bindSGs);

                    /**
                     * 判断参数 BindSGs 是否已赋值
                     * @return BindSGs 是否已赋值
                     * 
                     */
                    bool BindSGsHasBeenSet() const;

                    /**
                     * 获取Whether it is a multi-AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableMultiZones Whether it is a multi-AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableMultiZones() const;

                    /**
                     * 设置Whether it is a multi-AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableMultiZones Whether it is a multi-AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableMultiZones(const bool& _enableMultiZones);

                    /**
                     * 判断参数 EnableMultiZones 是否已赋值
                     * @return EnableMultiZones 是否已赋值
                     * 
                     */
                    bool EnableMultiZonesHasBeenSet() const;

                    /**
                     * 获取User availability zone and subnet information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserNetworkInfos User availability zone and subnet information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserNetworkInfos() const;

                    /**
                     * 设置User availability zone and subnet information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userNetworkInfos User availability zone and subnet information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserNetworkInfos(const std::string& _userNetworkInfos);

                    /**
                     * 判断参数 UserNetworkInfos 是否已赋值
                     * @return UserNetworkInfos 是否已赋值
                     * 
                     */
                    bool UserNetworkInfosHasBeenSet() const;

                    /**
                     * 获取Whether to enable hot and cold stratification. 0 refers to disabled, and 1 refers to enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableCoolDown Whether to enable hot and cold stratification. 0 refers to disabled, and 1 refers to enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnableCoolDown() const;

                    /**
                     * 设置Whether to enable hot and cold stratification. 0 refers to disabled, and 1 refers to enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableCoolDown Whether to enable hot and cold stratification. 0 refers to disabled, and 1 refers to enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableCoolDown(const int64_t& _enableCoolDown);

                    /**
                     * 判断参数 EnableCoolDown 是否已赋值
                     * @return EnableCoolDown 是否已赋值
                     * 
                     */
                    bool EnableCoolDownHasBeenSet() const;

                    /**
                     * 获取COS buckets are used for hot and cold stratification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CoolDownBucket COS buckets are used for hot and cold stratification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCoolDownBucket() const;

                    /**
                     * 设置COS buckets are used for hot and cold stratification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _coolDownBucket COS buckets are used for hot and cold stratification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoolDownBucket(const std::string& _coolDownBucket);

                    /**
                     * 判断参数 CoolDownBucket 是否已赋值
                     * @return CoolDownBucket 是否已赋值
                     * 
                     */
                    bool CoolDownBucketHasBeenSet() const;

                    /**
                     * 获取Instance extension information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Details Instance extension information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InstanceDetail GetDetails() const;

                    /**
                     * 设置Instance extension information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _details Instance extension information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetails(const InstanceDetail& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取Whether to enable DLC. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableDlc Whether to enable DLC. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEnableDlc() const;

                    /**
                     * 设置Whether to enable DLC. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableDlc Whether to enable DLC. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableDlc(const int64_t& _enableDlc);

                    /**
                     * 判断参数 EnableDlc 是否已赋值
                     * @return EnableDlc 是否已赋值
                     * 
                     */
                    bool EnableDlcHasBeenSet() const;

                    /**
                     * 获取Account type. 0: ordinary user; 1: CAM user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountType Account type. 0: ordinary user; 1: CAM user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置Account type. 0: ordinary user; 1: CAM user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountType Account type. 0: ordinary user; 1: CAM user.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster instance ID, "cdw-xxxx" string type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cluster instance name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Status,
Init is being created. Serving is running. 
Deleted indicates the cluster has been terminated. Deleting indicates the cluster is being terminated.
Modify indicates the cluster is being changed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Region, ap-guangzhou
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone, ap-guangzhou-3
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Payment type: hour and prepay
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Expiration time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Data node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodesSummary m_masterSummary;
                    bool m_masterSummaryHasBeenSet;

                    /**
                     * Zookeeper node description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NodesSummary m_coreSummary;
                    bool m_coreSummaryHasBeenSet;

                    /**
                     * High availability, being true or false
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hA;
                    bool m_hAHasBeenSet;

                    /**
                     * High availability type:
0: non-high availability
1: read high availability
2: read-write high availability
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * Access address. Example: 10.0.0.1:9000
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * Record ID, in numerical type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Region ID, indicating the region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Note about availability zone, such as Guangzhou Zone 2
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneDesc;
                    bool m_zoneDescHasBeenSet;

                    /**
                     * Error process description information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * Status description, such as "running"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * Automatic renewal marker
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Monitoring Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_monitor;
                    bool m_monitorHasBeenSet;

                    /**
                     * Whether to enable logs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasClsTopic;
                    bool m_hasClsTopicHasBeenSet;

                    /**
                     * Log Topic ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * Logset ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * Whether to support XML configuration management.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableXMLConfig;
                    bool m_enableXMLConfigHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionDesc;
                    bool m_regionDescHasBeenSet;

                    /**
                     * Elastic network interface address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * Cold and hot stratification coefficient
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cosMoveFactor;
                    bool m_cosMoveFactorHasBeenSet;

                    /**
                     * external/local/yunti
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * COS bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * cbs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_canAttachCbs;
                    bool m_canAttachCbsHasBeenSet;

                    /**
                     * Minor versions
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_buildVersion;
                    bool m_buildVersionHasBeenSet;

                    /**
                     * Component Information
Note: The return type here is map[string]struct, not the string type displayed. You can refer to "Sample Value" to parse the data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * Determine whether the audit log table has a catalog field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ifExistCatalog;
                    bool m_ifExistCatalogHasBeenSet;

                    /**
                     * Page features, used to block some page entrances on the front end.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * Timeout period, in seconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restartTimeout;
                    bool m_restartTimeoutHasBeenSet;

                    /**
                     * The timeout time for the graceful restart of the kernel. If it is -1, it means it is not set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_graceShutdownWaitSeconds;
                    bool m_graceShutdownWaitSecondsHasBeenSet;

                    /**
                     * Whether the table name is case sensitive, 0 refers to sensitive, 1 refers to insensitive, compared in lowercase; 2 refers to insensitive, and the table name is changed to lowercase for storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * Whether users can bind security groups.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isWhiteSGs;
                    bool m_isWhiteSGsHasBeenSet;

                    /**
                     * Bound security group information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bindSGs;
                    bool m_bindSGsHasBeenSet;

                    /**
                     * Whether it is a multi-AZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableMultiZones;
                    bool m_enableMultiZonesHasBeenSet;

                    /**
                     * User availability zone and subnet information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userNetworkInfos;
                    bool m_userNetworkInfosHasBeenSet;

                    /**
                     * Whether to enable hot and cold stratification. 0 refers to disabled, and 1 refers to enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableCoolDown;
                    bool m_enableCoolDownHasBeenSet;

                    /**
                     * COS buckets are used for hot and cold stratification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_coolDownBucket;
                    bool m_coolDownBucketHasBeenSet;

                    /**
                     * Instance extension information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InstanceDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * Whether to enable DLC. 0: disable; 1: enable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_enableDlc;
                    bool m_enableDlcHasBeenSet;

                    /**
                     * Account type. 0: ordinary user; 1: CAM user.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_INSTANCEINFO_H_
