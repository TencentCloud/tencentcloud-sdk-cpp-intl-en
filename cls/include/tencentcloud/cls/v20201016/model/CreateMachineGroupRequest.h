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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupTypeInfo.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/MetaTagInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateMachineGroup request structure.
                */
                class CreateMachineGroupRequest : public AbstractModel
                {
                public:
                    CreateMachineGroupRequest();
                    ~CreateMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine group name, which must be unique
                     * @return GroupName Machine group name, which must be unique
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Machine group name, which must be unique
                     * @param _groupName Machine group name, which must be unique
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Type of the machine group to be created. Valid values: `ip`: use the IP string list in `Values` to create a machine group; `label`: use the tag string list in `Values` to create a machine group
                     * @return MachineGroupType Type of the machine group to be created. Valid values: `ip`: use the IP string list in `Values` to create a machine group; `label`: use the tag string list in `Values` to create a machine group
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置Type of the machine group to be created. Valid values: `ip`: use the IP string list in `Values` to create a machine group; `label`: use the tag string list in `Values` to create a machine group
                     * @param _machineGroupType Type of the machine group to be created. Valid values: `ip`: use the IP string list in `Values` to create a machine group; `label`: use the tag string list in `Values` to create a machine group
                     * 
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     * 
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a machine group. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a machine group. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a machine group. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @param _tags Tag description list. This parameter is used to bind a tag to a machine group. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
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
                     * 获取Whether to enable automatic update for the machine group
                     * @return AutoUpdate Whether to enable automatic update for the machine group
                     * 
                     */
                    bool GetAutoUpdate() const;

                    /**
                     * 设置Whether to enable automatic update for the machine group
                     * @param _autoUpdate Whether to enable automatic update for the machine group
                     * 
                     */
                    void SetAutoUpdate(const bool& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取Update start time. We recommend you update LogListener during off-peak hours.
                     * @return UpdateStartTime Update start time. We recommend you update LogListener during off-peak hours.
                     * 
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置Update start time. We recommend you update LogListener during off-peak hours.
                     * @param _updateStartTime Update start time. We recommend you update LogListener during off-peak hours.
                     * 
                     */
                    void SetUpdateStartTime(const std::string& _updateStartTime);

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     * 
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取Update end time. We recommend you update LogListener during off-peak hours.
                     * @return UpdateEndTime Update end time. We recommend you update LogListener during off-peak hours.
                     * 
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 设置Update end time. We recommend you update LogListener during off-peak hours.
                     * @param _updateEndTime Update end time. We recommend you update LogListener during off-peak hours.
                     * 
                     */
                    void SetUpdateEndTime(const std::string& _updateEndTime);

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     * 
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees
                     * @return ServiceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees
                     * 
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees
                     * @param _serviceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees
                     * 
                     */
                    void SetServiceLogging(const bool& _serviceLogging);

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     * 
                     */
                    bool ServiceLoggingHasBeenSet() const;

                    /**
                     * 获取Offline cleaning time for machines in machine group
                     * @return DelayCleanupTime Offline cleaning time for machines in machine group
                     * 
                     */
                    int64_t GetDelayCleanupTime() const;

                    /**
                     * 设置Offline cleaning time for machines in machine group
                     * @param _delayCleanupTime Offline cleaning time for machines in machine group
                     * 
                     */
                    void SetDelayCleanupTime(const int64_t& _delayCleanupTime);

                    /**
                     * 判断参数 DelayCleanupTime 是否已赋值
                     * @return DelayCleanupTime 是否已赋值
                     * 
                     */
                    bool DelayCleanupTimeHasBeenSet() const;

                    /**
                     * 获取Metadata information list of a machine group
                     * @return MetaTags Metadata information list of a machine group
                     * 
                     */
                    std::vector<MetaTagInfo> GetMetaTags() const;

                    /**
                     * 设置Metadata information list of a machine group
                     * @param _metaTags Metadata information list of a machine group
                     * 
                     */
                    void SetMetaTags(const std::vector<MetaTagInfo>& _metaTags);

                    /**
                     * 判断参数 MetaTags 是否已赋值
                     * @return MetaTags 是否已赋值
                     * 
                     */
                    bool MetaTagsHasBeenSet() const;

                    /**
                     * 获取System type, default 0, 0: Linux, 1: Windows
                     * @return OSType System type, default 0, 0: Linux, 1: Windows
                     * 
                     */
                    uint64_t GetOSType() const;

                    /**
                     * 设置System type, default 0, 0: Linux, 1: Windows
                     * @param _oSType System type, default 0, 0: Linux, 1: Windows
                     * 
                     */
                    void SetOSType(const uint64_t& _oSType);

                    /**
                     * 判断参数 OSType 是否已赋值
                     * @return OSType 是否已赋值
                     * 
                     */
                    bool OSTypeHasBeenSet() const;

                private:

                    /**
                     * Machine group name, which must be unique
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Type of the machine group to be created. Valid values: `ip`: use the IP string list in `Values` to create a machine group; `label`: use the tag string list in `Values` to create a machine group
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a machine group. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable automatic update for the machine group
                     */
                    bool m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Update start time. We recommend you update LogListener during off-peak hours.
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * Update end time. We recommend you update LogListener during off-peak hours.
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                    /**
                     * Offline cleaning time for machines in machine group
                     */
                    int64_t m_delayCleanupTime;
                    bool m_delayCleanupTimeHasBeenSet;

                    /**
                     * Metadata information list of a machine group
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * System type, default 0, 0: Linux, 1: Windows
                     */
                    uint64_t m_oSType;
                    bool m_oSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMACHINEGROUPREQUEST_H_
