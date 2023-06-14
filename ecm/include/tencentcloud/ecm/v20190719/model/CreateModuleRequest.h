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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/TagSpecification.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateModule request structure.
                */
                class CreateModuleRequest : public AbstractModel
                {
                public:
                    CreateModuleRequest();
                    ~CreateModuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name, such as video live streaming module name. It cannot start with a space or exceed 60 characters.
                     * @return ModuleName Module name, such as video live streaming module name. It cannot start with a space or exceed 60 characters.
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置Module name, such as video live streaming module name. It cannot start with a space or exceed 60 characters.
                     * @param _moduleName Module name, such as video live streaming module name. It cannot start with a space or exceed 60 characters.
                     * 
                     */
                    void SetModuleName(const std::string& _moduleName);

                    /**
                     * 判断参数 ModuleName 是否已赋值
                     * @return ModuleName 是否已赋值
                     * 
                     */
                    bool ModuleNameHasBeenSet() const;

                    /**
                     * 获取Default bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * @return DefaultBandWidth Default bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * 
                     */
                    int64_t GetDefaultBandWidth() const;

                    /**
                     * 设置Default bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * @param _defaultBandWidth Default bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * 
                     */
                    void SetDefaultBandWidth(const int64_t& _defaultBandWidth);

                    /**
                     * 判断参数 DefaultBandWidth 是否已赋值
                     * @return DefaultBandWidth 是否已赋值
                     * 
                     */
                    bool DefaultBandWidthHasBeenSet() const;

                    /**
                     * 获取Default image ID, such as `img-qsdf3ff2`.
                     * @return DefaultImageId Default image ID, such as `img-qsdf3ff2`.
                     * 
                     */
                    std::string GetDefaultImageId() const;

                    /**
                     * 设置Default image ID, such as `img-qsdf3ff2`.
                     * @param _defaultImageId Default image ID, such as `img-qsdf3ff2`.
                     * 
                     */
                    void SetDefaultImageId(const std::string& _defaultImageId);

                    /**
                     * 判断参数 DefaultImageId 是否已赋值
                     * @return DefaultImageId 是否已赋值
                     * 
                     */
                    bool DefaultImageIdHasBeenSet() const;

                    /**
                     * 获取Model ID.
                     * @return InstanceType Model ID.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Model ID.
                     * @param _instanceType Model ID.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Default system disk size in GB. It is 50 GB by default and cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @return DefaultSystemDiskSize Default system disk size in GB. It is 50 GB by default and cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置Default system disk size in GB. It is 50 GB by default and cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @param _defaultSystemDiskSize Default system disk size in GB. It is 50 GB by default and cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * 
                     */
                    void SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize);

                    /**
                     * 判断参数 DefaultSystemDiskSize 是否已赋值
                     * @return DefaultSystemDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @return DefaultDataDiskSize Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * 
                     */
                    int64_t GetDefaultDataDiskSize() const;

                    /**
                     * 设置Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @param _defaultDataDiskSize Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * 
                     */
                    void SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize);

                    /**
                     * 判断参数 DefaultDataDiskSize 是否已赋值
                     * @return DefaultDataDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * @return CloseIpDirect Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * 
                     */
                    bool GetCloseIpDirect() const;

                    /**
                     * 设置Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * @param _closeIpDirect Whether to disable IP direct access. Valid values:
true: yes
false: no
                     * 
                     */
                    void SetCloseIpDirect(const bool& _closeIpDirect);

                    /**
                     * 判断参数 CloseIpDirect 是否已赋值
                     * @return CloseIpDirect 是否已赋值
                     * 
                     */
                    bool CloseIpDirectHasBeenSet() const;

                    /**
                     * 获取List of tags.
                     * @return TagSpecification List of tags.
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置List of tags.
                     * @param _tagSpecification List of tags.
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取List of default module security groups
                     * @return SecurityGroups List of default module security groups
                     * 
                     */
                    std::vector<std::string> GetSecurityGroups() const;

                    /**
                     * 设置List of default module security groups
                     * @param _securityGroups List of default module security groups
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
                     * 获取Default inbound bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * @return DefaultBandWidthIn Default inbound bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * 
                     */
                    int64_t GetDefaultBandWidthIn() const;

                    /**
                     * 设置Default inbound bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * @param _defaultBandWidthIn Default inbound bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     * 
                     */
                    void SetDefaultBandWidthIn(const int64_t& _defaultBandWidthIn);

                    /**
                     * 判断参数 DefaultBandWidthIn 是否已赋值
                     * @return DefaultBandWidthIn 是否已赋值
                     * 
                     */
                    bool DefaultBandWidthInHasBeenSet() const;

                    /**
                     * 获取Whether to prohibit public IP assignment
                     * @return DisableWanIp Whether to prohibit public IP assignment
                     * 
                     */
                    bool GetDisableWanIp() const;

                    /**
                     * 设置Whether to prohibit public IP assignment
                     * @param _disableWanIp Whether to prohibit public IP assignment
                     * 
                     */
                    void SetDisableWanIp(const bool& _disableWanIp);

                    /**
                     * 判断参数 DisableWanIp 是否已赋值
                     * @return DisableWanIp 是否已赋值
                     * 
                     */
                    bool DisableWanIpHasBeenSet() const;

                    /**
                     * 获取System disk information.
                     * @return SystemDisk System disk information.
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk information.
                     * @param _systemDisk System disk information.
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
                     * 获取Data disk information.
                     * @return DataDisks Data disk information.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk information.
                     * @param _dataDisks Data disk information.
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                private:

                    /**
                     * Module name, such as video live streaming module name. It cannot start with a space or exceed 60 characters.
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                    /**
                     * Default bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultBandWidth;
                    bool m_defaultBandWidthHasBeenSet;

                    /**
                     * Default image ID, such as `img-qsdf3ff2`.
                     */
                    std::string m_defaultImageId;
                    bool m_defaultImageIdHasBeenSet;

                    /**
                     * Model ID.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Default system disk size in GB. It is 50 GB by default and cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * Whether to disable IP direct access. Valid values:
true: yes
false: no
                     */
                    bool m_closeIpDirect;
                    bool m_closeIpDirectHasBeenSet;

                    /**
                     * List of tags.
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * List of default module security groups
                     */
                    std::vector<std::string> m_securityGroups;
                    bool m_securityGroupsHasBeenSet;

                    /**
                     * Default inbound bandwidth in Mbps. It cannot exceed the bandwidth range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultBandWidthIn;
                    bool m_defaultBandWidthInHasBeenSet;

                    /**
                     * Whether to prohibit public IP assignment
                     */
                    bool m_disableWanIp;
                    bool m_disableWanIpHasBeenSet;

                    /**
                     * System disk information.
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk information.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_CREATEMODULEREQUEST_H_
