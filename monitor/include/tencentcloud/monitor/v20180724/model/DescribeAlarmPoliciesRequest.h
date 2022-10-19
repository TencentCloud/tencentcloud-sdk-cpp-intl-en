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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyTriggerTask.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmPolicies request structure.
                */
                class DescribeAlarmPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmPoliciesRequest();
                    ~DescribeAlarmPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Value fixed at "monitor"
                     * @return Module Value fixed at "monitor"
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Value fixed at "monitor"
                     * @param Module Value fixed at "monitor"
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Page number starting from 1. Default value: 1
                     * @return PageNumber Page number starting from 1. Default value: 1
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number starting from 1. Default value: 1
                     * @param PageNumber Page number starting from 1. Default value: 1
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: 1–100. Default value: 20
                     * @return PageSize Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: 1–100. Default value: 20
                     * @param PageSize Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Fuzzy search by policy name
                     * @return PolicyName Fuzzy search by policy name
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Fuzzy search by policy name
                     * @param PolicyName Fuzzy search by policy name
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * @return MonitorTypes Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     */
                    std::vector<std::string> GetMonitorTypes() const;

                    /**
                     * 设置Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     * @param MonitorTypes Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     */
                    void SetMonitorTypes(const std::vector<std::string>& _monitorTypes);

                    /**
                     * 判断参数 MonitorTypes 是否已赋值
                     * @return MonitorTypes 是否已赋值
                     */
                    bool MonitorTypesHasBeenSet() const;

                    /**
                     * 获取Filter by namespace. For the values of different policy types, please see:
[Policy Type List](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1)
                     * @return Namespaces Filter by namespace. For the values of different policy types, please see:
[Policy Type List](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1)
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置Filter by namespace. For the values of different policy types, please see:
[Policy Type List](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1)
                     * @param Namespaces Filter by namespace. For the values of different policy types, please see:
[Policy Type List](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1)
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取The alarm object list, which is a JSON string. The outer array corresponds to multiple instances, and the inner array is the dimension of an object. For example, “CVM - Basic Monitor” can be written as:
`[ {"Dimensions": {"unInstanceId": "ins-qr8d555g"}}, {"Dimensions": {"unInstanceId": "ins-qr8d555h"}} ]`
You can also refer to the “Example 2” below.

For more information on the parameter samples of different Tencent Cloud services, see [Product Policy Type and Dimension Information](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1).

Note: If `1` is passed in for `NeedCorrespondence`, the relationship between a policy and an instance needs to be returned. You can pass in up to 20 alarm object dimensions to avoid request timeout.
                     * @return Dimensions The alarm object list, which is a JSON string. The outer array corresponds to multiple instances, and the inner array is the dimension of an object. For example, “CVM - Basic Monitor” can be written as:
`[ {"Dimensions": {"unInstanceId": "ins-qr8d555g"}}, {"Dimensions": {"unInstanceId": "ins-qr8d555h"}} ]`
You can also refer to the “Example 2” below.

For more information on the parameter samples of different Tencent Cloud services, see [Product Policy Type and Dimension Information](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1).

Note: If `1` is passed in for `NeedCorrespondence`, the relationship between a policy and an instance needs to be returned. You can pass in up to 20 alarm object dimensions to avoid request timeout.
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置The alarm object list, which is a JSON string. The outer array corresponds to multiple instances, and the inner array is the dimension of an object. For example, “CVM - Basic Monitor” can be written as:
`[ {"Dimensions": {"unInstanceId": "ins-qr8d555g"}}, {"Dimensions": {"unInstanceId": "ins-qr8d555h"}} ]`
You can also refer to the “Example 2” below.

For more information on the parameter samples of different Tencent Cloud services, see [Product Policy Type and Dimension Information](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1).

Note: If `1` is passed in for `NeedCorrespondence`, the relationship between a policy and an instance needs to be returned. You can pass in up to 20 alarm object dimensions to avoid request timeout.
                     * @param Dimensions The alarm object list, which is a JSON string. The outer array corresponds to multiple instances, and the inner array is the dimension of an object. For example, “CVM - Basic Monitor” can be written as:
`[ {"Dimensions": {"unInstanceId": "ins-qr8d555g"}}, {"Dimensions": {"unInstanceId": "ins-qr8d555h"}} ]`
You can also refer to the “Example 2” below.

For more information on the parameter samples of different Tencent Cloud services, see [Product Policy Type and Dimension Information](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1).

Note: If `1` is passed in for `NeedCorrespondence`, the relationship between a policy and an instance needs to be returned. You can pass in up to 20 alarm object dimensions to avoid request timeout.
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Search by recipient. You can get the user list with the API [ListUsers](https://intl.cloud.tencent.com/document/product/598/34587?from_cn_redirect=1) in “Cloud Access Management” or query the sub-user information with the API [GetUser](https://intl.cloud.tencent.com/document/product/598/34590?from_cn_redirect=1). The `Uid` field in the returned result should be entered here.
                     * @return ReceiverUids Search by recipient. You can get the user list with the API [ListUsers](https://intl.cloud.tencent.com/document/product/598/34587?from_cn_redirect=1) in “Cloud Access Management” or query the sub-user information with the API [GetUser](https://intl.cloud.tencent.com/document/product/598/34590?from_cn_redirect=1). The `Uid` field in the returned result should be entered here.
                     */
                    std::vector<int64_t> GetReceiverUids() const;

                    /**
                     * 设置Search by recipient. You can get the user list with the API [ListUsers](https://intl.cloud.tencent.com/document/product/598/34587?from_cn_redirect=1) in “Cloud Access Management” or query the sub-user information with the API [GetUser](https://intl.cloud.tencent.com/document/product/598/34590?from_cn_redirect=1). The `Uid` field in the returned result should be entered here.
                     * @param ReceiverUids Search by recipient. You can get the user list with the API [ListUsers](https://intl.cloud.tencent.com/document/product/598/34587?from_cn_redirect=1) in “Cloud Access Management” or query the sub-user information with the API [GetUser](https://intl.cloud.tencent.com/document/product/598/34590?from_cn_redirect=1). The `Uid` field in the returned result should be entered here.
                     */
                    void SetReceiverUids(const std::vector<int64_t>& _receiverUids);

                    /**
                     * 判断参数 ReceiverUids 是否已赋值
                     * @return ReceiverUids 是否已赋值
                     */
                    bool ReceiverUidsHasBeenSet() const;

                    /**
                     * 获取Search by recipient group. You can get the user group list with the API [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) in “Cloud Access Management” or query the user group list where a sub-user is in with the API [ListGroupsForUser](https://intl.cloud.tencent.com/document/product/598/34588?from_cn_redirect=1). The `GroupId` field in the returned result should be entered here.
                     * @return ReceiverGroups Search by recipient group. You can get the user group list with the API [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) in “Cloud Access Management” or query the user group list where a sub-user is in with the API [ListGroupsForUser](https://intl.cloud.tencent.com/document/product/598/34588?from_cn_redirect=1). The `GroupId` field in the returned result should be entered here.
                     */
                    std::vector<int64_t> GetReceiverGroups() const;

                    /**
                     * 设置Search by recipient group. You can get the user group list with the API [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) in “Cloud Access Management” or query the user group list where a sub-user is in with the API [ListGroupsForUser](https://intl.cloud.tencent.com/document/product/598/34588?from_cn_redirect=1). The `GroupId` field in the returned result should be entered here.
                     * @param ReceiverGroups Search by recipient group. You can get the user group list with the API [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) in “Cloud Access Management” or query the user group list where a sub-user is in with the API [ListGroupsForUser](https://intl.cloud.tencent.com/document/product/598/34588?from_cn_redirect=1). The `GroupId` field in the returned result should be entered here.
                     */
                    void SetReceiverGroups(const std::vector<int64_t>& _receiverGroups);

                    /**
                     * 判断参数 ReceiverGroups 是否已赋值
                     * @return ReceiverGroups 是否已赋值
                     */
                    bool ReceiverGroupsHasBeenSet() const;

                    /**
                     * 获取Filter by default policy. Valid values: DEFAULT (display default policy), NOT_DEFAULT (display non-default policies). If this parameter is left empty, all policies will be displayed
                     * @return PolicyType Filter by default policy. Valid values: DEFAULT (display default policy), NOT_DEFAULT (display non-default policies). If this parameter is left empty, all policies will be displayed
                     */
                    std::vector<std::string> GetPolicyType() const;

                    /**
                     * 设置Filter by default policy. Valid values: DEFAULT (display default policy), NOT_DEFAULT (display non-default policies). If this parameter is left empty, all policies will be displayed
                     * @param PolicyType Filter by default policy. Valid values: DEFAULT (display default policy), NOT_DEFAULT (display non-default policies). If this parameter is left empty, all policies will be displayed
                     */
                    void SetPolicyType(const std::vector<std::string>& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取Sort by field. For example, to sort by the last modification time, use Field: "UpdateTime".
                     * @return Field Sort by field. For example, to sort by the last modification time, use Field: "UpdateTime".
                     */
                    std::string GetField() const;

                    /**
                     * 设置Sort by field. For example, to sort by the last modification time, use Field: "UpdateTime".
                     * @param Field Sort by field. For example, to sort by the last modification time, use Field: "UpdateTime".
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Sort order. Valid values: ASC (ascending), DESC (descending)
                     * @return Order Sort order. Valid values: ASC (ascending), DESC (descending)
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. Valid values: ASC (ascending), DESC (descending)
                     * @param Order Sort order. Valid values: ASC (ascending), DESC (descending)
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取ID array of the policy project, which can be viewed on the following page:
[Project Management](https://console.cloud.tencent.com/project)
                     * @return ProjectIds ID array of the policy project, which can be viewed on the following page:
[Project Management](https://console.cloud.tencent.com/project)
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置ID array of the policy project, which can be viewed on the following page:
[Project Management](https://console.cloud.tencent.com/project)
                     * @param ProjectIds ID array of the policy project, which can be viewed on the following page:
[Project Management](https://console.cloud.tencent.com/project)
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取ID list of the notification template, which can be obtained by querying the notification template list.
It can be queried with the API [DescribeAlarmNotices](https://intl.cloud.tencent.com/document/product/248/51280?from_cn_redirect=1).
                     * @return NoticeIds ID list of the notification template, which can be obtained by querying the notification template list.
It can be queried with the API [DescribeAlarmNotices](https://intl.cloud.tencent.com/document/product/248/51280?from_cn_redirect=1).
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置ID list of the notification template, which can be obtained by querying the notification template list.
It can be queried with the API [DescribeAlarmNotices](https://intl.cloud.tencent.com/document/product/248/51280?from_cn_redirect=1).
                     * @param NoticeIds ID list of the notification template, which can be obtained by querying the notification template list.
It can be queried with the API [DescribeAlarmNotices](https://intl.cloud.tencent.com/document/product/248/51280?from_cn_redirect=1).
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取Filter by trigger condition. Valid values: STATIC (display policies with static threshold), DYNAMIC (display policies with dynamic threshold). If this parameter is left empty, all policies will be displayed
                     * @return RuleTypes Filter by trigger condition. Valid values: STATIC (display policies with static threshold), DYNAMIC (display policies with dynamic threshold). If this parameter is left empty, all policies will be displayed
                     */
                    std::vector<std::string> GetRuleTypes() const;

                    /**
                     * 设置Filter by trigger condition. Valid values: STATIC (display policies with static threshold), DYNAMIC (display policies with dynamic threshold). If this parameter is left empty, all policies will be displayed
                     * @param RuleTypes Filter by trigger condition. Valid values: STATIC (display policies with static threshold), DYNAMIC (display policies with dynamic threshold). If this parameter is left empty, all policies will be displayed
                     */
                    void SetRuleTypes(const std::vector<std::string>& _ruleTypes);

                    /**
                     * 判断参数 RuleTypes 是否已赋值
                     * @return RuleTypes 是否已赋值
                     */
                    bool RuleTypesHasBeenSet() const;

                    /**
                     * 获取Filter by alarm status. Valid values: [1]: enabled; [0]: disabled; [0, 1]: all
                     * @return Enable Filter by alarm status. Valid values: [1]: enabled; [0]: disabled; [0, 1]: all
                     */
                    std::vector<int64_t> GetEnable() const;

                    /**
                     * 设置Filter by alarm status. Valid values: [1]: enabled; [0]: disabled; [0, 1]: all
                     * @param Enable Filter by alarm status. Valid values: [1]: enabled; [0]: disabled; [0, 1]: all
                     */
                    void SetEnable(const std::vector<int64_t>& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取If `1` is passed in, alarm policies with no notification rules configured are queried. If it is left empty or other values are passed in, all alarm policies are queried.
                     * @return NotBindingNoticeRule If `1` is passed in, alarm policies with no notification rules configured are queried. If it is left empty or other values are passed in, all alarm policies are queried.
                     */
                    int64_t GetNotBindingNoticeRule() const;

                    /**
                     * 设置If `1` is passed in, alarm policies with no notification rules configured are queried. If it is left empty or other values are passed in, all alarm policies are queried.
                     * @param NotBindingNoticeRule If `1` is passed in, alarm policies with no notification rules configured are queried. If it is left empty or other values are passed in, all alarm policies are queried.
                     */
                    void SetNotBindingNoticeRule(const int64_t& _notBindingNoticeRule);

                    /**
                     * 判断参数 NotBindingNoticeRule 是否已赋值
                     * @return NotBindingNoticeRule 是否已赋值
                     */
                    bool NotBindingNoticeRuleHasBeenSet() const;

                    /**
                     * 获取Instance group ID.
                     * @return InstanceGroupId Instance group ID.
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置Instance group ID.
                     * @param InstanceGroupId Instance group ID.
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether the relationship between a policy and the input parameter filter dimension is required. `1`: Yes. `0`: No. Default value: `0`.
                     * @return NeedCorrespondence Whether the relationship between a policy and the input parameter filter dimension is required. `1`: Yes. `0`: No. Default value: `0`.
                     */
                    int64_t GetNeedCorrespondence() const;

                    /**
                     * 设置Whether the relationship between a policy and the input parameter filter dimension is required. `1`: Yes. `0`: No. Default value: `0`.
                     * @param NeedCorrespondence Whether the relationship between a policy and the input parameter filter dimension is required. `1`: Yes. `0`: No. Default value: `0`.
                     */
                    void SetNeedCorrespondence(const int64_t& _needCorrespondence);

                    /**
                     * 判断参数 NeedCorrespondence 是否已赋值
                     * @return NeedCorrespondence 是否已赋值
                     */
                    bool NeedCorrespondenceHasBeenSet() const;

                    /**
                     * 获取Filter alarm policy by triggered task (such as auto scaling task). Up to 10 tasks can be specified.
                     * @return TriggerTasks Filter alarm policy by triggered task (such as auto scaling task). Up to 10 tasks can be specified.
                     */
                    std::vector<AlarmPolicyTriggerTask> GetTriggerTasks() const;

                    /**
                     * 设置Filter alarm policy by triggered task (such as auto scaling task). Up to 10 tasks can be specified.
                     * @param TriggerTasks Filter alarm policy by triggered task (such as auto scaling task). Up to 10 tasks can be specified.
                     */
                    void SetTriggerTasks(const std::vector<AlarmPolicyTriggerTask>& _triggerTasks);

                    /**
                     * 判断参数 TriggerTasks 是否已赋值
                     * @return TriggerTasks 是否已赋值
                     */
                    bool TriggerTasksHasBeenSet() const;

                    /**
                     * 获取Filter by quick alarm policy. If this parameter is left empty, all policies are displayed. `ONECLICK`: Display quick alarm policies; `NOT_ONECLICK`: Display non-quick alarm policies.
                     * @return OneClickPolicyType Filter by quick alarm policy. If this parameter is left empty, all policies are displayed. `ONECLICK`: Display quick alarm policies; `NOT_ONECLICK`: Display non-quick alarm policies.
                     */
                    std::vector<std::string> GetOneClickPolicyType() const;

                    /**
                     * 设置Filter by quick alarm policy. If this parameter is left empty, all policies are displayed. `ONECLICK`: Display quick alarm policies; `NOT_ONECLICK`: Display non-quick alarm policies.
                     * @param OneClickPolicyType Filter by quick alarm policy. If this parameter is left empty, all policies are displayed. `ONECLICK`: Display quick alarm policies; `NOT_ONECLICK`: Display non-quick alarm policies.
                     */
                    void SetOneClickPolicyType(const std::vector<std::string>& _oneClickPolicyType);

                    /**
                     * 判断参数 OneClickPolicyType 是否已赋值
                     * @return OneClickPolicyType 是否已赋值
                     */
                    bool OneClickPolicyTypeHasBeenSet() const;

                    /**
                     * 获取Whether the returned result filters policies associated with all objects. Valid values: `1` (Yes), `0` (No).
                     * @return NotBindAll Whether the returned result filters policies associated with all objects. Valid values: `1` (Yes), `0` (No).
                     */
                    int64_t GetNotBindAll() const;

                    /**
                     * 设置Whether the returned result filters policies associated with all objects. Valid values: `1` (Yes), `0` (No).
                     * @param NotBindAll Whether the returned result filters policies associated with all objects. Valid values: `1` (Yes), `0` (No).
                     */
                    void SetNotBindAll(const int64_t& _notBindAll);

                    /**
                     * 判断参数 NotBindAll 是否已赋值
                     * @return NotBindAll 是否已赋值
                     */
                    bool NotBindAllHasBeenSet() const;

                    /**
                     * 获取Whether the returned result filters policies associated with instance groups. Valid values: `1` (Yes), `0` (No).
                     * @return NotInstanceGroup Whether the returned result filters policies associated with instance groups. Valid values: `1` (Yes), `0` (No).
                     */
                    int64_t GetNotInstanceGroup() const;

                    /**
                     * 设置Whether the returned result filters policies associated with instance groups. Valid values: `1` (Yes), `0` (No).
                     * @param NotInstanceGroup Whether the returned result filters policies associated with instance groups. Valid values: `1` (Yes), `0` (No).
                     */
                    void SetNotInstanceGroup(const int64_t& _notInstanceGroup);

                    /**
                     * 判断参数 NotInstanceGroup 是否已赋值
                     * @return NotInstanceGroup 是否已赋值
                     */
                    bool NotInstanceGroupHasBeenSet() const;

                    /**
                     * 获取Filter policies by tag
                     * @return Tags Filter policies by tag
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Filter policies by tag
                     * @param Tags Filter policies by tag
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Value fixed at "monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Page number starting from 1. Default value: 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of entries per page. Value range: 1–100. Default value: 20
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Fuzzy search by policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Filter by monitor type. Valid values: MT_QCE (Tencent Cloud service monitoring). If this parameter is left empty, all will be queried by default
                     */
                    std::vector<std::string> m_monitorTypes;
                    bool m_monitorTypesHasBeenSet;

                    /**
                     * Filter by namespace. For the values of different policy types, please see:
[Policy Type List](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1)
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * The alarm object list, which is a JSON string. The outer array corresponds to multiple instances, and the inner array is the dimension of an object. For example, “CVM - Basic Monitor” can be written as:
`[ {"Dimensions": {"unInstanceId": "ins-qr8d555g"}}, {"Dimensions": {"unInstanceId": "ins-qr8d555h"}} ]`
You can also refer to the “Example 2” below.

For more information on the parameter samples of different Tencent Cloud services, see [Product Policy Type and Dimension Information](https://intl.cloud.tencent.com/document/product/248/50397?from_cn_redirect=1).

Note: If `1` is passed in for `NeedCorrespondence`, the relationship between a policy and an instance needs to be returned. You can pass in up to 20 alarm object dimensions to avoid request timeout.
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Search by recipient. You can get the user list with the API [ListUsers](https://intl.cloud.tencent.com/document/product/598/34587?from_cn_redirect=1) in “Cloud Access Management” or query the sub-user information with the API [GetUser](https://intl.cloud.tencent.com/document/product/598/34590?from_cn_redirect=1). The `Uid` field in the returned result should be entered here.
                     */
                    std::vector<int64_t> m_receiverUids;
                    bool m_receiverUidsHasBeenSet;

                    /**
                     * Search by recipient group. You can get the user group list with the API [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) in “Cloud Access Management” or query the user group list where a sub-user is in with the API [ListGroupsForUser](https://intl.cloud.tencent.com/document/product/598/34588?from_cn_redirect=1). The `GroupId` field in the returned result should be entered here.
                     */
                    std::vector<int64_t> m_receiverGroups;
                    bool m_receiverGroupsHasBeenSet;

                    /**
                     * Filter by default policy. Valid values: DEFAULT (display default policy), NOT_DEFAULT (display non-default policies). If this parameter is left empty, all policies will be displayed
                     */
                    std::vector<std::string> m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * Sort by field. For example, to sort by the last modification time, use Field: "UpdateTime".
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Sort order. Valid values: ASC (ascending), DESC (descending)
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * ID array of the policy project, which can be viewed on the following page:
[Project Management](https://console.cloud.tencent.com/project)
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * ID list of the notification template, which can be obtained by querying the notification template list.
It can be queried with the API [DescribeAlarmNotices](https://intl.cloud.tencent.com/document/product/248/51280?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Filter by trigger condition. Valid values: STATIC (display policies with static threshold), DYNAMIC (display policies with dynamic threshold). If this parameter is left empty, all policies will be displayed
                     */
                    std::vector<std::string> m_ruleTypes;
                    bool m_ruleTypesHasBeenSet;

                    /**
                     * Filter by alarm status. Valid values: [1]: enabled; [0]: disabled; [0, 1]: all
                     */
                    std::vector<int64_t> m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * If `1` is passed in, alarm policies with no notification rules configured are queried. If it is left empty or other values are passed in, all alarm policies are queried.
                     */
                    int64_t m_notBindingNoticeRule;
                    bool m_notBindingNoticeRuleHasBeenSet;

                    /**
                     * Instance group ID.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Whether the relationship between a policy and the input parameter filter dimension is required. `1`: Yes. `0`: No. Default value: `0`.
                     */
                    int64_t m_needCorrespondence;
                    bool m_needCorrespondenceHasBeenSet;

                    /**
                     * Filter alarm policy by triggered task (such as auto scaling task). Up to 10 tasks can be specified.
                     */
                    std::vector<AlarmPolicyTriggerTask> m_triggerTasks;
                    bool m_triggerTasksHasBeenSet;

                    /**
                     * Filter by quick alarm policy. If this parameter is left empty, all policies are displayed. `ONECLICK`: Display quick alarm policies; `NOT_ONECLICK`: Display non-quick alarm policies.
                     */
                    std::vector<std::string> m_oneClickPolicyType;
                    bool m_oneClickPolicyTypeHasBeenSet;

                    /**
                     * Whether the returned result filters policies associated with all objects. Valid values: `1` (Yes), `0` (No).
                     */
                    int64_t m_notBindAll;
                    bool m_notBindAllHasBeenSet;

                    /**
                     * Whether the returned result filters policies associated with instance groups. Valid values: `1` (Yes), `0` (No).
                     */
                    int64_t m_notInstanceGroup;
                    bool m_notInstanceGroupHasBeenSet;

                    /**
                     * Filter policies by tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMPOLICIESREQUEST_H_
