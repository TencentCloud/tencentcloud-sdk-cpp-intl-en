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
                     * 获取Instance ID to be operated. can be obtained from the `InstanceId` in the return value from the DescribeInstances api (https://www.tencentcloud.comom/document/api/213/15728?from_cn_redirect=1).
                     * @return InstanceId Instance ID to be operated. can be obtained from the `InstanceId` in the return value from the DescribeInstances api (https://www.tencentcloud.comom/document/api/213/15728?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID to be operated. can be obtained from the `InstanceId` in the return value from the DescribeInstances api (https://www.tencentcloud.comom/document/api/213/15728?from_cn_redirect=1).
                     * @param _instanceId Instance ID to be operated. can be obtained from the `InstanceId` in the return value from the DescribeInstances api (https://www.tencentcloud.comom/document/api/213/15728?from_cn_redirect=1).
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
                     * 获取Specifies the configuration information of the data disk to be expanded, only supporting specifying the target capacity of the disk to be expanded. only non-elastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://www.tencentcloud.comom/document/api/362/16315?from_cn_redirect=1)) can be expanded. the unit of data disk capacity is GiB. the minimum expansion step is 10 GiB. for data disk type selection, refer to [disk product introduction](https://www.tencentcloud.comom/document/product/362/2353?from_cn_redirect=1). the available data disk type is restricted by the instance type `InstanceType`. additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @return DataDisks Specifies the configuration information of the data disk to be expanded, only supporting specifying the target capacity of the disk to be expanded. only non-elastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://www.tencentcloud.comom/document/api/362/16315?from_cn_redirect=1)) can be expanded. the unit of data disk capacity is GiB. the minimum expansion step is 10 GiB. for data disk type selection, refer to [disk product introduction](https://www.tencentcloud.comom/document/product/362/2353?from_cn_redirect=1). the available data disk type is restricted by the instance type `InstanceType`. additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Specifies the configuration information of the data disk to be expanded, only supporting specifying the target capacity of the disk to be expanded. only non-elastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://www.tencentcloud.comom/document/api/362/16315?from_cn_redirect=1)) can be expanded. the unit of data disk capacity is GiB. the minimum expansion step is 10 GiB. for data disk type selection, refer to [disk product introduction](https://www.tencentcloud.comom/document/product/362/2353?from_cn_redirect=1). the available data disk type is restricted by the instance type `InstanceType`. additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @param _dataDisks Specifies the configuration information of the data disk to be expanded, only supporting specifying the target capacity of the disk to be expanded. only non-elastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://www.tencentcloud.comom/document/api/362/16315?from_cn_redirect=1)) can be expanded. the unit of data disk capacity is GiB. the minimum expansion step is 10 GiB. for data disk type selection, refer to [disk product introduction](https://www.tencentcloud.comom/document/product/362/2353?from_cn_redirect=1). the available data disk type is restricted by the instance type `InstanceType`. additionally, the maximum allowable capacity for expansion varies by data disk type.
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
                     * 获取Specifies whether to forcibly shut down a running instance. it is recommended to manually shut down a running instance first and then expand the instance disk. valid values:<br><li>true: forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>default value: false.<br><br>forced shutdown is equivalent to turning off a physical computer's power switch. forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * @return ForceStop Specifies whether to forcibly shut down a running instance. it is recommended to manually shut down a running instance first and then expand the instance disk. valid values:<br><li>true: forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>default value: false.<br><br>forced shutdown is equivalent to turning off a physical computer's power switch. forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Specifies whether to forcibly shut down a running instance. it is recommended to manually shut down a running instance first and then expand the instance disk. valid values:<br><li>true: forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>default value: false.<br><br>forced shutdown is equivalent to turning off a physical computer's power switch. forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     * @param _forceStop Specifies whether to forcibly shut down a running instance. it is recommended to manually shut down a running instance first and then expand the instance disk. valid values:<br><li>true: forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>default value: false.<br><br>forced shutdown is equivalent to turning off a physical computer's power switch. forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
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
                     * 获取System disk configuration information to be expanded. only supports specifying the purpose capacity of the disk to be expanded. only supports cloud disk expansion.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @return SystemDisk System disk configuration information to be expanded. only supports specifying the purpose capacity of the disk to be expanded. only supports cloud disk expansion.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk configuration information to be expanded. only supports specifying the purpose capacity of the disk to be expanded. only supports cloud disk expansion.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     * @param _systemDisk System disk configuration information to be expanded. only supports specifying the purpose capacity of the disk to be expanded. only supports cloud disk expansion.
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
                     * Instance ID to be operated. can be obtained from the `InstanceId` in the return value from the DescribeInstances api (https://www.tencentcloud.comom/document/api/213/15728?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the configuration information of the data disk to be expanded, only supporting specifying the target capacity of the disk to be expanded. only non-elastic data disks (with `Portable` being `false` in the return values of [DescribeDisks](https://www.tencentcloud.comom/document/api/362/16315?from_cn_redirect=1)) can be expanded. the unit of data disk capacity is GiB. the minimum expansion step is 10 GiB. for data disk type selection, refer to [disk product introduction](https://www.tencentcloud.comom/document/product/362/2353?from_cn_redirect=1). the available data disk type is restricted by the instance type `InstanceType`. additionally, the maximum allowable capacity for expansion varies by data disk type.
<dx-alert infotype="explain" title="">You should specify either DataDisks or SystemDisk, but you cannot specify both at the same time.</dx-alert>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Specifies whether to forcibly shut down a running instance. it is recommended to manually shut down a running instance first and then expand the instance disk. valid values:<br><li>true: forcibly shut down an instance after a normal shutdown fails.</li><br><li>false: do not forcibly shut down an instance after a normal shutdown fails.</li><br><br>default value: false.<br><br>forced shutdown is equivalent to turning off a physical computer's power switch. forced shutdown may cause data loss or file system corruption and should only be used when a server cannot be shut down normally.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * System disk configuration information to be expanded. only supports specifying the purpose capacity of the disk to be expanded. only supports cloud disk expansion.
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
