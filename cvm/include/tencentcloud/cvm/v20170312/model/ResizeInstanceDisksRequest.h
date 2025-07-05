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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESIZEINSTANCEDISKSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESIZEINSTANCEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ResizeInstanceDisks request structure.
                */
                class ResizeInstanceDisksRequest : public AbstractModel
                {
                public:
                    ResizeInstanceDisksRequest();
                    ~ResizeInstanceDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * @return InstanceId Instance ID. To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     * @param _instanceId Instance ID. To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
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
                     * 获取Configuration information of a data disk to be expanded. Only inelastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1)) can be expanded. The unit of data disk capacity is GB. The minimum expansion step is 10 GB. For more information about data disk types, refer to [Disk Product Introduction](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). The available data disk type is restricted by the instance type `InstanceType`. Additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @return DataDisks Configuration information of a data disk to be expanded. Only inelastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1)) can be expanded. The unit of data disk capacity is GB. The minimum expansion step is 10 GB. For more information about data disk types, refer to [Disk Product Introduction](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). The available data disk type is restricted by the instance type `InstanceType`. Additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Configuration information of a data disk to be expanded. Only inelastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1)) can be expanded. The unit of data disk capacity is GB. The minimum expansion step is 10 GB. For more information about data disk types, refer to [Disk Product Introduction](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). The available data disk type is restricted by the instance type `InstanceType`. Additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @param _dataDisks Configuration information of a data disk to be expanded. Only inelastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1)) can be expanded. The unit of data disk capacity is GB. The minimum expansion step is 10 GB. For more information about data disk types, refer to [Disk Product Introduction](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). The available data disk type is restricted by the instance type `InstanceType`. Additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Whether to forcibly shut down a running instance. It is recommended to manually shut down a running instance first and then reset the user password. Valid values:<br><li>true: Forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: Do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>Default value: false.<br><br>Forced shutdown is equivalent to turning off a physical computer's power switch. Forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * @return ForceStop Whether to forcibly shut down a running instance. It is recommended to manually shut down a running instance first and then reset the user password. Valid values:<br><li>true: Forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: Do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>Default value: false.<br><br>Forced shutdown is equivalent to turning off a physical computer's power switch. Forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to forcibly shut down a running instance. It is recommended to manually shut down a running instance first and then reset the user password. Valid values:<br><li>true: Forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: Do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>Default value: false.<br><br>Forced shutdown is equivalent to turning off a physical computer's power switch. Forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * @param _forceStop Whether to forcibly shut down a running instance. It is recommended to manually shut down a running instance first and then reset the user password. Valid values:<br><li>true: Forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: Do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>Default value: false.<br><br>Forced shutdown is equivalent to turning off a physical computer's power switch. Forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取Configuration information of a system disk to be expanded. Only cloud disks can be expanded.

<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @return SystemDisk Configuration information of a system disk to be expanded. Only cloud disks can be expanded.

<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置Configuration information of a system disk to be expanded. Only cloud disks can be expanded.

<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @param _systemDisk Configuration information of a system disk to be expanded. Only cloud disks can be expanded.

<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk is expanded online.
                     * @return ResizeOnline Whether the cloud disk is expanded online.
                     * 
                     */
                    bool GetResizeOnline() const;

                    /**
                     * 设置Whether the cloud disk is expanded online.
                     * @param _resizeOnline Whether the cloud disk is expanded online.
                     * 
                     */
                    void SetResizeOnline(const bool& _resizeOnline);

                    /**
                     * 判断参数 ResizeOnline 是否已赋值
                     * @return ResizeOnline 是否已赋值
                     * 
                     */
                    bool ResizeOnlineHasBeenSet() const;

                private:

                    /**
                     * Instance ID. To obtain the instance IDs, you can call [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and look for `InstanceId` in the response.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Configuration information of a data disk to be expanded. Only inelastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://intl.cloud.tencent.com/document/api/362/16315?from_cn_redirect=1)) can be expanded. The unit of data disk capacity is GB. The minimum expansion step is 10 GB. For more information about data disk types, refer to [Disk Product Introduction](https://intl.cloud.tencent.com/document/product/362/2353?from_cn_redirect=1). The available data disk type is restricted by the instance type `InstanceType`. Additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Whether to forcibly shut down a running instance. It is recommended to manually shut down a running instance first and then reset the user password. Valid values:<br><li>true: Forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: Do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>Default value: false.<br><br>Forced shutdown is equivalent to turning off a physical computer's power switch. Forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * Configuration information of a system disk to be expanded. Only cloud disks can be expanded.

<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Whether the cloud disk is expanded online.
                     */
                    bool m_resizeOnline;
                    bool m_resizeOnlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESIZEINSTANCEDISKSREQUEST_H_
