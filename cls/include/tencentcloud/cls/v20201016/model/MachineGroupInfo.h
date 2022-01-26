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
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group ID
                     * @param GroupId Machine group ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Machine group name
                     * @return GroupName Machine group name
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Machine group name
                     * @param GroupName Machine group name
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Machine group type
                     * @return MachineGroupType Machine group type
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置Machine group type
                     * @param MachineGroupType Machine group type
                     */
                    void SetMachineGroupType(const MachineGroupTypeInfo& _machineGroupType);

                    /**
                     * 判断参数 MachineGroupType 是否已赋值
                     * @return MachineGroupType 是否已赋值
                     */
                    bool MachineGroupTypeHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of tags bound to machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags List of tags bound to machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Tags List of tags bound to machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic update for the machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoUpdate Whether to enable automatic update for the machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetAutoUpdate() const;

                    /**
                     * 设置Whether to enable automatic update for the machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AutoUpdate Whether to enable automatic update for the machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAutoUpdate(const std::string& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取Update start time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateStartTime Update start time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置Update start time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UpdateStartTime Update start time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUpdateStartTime(const std::string& _updateStartTime);

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取Update end time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UpdateEndTime Update end time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 设置Update end time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param UpdateEndTime Update end time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUpdateEndTime(const std::string& _updateEndTime);

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ServiceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ServiceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetServiceLogging(const bool& _serviceLogging);

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     */
                    bool ServiceLoggingHasBeenSet() const;

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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of tags bound to machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable automatic update for the machine group
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Update start time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * Update end time. We recommend you update LogListener during off-peak hours.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEGROUPINFO_H_
