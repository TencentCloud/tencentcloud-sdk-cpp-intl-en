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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
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
                * Module information
                */
                class Module : public AbstractModel
                {
                public:
                    Module();
                    ~Module() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Module name.
                     * @return ModuleName Module name.
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置Module name.
                     * @param _moduleName Module name.
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
                     * 获取Module status. Valid values:
NORMAL: normal.
DELETING: deleting 
DELETEFAILED: failed to delete.
                     * @return ModuleState Module status. Valid values:
NORMAL: normal.
DELETING: deleting 
DELETEFAILED: failed to delete.
                     * 
                     */
                    std::string GetModuleState() const;

                    /**
                     * 设置Module status. Valid values:
NORMAL: normal.
DELETING: deleting 
DELETEFAILED: failed to delete.
                     * @param _moduleState Module status. Valid values:
NORMAL: normal.
DELETING: deleting 
DELETEFAILED: failed to delete.
                     * 
                     */
                    void SetModuleState(const std::string& _moduleState);

                    /**
                     * 判断参数 ModuleState 是否已赋值
                     * @return ModuleState 是否已赋值
                     * 
                     */
                    bool ModuleStateHasBeenSet() const;

                    /**
                     * 获取Default system disk size.
                     * @return DefaultSystemDiskSize Default system disk size.
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置Default system disk size.
                     * @param _defaultSystemDiskSize Default system disk size.
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
                     * 获取Default data disk size.
                     * @return DefaultDataDiskSize Default data disk size.
                     * 
                     */
                    int64_t GetDefaultDataDiskSize() const;

                    /**
                     * 设置Default data disk size.
                     * @param _defaultDataDiskSize Default data disk size.
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
                     * 获取Default model.
                     * @return InstanceTypeConfig Default model.
                     * 
                     */
                    InstanceTypeConfig GetInstanceTypeConfig() const;

                    /**
                     * 设置Default model.
                     * @param _instanceTypeConfig Default model.
                     * 
                     */
                    void SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig);

                    /**
                     * 判断参数 InstanceTypeConfig 是否已赋值
                     * @return InstanceTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigHasBeenSet() const;

                    /**
                     * 获取Default image.
                     * @return DefaultImage Default image.
                     * 
                     */
                    Image GetDefaultImage() const;

                    /**
                     * 设置Default image.
                     * @param _defaultImage Default image.
                     * 
                     */
                    void SetDefaultImage(const Image& _defaultImage);

                    /**
                     * 判断参数 DefaultImage 是否已赋值
                     * @return DefaultImage 是否已赋值
                     * 
                     */
                    bool DefaultImageHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Default outbound bandwidth.
                     * @return DefaultBandwidth Default outbound bandwidth.
                     * 
                     */
                    int64_t GetDefaultBandwidth() const;

                    /**
                     * 设置Default outbound bandwidth.
                     * @param _defaultBandwidth Default outbound bandwidth.
                     * 
                     */
                    void SetDefaultBandwidth(const int64_t& _defaultBandwidth);

                    /**
                     * 判断参数 DefaultBandwidth 是否已赋值
                     * @return DefaultBandwidth 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthHasBeenSet() const;

                    /**
                     * 获取Tag set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置Tag set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tagSet Tag set.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Whether to disable IP direct access.
                     * @return CloseIpDirect Whether to disable IP direct access.
                     * 
                     */
                    int64_t GetCloseIpDirect() const;

                    /**
                     * 设置Whether to disable IP direct access.
                     * @param _closeIpDirect Whether to disable IP direct access.
                     * 
                     */
                    void SetCloseIpDirect(const int64_t& _closeIpDirect);

                    /**
                     * 判断参数 CloseIpDirect 是否已赋值
                     * @return CloseIpDirect 是否已赋值
                     * 
                     */
                    bool CloseIpDirectHasBeenSet() const;

                    /**
                     * 获取List of default security group IDs.
                     * @return SecurityGroupIds List of default security group IDs.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置List of default security group IDs.
                     * @param _securityGroupIds List of default security group IDs.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Default inbound bandwidth.
                     * @return DefaultBandwidthIn Default inbound bandwidth.
                     * 
                     */
                    int64_t GetDefaultBandwidthIn() const;

                    /**
                     * 设置Default inbound bandwidth.
                     * @param _defaultBandwidthIn Default inbound bandwidth.
                     * 
                     */
                    void SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn);

                    /**
                     * 判断参数 DefaultBandwidthIn 是否已赋值
                     * @return DefaultBandwidthIn 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthInHasBeenSet() const;

                    /**
                     * 获取Custom script data
                     * @return UserData Custom script data
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置Custom script data
                     * @param _userData Custom script data
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

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
                     * Module ID.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Module name.
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                    /**
                     * Module status. Valid values:
NORMAL: normal.
DELETING: deleting 
DELETEFAILED: failed to delete.
                     */
                    std::string m_moduleState;
                    bool m_moduleStateHasBeenSet;

                    /**
                     * Default system disk size.
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * Default data disk size.
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * Default model.
                     */
                    InstanceTypeConfig m_instanceTypeConfig;
                    bool m_instanceTypeConfigHasBeenSet;

                    /**
                     * Default image.
                     */
                    Image m_defaultImage;
                    bool m_defaultImageHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Default outbound bandwidth.
                     */
                    int64_t m_defaultBandwidth;
                    bool m_defaultBandwidthHasBeenSet;

                    /**
                     * Tag set.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Whether to disable IP direct access.
                     */
                    int64_t m_closeIpDirect;
                    bool m_closeIpDirectHasBeenSet;

                    /**
                     * List of default security group IDs.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Default inbound bandwidth.
                     */
                    int64_t m_defaultBandwidthIn;
                    bool m_defaultBandwidthInHasBeenSet;

                    /**
                     * Custom script data
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

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

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_
