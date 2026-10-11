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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecDiskV2.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AttachDisks request structure.
                */
                class AttachDisksRequest : public AbstractModel
                {
                public:
                    AttachDisksRequest();
                    ~AttachDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the EMR cluster.
                     * @return InstanceId ID of the EMR cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the EMR cluster.
                     * @param _instanceId ID of the EMR cluster.
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
                     * 获取ID of the cloud disk to be mounted.
                     * @return DiskIds ID of the cloud disk to be mounted.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置ID of the cloud disk to be mounted.
                     * @param _diskIds ID of the cloud disk to be mounted.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Mounting mode. Valid values:
AUTO_RENEW: auto-renewal
ALIGN_DEADLINE: automatic alignment with the expiration time
                     * @return AlignType Mounting mode. Valid values:
AUTO_RENEW: auto-renewal
ALIGN_DEADLINE: automatic alignment with the expiration time
                     * 
                     */
                    std::string GetAlignType() const;

                    /**
                     * 设置Mounting mode. Valid values:
AUTO_RENEW: auto-renewal
ALIGN_DEADLINE: automatic alignment with the expiration time
                     * @param _alignType Mounting mode. Valid values:
AUTO_RENEW: auto-renewal
ALIGN_DEADLINE: automatic alignment with the expiration time
                     * 
                     */
                    void SetAlignType(const std::string& _alignType);

                    /**
                     * 判断参数 AlignType 是否已赋值
                     * @return AlignType 是否已赋值
                     * 
                     */
                    bool AlignTypeHasBeenSet() const;

                    /**
                     * 获取ID list of the CVM instances to which disks are to be mounted.
                     * @return CvmInstanceIds ID list of the CVM instances to which disks are to be mounted.
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置ID list of the CVM instances to which disks are to be mounted.
                     * @param _cvmInstanceIds ID list of the CVM instances to which disks are to be mounted.
                     * 
                     */
                    void SetCvmInstanceIds(const std::vector<std::string>& _cvmInstanceIds);

                    /**
                     * 判断参数 CvmInstanceIds 是否已赋值
                     * @return CvmInstanceIds 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to mount newly purchased cloud disks.
                     * @return CreateDisk Whether to mount newly purchased cloud disks.
                     * 
                     */
                    bool GetCreateDisk() const;

                    /**
                     * 设置Whether to mount newly purchased cloud disks.
                     * @param _createDisk Whether to mount newly purchased cloud disks.
                     * 
                     */
                    void SetCreateDisk(const bool& _createDisk);

                    /**
                     * 判断参数 CreateDisk 是否已赋值
                     * @return CreateDisk 是否已赋值
                     * 
                     */
                    bool CreateDiskHasBeenSet() const;

                    /**
                     * 获取Specifications of newly purchased cloud disks.
                     * @return DiskSpec Specifications of newly purchased cloud disks.
                     * 
                     */
                    NodeSpecDiskV2 GetDiskSpec() const;

                    /**
                     * 设置Specifications of newly purchased cloud disks.
                     * @param _diskSpec Specifications of newly purchased cloud disks.
                     * 
                     */
                    void SetDiskSpec(const NodeSpecDiskV2& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取Optional parameter. If this parameter is not passed, only the mounting operation is performed. If True is passed, the cloud disk is set to be terminated with the CVM upon successful mounting. This parameter is applicable only to pay-as-you-go cloud disks.
                     * @return DeleteWithInstance Optional parameter. If this parameter is not passed, only the mounting operation is performed. If True is passed, the cloud disk is set to be terminated with the CVM upon successful mounting. This parameter is applicable only to pay-as-you-go cloud disks.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Optional parameter. If this parameter is not passed, only the mounting operation is performed. If True is passed, the cloud disk is set to be terminated with the CVM upon successful mounting. This parameter is applicable only to pay-as-you-go cloud disks.
                     * @param _deleteWithInstance Optional parameter. If this parameter is not passed, only the mounting operation is performed. If True is passed, the cloud disk is set to be terminated with the CVM upon successful mounting. This parameter is applicable only to pay-as-you-go cloud disks.
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Name list of services that can be configured when a new disk is mounted.
                     * @return SelectiveConfServices Name list of services that can be configured when a new disk is mounted.
                     * 
                     */
                    std::vector<std::string> GetSelectiveConfServices() const;

                    /**
                     * 设置Name list of services that can be configured when a new disk is mounted.
                     * @param _selectiveConfServices Name list of services that can be configured when a new disk is mounted.
                     * 
                     */
                    void SetSelectiveConfServices(const std::vector<std::string>& _selectiveConfServices);

                    /**
                     * 判断参数 SelectiveConfServices 是否已赋值
                     * @return SelectiveConfServices 是否已赋值
                     * 
                     */
                    bool SelectiveConfServicesHasBeenSet() const;

                    /**
                     * 获取Disk billing type. Valid values: 1 (monthly subscription) and 3 (committed use).
                     * @return ChargeType Disk billing type. Valid values: 1 (monthly subscription) and 3 (committed use).
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Disk billing type. Valid values: 1 (monthly subscription) and 3 (committed use).
                     * @param _chargeType Disk billing type. Valid values: 1 (monthly subscription) and 3 (committed use).
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取Disk committed use and purchase duration. Valid values: 12, 24, 36, 48, and 60.
                     * @return UnderWriteDuration Disk committed use and purchase duration. Valid values: 12, 24, 36, 48, and 60.
                     * 
                     */
                    int64_t GetUnderWriteDuration() const;

                    /**
                     * 设置Disk committed use and purchase duration. Valid values: 12, 24, 36, 48, and 60.
                     * @param _underWriteDuration Disk committed use and purchase duration. Valid values: 12, 24, 36, 48, and 60.
                     * 
                     */
                    void SetUnderWriteDuration(const int64_t& _underWriteDuration);

                    /**
                     * 判断参数 UnderWriteDuration 是否已赋值
                     * @return UnderWriteDuration 是否已赋值
                     * 
                     */
                    bool UnderWriteDurationHasBeenSet() const;

                private:

                    /**
                     * ID of the EMR cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of the cloud disk to be mounted.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Mounting mode. Valid values:
AUTO_RENEW: auto-renewal
ALIGN_DEADLINE: automatic alignment with the expiration time
                     */
                    std::string m_alignType;
                    bool m_alignTypeHasBeenSet;

                    /**
                     * ID list of the CVM instances to which disks are to be mounted.
                     */
                    std::vector<std::string> m_cvmInstanceIds;
                    bool m_cvmInstanceIdsHasBeenSet;

                    /**
                     * Whether to mount newly purchased cloud disks.
                     */
                    bool m_createDisk;
                    bool m_createDiskHasBeenSet;

                    /**
                     * Specifications of newly purchased cloud disks.
                     */
                    NodeSpecDiskV2 m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * Optional parameter. If this parameter is not passed, only the mounting operation is performed. If True is passed, the cloud disk is set to be terminated with the CVM upon successful mounting. This parameter is applicable only to pay-as-you-go cloud disks.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Name list of services that can be configured when a new disk is mounted.
                     */
                    std::vector<std::string> m_selectiveConfServices;
                    bool m_selectiveConfServicesHasBeenSet;

                    /**
                     * Disk billing type. Valid values: 1 (monthly subscription) and 3 (committed use).
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Disk committed use and purchase duration. Valid values: 12, 24, 36, 48, and 60.
                     */
                    int64_t m_underWriteDuration;
                    bool m_underWriteDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_
