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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupList request structure.
                */
                class DescribePolicyGroupListRequest : public AbstractModel
                {
                public:
                    DescribePolicyGroupListRequest();
                    ~DescribePolicyGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value is fixed to monitor.
                     * @return Module The value is fixed to monitor.
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to monitor.
                     * @param Module The value is fixed to monitor.
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取Number of parameters that can be returned on each page. Value range: 1 - 100.
                     * @return Limit Number of parameters that can be returned on each page. Value range: 1 - 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of parameters that can be returned on each page. Value range: 1 - 100.
                     * @param Limit Number of parameters that can be returned on each page. Value range: 1 - 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Parameter offset on each page. The value starts from 0.
                     * @return Offset Parameter offset on each page. The value starts from 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Parameter offset on each page. The value starts from 0.
                     * @param Offset Parameter offset on each page. The value starts from 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Search by policy name.
                     * @return Like Search by policy name.
                     */
                    std::string GetLike() const;

                    /**
                     * 设置Search by policy name.
                     * @param Like Search by policy name.
                     */
                    void SetLike(const std::string& _like);

                    /**
                     * 判断参数 Like 是否已赋值
                     * @return Like 是否已赋值
                     */
                    bool LikeHasBeenSet() const;

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
                     * 获取Sort by update time. Valid values: asc and desc.
                     * @return UpdateTimeOrder Sort by update time. Valid values: asc and desc.
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置Sort by update time. Valid values: asc and desc.
                     * @param UpdateTimeOrder Sort by update time. Valid values: asc and desc.
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取Project ID list.
                     * @return ProjectIds Project ID list.
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID list.
                     * @param ProjectIds Project ID list.
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取List of alarm policy types.
                     * @return ViewNames List of alarm policy types.
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置List of alarm policy types.
                     * @param ViewNames List of alarm policy types.
                     */
                    void SetViewNames(const std::vector<std::string>& _viewNames);

                    /**
                     * 判断参数 ViewNames 是否已赋值
                     * @return ViewNames 是否已赋值
                     */
                    bool ViewNamesHasBeenSet() const;

                    /**
                     * 获取Whether to filter policy groups without recipients. The value 1 indicates that policy groups without recipients will be filtered. The value 0 indicates that policy groups without recipients will not be filtered.
                     * @return FilterUnuseReceiver Whether to filter policy groups without recipients. The value 1 indicates that policy groups without recipients will be filtered. The value 0 indicates that policy groups without recipients will not be filtered.
                     */
                    int64_t GetFilterUnuseReceiver() const;

                    /**
                     * 设置Whether to filter policy groups without recipients. The value 1 indicates that policy groups without recipients will be filtered. The value 0 indicates that policy groups without recipients will not be filtered.
                     * @param FilterUnuseReceiver Whether to filter policy groups without recipients. The value 1 indicates that policy groups without recipients will be filtered. The value 0 indicates that policy groups without recipients will not be filtered.
                     */
                    void SetFilterUnuseReceiver(const int64_t& _filterUnuseReceiver);

                    /**
                     * 判断参数 FilterUnuseReceiver 是否已赋值
                     * @return FilterUnuseReceiver 是否已赋值
                     */
                    bool FilterUnuseReceiverHasBeenSet() const;

                    /**
                     * 获取Filter by recipient group.
                     * @return Receivers Filter by recipient group.
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置Filter by recipient group.
                     * @param Receivers Filter by recipient group.
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Filter by recipient.
                     * @return ReceiverUserList Filter by recipient.
                     */
                    std::vector<std::string> GetReceiverUserList() const;

                    /**
                     * 设置Filter by recipient.
                     * @param ReceiverUserList Filter by recipient.
                     */
                    void SetReceiverUserList(const std::vector<std::string>& _receiverUserList);

                    /**
                     * 判断参数 ReceiverUserList 是否已赋值
                     * @return ReceiverUserList 是否已赋值
                     */
                    bool ReceiverUserListHasBeenSet() const;

                    /**
                     * 获取Dimension set field (json string), for example, [[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]].
                     * @return Dimensions Dimension set field (json string), for example, [[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]].
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置Dimension set field (json string), for example, [[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]].
                     * @param Dimensions Dimension set field (json string), for example, [[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]].
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Template-based policy group IDs, which are separated by commas.
                     * @return ConditionTempGroupId Template-based policy group IDs, which are separated by commas.
                     */
                    std::string GetConditionTempGroupId() const;

                    /**
                     * 设置Template-based policy group IDs, which are separated by commas.
                     * @param ConditionTempGroupId Template-based policy group IDs, which are separated by commas.
                     */
                    void SetConditionTempGroupId(const std::string& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                    /**
                     * 获取Filter by recipient or recipient group. The value 'user' indicates by recipient. The value 'group' indicates by recipient group.
                     * @return ReceiverType Filter by recipient or recipient group. The value 'user' indicates by recipient. The value 'group' indicates by recipient group.
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Filter by recipient or recipient group. The value 'user' indicates by recipient. The value 'group' indicates by recipient group.
                     * @param ReceiverType Filter by recipient or recipient group. The value 'user' indicates by recipient. The value 'group' indicates by recipient group.
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Filter conditions. Whether the alarm policy has been enabled or disabled
                     * @return IsOpen Filter conditions. Whether the alarm policy has been enabled or disabled
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置Filter conditions. Whether the alarm policy has been enabled or disabled
                     * @param IsOpen Filter conditions. Whether the alarm policy has been enabled or disabled
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Number of parameters that can be returned on each page. Value range: 1 - 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Parameter offset on each page. The value starts from 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Search by policy name.
                     */
                    std::string m_like;
                    bool m_likeHasBeenSet;

                    /**
                     * Instance group ID.
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * Sort by update time. Valid values: asc and desc.
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * Project ID list.
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * List of alarm policy types.
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * Whether to filter policy groups without recipients. The value 1 indicates that policy groups without recipients will be filtered. The value 0 indicates that policy groups without recipients will not be filtered.
                     */
                    int64_t m_filterUnuseReceiver;
                    bool m_filterUnuseReceiverHasBeenSet;

                    /**
                     * Filter by recipient group.
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Filter by recipient.
                     */
                    std::vector<std::string> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * Dimension set field (json string), for example, [[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]].
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Template-based policy group IDs, which are separated by commas.
                     */
                    std::string m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                    /**
                     * Filter by recipient or recipient group. The value 'user' indicates by recipient. The value 'group' indicates by recipient group.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Filter conditions. Whether the alarm policy has been enabled or disabled
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_
