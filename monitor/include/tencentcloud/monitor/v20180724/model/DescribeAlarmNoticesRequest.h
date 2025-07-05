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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * DescribeAlarmNotices request structure.
                */
                class DescribeAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNoticesRequest();
                    ~DescribeAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module name. Enter "monitor" here
                     * @return Module Module name. Enter "monitor" here
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置Module name. Enter "monitor" here
                     * @param _module Module name. Enter "monitor" here
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
                     * 获取Page number. Minimum value: 1
                     * @return PageNumber Page number. Minimum value: 1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Page number. Minimum value: 1
                     * @param _pageNumber Page number. Minimum value: 1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: 1–200
                     * @return PageSize Number of entries per page. Value range: 1–200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: 1–200
                     * @param _pageSize Number of entries per page. Value range: 1–200
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Sort by update time. Valid values: ASC (ascending), DESC (descending)
                     * @return Order Sort by update time. Valid values: ASC (ascending), DESC (descending)
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by update time. Valid values: ASC (ascending), DESC (descending)
                     * @param _order Sort by update time. Valid values: ASC (ascending), DESC (descending)
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Root account `uid`, which is used to create preset notifications
                     * @return OwnerUid Root account `uid`, which is used to create preset notifications
                     * 
                     */
                    int64_t GetOwnerUid() const;

                    /**
                     * 设置Root account `uid`, which is used to create preset notifications
                     * @param _ownerUid Root account `uid`, which is used to create preset notifications
                     * 
                     */
                    void SetOwnerUid(const int64_t& _ownerUid);

                    /**
                     * 判断参数 OwnerUid 是否已赋值
                     * @return OwnerUid 是否已赋值
                     * 
                     */
                    bool OwnerUidHasBeenSet() const;

                    /**
                     * 获取Alarm notification template name, which is used for fuzzy search
                     * @return Name Alarm notification template name, which is used for fuzzy search
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alarm notification template name, which is used for fuzzy search
                     * @param _name Alarm notification template name, which is used for fuzzy search
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Filter by recipient. The type of notified users should be selected for the alarm notification template. Valid values: USER (user), GROUP (user group). If this parameter is left empty, no filter by recipient will be performed
                     * @return ReceiverType Filter by recipient. The type of notified users should be selected for the alarm notification template. Valid values: USER (user), GROUP (user group). If this parameter is left empty, no filter by recipient will be performed
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Filter by recipient. The type of notified users should be selected for the alarm notification template. Valid values: USER (user), GROUP (user group). If this parameter is left empty, no filter by recipient will be performed
                     * @param _receiverType Filter by recipient. The type of notified users should be selected for the alarm notification template. Valid values: USER (user), GROUP (user group). If this parameter is left empty, no filter by recipient will be performed
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Recipient object list
                     * @return UserIds Recipient object list
                     * 
                     */
                    std::vector<int64_t> GetUserIds() const;

                    /**
                     * 设置Recipient object list
                     * @param _userIds Recipient object list
                     * 
                     */
                    void SetUserIds(const std::vector<int64_t>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取Recipient group list
                     * @return GroupIds Recipient group list
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置Recipient group list
                     * @param _groupIds Recipient group list
                     * 
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取Filter by notification template ID. If an empty array is passed in or if this parameter is left empty, the filter operation will not be performed.
                     * @return NoticeIds Filter by notification template ID. If an empty array is passed in or if this parameter is left empty, the filter operation will not be performed.
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置Filter by notification template ID. If an empty array is passed in or if this parameter is left empty, the filter operation will not be performed.
                     * @param _noticeIds Filter by notification template ID. If an empty array is passed in or if this parameter is left empty, the filter operation will not be performed.
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
                     * 获取Filter templates by tag
                     * @return Tags Filter templates by tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Filter templates by tag
                     * @param _tags Filter templates by tag
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
                     * 获取Schedule list
                     * @return OnCallFormIDs Schedule list
                     * 
                     */
                    std::vector<std::string> GetOnCallFormIDs() const;

                    /**
                     * 设置Schedule list
                     * @param _onCallFormIDs Schedule list
                     * 
                     */
                    void SetOnCallFormIDs(const std::vector<std::string>& _onCallFormIDs);

                    /**
                     * 判断参数 OnCallFormIDs 是否已赋值
                     * @return OnCallFormIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormIDsHasBeenSet() const;

                private:

                    /**
                     * Module name. Enter "monitor" here
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Page number. Minimum value: 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of entries per page. Value range: 1–200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sort by update time. Valid values: ASC (ascending), DESC (descending)
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Root account `uid`, which is used to create preset notifications
                     */
                    int64_t m_ownerUid;
                    bool m_ownerUidHasBeenSet;

                    /**
                     * Alarm notification template name, which is used for fuzzy search
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter by recipient. The type of notified users should be selected for the alarm notification template. Valid values: USER (user), GROUP (user group). If this parameter is left empty, no filter by recipient will be performed
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Recipient object list
                     */
                    std::vector<int64_t> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * Recipient group list
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * Filter by notification template ID. If an empty array is passed in or if this parameter is left empty, the filter operation will not be performed.
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * Filter templates by tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Schedule list
                     */
                    std::vector<std::string> m_onCallFormIDs;
                    bool m_onCallFormIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
