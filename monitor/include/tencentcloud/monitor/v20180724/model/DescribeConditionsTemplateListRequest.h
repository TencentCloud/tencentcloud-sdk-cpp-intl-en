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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_

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
                * DescribeConditionsTemplateList request structure.
                */
                class DescribeConditionsTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeConditionsTemplateListRequest();
                    ~DescribeConditionsTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The value is fixed to `monitor`.
                     * @return Module The value is fixed to `monitor`.
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The value is fixed to `monitor`.
                     * @param Module The value is fixed to `monitor`.
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取View name, which can be obtained via [DescribeAllNamespaces](https://intl.cloud.tencent.com/document/product/248/48683?from_cn_redirect=1). For the monitoring of Tencent Cloud services, the value of this parameter is `QceNamespacesNew.N.Id` of the output parameter of `DescribeAllNamespaces`, for example, `cvm_device`.
                     * @return ViewName View name, which can be obtained via [DescribeAllNamespaces](https://intl.cloud.tencent.com/document/product/248/48683?from_cn_redirect=1). For the monitoring of Tencent Cloud services, the value of this parameter is `QceNamespacesNew.N.Id` of the output parameter of `DescribeAllNamespaces`, for example, `cvm_device`.
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View name, which can be obtained via [DescribeAllNamespaces](https://intl.cloud.tencent.com/document/product/248/48683?from_cn_redirect=1). For the monitoring of Tencent Cloud services, the value of this parameter is `QceNamespacesNew.N.Id` of the output parameter of `DescribeAllNamespaces`, for example, `cvm_device`.
                     * @param ViewName View name, which can be obtained via [DescribeAllNamespaces](https://intl.cloud.tencent.com/document/product/248/48683?from_cn_redirect=1). For the monitoring of Tencent Cloud services, the value of this parameter is `QceNamespacesNew.N.Id` of the output parameter of `DescribeAllNamespaces`, for example, `cvm_device`.
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取Filter by trigger condition template name.
                     * @return GroupName Filter by trigger condition template name.
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Filter by trigger condition template name.
                     * @param GroupName Filter by trigger condition template name.
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Filter by trigger condition template ID.
                     * @return GroupID Filter by trigger condition template ID.
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置Filter by trigger condition template ID.
                     * @param GroupID Filter by trigger condition template ID.
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取Pagination parameter, which specifies the number of returned results per page. Value range: 1-100. Default value: 20.
                     * @return Limit Pagination parameter, which specifies the number of returned results per page. Value range: 1-100. Default value: 20.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter, which specifies the number of returned results per page. Value range: 1-100. Default value: 20.
                     * @param Limit Pagination parameter, which specifies the number of returned results per page. Value range: 1-100. Default value: 20.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset starting from 0. Default value: 0.
                     * @return Offset Pagination offset starting from 0. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset starting from 0. Default value: 0.
                     * @param Offset Pagination offset starting from 0. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sorting method by update time. `asc`: Ascending order; `desc`: Descending order.
                     * @return UpdateTimeOrder Sorting method by update time. `asc`: Ascending order; `desc`: Descending order.
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置Sorting method by update time. `asc`: Ascending order; `desc`: Descending order.
                     * @param UpdateTimeOrder Sorting method by update time. `asc`: Ascending order; `desc`: Descending order.
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取Sorting order based on the number of associated policies. Valid values: `asc` (ascending order), `desc` (descending order).
                     * @return PolicyCountOrder Sorting order based on the number of associated policies. Valid values: `asc` (ascending order), `desc` (descending order).
                     */
                    std::string GetPolicyCountOrder() const;

                    /**
                     * 设置Sorting order based on the number of associated policies. Valid values: `asc` (ascending order), `desc` (descending order).
                     * @param PolicyCountOrder Sorting order based on the number of associated policies. Valid values: `asc` (ascending order), `desc` (descending order).
                     */
                    void SetPolicyCountOrder(const std::string& _policyCountOrder);

                    /**
                     * 判断参数 PolicyCountOrder 是否已赋值
                     * @return PolicyCountOrder 是否已赋值
                     */
                    bool PolicyCountOrderHasBeenSet() const;

                private:

                    /**
                     * The value is fixed to `monitor`.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * View name, which can be obtained via [DescribeAllNamespaces](https://intl.cloud.tencent.com/document/product/248/48683?from_cn_redirect=1). For the monitoring of Tencent Cloud services, the value of this parameter is `QceNamespacesNew.N.Id` of the output parameter of `DescribeAllNamespaces`, for example, `cvm_device`.
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * Filter by trigger condition template name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Filter by trigger condition template ID.
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * Pagination parameter, which specifies the number of returned results per page. Value range: 1-100. Default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset starting from 0. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting method by update time. `asc`: Ascending order; `desc`: Descending order.
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * Sorting order based on the number of associated policies. Valid values: `asc` (ascending order), `desc` (descending order).
                     */
                    std::string m_policyCountOrder;
                    bool m_policyCountOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_
