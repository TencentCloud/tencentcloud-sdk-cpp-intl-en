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
                     * 获取ID of the EMR cluster instance.
                     * @return InstanceId ID of the EMR cluster instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the EMR cluster instance.
                     * @param _instanceId ID of the EMR cluster instance.
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
                     * 获取Cloud disk ID required for mounting.
                     * @return DiskIds Cloud disk ID required for mounting.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置Cloud disk ID required for mounting.
                     * @param _diskIds Cloud disk ID required for mounting.
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
                     * 获取Mount mode. Valid values.
AUTO_RENEW: auto-renewal.
ALIGN_DEADLINE: automatic alignment with the deadline.
                     * @return AlignType Mount mode. Valid values.
AUTO_RENEW: auto-renewal.
ALIGN_DEADLINE: automatic alignment with the deadline.
                     * 
                     */
                    std::string GetAlignType() const;

                    /**
                     * 设置Mount mode. Valid values.
AUTO_RENEW: auto-renewal.
ALIGN_DEADLINE: automatic alignment with the deadline.
                     * @param _alignType Mount mode. Valid values.
AUTO_RENEW: auto-renewal.
ALIGN_DEADLINE: automatic alignment with the deadline.
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
                     * 获取List of CVM node IDs requiring mounting.
                     * @return CvmInstanceIds List of CVM node IDs requiring mounting.
                     * 
                     */
                    std::vector<std::string> GetCvmInstanceIds() const;

                    /**
                     * 设置List of CVM node IDs requiring mounting.
                     * @param _cvmInstanceIds List of CVM node IDs requiring mounting.
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
                     * 获取Optional parameter. Only mount operation is performed if this parameter is not passed. When True is passed, the CBS will be set to termination with the cloud host upon successful mounting. This is only applicable to pay-as-you-go cloud disk.
                     * @return DeleteWithInstance Optional parameter. Only mount operation is performed if this parameter is not passed. When True is passed, the CBS will be set to termination with the cloud host upon successful mounting. This is only applicable to pay-as-you-go cloud disk.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Optional parameter. Only mount operation is performed if this parameter is not passed. When True is passed, the CBS will be set to termination with the cloud host upon successful mounting. This is only applicable to pay-as-you-go cloud disk.
                     * @param _deleteWithInstance Optional parameter. Only mount operation is performed if this parameter is not passed. When True is passed, the CBS will be set to termination with the cloud host upon successful mounting. This is only applicable to pay-as-you-go cloud disk.
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
                     * 获取Disk billing type (1: monthly subscription, 3: committed use).
                     * @return ChargeType Disk billing type (1: monthly subscription, 3: committed use).
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置Disk billing type (1: monthly subscription, 3: committed use).
                     * @param _chargeType Disk billing type (1: monthly subscription, 3: committed use).
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
                     * 获取Disk committed use and purchase duration (only supports 12, 24, 36, 48, and 60).
                     * @return UnderWriteDuration Disk committed use and purchase duration (only supports 12, 24, 36, 48, and 60).
                     * 
                     */
                    int64_t GetUnderWriteDuration() const;

                    /**
                     * 设置Disk committed use and purchase duration (only supports 12, 24, 36, 48, and 60).
                     * @param _underWriteDuration Disk committed use and purchase duration (only supports 12, 24, 36, 48, and 60).
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
                     * ID of the EMR cluster instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cloud disk ID required for mounting.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Mount mode. Valid values.
AUTO_RENEW: auto-renewal.
ALIGN_DEADLINE: automatic alignment with the deadline.
                     */
                    std::string m_alignType;
                    bool m_alignTypeHasBeenSet;

                    /**
                     * List of CVM node IDs requiring mounting.
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
                     * Optional parameter. Only mount operation is performed if this parameter is not passed. When True is passed, the CBS will be set to termination with the cloud host upon successful mounting. This is only applicable to pay-as-you-go cloud disk.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Name list of services that can be configured when a new disk is mounted.
                     */
                    std::vector<std::string> m_selectiveConfServices;
                    bool m_selectiveConfServicesHasBeenSet;

                    /**
                     * Disk billing type (1: monthly subscription, 3: committed use).
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Disk committed use and purchase duration (only supports 12, 24, 36, 48, and 60).
                     */
                    int64_t m_underWriteDuration;
                    bool m_underWriteDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ATTACHDISKSREQUEST_H_
