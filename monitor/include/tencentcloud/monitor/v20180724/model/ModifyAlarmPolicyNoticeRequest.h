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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmHierarchicalNotice.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmPolicyNotice request structure.
                */
                class ModifyAlarmPolicyNoticeRequest : public AbstractModel
                {
                public:
                    ModifyAlarmPolicyNoticeRequest();
                    ~ModifyAlarmPolicyNoticeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name, which is specified as `monitor`.
                     * @return Module Module name, which is specified as `monitor`.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name, which is specified as `monitor`.
                     * @param _module Module name, which is specified as `monitor`.
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID. If both `PolicyIds` and this parameter are returned, only `PolicyIds` takes effect.
                     * @return PolicyId Alarm policy ID. If both `PolicyIds` and this parameter are returned, only `PolicyIds` takes effect.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID. If both `PolicyIds` and this parameter are returned, only `PolicyIds` takes effect.
                     * @param _policyId Alarm policy ID. If both `PolicyIds` and this parameter are returned, only `PolicyIds` takes effect.
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取List of alarm notification template IDs.
                     * @return NoticeIds List of alarm notification template IDs.
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置List of alarm notification template IDs.
                     * @param _noticeIds List of alarm notification template IDs.
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID array, which can be used to associate notification templates with multiple alarm policies. Max value: 30.
                     * @return PolicyIds Alarm policy ID array, which can be used to associate notification templates with multiple alarm policies. Max value: 30.
                     * 
                     */
                    std::vector<std::string> GetPolicyIds() const;

                    /**
                     * 设置Alarm policy ID array, which can be used to associate notification templates with multiple alarm policies. Max value: 30.
                     * @param _policyIds Alarm policy ID array, which can be used to associate notification templates with multiple alarm policies. Max value: 30.
                     * 
                     */
                    void SetPolicyIds(const std::vector<std::string>& _policyIds);

                    /**
                     * 判断参数 PolicyIds 是否已赋值
                     * @return PolicyIds 是否已赋值
                     * 
                     */
                    bool PolicyIdsHasBeenSet() const;

                    /**
                     * 获取Notification rules for different alarm levels
                     * @return HierarchicalNotices Notification rules for different alarm levels
                     * 
                     */
                    std::vector<AlarmHierarchicalNotice> GetHierarchicalNotices() const;

                    /**
                     * 设置Notification rules for different alarm levels
                     * @param _hierarchicalNotices Notification rules for different alarm levels
                     * 
                     */
                    void SetHierarchicalNotices(const std::vector<AlarmHierarchicalNotice>& _hierarchicalNotices);

                    /**
                     * 判断参数 HierarchicalNotices 是否已赋值
                     * @return HierarchicalNotices 是否已赋值
                     * 
                     */
                    bool HierarchicalNoticesHasBeenSet() const;

                private:

                    /**
                     * Module name, which is specified as `monitor`.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Alarm policy ID. If both `PolicyIds` and this parameter are returned, only `PolicyIds` takes effect.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * List of alarm notification template IDs.
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Alarm policy ID array, which can be used to associate notification templates with multiple alarm policies. Max value: 30.
                     */
                    std::vector<std::string> m_policyIds;
                    bool m_policyIdsHasBeenSet;

                    /**
                     * Notification rules for different alarm levels
                     */
                    std::vector<AlarmHierarchicalNotice> m_hierarchicalNotices;
                    bool m_hierarchicalNoticesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMPOLICYNOTICEREQUEST_H_
