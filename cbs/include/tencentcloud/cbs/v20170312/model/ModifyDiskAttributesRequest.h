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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDiskAttributes request structure.
                */
                class ModifyDiskAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDiskAttributesRequest();
                    ~ModifyDiskAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more cloud disk ids to be operated, which can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. if multiple cloud disk ids are passed in, only modifying all cloud disks to the same attribute is supported.

                     * @return DiskIds One or more cloud disk ids to be operated, which can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. if multiple cloud disk ids are passed in, only modifying all cloud disks to the same attribute is supported.

                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置One or more cloud disk ids to be operated, which can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. if multiple cloud disk ids are passed in, only modifying all cloud disks to the same attribute is supported.

                     * @param _diskIds One or more cloud disk ids to be operated, which can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. if multiple cloud disk ids are passed in, only modifying all cloud disks to the same attribute is supported.

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
                     * 获取Name of new cloud disk.
                     * @return DiskName Name of new cloud disk.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Name of new cloud disk.
                     * @param _diskName Name of new cloud disk.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Whether it is an elastic cloud disk. FALSE: non-elastic cloud disk; TRUE: elastic cloud disk. You can only modify non-elastic cloud disks to elastic cloud disks.
                     * @return Portable Whether it is an elastic cloud disk. FALSE: non-elastic cloud disk; TRUE: elastic cloud disk. You can only modify non-elastic cloud disks to elastic cloud disks.
                     * 
                     */
                    bool GetPortable() const;

                    /**
                     * 设置Whether it is an elastic cloud disk. FALSE: non-elastic cloud disk; TRUE: elastic cloud disk. You can only modify non-elastic cloud disks to elastic cloud disks.
                     * @param _portable Whether it is an elastic cloud disk. FALSE: non-elastic cloud disk; TRUE: elastic cloud disk. You can only modify non-elastic cloud disks to elastic cloud disks.
                     * 
                     */
                    void SetPortable(const bool& _portable);

                    /**
                     * 判断参数 Portable 是否已赋值
                     * @return Portable 是否已赋值
                     * 
                     */
                    bool PortableHasBeenSet() const;

                    /**
                     * 获取The new project ID of the cloud disk. Only the project ID of elastic cloud disk can be modified. The available projects and their IDs can be queried via the API [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1).
                     * @return ProjectId The new project ID of the cloud disk. Only the project ID of elastic cloud disk can be modified. The available projects and their IDs can be queried via the API [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置The new project ID of the cloud disk. Only the project ID of elastic cloud disk can be modified. The available projects and their IDs can be queried via the API [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1).
                     * @param _projectId The new project ID of the cloud disk. Only the project ID of elastic cloud disk can be modified. The available projects and their IDs can be queried via the API [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1).
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk is terminated with the CVM after it has been successfully mounted. `TRUE` indicates that it is terminated with the CVM. `FALSE` indicates that it is not terminated with the CVM. This is only supported for cloud disks and data disks that are pay-as-you-go.
                     * @return DeleteWithInstance Whether the cloud disk is terminated with the CVM after it has been successfully mounted. `TRUE` indicates that it is terminated with the CVM. `FALSE` indicates that it is not terminated with the CVM. This is only supported for cloud disks and data disks that are pay-as-you-go.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether the cloud disk is terminated with the CVM after it has been successfully mounted. `TRUE` indicates that it is terminated with the CVM. `FALSE` indicates that it is not terminated with the CVM. This is only supported for cloud disks and data disks that are pay-as-you-go.
                     * @param _deleteWithInstance Whether the cloud disk is terminated with the CVM after it has been successfully mounted. `TRUE` indicates that it is terminated with the CVM. `FALSE` indicates that it is not terminated with the CVM. This is only supported for cloud disks and data disks that are pay-as-you-go.
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
                     * 获取When changing the CLOUD disk type, you can input this parameter to indicate the target type. valid values:<br><li>CLOUD_PREMIUM: refers to high-performance CLOUD block storage</li><li>CLOUD_SSD: refers to SSD CLOUD disk.</li>batch type change is not supported. when inputting DiskType, DiskIds only supports entering one CLOUD disk id.<br>changing the CLOUD disk type does not support changing other attributes at the same time.
For details, see [adjust cloud disk type](https://www.tencentcloud.com/document/product/362/32540?from_cn_redirect=1).
                     * @return DiskType When changing the CLOUD disk type, you can input this parameter to indicate the target type. valid values:<br><li>CLOUD_PREMIUM: refers to high-performance CLOUD block storage</li><li>CLOUD_SSD: refers to SSD CLOUD disk.</li>batch type change is not supported. when inputting DiskType, DiskIds only supports entering one CLOUD disk id.<br>changing the CLOUD disk type does not support changing other attributes at the same time.
For details, see [adjust cloud disk type](https://www.tencentcloud.com/document/product/362/32540?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置When changing the CLOUD disk type, you can input this parameter to indicate the target type. valid values:<br><li>CLOUD_PREMIUM: refers to high-performance CLOUD block storage</li><li>CLOUD_SSD: refers to SSD CLOUD disk.</li>batch type change is not supported. when inputting DiskType, DiskIds only supports entering one CLOUD disk id.<br>changing the CLOUD disk type does not support changing other attributes at the same time.
For details, see [adjust cloud disk type](https://www.tencentcloud.com/document/product/362/32540?from_cn_redirect=1).
                     * @param _diskType When changing the CLOUD disk type, you can input this parameter to indicate the target type. valid values:<br><li>CLOUD_PREMIUM: refers to high-performance CLOUD block storage</li><li>CLOUD_SSD: refers to SSD CLOUD disk.</li>batch type change is not supported. when inputting DiskType, DiskIds only supports entering one CLOUD disk id.<br>changing the CLOUD disk type does not support changing other attributes at the same time.
For details, see [adjust cloud disk type](https://www.tencentcloud.com/document/product/362/32540?from_cn_redirect=1).
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
                     * 获取Enable/Disable cloud disk performance burst feature. valid values:. 
CREATE: enable.
Specifies to CANCEL and close.
                     * @return BurstPerformanceOperation Enable/Disable cloud disk performance burst feature. valid values:. 
CREATE: enable.
Specifies to CANCEL and close.
                     * 
                     */
                    std::string GetBurstPerformanceOperation() const;

                    /**
                     * 设置Enable/Disable cloud disk performance burst feature. valid values:. 
CREATE: enable.
Specifies to CANCEL and close.
                     * @param _burstPerformanceOperation Enable/Disable cloud disk performance burst feature. valid values:. 
CREATE: enable.
Specifies to CANCEL and close.
                     * 
                     */
                    void SetBurstPerformanceOperation(const std::string& _burstPerformanceOperation);

                    /**
                     * 判断参数 BurstPerformanceOperation 是否已赋值
                     * @return BurstPerformanceOperation 是否已赋值
                     * 
                     */
                    bool BurstPerformanceOperationHasBeenSet() const;

                private:

                    /**
                     * One or more cloud disk ids to be operated, which can be queried through the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) api. if multiple cloud disk ids are passed in, only modifying all cloud disks to the same attribute is supported.

                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Name of new cloud disk.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Whether it is an elastic cloud disk. FALSE: non-elastic cloud disk; TRUE: elastic cloud disk. You can only modify non-elastic cloud disks to elastic cloud disks.
                     */
                    bool m_portable;
                    bool m_portableHasBeenSet;

                    /**
                     * The new project ID of the cloud disk. Only the project ID of elastic cloud disk can be modified. The available projects and their IDs can be queried via the API [DescribeProject](https://intl.cloud.tencent.com/document/api/378/4400?from_cn_redirect=1).
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether the cloud disk is terminated with the CVM after it has been successfully mounted. `TRUE` indicates that it is terminated with the CVM. `FALSE` indicates that it is not terminated with the CVM. This is only supported for cloud disks and data disks that are pay-as-you-go.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * When changing the CLOUD disk type, you can input this parameter to indicate the target type. valid values:<br><li>CLOUD_PREMIUM: refers to high-performance CLOUD block storage</li><li>CLOUD_SSD: refers to SSD CLOUD disk.</li>batch type change is not supported. when inputting DiskType, DiskIds only supports entering one CLOUD disk id.<br>changing the CLOUD disk type does not support changing other attributes at the same time.
For details, see [adjust cloud disk type](https://www.tencentcloud.com/document/product/362/32540?from_cn_redirect=1).
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Enable/Disable cloud disk performance burst feature. valid values:. 
CREATE: enable.
Specifies to CANCEL and close.
                     */
                    std::string m_burstPerformanceOperation;
                    bool m_burstPerformanceOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKATTRIBUTESREQUEST_H_
