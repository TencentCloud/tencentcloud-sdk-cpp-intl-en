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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_

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
                * ModifyMachineGroup request structure.
                */
                class ModifyMachineGroupRequest : public AbstractModel
                {
                public:
                    ModifyMachineGroupRequest();
                    ~ModifyMachineGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Machine group Id
-Obtain the machine group Id through [Get Machine Group List](https://www.tencentcloud.com/document/product/614/56438?from_cn_redirect=1).
                     * @return GroupId Machine group Id
-Obtain the machine group Id through [Get Machine Group List](https://www.tencentcloud.com/document/product/614/56438?from_cn_redirect=1).
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Machine group Id
-Obtain the machine group Id through [Get Machine Group List](https://www.tencentcloud.com/document/product/614/56438?from_cn_redirect=1).
                     * @param _groupId Machine group Id
-Obtain the machine group Id through [Get Machine Group List](https://www.tencentcloud.com/document/product/614/56438?from_cn_redirect=1).
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
                     * 获取machine group name
Input limit:
-Cannot be an empty string
-Cannot contain character '|'
                     * @return GroupName machine group name
Input limit:
-Cannot be an empty string
-Cannot contain character '|'
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置machine group name
Input limit:
-Cannot be an empty string
-Cannot contain character '|'
                     * @param _groupName machine group name
Input limit:
-Cannot be an empty string
-Cannot contain character '|'
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
                     * 获取Machine group type. 
Type: ip; Values contains the string list of IP machines.
Type: label. Values contains the string list of tag machine groups.
                     * @return MachineGroupType Machine group type. 
Type: ip; Values contains the string list of IP machines.
Type: label. Values contains the string list of tag machine groups.
                     * 
                     */
                    MachineGroupTypeInfo GetMachineGroupType() const;

                    /**
                     * 设置Machine group type. 
Type: ip; Values contains the string list of IP machines.
Type: label. Values contains the string list of tag machine groups.
                     * @param _machineGroupType Machine group type. 
Type: ip; Values contains the string list of IP machines.
Type: label. Values contains the string list of tag machine groups.
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
                     * 获取Tag list
                     * @return Tags Tag list
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
                     * @param _tags Tag list
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
                     * 获取Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * @return UpdateStartTime Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * 
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 设置Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
                     * @param _updateStartTime Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
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
                     * 获取Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
                     * @return ServiceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
                     * 
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 设置Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
                     * @param _serviceLogging Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
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
                     * 获取Periodic offline cleanup time for machines in a machine group. Unit: day
                     * @return DelayCleanupTime Periodic offline cleanup time for machines in a machine group. Unit: day
                     * 
                     */
                    int64_t GetDelayCleanupTime() const;

                    /**
                     * 设置Periodic offline cleanup time for machines in a machine group. Unit: day
                     * @param _delayCleanupTime Periodic offline cleanup time for machines in a machine group. Unit: day
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

                private:

                    /**
                     * Machine group Id
-Obtain the machine group Id through [Get Machine Group List](https://www.tencentcloud.com/document/product/614/56438?from_cn_redirect=1).
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * machine group name
Input limit:
-Cannot be an empty string
-Cannot contain character '|'
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Machine group type. 
Type: ip; Values contains the string list of IP machines.
Type: label. Values contains the string list of tag machine groups.
                     */
                    MachineGroupTypeInfo m_machineGroupType;
                    bool m_machineGroupTypeHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable automatic update for the machine group
                     */
                    bool m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * Start time of upgrade. It is suggested to upgrade LogListener in the off-peak period of the business.
Time format: HH:mm:ss.
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
                     * Whether to enable the service log to record the logs generated by the LogListener service itself. After it is enabled, the internal logset `cls_service_logging` and the `loglistener_status`, `loglistener_alarm`, and `loglistener_business` log topics will be created, which will not incur fees.
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                    /**
                     * Periodic offline cleanup time for machines in a machine group. Unit: day
                     */
                    int64_t m_delayCleanupTime;
                    bool m_delayCleanupTimeHasBeenSet;

                    /**
                     * Metadata information list of a machine group
                     */
                    std::vector<MetaTagInfo> m_metaTags;
                    bool m_metaTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYMACHINEGROUPREQUEST_H_
