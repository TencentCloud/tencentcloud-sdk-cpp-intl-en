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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ModifyModuleConfig request structure.
                */
                class ModifyModuleConfigRequest : public AbstractModel
                {
                public:
                    ModifyModuleConfigRequest();
                    ~ModifyModuleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module ID.
                     * @return ModuleId Module ID.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID.
                     * @param _moduleId Module ID.
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

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
                     * 获取Default system disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @return DefaultSystemDiskSize Default system disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置Default system disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     * @param _defaultSystemDiskSize Default system disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
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
                     * 获取System disk
                     * @return SystemDisk System disk
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置System disk
                     * @param _systemDisk System disk
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
                     * 获取Data disk
                     * @return DataDisks Data disk
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Data disk
                     * @param _dataDisks Data disk
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
                     * Module ID.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Model ID.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Default data disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * Default system disk size in GB. It cannot exceed the system disk size range. For more information, see `DescribeConfig`.
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * System disk
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * Data disk
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULECONFIGREQUEST_H_
