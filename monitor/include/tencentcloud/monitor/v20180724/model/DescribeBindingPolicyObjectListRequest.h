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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListDimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeBindingPolicyObjectList request structure.
                */
                class DescribeBindingPolicyObjectListRequest : public AbstractModel
                {
                public:
                    DescribeBindingPolicyObjectListRequest();
                    ~DescribeBindingPolicyObjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value is fixed to monitor.
                     * @return Module The value is fixed to monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to monitor.
                     * @param _module The value is fixed to monitor.
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
                     * 获取Policy group ID. If the ID is in the format of “policy-xxxx”, please enter it in the `PolicyId` field. Enter 0 in this field.
                     * @return GroupId Policy group ID. If the ID is in the format of “policy-xxxx”, please enter it in the `PolicyId` field. Enter 0 in this field.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Policy group ID. If the ID is in the format of “policy-xxxx”, please enter it in the `PolicyId` field. Enter 0 in this field.
                     * @param _groupId Policy group ID. If the ID is in the format of “policy-xxxx”, please enter it in the `PolicyId` field. Enter 0 in this field.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Alarm policy ID in the format of “policy-xxxx”. If a value has been entered in this field, you can enter 0 in the `GroupId` field.
                     * @return PolicyId Alarm policy ID in the format of “policy-xxxx”. If a value has been entered in this field, you can enter 0 in the `GroupId` field.
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Alarm policy ID in the format of “policy-xxxx”. If a value has been entered in this field, you can enter 0 in the `GroupId` field.
                     * @param _policyId Alarm policy ID in the format of “policy-xxxx”. If a value has been entered in this field, you can enter 0 in the `GroupId` field.
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
                     * 获取The number of alarm objects returned each time. Value range: 1-100. Default value: 20.
                     * @return Limit The number of alarm objects returned each time. Value range: 1-100. Default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of alarm objects returned each time. Value range: 1-100. Default value: 20.
                     * @param _limit The number of alarm objects returned each time. Value range: 1-100. Default value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which starts from 0 and is set to 0 by default. For example, the parameter `Offset=0&Limit=20` returns the zeroth to 19th alarm objects, and `Offset=20&Limit=20` returns the 20th to 39th alarm objects, and so on.
                     * @return Offset Offset, which starts from 0 and is set to 0 by default. For example, the parameter `Offset=0&Limit=20` returns the zeroth to 19th alarm objects, and `Offset=20&Limit=20` returns the 20th to 39th alarm objects, and so on.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which starts from 0 and is set to 0 by default. For example, the parameter `Offset=0&Limit=20` returns the zeroth to 19th alarm objects, and `Offset=20&Limit=20` returns the 20th to 39th alarm objects, and so on.
                     * @param _offset Offset, which starts from 0 and is set to 0 by default. For example, the parameter `Offset=0&Limit=20` returns the zeroth to 19th alarm objects, and `Offset=20&Limit=20` returns the 20th to 39th alarm objects, and so on.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Dimensions of filtering objects.
                     * @return Dimensions Dimensions of filtering objects.
                     * 
                     */
                    std::vector<DescribeBindingPolicyObjectListDimension> GetDimensions() const;

                    /**
                     * 设置Dimensions of filtering objects.
                     * @param _dimensions Dimensions of filtering objects.
                     * 
                     */
                    void SetDimensions(const std::vector<DescribeBindingPolicyObjectListDimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * The value is fixed to monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Policy group ID. If the ID is in the format of “policy-xxxx”, please enter it in the `PolicyId` field. Enter 0 in this field.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Alarm policy ID in the format of “policy-xxxx”. If a value has been entered in this field, you can enter 0 in the `GroupId` field.
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The number of alarm objects returned each time. Value range: 1-100. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which starts from 0 and is set to 0 by default. For example, the parameter `Offset=0&Limit=20` returns the zeroth to 19th alarm objects, and `Offset=20&Limit=20` returns the 20th to 39th alarm objects, and so on.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Dimensions of filtering objects.
                     */
                    std::vector<DescribeBindingPolicyObjectListDimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEBINDINGPOLICYOBJECTLISTREQUEST_H_
