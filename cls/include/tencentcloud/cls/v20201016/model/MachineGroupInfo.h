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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Machine group information
                */
                class MachineGroupInfo : public AbstractModel
                {
                public:
                    MachineGroupInfo();
                    ~MachineGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Machine group ID
                     * @return GroupId Machine group ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group ID
                     * @param _groupId Machine group ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Machine group name
                     * @return GroupName Machine group name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Machine group name
                     * @param _groupName Machine group name
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
                     * 获取Machine group type
                     * @return MachineGroupType Machine group type
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置Machine group type
                     * @param _machineGroupType Machine group type
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
                     * 获取Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * @return CreateTime Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     * @param _createTime Creation time.
Time format: yyyy-MM-dd HH:mm:ss
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
                     * 获取List of tags bound to machine group
                     * @return Tags List of tags bound to machine group
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to machine group
                     * @param _tags List of tags bound to machine group
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
                     * 获取Whether machine group auto-update is enabled
                     * @return AutoUpdate Whether machine group auto-update is enabled
                     * 
                     */
                    std::string GetAutoUpdate() const;

                    /**
                     * 设置Whether machine group auto-update is enabled
                     * @param _autoUpdate Whether machine group auto-update is enabled
                     * 
                     */
                    void SetAutoUpdate(const std::string& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss
                     * @return UpdateStartTime Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss
                     * 
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss
                     * @param _updateStartTime Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss
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
                     * 获取End time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * @return UpdateEndTime End time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * 
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 设置End time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * @param _updateEndTime End time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
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
                     * 获取Whether service logs are enabled to record logs generated by the LogListener service itself. Once enabled, it will create an internal log set cls_service_logging, and log topics including loglistener_status, loglistener_alarm, and loglistener_business, without incurring charges.
                     * @return ServiceLogging Whether service logs are enabled to record logs generated by the LogListener service itself. Once enabled, it will create an internal log set cls_service_logging, and log topics including loglistener_status, loglistener_alarm, and loglistener_business, without incurring charges.
                     * 
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置Whether service logs are enabled to record logs generated by the LogListener service itself. Once enabled, it will create an internal log set cls_service_logging, and log topics including loglistener_status, loglistener_alarm, and loglistener_business, without incurring charges.
                     * @param _serviceLogging Whether service logs are enabled to record logs generated by the LogListener service itself. Once enabled, it will create an internal log set cls_service_logging, and log topics including loglistener_status, loglistener_alarm, and loglistener_business, without incurring charges.
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
                     * 获取Regular cleanup time for offline machines in the machine group, in days, default setting 30 days.
                     * @return DelayCleanupTime Regular cleanup time for offline machines in the machine group, in days, default setting 30 days.
                     * 
                     */
                    int64_t GetDelayCleanupTime() const;

                    /**
                     * 设置Regular cleanup time for offline machines in the machine group, in days, default setting 30 days.
                     * @param _delayCleanupTime Regular cleanup time for offline machines in the machine group, in days, default setting 30 days.
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
                     * 获取Operating system type, 0: Linux, 1: Windows
                     * @return OSType Operating system type, 0: Linux, 1: Windows
                     * 
                     */
                    uint64_t GetOSType() const;

                    /**
                     * 设置Operating system type, 0: Linux, 1: Windows
                     * @param _oSType Operating system type, 0: Linux, 1: Windows
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
                     * Machine group ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Machine group name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Machine group type
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                    /**
                     * Creation time.
Time format: yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of tags bound to machine group
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether machine group auto-update is enabled
                     */
                    std::string m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * End time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * Whether service logs are enabled to record logs generated by the LogListener service itself. Once enabled, it will create an internal log set cls_service_logging, and log topics including loglistener_status, loglistener_alarm, and loglistener_business, without incurring charges.
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                    /**
                     * Regular cleanup time for offline machines in the machine group, in days, default setting 30 days.
                     */
                    int64_t m_delayCleanupTime;
                    bool m_delayCleanupTimeHasBeenSet;

                    /**
                     * Metadata information list of a machine group
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                    /**
                     * Operating system type, 0: Linux, 1: Windows
                     */
                    uint64_t m_oSType;
                    bool m_oSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPINFO_H_
