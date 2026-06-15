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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_

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
                * DescribeOnCallForms request structure.
                */
                class DescribeOnCallFormsRequest : public AbstractModel
                {
                public:
                    DescribeOnCallFormsRequest();
                    ~DescribeOnCallFormsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The fixed value is monitor.
                     * @return Module The fixed value is monitor.
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置The fixed value is monitor.
                     * @param _module The fixed value is monitor.
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
                     * 获取Pagination start offset.
                     * @return Offset Pagination start offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination start offset.
                     * @param _offset Pagination start offset.
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
                     * 获取Number of pages for pagination query.
                     * @return Limit Number of pages for pagination query.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of pages for pagination query.
                     * @param _limit Number of pages for pagination query.
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
                     * 获取Supports searching based on user ID.
                     * @return OnCallFormStaffIDs Supports searching based on user ID.
                     * 
                     */
                    std::vector<std::string> GetOnCallFormStaffIDs() const;

                    /**
                     * 设置Supports searching based on user ID.
                     * @param _onCallFormStaffIDs Supports searching based on user ID.
                     * 
                     */
                    void SetOnCallFormStaffIDs(const std::vector<std::string>& _onCallFormStaffIDs);

                    /**
                     * 判断参数 OnCallFormStaffIDs 是否已赋值
                     * @return OnCallFormStaffIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormStaffIDsHasBeenSet() const;

                    /**
                     * 获取Rotation type
                     * @return RotationType Rotation type
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置Rotation type
                     * @param _rotationType Rotation type
                     * 
                     */
                    void SetRotationType(const std::string& _rotationType);

                    /**
                     * 判断参数 RotationType 是否已赋值
                     * @return RotationType 是否已赋值
                     * 
                     */
                    bool RotationTypeHasBeenSet() const;

                    /**
                     * 获取Sorting method.
                     * @return Order Sorting method.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting method.
                     * @param _order Sorting method.
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
                     * 获取Supports searching bay on ID and name.
                     * @return OnCallFormName Supports searching bay on ID and name.
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置Supports searching bay on ID and name.
                     * @param _onCallFormName Supports searching bay on ID and name.
                     * 
                     */
                    void SetOnCallFormName(const std::string& _onCallFormName);

                    /**
                     * 判断参数 OnCallFormName 是否已赋值
                     * @return OnCallFormName 是否已赋值
                     * 
                     */
                    bool OnCallFormNameHasBeenSet() const;

                private:

                    /**
                     * The fixed value is monitor.
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * Pagination start offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of pages for pagination query.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Supports searching based on user ID.
                     */
                    std::vector<std::string> m_onCallFormStaffIDs;
                    bool m_onCallFormStaffIDsHasBeenSet;

                    /**
                     * Rotation type
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * Sorting method.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Supports searching bay on ID and name.
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_
