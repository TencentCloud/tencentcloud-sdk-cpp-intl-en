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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/EsDictionaryInfo.h>
#include <tencentcloud/es/v20180416/model/MasterNodeInfo.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/KibanaNodeInfo.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDuration.h>
#include <tencentcloud/es/v20180416/model/OptionalWebServiceInfo.h>
#include <tencentcloud/es/v20180416/model/OutboundPublicAcl.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Instance details
                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Instance name.</p>
                     * @return InstanceName <p>Instance name.</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name.</p>
                     * @param _instanceName <p>Instance name.</p>
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
                     * 获取<p>Region.</p>
                     * @return Region <p>Region.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region.</p>
                     * @param _region <p>Region.</p>
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
                     * 获取<p>AZ.</p>
                     * @return Zone <p>AZ.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>AZ.</p>
                     * @param _zone <p>AZ.</p>
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
                     * 获取<p>uid</p>
                     * @return AppId <p>uid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>uid</p>
                     * @param _appId <p>uid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>User UIN.</p>
                     * @return Uin <p>User UIN.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>User UIN.</p>
                     * @param _uin <p>User UIN.</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>UID of the VPC to which the instance belongs</p>
                     * @return VpcUid <p>UID of the VPC to which the instance belongs</p>
                     * 
                     */
                    std::string GetVpcUid() const;

                    /**
                     * 设置<p>UID of the VPC to which the instance belongs</p>
                     * @param _vpcUid <p>UID of the VPC to which the instance belongs</p>
                     * 
                     */
                    void SetVpcUid(const std::string& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     * 
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取<p>UID of the subnet to which the instance belongs</p>
                     * @return SubnetUid <p>UID of the subnet to which the instance belongs</p>
                     * 
                     */
                    std::string GetSubnetUid() const;

                    /**
                     * 设置<p>UID of the subnet to which the instance belongs</p>
                     * @param _subnetUid <p>UID of the subnet to which the instance belongs</p>
                     * 
                     */
                    void SetSubnetUid(const std::string& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     * 
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取<p>Instance status. 0: processing, 1: normal, -1: stopped, -2: being destroyed, -3: terminated, -4: isolated, 2: initializing when creating a cluster</p>
                     * @return Status <p>Instance status. 0: processing, 1: normal, -1: stopped, -2: being destroyed, -3: terminated, -4: isolated, 2: initializing when creating a cluster</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status. 0: processing, 1: normal, -1: stopped, -2: being destroyed, -3: terminated, -4: isolated, 2: initializing when creating a cluster</p>
                     * @param _status <p>Instance status. 0: processing, 1: normal, -1: stopped, -2: being destroyed, -3: terminated, -4: isolated, 2: initializing when creating a cluster</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal flag. Value range: <br>RENEW_FLAG_AUTO: auto renewal<br>RENEW_FLAG_MANUAL: no auto-renewal<br>Default value: <br>RENEW_FLAG_DEFAULT: no auto-renewal<br>If this parameter is set to RENEW_FLAG_AUTO, the instance will automatically renew on a monthly basis after expiration if the account balance is sufficient.</p>
                     * @return RenewFlag <p>Auto-renewal flag. Value range: <br>RENEW_FLAG_AUTO: auto renewal<br>RENEW_FLAG_MANUAL: no auto-renewal<br>Default value: <br>RENEW_FLAG_DEFAULT: no auto-renewal<br>If this parameter is set to RENEW_FLAG_AUTO, the instance will automatically renew on a monthly basis after expiration if the account balance is sufficient.</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag. Value range: <br>RENEW_FLAG_AUTO: auto renewal<br>RENEW_FLAG_MANUAL: no auto-renewal<br>Default value: <br>RENEW_FLAG_DEFAULT: no auto-renewal<br>If this parameter is set to RENEW_FLAG_AUTO, the instance will automatically renew on a monthly basis after expiration if the account balance is sufficient.</p>
                     * @param _renewFlag <p>Auto-renewal flag. Value range: <br>RENEW_FLAG_AUTO: auto renewal<br>RENEW_FLAG_MANUAL: no auto-renewal<br>Default value: <br>RENEW_FLAG_DEFAULT: no auto-renewal<br>If this parameter is set to RENEW_FLAG_AUTO, the instance will automatically renew on a monthly basis after expiration if the account balance is sufficient.</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Instance billing mode. Value ranges: PREPAID: prepaid mode, i.e., monthly subscription. POSTPAID_BY_HOUR: postpaid, i.e., pay-as-you-go. CDHPAID: CDH-paid mode, i.e., only charges for CDH, without charging for instances on CDH.</p>
                     * @return ChargeType <p>Instance billing mode. Value ranges: PREPAID: prepaid mode, i.e., monthly subscription. POSTPAID_BY_HOUR: postpaid, i.e., pay-as-you-go. CDHPAID: CDH-paid mode, i.e., only charges for CDH, without charging for instances on CDH.</p>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>Instance billing mode. Value ranges: PREPAID: prepaid mode, i.e., monthly subscription. POSTPAID_BY_HOUR: postpaid, i.e., pay-as-you-go. CDHPAID: CDH-paid mode, i.e., only charges for CDH, without charging for instances on CDH.</p>
                     * @param _chargeType <p>Instance billing mode. Value ranges: PREPAID: prepaid mode, i.e., monthly subscription. POSTPAID_BY_HOUR: postpaid, i.e., pay-as-you-go. CDHPAID: CDH-paid mode, i.e., only charges for CDH, without charging for instances on CDH.</p>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Annual and monthly subscription duration, unit: month</p>
                     * @return ChargePeriod <p>Annual and monthly subscription duration, unit: month</p>
                     * 
                     */
                    uint64_t GetChargePeriod() const;

                    /**
                     * 设置<p>Annual and monthly subscription duration, unit: month</p>
                     * @param _chargePeriod <p>Annual and monthly subscription duration, unit: month</p>
                     * 
                     */
                    void SetChargePeriod(const uint64_t& _chargePeriod);

                    /**
                     * 判断参数 ChargePeriod 是否已赋值
                     * @return ChargePeriod 是否已赋值
                     * 
                     */
                    bool ChargePeriodHasBeenSet() const;

                    /**
                     * 获取<p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return NodeType <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _nodeType <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of nodes</p>
                     * @return NodeNum <p>Number of nodes</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>Number of nodes</p>
                     * @param _nodeNum <p>Number of nodes</p>
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Number of node CPU cores.</p>
                     * @return CpuNum <p>Number of node CPU cores.</p>
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置<p>Number of node CPU cores.</p>
                     * @param _cpuNum <p>Number of node CPU cores.</p>
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Node memory size (GB).</p>
                     * @return MemSize <p>Node memory size (GB).</p>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>Node memory size (GB).</p>
                     * @param _memSize <p>Node memory size (GB).</p>
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Node disk type</p>
                     * @return DiskType <p>Node disk type</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Node disk type</p>
                     * @param _diskType <p>Node disk type</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Node disk size (GB).</p>
                     * @return DiskSize <p>Node disk size (GB).</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>Node disk size (GB).</p>
                     * @param _diskSize <p>Node disk size (GB).</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>ES domain name</p>
                     * @return EsDomain <p>ES domain name</p>
                     * 
                     */
                    std::string GetEsDomain() const;

                    /**
                     * 设置<p>ES domain name</p>
                     * @param _esDomain <p>ES domain name</p>
                     * 
                     */
                    void SetEsDomain(const std::string& _esDomain);

                    /**
                     * 判断参数 EsDomain 是否已赋值
                     * @return EsDomain 是否已赋值
                     * 
                     */
                    bool EsDomainHasBeenSet() const;

                    /**
                     * 获取<p>ES VIP</p>
                     * @return EsVip <p>ES VIP</p>
                     * 
                     */
                    std::string GetEsVip() const;

                    /**
                     * 设置<p>ES VIP</p>
                     * @param _esVip <p>ES VIP</p>
                     * 
                     */
                    void SetEsVip(const std::string& _esVip);

                    /**
                     * 判断参数 EsVip 是否已赋值
                     * @return EsVip 是否已赋值
                     * 
                     */
                    bool EsVipHasBeenSet() const;

                    /**
                     * 获取<p>ES port</p>
                     * @return EsPort <p>ES port</p>
                     * 
                     */
                    uint64_t GetEsPort() const;

                    /**
                     * 设置<p>ES port</p>
                     * @param _esPort <p>ES port</p>
                     * 
                     */
                    void SetEsPort(const uint64_t& _esPort);

                    /**
                     * 判断参数 EsPort 是否已赋值
                     * @return EsPort 是否已赋值
                     * 
                     */
                    bool EsPortHasBeenSet() const;

                    /**
                     * 获取<p>Kibana access url</p>
                     * @return KibanaUrl <p>Kibana access url</p>
                     * 
                     */
                    std::string GetKibanaUrl() const;

                    /**
                     * 设置<p>Kibana access url</p>
                     * @param _kibanaUrl <p>Kibana access url</p>
                     * 
                     */
                    void SetKibanaUrl(const std::string& _kibanaUrl);

                    /**
                     * 判断参数 KibanaUrl 是否已赋值
                     * @return KibanaUrl 是否已赋值
                     * 
                     */
                    bool KibanaUrlHasBeenSet() const;

                    /**
                     * 获取<p>ES version number</p>
                     * @return EsVersion <p>ES version number</p>
                     * 
                     */
                    std::string GetEsVersion() const;

                    /**
                     * 设置<p>ES version number</p>
                     * @param _esVersion <p>ES version number</p>
                     * 
                     */
                    void SetEsVersion(const std::string& _esVersion);

                    /**
                     * 判断参数 EsVersion 是否已赋值
                     * @return EsVersion 是否已赋值
                     * 
                     */
                    bool EsVersionHasBeenSet() const;

                    /**
                     * 获取<p>ES configuration item</p>
                     * @return EsConfig <p>ES configuration item</p>
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置<p>ES configuration item</p>
                     * @param _esConfig <p>ES configuration item</p>
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>Kibana Access Control Configuration</p>
                     * @return EsAcl <p>Kibana Access Control Configuration</p>
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置<p>Kibana Access Control Configuration</p>
                     * @param _esAcl <p>Kibana Access Control Configuration</p>
                     * 
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     * 
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取<p>Instance creation time</p>
                     * @return CreateTime <p>Instance creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Instance creation time</p>
                     * @param _createTime <p>Instance creation time</p>
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
                     * 获取<p>Last modification time of the instance</p>
                     * @return UpdateTime <p>Last modification time of the instance</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last modification time of the instance</p>
                     * @param _updateTime <p>Last modification time of the instance</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Instance expiration time</p>
                     * @return Deadline <p>Instance expiration time</p>
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置<p>Instance expiration time</p>
                     * @param _deadline <p>Instance expiration time</p>
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取<p>Instance type (instance type flag, currently only 1 and 2)</p>
                     * @return InstanceType <p>Instance type (instance type flag, currently only 1 and 2)</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>Instance type (instance type flag, currently only 1 and 2)</p>
                     * @param _instanceType <p>Instance type (instance type flag, currently only 1 and 2)</p>
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Ik analyzer configuration</p>
                     * @return IkConfig <p>Ik analyzer configuration</p>
                     * 
                     */
                    EsDictionaryInfo GetIkConfig() const;

                    /**
                     * 设置<p>Ik analyzer configuration</p>
                     * @param _ikConfig <p>Ik analyzer configuration</p>
                     * 
                     */
                    void SetIkConfig(const EsDictionaryInfo& _ikConfig);

                    /**
                     * 判断参数 IkConfig 是否已赋值
                     * @return IkConfig 是否已赋值
                     * 
                     */
                    bool IkConfigHasBeenSet() const;

                    /**
                     * 获取<p>Dedicated master node configuration</p>
                     * @return MasterNodeInfo <p>Dedicated master node configuration</p>
                     * 
                     */
                    MasterNodeInfo GetMasterNodeInfo() const;

                    /**
                     * 设置<p>Dedicated master node configuration</p>
                     * @param _masterNodeInfo <p>Dedicated master node configuration</p>
                     * 
                     */
                    void SetMasterNodeInfo(const MasterNodeInfo& _masterNodeInfo);

                    /**
                     * 判断参数 MasterNodeInfo 是否已赋值
                     * @return MasterNodeInfo 是否已赋值
                     * 
                     */
                    bool MasterNodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>cos automatic backup configuration</p>
                     * @return CosBackup <p>cos automatic backup configuration</p>
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置<p>cos automatic backup configuration</p>
                     * @param _cosBackup <p>cos automatic backup configuration</p>
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取<p>Whether cos automatic backup is allowed</p>
                     * @return AllowCosBackup <p>Whether cos automatic backup is allowed</p>
                     * 
                     */
                    bool GetAllowCosBackup() const;

                    /**
                     * 设置<p>Whether cos automatic backup is allowed</p>
                     * @param _allowCosBackup <p>Whether cos automatic backup is allowed</p>
                     * 
                     */
                    void SetAllowCosBackup(const bool& _allowCosBackup);

                    /**
                     * 判断参数 AllowCosBackup 是否已赋值
                     * @return AllowCosBackup 是否已赋值
                     * 
                     */
                    bool AllowCosBackupHasBeenSet() const;

                    /**
                     * 获取<p>Tag list of the instance</p>
                     * @return TagList <p>Tag list of the instance</p>
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置<p>Tag list of the instance</p>
                     * @param _tagList <p>Tag list of the instance</p>
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * @return LicenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * @param _licenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li><li>enterprise: enterprise edition</li>Default value: platinum</p>
                     * @return RealLicenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li><li>enterprise: enterprise edition</li>Default value: platinum</p>
                     * 
                     */
                    std::string GetRealLicenseType() const;

                    /**
                     * 设置<p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li><li>enterprise: enterprise edition</li>Default value: platinum</p>
                     * @param _realLicenseType <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li><li>enterprise: enterprise edition</li>Default value: platinum</p>
                     * 
                     */
                    void SetRealLicenseType(const std::string& _realLicenseType);

                    /**
                     * 判断参数 RealLicenseType 是否已赋值
                     * @return RealLicenseType 是否已赋值
                     * 
                     */
                    bool RealLicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a hot-cold cluster<li>true: Hot-cold cluster</li><li>false: Non-hot-cold cluster</li></p>
                     * @return EnableHotWarmMode <p>Whether it is a hot-cold cluster<li>true: Hot-cold cluster</li><li>false: Non-hot-cold cluster</li></p>
                     * 
                     */
                    bool GetEnableHotWarmMode() const;

                    /**
                     * 设置<p>Whether it is a hot-cold cluster<li>true: Hot-cold cluster</li><li>false: Non-hot-cold cluster</li></p>
                     * @param _enableHotWarmMode <p>Whether it is a hot-cold cluster<li>true: Hot-cold cluster</li><li>false: Non-hot-cold cluster</li></p>
                     * 
                     */
                    void SetEnableHotWarmMode(const bool& _enableHotWarmMode);

                    /**
                     * 判断参数 EnableHotWarmMode 是否已赋值
                     * @return EnableHotWarmMode 是否已赋值
                     * 
                     */
                    bool EnableHotWarmModeHasBeenSet() const;

                    /**
                     * 获取<p>Warm node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return WarmNodeType <p>Warm node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetWarmNodeType() const;

                    /**
                     * 设置<p>Warm node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _warmNodeType <p>Warm node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetWarmNodeType(const std::string& _warmNodeType);

                    /**
                     * 判断参数 WarmNodeType 是否已赋值
                     * @return WarmNodeType 是否已赋值
                     * 
                     */
                    bool WarmNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of warm nodes</p>
                     * @return WarmNodeNum <p>Number of warm nodes</p>
                     * 
                     */
                    uint64_t GetWarmNodeNum() const;

                    /**
                     * 设置<p>Number of warm nodes</p>
                     * @param _warmNodeNum <p>Number of warm nodes</p>
                     * 
                     */
                    void SetWarmNodeNum(const uint64_t& _warmNodeNum);

                    /**
                     * 判断参数 WarmNodeNum 是否已赋值
                     * @return WarmNodeNum 是否已赋值
                     * 
                     */
                    bool WarmNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Warm node CPU cores</p>
                     * @return WarmCpuNum <p>Warm node CPU cores</p>
                     * 
                     */
                    uint64_t GetWarmCpuNum() const;

                    /**
                     * 设置<p>Warm node CPU cores</p>
                     * @param _warmCpuNum <p>Warm node CPU cores</p>
                     * 
                     */
                    void SetWarmCpuNum(const uint64_t& _warmCpuNum);

                    /**
                     * 判断参数 WarmCpuNum 是否已赋值
                     * @return WarmCpuNum 是否已赋值
                     * 
                     */
                    bool WarmCpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Warm node memory size (GB).</p>
                     * @return WarmMemSize <p>Warm node memory size (GB).</p>
                     * 
                     */
                    uint64_t GetWarmMemSize() const;

                    /**
                     * 设置<p>Warm node memory size (GB).</p>
                     * @param _warmMemSize <p>Warm node memory size (GB).</p>
                     * 
                     */
                    void SetWarmMemSize(const uint64_t& _warmMemSize);

                    /**
                     * 判断参数 WarmMemSize 是否已赋值
                     * @return WarmMemSize 是否已赋值
                     * 
                     */
                    bool WarmMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Warm node disk type</p>
                     * @return WarmDiskType <p>Warm node disk type</p>
                     * 
                     */
                    std::string GetWarmDiskType() const;

                    /**
                     * 设置<p>Warm node disk type</p>
                     * @param _warmDiskType <p>Warm node disk type</p>
                     * 
                     */
                    void SetWarmDiskType(const std::string& _warmDiskType);

                    /**
                     * 判断参数 WarmDiskType 是否已赋值
                     * @return WarmDiskType 是否已赋值
                     * 
                     */
                    bool WarmDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Warm node disk size (GB).</p>
                     * @return WarmDiskSize <p>Warm node disk size (GB).</p>
                     * 
                     */
                    uint64_t GetWarmDiskSize() const;

                    /**
                     * 设置<p>Warm node disk size (GB).</p>
                     * @param _warmDiskSize <p>Warm node disk size (GB).</p>
                     * 
                     */
                    void SetWarmDiskSize(const uint64_t& _warmDiskSize);

                    /**
                     * 判断参数 WarmDiskSize 是否已赋值
                     * @return WarmDiskSize 是否已赋值
                     * 
                     */
                    bool WarmDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster node information list</p>
                     * @return NodeInfoList <p>Cluster node information list</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置<p>Cluster node information list</p>
                     * @param _nodeInfoList <p>Cluster node information list</p>
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取<p>Es public network address</p>
                     * @return EsPublicUrl <p>Es public network address</p>
                     * 
                     */
                    std::string GetEsPublicUrl() const;

                    /**
                     * 设置<p>Es public network address</p>
                     * @param _esPublicUrl <p>Es public network address</p>
                     * 
                     */
                    void SetEsPublicUrl(const std::string& _esPublicUrl);

                    /**
                     * 判断参数 EsPublicUrl 是否已赋值
                     * @return EsPublicUrl 是否已赋值
                     * 
                     */
                    bool EsPublicUrlHasBeenSet() const;

                    /**
                     * 获取<p>Multi-AZ network info</p>
                     * @return MultiZoneInfo <p>Multi-AZ network info</p>
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置<p>Multi-AZ network info</p>
                     * @param _multiZoneInfo <p>Multi-AZ network info</p>
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取<p>Deployment mode<li>0: single availability zone</li><li>1: multi-availability zone, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li></p>
                     * @return DeployMode <p>Deployment mode<li>0: single availability zone</li><li>1: multi-availability zone, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li></p>
                     * 
                     */
                    uint64_t GetDeployMode() const;

                    /**
                     * 设置<p>Deployment mode<li>0: single availability zone</li><li>1: multi-availability zone, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li></p>
                     * @param _deployMode <p>Deployment mode<li>0: single availability zone</li><li>1: multi-availability zone, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li></p>
                     * 
                     */
                    void SetDeployMode(const uint64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>ES public access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @return PublicAccess <p>ES public access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置<p>ES public access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @param _publicAccess <p>ES public access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>ES public network access control configuration</p>
                     * @return EsPublicAcl <p>ES public network access control configuration</p>
                     * 
                     */
                    EsAcl GetEsPublicAcl() const;

                    /**
                     * 设置<p>ES public network access control configuration</p>
                     * @param _esPublicAcl <p>ES public network access control configuration</p>
                     * 
                     */
                    void SetEsPublicAcl(const EsAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     * 
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取<p>Kibana private network address</p>
                     * @return KibanaPrivateUrl <p>Kibana private network address</p>
                     * 
                     */
                    std::string GetKibanaPrivateUrl() const;

                    /**
                     * 设置<p>Kibana private network address</p>
                     * @param _kibanaPrivateUrl <p>Kibana private network address</p>
                     * 
                     */
                    void SetKibanaPrivateUrl(const std::string& _kibanaPrivateUrl);

                    /**
                     * 判断参数 KibanaPrivateUrl 是否已赋值
                     * @return KibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool KibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取<p>Kibana public access status<li>OPEN: enabled</li><li>CLOSE: disabled</li></p>
                     * @return KibanaPublicAccess <p>Kibana public access status<li>OPEN: enabled</li><li>CLOSE: disabled</li></p>
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置<p>Kibana public access status<li>OPEN: enabled</li><li>CLOSE: disabled</li></p>
                     * @param _kibanaPublicAccess <p>Kibana public access status<li>OPEN: enabled</li><li>CLOSE: disabled</li></p>
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>Kibana internal access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @return KibanaPrivateAccess <p>Kibana internal access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置<p>Kibana internal access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @param _kibanaPrivateAccess <p>Kibana internal access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取<p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * @return SecurityType <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置<p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * @param _securityType <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scenario template type: 0, not enabled; 1, common scenarios; 2, log scenario; 3, search scenario</p>
                     * @return SceneType <p>Scenario template type: 0, not enabled; 1, common scenarios; 2, log scenario; 3, search scenario</p>
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置<p>Scenario template type: 0, not enabled; 1, common scenarios; 2, log scenario; 3, search scenario</p>
                     * @param _sceneType <p>Scenario template type: 0, not enabled; 1, common scenarios; 2, log scenario; 3, search scenario</p>
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Kibana configuration item</p>
                     * @return KibanaConfig <p>Kibana configuration item</p>
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置<p>Kibana configuration item</p>
                     * @param _kibanaConfig <p>Kibana configuration item</p>
                     * 
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     * 
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取<p>Kibana node information</p>
                     * @return KibanaNodeInfo <p>Kibana node information</p>
                     * 
                     */
                    KibanaNodeInfo GetKibanaNodeInfo() const;

                    /**
                     * 设置<p>Kibana node information</p>
                     * @param _kibanaNodeInfo <p>Kibana node information</p>
                     * 
                     */
                    void SetKibanaNodeInfo(const KibanaNodeInfo& _kibanaNodeInfo);

                    /**
                     * 判断参数 KibanaNodeInfo 是否已赋值
                     * @return KibanaNodeInfo 是否已赋值
                     * 
                     */
                    bool KibanaNodeInfoHasBeenSet() const;

                    /**
                     * 获取<p>Visualize node configuration</p>
                     * @return WebNodeTypeInfo <p>Visualize node configuration</p>
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置<p>Visualize node configuration</p>
                     * @param _webNodeTypeInfo <p>Visualize node configuration</p>
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取<p>JDK type. Valid values: oracle, kona</p>
                     * @return Jdk <p>JDK type. Valid values: oracle, kona</p>
                     * 
                     */
                    std::string GetJdk() const;

                    /**
                     * 设置<p>JDK type. Valid values: oracle, kona</p>
                     * @param _jdk <p>JDK type. Valid values: oracle, kona</p>
                     * 
                     */
                    void SetJdk(const std::string& _jdk);

                    /**
                     * 判断参数 Jdk 是否已赋值
                     * @return Jdk 是否已赋值
                     * 
                     */
                    bool JdkHasBeenSet() const;

                    /**
                     * 获取<p>Cluster network communication protocol</p>
                     * @return Protocol <p>Cluster network communication protocol</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Cluster network communication protocol</p>
                     * @param _protocol <p>Cluster network communication protocol</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Security group id</p>
                     * @return SecurityGroups <p>Security group id</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置<p>Security group id</p>
                     * @param _securityGroups <p>Security group id</p>
                     * 
                     */
                    void SetSecurityGroups(const std::vector<std::string>& _securityGroups);

                    /**
                     * 判断参数 SecurityGroups 是否已赋值
                     * @return SecurityGroups 是否已赋值
                     * 
                     */
                    bool SecurityGroupsHasBeenSet() const;

                    /**
                     * 获取<p>Cold node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @return ColdNodeType <p>Cold node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    std::string GetColdNodeType() const;

                    /**
                     * 设置<p>Cold node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * @param _coldNodeType <p>Cold node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     * 
                     */
                    void SetColdNodeType(const std::string& _coldNodeType);

                    /**
                     * 判断参数 ColdNodeType 是否已赋值
                     * @return ColdNodeType 是否已赋值
                     * 
                     */
                    bool ColdNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of cold nodes</p>
                     * @return ColdNodeNum <p>Number of cold nodes</p>
                     * 
                     */
                    uint64_t GetColdNodeNum() const;

                    /**
                     * 设置<p>Number of cold nodes</p>
                     * @param _coldNodeNum <p>Number of cold nodes</p>
                     * 
                     */
                    void SetColdNodeNum(const uint64_t& _coldNodeNum);

                    /**
                     * 判断参数 ColdNodeNum 是否已赋值
                     * @return ColdNodeNum 是否已赋值
                     * 
                     */
                    bool ColdNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Cold node CPU cores</p>
                     * @return ColdCpuNum <p>Cold node CPU cores</p>
                     * 
                     */
                    uint64_t GetColdCpuNum() const;

                    /**
                     * 设置<p>Cold node CPU cores</p>
                     * @param _coldCpuNum <p>Cold node CPU cores</p>
                     * 
                     */
                    void SetColdCpuNum(const uint64_t& _coldCpuNum);

                    /**
                     * 判断参数 ColdCpuNum 是否已赋值
                     * @return ColdCpuNum 是否已赋值
                     * 
                     */
                    bool ColdCpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Cold node memory size (GB).</p>
                     * @return ColdMemSize <p>Cold node memory size (GB).</p>
                     * 
                     */
                    uint64_t GetColdMemSize() const;

                    /**
                     * 设置<p>Cold node memory size (GB).</p>
                     * @param _coldMemSize <p>Cold node memory size (GB).</p>
                     * 
                     */
                    void SetColdMemSize(const uint64_t& _coldMemSize);

                    /**
                     * 判断参数 ColdMemSize 是否已赋值
                     * @return ColdMemSize 是否已赋值
                     * 
                     */
                    bool ColdMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Cold node disk type</p>
                     * @return ColdDiskType <p>Cold node disk type</p>
                     * 
                     */
                    std::string GetColdDiskType() const;

                    /**
                     * 设置<p>Cold node disk type</p>
                     * @param _coldDiskType <p>Cold node disk type</p>
                     * 
                     */
                    void SetColdDiskType(const std::string& _coldDiskType);

                    /**
                     * 判断参数 ColdDiskType 是否已赋值
                     * @return ColdDiskType 是否已赋值
                     * 
                     */
                    bool ColdDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cold node disk size (GB).</p>
                     * @return ColdDiskSize <p>Cold node disk size (GB).</p>
                     * 
                     */
                    uint64_t GetColdDiskSize() const;

                    /**
                     * 设置<p>Cold node disk size (GB).</p>
                     * @param _coldDiskSize <p>Cold node disk size (GB).</p>
                     * 
                     */
                    void SetColdDiskSize(const uint64_t& _coldDiskSize);

                    /**
                     * 判断参数 ColdDiskSize 是否已赋值
                     * @return ColdDiskSize 是否已赋值
                     * 
                     */
                    bool ColdDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Frozen node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li></p>
                     * @return FrozenNodeType <p>Frozen node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li></p>
                     * 
                     */
                    std::string GetFrozenNodeType() const;

                    /**
                     * 设置<p>Frozen node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li></p>
                     * @param _frozenNodeType <p>Frozen node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li></p>
                     * 
                     */
                    void SetFrozenNodeType(const std::string& _frozenNodeType);

                    /**
                     * 判断参数 FrozenNodeType 是否已赋值
                     * @return FrozenNodeType 是否已赋值
                     * 
                     */
                    bool FrozenNodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of frozen nodes</p>
                     * @return FrozenNodeNum <p>Number of frozen nodes</p>
                     * 
                     */
                    uint64_t GetFrozenNodeNum() const;

                    /**
                     * 设置<p>Number of frozen nodes</p>
                     * @param _frozenNodeNum <p>Number of frozen nodes</p>
                     * 
                     */
                    void SetFrozenNodeNum(const uint64_t& _frozenNodeNum);

                    /**
                     * 判断参数 FrozenNodeNum 是否已赋值
                     * @return FrozenNodeNum 是否已赋值
                     * 
                     */
                    bool FrozenNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Frozen node CPU cores</p>
                     * @return FrozenCpuNum <p>Frozen node CPU cores</p>
                     * 
                     */
                    uint64_t GetFrozenCpuNum() const;

                    /**
                     * 设置<p>Frozen node CPU cores</p>
                     * @param _frozenCpuNum <p>Frozen node CPU cores</p>
                     * 
                     */
                    void SetFrozenCpuNum(const uint64_t& _frozenCpuNum);

                    /**
                     * 判断参数 FrozenCpuNum 是否已赋值
                     * @return FrozenCpuNum 是否已赋值
                     * 
                     */
                    bool FrozenCpuNumHasBeenSet() const;

                    /**
                     * 获取<p>Frozen node memory size (GB).</p>
                     * @return FrozenMemSize <p>Frozen node memory size (GB).</p>
                     * 
                     */
                    uint64_t GetFrozenMemSize() const;

                    /**
                     * 设置<p>Frozen node memory size (GB).</p>
                     * @param _frozenMemSize <p>Frozen node memory size (GB).</p>
                     * 
                     */
                    void SetFrozenMemSize(const uint64_t& _frozenMemSize);

                    /**
                     * 判断参数 FrozenMemSize 是否已赋值
                     * @return FrozenMemSize 是否已赋值
                     * 
                     */
                    bool FrozenMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Frozen node disk type</p>
                     * @return FrozenDiskType <p>Frozen node disk type</p>
                     * 
                     */
                    std::string GetFrozenDiskType() const;

                    /**
                     * 设置<p>Frozen node disk type</p>
                     * @param _frozenDiskType <p>Frozen node disk type</p>
                     * 
                     */
                    void SetFrozenDiskType(const std::string& _frozenDiskType);

                    /**
                     * 判断参数 FrozenDiskType 是否已赋值
                     * @return FrozenDiskType 是否已赋值
                     * 
                     */
                    bool FrozenDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Frozen node disk size (GB).</p>
                     * @return FrozenDiskSize <p>Frozen node disk size (GB).</p>
                     * 
                     */
                    uint64_t GetFrozenDiskSize() const;

                    /**
                     * 设置<p>Frozen node disk size (GB).</p>
                     * @param _frozenDiskSize <p>Frozen node disk size (GB).</p>
                     * 
                     */
                    void SetFrozenDiskSize(const uint64_t& _frozenDiskSize);

                    /**
                     * 判断参数 FrozenDiskSize 是否已赋值
                     * @return FrozenDiskSize 是否已赋值
                     * 
                     */
                    bool FrozenDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster health status: -1 unknown; 0 Green; 1 Yellow; 2 Red</p>
                     * @return HealthStatus <p>Cluster health status: -1 unknown; 0 Green; 1 Yellow; 2 Red</p>
                     * 
                     */
                    int64_t GetHealthStatus() const;

                    /**
                     * 设置<p>Cluster health status: -1 unknown; 0 Green; 1 Yellow; 2 Red</p>
                     * @param _healthStatus <p>Cluster health status: -1 unknown; 0 Green; 1 Yellow; 2 Red</p>
                     * 
                     */
                    void SetHealthStatus(const int64_t& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取<p>Intracluster network url for https.</p>
                     * @return EsPrivateUrl <p>Intracluster network url for https.</p>
                     * 
                     */
                    std::string GetEsPrivateUrl() const;

                    /**
                     * 设置<p>Intracluster network url for https.</p>
                     * @param _esPrivateUrl <p>Intracluster network url for https.</p>
                     * 
                     */
                    void SetEsPrivateUrl(const std::string& _esPrivateUrl);

                    /**
                     * 判断参数 EsPrivateUrl 是否已赋值
                     * @return EsPrivateUrl 是否已赋值
                     * 
                     */
                    bool EsPrivateUrlHasBeenSet() const;

                    /**
                     * 获取<p>https cluster private network domain name</p>
                     * @return EsPrivateDomain <p>https cluster private network domain name</p>
                     * 
                     */
                    std::string GetEsPrivateDomain() const;

                    /**
                     * 设置<p>https cluster private network domain name</p>
                     * @param _esPrivateDomain <p>https cluster private network domain name</p>
                     * 
                     */
                    void SetEsPrivateDomain(const std::string& _esPrivateDomain);

                    /**
                     * 判断参数 EsPrivateDomain 是否已赋值
                     * @return EsPrivateDomain 是否已赋值
                     * 
                     */
                    bool EsPrivateDomainHasBeenSet() const;

                    /**
                     * 获取<p>Cluster configuration group information.</p>
                     * @return EsConfigSets <p>Cluster configuration group information.</p>
                     * 
                     */
                    std::vector<EsConfigSetInfo> GetEsConfigSets() const;

                    /**
                     * 设置<p>Cluster configuration group information.</p>
                     * @param _esConfigSets <p>Cluster configuration group information.</p>
                     * 
                     */
                    void SetEsConfigSets(const std::vector<EsConfigSetInfo>& _esConfigSets);

                    /**
                     * 判断参数 EsConfigSets 是否已赋值
                     * @return EsConfigSets 是否已赋值
                     * 
                     */
                    bool EsConfigSetsHasBeenSet() const;

                    /**
                     * 获取<p>Cluster maintenance time slot</p>
                     * @return OperationDuration <p>Cluster maintenance time slot</p>
                     * 
                     */
                    OperationDuration GetOperationDuration() const;

                    /**
                     * 设置<p>Cluster maintenance time slot</p>
                     * @param _operationDuration <p>Cluster maintenance time slot</p>
                     * 
                     */
                    void SetOperationDuration(const OperationDuration& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>web node list</p>
                     * @return OptionalWebServiceInfos <p>web node list</p>
                     * 
                     */
                    std::vector<OptionalWebServiceInfo> GetOptionalWebServiceInfos() const;

                    /**
                     * 设置<p>web node list</p>
                     * @param _optionalWebServiceInfos <p>web node list</p>
                     * 
                     */
                    void SetOptionalWebServiceInfos(const std::vector<OptionalWebServiceInfo>& _optionalWebServiceInfos);

                    /**
                     * 判断参数 OptionalWebServiceInfos 是否已赋值
                     * @return OptionalWebServiceInfos 是否已赋值
                     * 
                     */
                    bool OptionalWebServiceInfosHasBeenSet() const;

                    /**
                     * 获取<p>Autonomous index switch</p>
                     * @return AutoIndexEnabled <p>Autonomous index switch</p>
                     * 
                     */
                    bool GetAutoIndexEnabled() const;

                    /**
                     * 设置<p>Autonomous index switch</p>
                     * @param _autoIndexEnabled <p>Autonomous index switch</p>
                     * 
                     */
                    void SetAutoIndexEnabled(const bool& _autoIndexEnabled);

                    /**
                     * 判断参数 AutoIndexEnabled 是否已赋值
                     * @return AutoIndexEnabled 是否已赋值
                     * 
                     */
                    bool AutoIndexEnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whether storage and computation separation is supported.</p>
                     * @return EnableHybridStorage <p>Whether storage and computation separation is supported.</p>
                     * 
                     */
                    bool GetEnableHybridStorage() const;

                    /**
                     * 设置<p>Whether storage and computation separation is supported.</p>
                     * @param _enableHybridStorage <p>Whether storage and computation separation is supported.</p>
                     * 
                     */
                    void SetEnableHybridStorage(const bool& _enableHybridStorage);

                    /**
                     * 判断参数 EnableHybridStorage 是否已赋值
                     * @return EnableHybridStorage 是否已赋值
                     * 
                     */
                    bool EnableHybridStorageHasBeenSet() const;

                    /**
                     * 获取<p>Process progress.</p>
                     * @return ProcessPercent <p>Process progress.</p>
                     * 
                     */
                    double GetProcessPercent() const;

                    /**
                     * 设置<p>Process progress.</p>
                     * @param _processPercent <p>Process progress.</p>
                     * 
                     */
                    void SetProcessPercent(const double& _processPercent);

                    /**
                     * 判断参数 ProcessPercent 是否已赋值
                     * @return ProcessPercent 是否已赋值
                     * 
                     */
                    bool ProcessPercentHasBeenSet() const;

                    /**
                     * 获取<p>Kibana alerting public network alert policy<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @return KibanaAlteringPublicAccess <p>Kibana alerting public network alert policy<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置<p>Kibana alerting public network alert policy<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * @param _kibanaAlteringPublicAccess <p>Kibana alerting public network alert policy<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     * 
                     */
                    void SetKibanaAlteringPublicAccess(const std::string& _kibanaAlteringPublicAccess);

                    /**
                     * 判断参数 KibanaAlteringPublicAccess 是否已赋值
                     * @return KibanaAlteringPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaAlteringPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>Whether there is a kernel update this month: false (no) and true (yes).</p>
                     * @return HasKernelUpgrade <p>Whether there is a kernel update this month: false (no) and true (yes).</p>
                     * 
                     */
                    bool GetHasKernelUpgrade() const;

                    /**
                     * 设置<p>Whether there is a kernel update this month: false (no) and true (yes).</p>
                     * @param _hasKernelUpgrade <p>Whether there is a kernel update this month: false (no) and true (yes).</p>
                     * 
                     */
                    void SetHasKernelUpgrade(const bool& _hasKernelUpgrade);

                    /**
                     * 判断参数 HasKernelUpgrade 是否已赋值
                     * @return HasKernelUpgrade 是否已赋值
                     * 
                     */
                    bool HasKernelUpgradeHasBeenSet() const;

                    /**
                     * 获取<p>cdcId, pass it when using a CDC subnet</p>
                     * @return CdcId <p>cdcId, pass it when using a CDC subnet</p>
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置<p>cdcId, pass it when using a CDC subnet</p>
                     * @param _cdcId <p>cdcId, pass it when using a CDC subnet</p>
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取<p>kibana intranet vip</p>
                     * @return KibanaPrivateVip <p>kibana intranet vip</p>
                     * 
                     */
                    std::string GetKibanaPrivateVip() const;

                    /**
                     * 设置<p>kibana intranet vip</p>
                     * @param _kibanaPrivateVip <p>kibana intranet vip</p>
                     * 
                     */
                    void SetKibanaPrivateVip(const std::string& _kibanaPrivateVip);

                    /**
                     * 判断参数 KibanaPrivateVip 是否已赋值
                     * @return KibanaPrivateVip 是否已赋值
                     * 
                     */
                    bool KibanaPrivateVipHasBeenSet() const;

                    /**
                     * 获取<p>Customize the private network url of kibana</p>
                     * @return CustomKibanaPrivateUrl <p>Customize the private network url of kibana</p>
                     * 
                     */
                    std::string GetCustomKibanaPrivateUrl() const;

                    /**
                     * 设置<p>Customize the private network url of kibana</p>
                     * @param _customKibanaPrivateUrl <p>Customize the private network url of kibana</p>
                     * 
                     */
                    void SetCustomKibanaPrivateUrl(const std::string& _customKibanaPrivateUrl);

                    /**
                     * 判断参数 CustomKibanaPrivateUrl 是否已赋值
                     * @return CustomKibanaPrivateUrl 是否已赋值
                     * 
                     */
                    bool CustomKibanaPrivateUrlHasBeenSet() const;

                    /**
                     * 获取<p>Node outbound access detailed information.</p>
                     * @return OutboundPublicAcls <p>Node outbound access detailed information.</p>
                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置<p>Node outbound access detailed information.</p>
                     * @param _outboundPublicAcls <p>Node outbound access detailed information.</p>
                     * 
                     */
                    void SetOutboundPublicAcls(const std::vector<OutboundPublicAcl>& _outboundPublicAcls);

                    /**
                     * 判断参数 OutboundPublicAcls 是否已赋值
                     * @return OutboundPublicAcls 是否已赋值
                     * 
                     */
                    bool OutboundPublicAclsHasBeenSet() const;

                    /**
                     * 获取<p>Network connection solution</p>
                     * @return NetConnectScheme <p>Network connection solution</p>
                     * 
                     */
                    std::string GetNetConnectScheme() const;

                    /**
                     * 设置<p>Network connection solution</p>
                     * @param _netConnectScheme <p>Network connection solution</p>
                     * 
                     */
                    void SetNetConnectScheme(const std::string& _netConnectScheme);

                    /**
                     * 判断参数 NetConnectScheme 是否已赋值
                     * @return NetConnectScheme 是否已赋值
                     * 
                     */
                    bool NetConnectSchemeHasBeenSet() const;

                    /**
                     * 获取<p>Placement group related parameters</p>
                     * @return DisasterRecoverGroupAffinity <p>Placement group related parameters</p>
                     * 
                     */
                    uint64_t GetDisasterRecoverGroupAffinity() const;

                    /**
                     * 设置<p>Placement group related parameters</p>
                     * @param _disasterRecoverGroupAffinity <p>Placement group related parameters</p>
                     * 
                     */
                    void SetDisasterRecoverGroupAffinity(const uint64_t& _disasterRecoverGroupAffinity);

                    /**
                     * 判断参数 DisasterRecoverGroupAffinity 是否已赋值
                     * @return DisasterRecoverGroupAffinity 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupAffinityHasBeenSet() const;

                    /**
                     * 获取<p>Sub-product ID enumeration values: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", AI Search Enhancement Edition: "sp_es_aisearch", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * @return SubProductCode <p>Sub-product ID enumeration values: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", AI Search Enhancement Edition: "sp_es_aisearch", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>Sub-product ID enumeration values: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", AI Search Enhancement Edition: "sp_es_aisearch", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * @param _subProductCode <p>Sub-product ID enumeration values: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", AI Search Enhancement Edition: "sp_es_aisearch", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取<p>Storage-compute separation cos usage, Unit: M</p>
                     * @return CosBucketStorageSize <p>Storage-compute separation cos usage, Unit: M</p>
                     * 
                     */
                    uint64_t GetCosBucketStorageSize() const;

                    /**
                     * 设置<p>Storage-compute separation cos usage, Unit: M</p>
                     * @param _cosBucketStorageSize <p>Storage-compute separation cos usage, Unit: M</p>
                     * 
                     */
                    void SetCosBucketStorageSize(const uint64_t& _cosBucketStorageSize);

                    /**
                     * 判断参数 CosBucketStorageSize 是否已赋值
                     * @return CosBucketStorageSize 是否已赋值
                     * 
                     */
                    bool CosBucketStorageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * @return ReadWriteMode <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置<p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * @param _readWriteMode <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取<p>Whether there is an asynchronous task scheduling for placement groups</p>
                     * @return EnableScheduleRecoverGroup <p>Whether there is an asynchronous task scheduling for placement groups</p>
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置<p>Whether there is an asynchronous task scheduling for placement groups</p>
                     * @param _enableScheduleRecoverGroup <p>Whether there is an asynchronous task scheduling for placement groups</p>
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取<p>The time when an asynchronous task is scheduled</p>
                     * @return EnableScheduleOperationDuration <p>The time when an asynchronous task is scheduled</p>
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置<p>The time when an asynchronous task is scheduled</p>
                     * @param _enableScheduleOperationDuration <p>The time when an asynchronous task is scheduled</p>
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>Cluster protection: OPEN: enable, CLOSE: disable</p>
                     * @return EnableDestroyProtection <p>Cluster protection: OPEN: enable, CLOSE: disable</p>
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置<p>Cluster protection: OPEN: enable, CLOSE: disable</p>
                     * @param _enableDestroyProtection <p>Cluster protection: OPEN: enable, CLOSE: disable</p>
                     * 
                     */
                    void SetEnableDestroyProtection(const std::string& _enableDestroyProtection);

                    /**
                     * 判断参数 EnableDestroyProtection 是否已赋值
                     * @return EnableDestroyProtection 是否已赋值
                     * 
                     */
                    bool EnableDestroyProtectionHasBeenSet() const;

                    /**
                     * 获取<p>kibana intranet access address</p>
                     * @return ShowKibanaIpPort <p>kibana intranet access address</p>
                     * 
                     */
                    std::string GetShowKibanaIpPort() const;

                    /**
                     * 设置<p>kibana intranet access address</p>
                     * @param _showKibanaIpPort <p>kibana intranet access address</p>
                     * 
                     */
                    void SetShowKibanaIpPort(const std::string& _showKibanaIpPort);

                    /**
                     * 判断参数 ShowKibanaIpPort 是否已赋值
                     * @return ShowKibanaIpPort 是否已赋值
                     * 
                     */
                    bool ShowKibanaIpPortHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a CDZLite availability zone</p>
                     * @return IsCdzLite <p>Whether it is a CDZLite availability zone</p>
                     * 
                     */
                    bool GetIsCdzLite() const;

                    /**
                     * 设置<p>Whether it is a CDZLite availability zone</p>
                     * @param _isCdzLite <p>Whether it is a CDZLite availability zone</p>
                     * 
                     */
                    void SetIsCdzLite(const bool& _isCdzLite);

                    /**
                     * 判断参数 IsCdzLite 是否已赋值
                     * @return IsCdzLite 是否已赋值
                     * 
                     */
                    bool IsCdzLiteHasBeenSet() const;

                    /**
                     * 获取<p>Cluster private network tcp address</p>
                     * @return EsPrivateTcpUrl <p>Cluster private network tcp address</p>
                     * 
                     */
                    std::string GetEsPrivateTcpUrl() const;

                    /**
                     * 设置<p>Cluster private network tcp address</p>
                     * @param _esPrivateTcpUrl <p>Cluster private network tcp address</p>
                     * 
                     */
                    void SetEsPrivateTcpUrl(const std::string& _esPrivateTcpUrl);

                    /**
                     * 判断参数 EsPrivateTcpUrl 是否已赋值
                     * @return EsPrivateTcpUrl 是否已赋值
                     * 
                     */
                    bool EsPrivateTcpUrlHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is in the recycle bin</p><p>Default value: false</p>
                     * @return IsInRecycleBin <p>Whether it is in the recycle bin</p><p>Default value: false</p>
                     * 
                     */
                    bool GetIsInRecycleBin() const;

                    /**
                     * 设置<p>Whether it is in the recycle bin</p><p>Default value: false</p>
                     * @param _isInRecycleBin <p>Whether it is in the recycle bin</p><p>Default value: false</p>
                     * 
                     */
                    void SetIsInRecycleBin(const bool& _isInRecycleBin);

                    /**
                     * 判断参数 IsInRecycleBin 是否已赋值
                     * @return IsInRecycleBin 是否已赋值
                     * 
                     */
                    bool IsInRecycleBinHasBeenSet() const;

                    /**
                     * 获取<p>Is locked in the recycle bin</p><p>Default value: false</p>
                     * @return RecycleLockEnabled <p>Is locked in the recycle bin</p><p>Default value: false</p>
                     * 
                     */
                    bool GetRecycleLockEnabled() const;

                    /**
                     * 设置<p>Is locked in the recycle bin</p><p>Default value: false</p>
                     * @param _recycleLockEnabled <p>Is locked in the recycle bin</p><p>Default value: false</p>
                     * 
                     */
                    void SetRecycleLockEnabled(const bool& _recycleLockEnabled);

                    /**
                     * 判断参数 RecycleLockEnabled 是否已赋值
                     * @return RecycleLockEnabled 是否已赋值
                     * 
                     */
                    bool RecycleLockEnabledHasBeenSet() const;

                    /**
                     * 获取<p>The time when termination is expected</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return MayDestroyPoint <p>The time when termination is expected</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetMayDestroyPoint() const;

                    /**
                     * 设置<p>The time when termination is expected</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _mayDestroyPoint <p>The time when termination is expected</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetMayDestroyPoint(const std::string& _mayDestroyPoint);

                    /**
                     * 判断参数 MayDestroyPoint 是否已赋值
                     * @return MayDestroyPoint 是否已赋值
                     * 
                     */
                    bool MayDestroyPointHasBeenSet() const;

                    /**
                     * 获取<p>The time when termination is delayed</p><p>Unit: day</p>
                     * @return DelayDestroyInterval <p>The time when termination is delayed</p><p>Unit: day</p>
                     * 
                     */
                    int64_t GetDelayDestroyInterval() const;

                    /**
                     * 设置<p>The time when termination is delayed</p><p>Unit: day</p>
                     * @param _delayDestroyInterval <p>The time when termination is delayed</p><p>Unit: day</p>
                     * 
                     */
                    void SetDelayDestroyInterval(const int64_t& _delayDestroyInterval);

                    /**
                     * 判断参数 DelayDestroyInterval 是否已赋值
                     * @return DelayDestroyInterval 是否已赋值
                     * 
                     */
                    bool DelayDestroyIntervalHasBeenSet() const;

                    /**
                     * 获取<p>Enable automatic replacement of unhealthy nodes. 0: disable, 1: enable</p>
                     * @return EnableAutoReplace <p>Enable automatic replacement of unhealthy nodes. 0: disable, 1: enable</p>
                     * 
                     */
                    int64_t GetEnableAutoReplace() const;

                    /**
                     * 设置<p>Enable automatic replacement of unhealthy nodes. 0: disable, 1: enable</p>
                     * @param _enableAutoReplace <p>Enable automatic replacement of unhealthy nodes. 0: disable, 1: enable</p>
                     * 
                     */
                    void SetEnableAutoReplace(const int64_t& _enableAutoReplace);

                    /**
                     * 判断参数 EnableAutoReplace 是否已赋值
                     * @return EnableAutoReplace 是否已赋值
                     * 
                     */
                    bool EnableAutoReplaceHasBeenSet() const;

                    /**
                     * 获取<p>Enable mtls. 0: disable, 1: enable</p>
                     * @return OpenMTLS <p>Enable mtls. 0: disable, 1: enable</p>
                     * 
                     */
                    uint64_t GetOpenMTLS() const;

                    /**
                     * 设置<p>Enable mtls. 0: disable, 1: enable</p>
                     * @param _openMTLS <p>Enable mtls. 0: disable, 1: enable</p>
                     * 
                     */
                    void SetOpenMTLS(const uint64_t& _openMTLS);

                    /**
                     * 判断参数 OpenMTLS 是否已赋值
                     * @return OpenMTLS 是否已赋值
                     * 
                     */
                    bool OpenMTLSHasBeenSet() const;

                    /**
                     * 获取<p>Certificate type</p>
                     * @return ServerCertSource <p>Certificate type</p>
                     * 
                     */
                    std::string GetServerCertSource() const;

                    /**
                     * 设置<p>Certificate type</p>
                     * @param _serverCertSource <p>Certificate type</p>
                     * 
                     */
                    void SetServerCertSource(const std::string& _serverCertSource);

                    /**
                     * 判断参数 ServerCertSource 是否已赋值
                     * @return ServerCertSource 是否已赋值
                     * 
                     */
                    bool ServerCertSourceHasBeenSet() const;

                    /**
                     * 获取<p>VIP pending migration for the cluster</p>
                     * @return OldEsVip <p>VIP pending migration for the cluster</p>
                     * 
                     */
                    std::string GetOldEsVip() const;

                    /**
                     * 设置<p>VIP pending migration for the cluster</p>
                     * @param _oldEsVip <p>VIP pending migration for the cluster</p>
                     * 
                     */
                    void SetOldEsVip(const std::string& _oldEsVip);

                    /**
                     * 判断参数 OldEsVip 是否已赋值
                     * @return OldEsVip 是否已赋值
                     * 
                     */
                    bool OldEsVipHasBeenSet() const;

                    /**
                     * 获取<p>Cluster TCP address to be migrated</p>
                     * @return OldEsPrivateTcpUrl <p>Cluster TCP address to be migrated</p>
                     * 
                     */
                    std::string GetOldEsPrivateTcpUrl() const;

                    /**
                     * 设置<p>Cluster TCP address to be migrated</p>
                     * @param _oldEsPrivateTcpUrl <p>Cluster TCP address to be migrated</p>
                     * 
                     */
                    void SetOldEsPrivateTcpUrl(const std::string& _oldEsPrivateTcpUrl);

                    /**
                     * 判断参数 OldEsPrivateTcpUrl 是否已赋值
                     * @return OldEsPrivateTcpUrl 是否已赋值
                     * 
                     */
                    bool OldEsPrivateTcpUrlHasBeenSet() const;

                    /**
                     * 获取<p>Whether to take old nodes offline from the VIP</p>
                     * @return NeedOfflineOldNodesNotify <p>Whether to take old nodes offline from the VIP</p>
                     * 
                     */
                    bool GetNeedOfflineOldNodesNotify() const;

                    /**
                     * 设置<p>Whether to take old nodes offline from the VIP</p>
                     * @param _needOfflineOldNodesNotify <p>Whether to take old nodes offline from the VIP</p>
                     * 
                     */
                    void SetNeedOfflineOldNodesNotify(const bool& _needOfflineOldNodesNotify);

                    /**
                     * 判断参数 NeedOfflineOldNodesNotify 是否已赋值
                     * @return NeedOfflineOldNodesNotify 是否已赋值
                     * 
                     */
                    bool NeedOfflineOldNodesNotifyHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name.</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Region.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>AZ.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>uid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>User UIN.</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>UID of the VPC to which the instance belongs</p>
                     */
                    std::string m_vpcUid;
                    bool m_vpcUidHasBeenSet;

                    /**
                     * <p>UID of the subnet to which the instance belongs</p>
                     */
                    std::string m_subnetUid;
                    bool m_subnetUidHasBeenSet;

                    /**
                     * <p>Instance status. 0: processing, 1: normal, -1: stopped, -2: being destroyed, -3: terminated, -4: isolated, 2: initializing when creating a cluster</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. Value range: <br>RENEW_FLAG_AUTO: auto renewal<br>RENEW_FLAG_MANUAL: no auto-renewal<br>Default value: <br>RENEW_FLAG_DEFAULT: no auto-renewal<br>If this parameter is set to RENEW_FLAG_AUTO, the instance will automatically renew on a monthly basis after expiration if the account balance is sufficient.</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Instance billing mode. Value ranges: PREPAID: prepaid mode, i.e., monthly subscription. POSTPAID_BY_HOUR: postpaid, i.e., pay-as-you-go. CDHPAID: CDH-paid mode, i.e., only charges for CDH, without charging for instances on CDH.</p>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>Annual and monthly subscription duration, unit: month</p>
                     */
                    uint64_t m_chargePeriod;
                    bool m_chargePeriodHasBeenSet;

                    /**
                     * <p>Node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>Number of nodes</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Number of node CPU cores.</p>
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * <p>Node memory size (GB).</p>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Node disk type</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Node disk size (GB).</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>ES domain name</p>
                     */
                    std::string m_esDomain;
                    bool m_esDomainHasBeenSet;

                    /**
                     * <p>ES VIP</p>
                     */
                    std::string m_esVip;
                    bool m_esVipHasBeenSet;

                    /**
                     * <p>ES port</p>
                     */
                    uint64_t m_esPort;
                    bool m_esPortHasBeenSet;

                    /**
                     * <p>Kibana access url</p>
                     */
                    std::string m_kibanaUrl;
                    bool m_kibanaUrlHasBeenSet;

                    /**
                     * <p>ES version number</p>
                     */
                    std::string m_esVersion;
                    bool m_esVersionHasBeenSet;

                    /**
                     * <p>ES configuration item</p>
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>Kibana Access Control Configuration</p>
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * <p>Instance creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modification time of the instance</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Instance expiration time</p>
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>Instance type (instance type flag, currently only 1 and 2)</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Ik analyzer configuration</p>
                     */
                    EsDictionaryInfo m_ikConfig;
                    bool m_ikConfigHasBeenSet;

                    /**
                     * <p>Dedicated master node configuration</p>
                     */
                    MasterNodeInfo m_masterNodeInfo;
                    bool m_masterNodeInfoHasBeenSet;

                    /**
                     * <p>cos automatic backup configuration</p>
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * <p>Whether cos automatic backup is allowed</p>
                     */
                    bool m_allowCosBackup;
                    bool m_allowCosBackupHasBeenSet;

                    /**
                     * <p>Tag list of the instance</p>
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li>Default value: platinum</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>License type<li>oss: open source edition</li><li>basic: basic version</li><li>platinum: platinum version</li><li>enterprise: enterprise edition</li>Default value: platinum</p>
                     */
                    std::string m_realLicenseType;
                    bool m_realLicenseTypeHasBeenSet;

                    /**
                     * <p>Whether it is a hot-cold cluster<li>true: Hot-cold cluster</li><li>false: Non-hot-cold cluster</li></p>
                     */
                    bool m_enableHotWarmMode;
                    bool m_enableHotWarmModeHasBeenSet;

                    /**
                     * <p>Warm node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_warmNodeType;
                    bool m_warmNodeTypeHasBeenSet;

                    /**
                     * <p>Number of warm nodes</p>
                     */
                    uint64_t m_warmNodeNum;
                    bool m_warmNodeNumHasBeenSet;

                    /**
                     * <p>Warm node CPU cores</p>
                     */
                    uint64_t m_warmCpuNum;
                    bool m_warmCpuNumHasBeenSet;

                    /**
                     * <p>Warm node memory size (GB).</p>
                     */
                    uint64_t m_warmMemSize;
                    bool m_warmMemSizeHasBeenSet;

                    /**
                     * <p>Warm node disk type</p>
                     */
                    std::string m_warmDiskType;
                    bool m_warmDiskTypeHasBeenSet;

                    /**
                     * <p>Warm node disk size (GB).</p>
                     */
                    uint64_t m_warmDiskSize;
                    bool m_warmDiskSizeHasBeenSet;

                    /**
                     * <p>Cluster node information list</p>
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * <p>Es public network address</p>
                     */
                    std::string m_esPublicUrl;
                    bool m_esPublicUrlHasBeenSet;

                    /**
                     * <p>Multi-AZ network info</p>
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * <p>Deployment mode<li>0: single availability zone</li><li>1: multi-availability zone, Beijing, Shanghai, Shanghai Finance, Guangzhou, Nanjing, Hong Kong, Singapore, Frankfurt (allowlist control)</li></p>
                     */
                    uint64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>ES public access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * <p>ES public network access control configuration</p>
                     */
                    EsAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * <p>Kibana private network address</p>
                     */
                    std::string m_kibanaPrivateUrl;
                    bool m_kibanaPrivateUrlHasBeenSet;

                    /**
                     * <p>Kibana public access status<li>OPEN: enabled</li><li>CLOSE: disabled</li></p>
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * <p>Kibana internal access status<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * <p>Whether xpack security authentication is enabled for basic version 6.8 (and above versions)<li>1: not enabled</li><li>2: enabled</li></p>
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * <p>Scenario template type: 0, not enabled; 1, common scenarios; 2, log scenario; 3, search scenario</p>
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Kibana configuration item</p>
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * <p>Kibana node information</p>
                     */
                    KibanaNodeInfo m_kibanaNodeInfo;
                    bool m_kibanaNodeInfoHasBeenSet;

                    /**
                     * <p>Visualize node configuration</p>
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * <p>JDK type. Valid values: oracle, kona</p>
                     */
                    std::string m_jdk;
                    bool m_jdkHasBeenSet;

                    /**
                     * <p>Cluster network communication protocol</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Security group id</p>
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * <p>Cold node specification<li>ES.S1.SMALL2: 1-core 2G</li><li>ES.S1.MEDIUM4: 2-core 4G</li><li>ES.S1.MEDIUM8: 2-core 8G</li><li>ES.S1.LARGE16: 4-core 16G</li><li>ES.S1.2XLARGE32: 8-core 32G</li><li>ES.S1.4XLARGE32: 16-core 32G</li><li>ES.S1.4XLARGE64: 16-core 64G</li></p>
                     */
                    std::string m_coldNodeType;
                    bool m_coldNodeTypeHasBeenSet;

                    /**
                     * <p>Number of cold nodes</p>
                     */
                    uint64_t m_coldNodeNum;
                    bool m_coldNodeNumHasBeenSet;

                    /**
                     * <p>Cold node CPU cores</p>
                     */
                    uint64_t m_coldCpuNum;
                    bool m_coldCpuNumHasBeenSet;

                    /**
                     * <p>Cold node memory size (GB).</p>
                     */
                    uint64_t m_coldMemSize;
                    bool m_coldMemSizeHasBeenSet;

                    /**
                     * <p>Cold node disk type</p>
                     */
                    std::string m_coldDiskType;
                    bool m_coldDiskTypeHasBeenSet;

                    /**
                     * <p>Cold node disk size (GB).</p>
                     */
                    uint64_t m_coldDiskSize;
                    bool m_coldDiskSizeHasBeenSet;

                    /**
                     * <p>Frozen node specification<li>ES.S1.SMALL2: 1-core 2GB</li><li>ES.S1.MEDIUM4: 2-core 4GB</li><li>ES.S1.MEDIUM8: 2-core 8GB</li><li>ES.S1.LARGE16: 4-core 16GB</li><li>ES.S1.2XLARGE32: 8-core 32GB</li><li>ES.S1.4XLARGE32: 16-core 32GB</li><li>ES.S1.4XLARGE64: 16-core 64GB</li></p>
                     */
                    std::string m_frozenNodeType;
                    bool m_frozenNodeTypeHasBeenSet;

                    /**
                     * <p>Number of frozen nodes</p>
                     */
                    uint64_t m_frozenNodeNum;
                    bool m_frozenNodeNumHasBeenSet;

                    /**
                     * <p>Frozen node CPU cores</p>
                     */
                    uint64_t m_frozenCpuNum;
                    bool m_frozenCpuNumHasBeenSet;

                    /**
                     * <p>Frozen node memory size (GB).</p>
                     */
                    uint64_t m_frozenMemSize;
                    bool m_frozenMemSizeHasBeenSet;

                    /**
                     * <p>Frozen node disk type</p>
                     */
                    std::string m_frozenDiskType;
                    bool m_frozenDiskTypeHasBeenSet;

                    /**
                     * <p>Frozen node disk size (GB).</p>
                     */
                    uint64_t m_frozenDiskSize;
                    bool m_frozenDiskSizeHasBeenSet;

                    /**
                     * <p>Cluster health status: -1 unknown; 0 Green; 1 Yellow; 2 Red</p>
                     */
                    int64_t m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * <p>Intracluster network url for https.</p>
                     */
                    std::string m_esPrivateUrl;
                    bool m_esPrivateUrlHasBeenSet;

                    /**
                     * <p>https cluster private network domain name</p>
                     */
                    std::string m_esPrivateDomain;
                    bool m_esPrivateDomainHasBeenSet;

                    /**
                     * <p>Cluster configuration group information.</p>
                     */
                    std::vector<EsConfigSetInfo> m_esConfigSets;
                    bool m_esConfigSetsHasBeenSet;

                    /**
                     * <p>Cluster maintenance time slot</p>
                     */
                    OperationDuration m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * <p>web node list</p>
                     */
                    std::vector<OptionalWebServiceInfo> m_optionalWebServiceInfos;
                    bool m_optionalWebServiceInfosHasBeenSet;

                    /**
                     * <p>Autonomous index switch</p>
                     */
                    bool m_autoIndexEnabled;
                    bool m_autoIndexEnabledHasBeenSet;

                    /**
                     * <p>Whether storage and computation separation is supported.</p>
                     */
                    bool m_enableHybridStorage;
                    bool m_enableHybridStorageHasBeenSet;

                    /**
                     * <p>Process progress.</p>
                     */
                    double m_processPercent;
                    bool m_processPercentHasBeenSet;

                    /**
                     * <p>Kibana alerting public network alert policy<li>OPEN: enable</li><li>CLOSE: disable</li></p>
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * <p>Whether there is a kernel update this month: false (no) and true (yes).</p>
                     */
                    bool m_hasKernelUpgrade;
                    bool m_hasKernelUpgradeHasBeenSet;

                    /**
                     * <p>cdcId, pass it when using a CDC subnet</p>
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * <p>kibana intranet vip</p>
                     */
                    std::string m_kibanaPrivateVip;
                    bool m_kibanaPrivateVipHasBeenSet;

                    /**
                     * <p>Customize the private network url of kibana</p>
                     */
                    std::string m_customKibanaPrivateUrl;
                    bool m_customKibanaPrivateUrlHasBeenSet;

                    /**
                     * <p>Node outbound access detailed information.</p>
                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * <p>Network connection solution</p>
                     */
                    std::string m_netConnectScheme;
                    bool m_netConnectSchemeHasBeenSet;

                    /**
                     * <p>Placement group related parameters</p>
                     */
                    uint64_t m_disasterRecoverGroupAffinity;
                    bool m_disasterRecoverGroupAffinityHasBeenSet;

                    /**
                     * <p>Sub-product ID enumeration values: open source edition: "sp_es_io2", basic version: "sp_es_basic", platinum version: "sp_es_platinum", AI Search Enhancement Edition: "sp_es_aisearch", enterprise edition: "sp_es_enterprise", CDC platinum version: "sp_es_CDC_platinum", Log Enhancement Edition: "sp_es_enlogging", tsearch: "sp_tsearch_io2", logstash: "sp_es_logstash". It can be empty. When it is empty, the backend maps this field based on LicenseType.</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>Storage-compute separation cos usage, Unit: M</p>
                     */
                    uint64_t m_cosBucketStorageSize;
                    bool m_cosBucketStorageSizeHasBeenSet;

                    /**
                     * <p>Read-write separation mode: 0: not enabled; 1: local read/write separation; 2: remote read/write separation.</p>
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * <p>Whether there is an asynchronous task scheduling for placement groups</p>
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * <p>The time when an asynchronous task is scheduled</p>
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * <p>Cluster protection: OPEN: enable, CLOSE: disable</p>
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                    /**
                     * <p>kibana intranet access address</p>
                     */
                    std::string m_showKibanaIpPort;
                    bool m_showKibanaIpPortHasBeenSet;

                    /**
                     * <p>Whether it is a CDZLite availability zone</p>
                     */
                    bool m_isCdzLite;
                    bool m_isCdzLiteHasBeenSet;

                    /**
                     * <p>Cluster private network tcp address</p>
                     */
                    std::string m_esPrivateTcpUrl;
                    bool m_esPrivateTcpUrlHasBeenSet;

                    /**
                     * <p>Whether it is in the recycle bin</p><p>Default value: false</p>
                     */
                    bool m_isInRecycleBin;
                    bool m_isInRecycleBinHasBeenSet;

                    /**
                     * <p>Is locked in the recycle bin</p><p>Default value: false</p>
                     */
                    bool m_recycleLockEnabled;
                    bool m_recycleLockEnabledHasBeenSet;

                    /**
                     * <p>The time when termination is expected</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_mayDestroyPoint;
                    bool m_mayDestroyPointHasBeenSet;

                    /**
                     * <p>The time when termination is delayed</p><p>Unit: day</p>
                     */
                    int64_t m_delayDestroyInterval;
                    bool m_delayDestroyIntervalHasBeenSet;

                    /**
                     * <p>Enable automatic replacement of unhealthy nodes. 0: disable, 1: enable</p>
                     */
                    int64_t m_enableAutoReplace;
                    bool m_enableAutoReplaceHasBeenSet;

                    /**
                     * <p>Enable mtls. 0: disable, 1: enable</p>
                     */
                    uint64_t m_openMTLS;
                    bool m_openMTLSHasBeenSet;

                    /**
                     * <p>Certificate type</p>
                     */
                    std::string m_serverCertSource;
                    bool m_serverCertSourceHasBeenSet;

                    /**
                     * <p>VIP pending migration for the cluster</p>
                     */
                    std::string m_oldEsVip;
                    bool m_oldEsVipHasBeenSet;

                    /**
                     * <p>Cluster TCP address to be migrated</p>
                     */
                    std::string m_oldEsPrivateTcpUrl;
                    bool m_oldEsPrivateTcpUrlHasBeenSet;

                    /**
                     * <p>Whether to take old nodes offline from the VIP</p>
                     */
                    bool m_needOfflineOldNodesNotify;
                    bool m_needOfflineOldNodesNotifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTANCEINFO_H_
