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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Operator.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Dimension information of the policy type
                */
                class DimensionNew : public AbstractModel
                {
                public:
                    DimensionNew();
                    ~DimensionNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension key ID displayed on the backend
                     * @return Key Dimension key ID displayed on the backend
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Dimension key ID displayed on the backend
                     * @param _key Dimension key ID displayed on the backend
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Dimension key name displayed on the frontend
                     * @return Name Dimension key name displayed on the frontend
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dimension key name displayed on the frontend
                     * @param _name Dimension key name displayed on the frontend
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
                     * 获取Whether it is required
                     * @return IsRequired Whether it is required
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置Whether it is required
                     * @param _isRequired Whether it is required
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取List of supported operators
                     * @return Operators List of supported operators
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置List of supported operators
                     * @param _operators List of supported operators
                     * 
                     */
                    void SetOperators(const std::vector<Operator>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取Whether multiple items can be selected
                     * @return IsMultiple Whether multiple items can be selected
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置Whether multiple items can be selected
                     * @param _isMultiple Whether multiple items can be selected
                     * 
                     */
                    void SetIsMultiple(const bool& _isMultiple);

                    /**
                     * 判断参数 IsMultiple 是否已赋值
                     * @return IsMultiple 是否已赋值
                     * 
                     */
                    bool IsMultipleHasBeenSet() const;

                    /**
                     * 获取Whether it can be modified after creation
                     * @return IsMutable Whether it can be modified after creation
                     * 
                     */
                    bool GetIsMutable() const;

                    /**
                     * 设置Whether it can be modified after creation
                     * @param _isMutable Whether it can be modified after creation
                     * 
                     */
                    void SetIsMutable(const bool& _isMutable);

                    /**
                     * 判断参数 IsMutable 是否已赋值
                     * @return IsMutable 是否已赋值
                     * 
                     */
                    bool IsMutableHasBeenSet() const;

                    /**
                     * 获取Whether it is displayed to users
                     * @return IsVisible Whether it is displayed to users
                     * 
                     */
                    bool GetIsVisible() const;

                    /**
                     * 设置Whether it is displayed to users
                     * @param _isVisible Whether it is displayed to users
                     * 
                     */
                    void SetIsVisible(const bool& _isVisible);

                    /**
                     * 判断参数 IsVisible 是否已赋值
                     * @return IsVisible 是否已赋值
                     * 
                     */
                    bool IsVisibleHasBeenSet() const;

                    /**
                     * 获取Whether it can be used to filter policies
                     * @return CanFilterPolicy Whether it can be used to filter policies
                     * 
                     */
                    bool GetCanFilterPolicy() const;

                    /**
                     * 设置Whether it can be used to filter policies
                     * @param _canFilterPolicy Whether it can be used to filter policies
                     * 
                     */
                    void SetCanFilterPolicy(const bool& _canFilterPolicy);

                    /**
                     * 判断参数 CanFilterPolicy 是否已赋值
                     * @return CanFilterPolicy 是否已赋值
                     * 
                     */
                    bool CanFilterPolicyHasBeenSet() const;

                    /**
                     * 获取Whether it can be used to filter historical alarms
                     * @return CanFilterHistory Whether it can be used to filter historical alarms
                     * 
                     */
                    bool GetCanFilterHistory() const;

                    /**
                     * 设置Whether it can be used to filter historical alarms
                     * @param _canFilterHistory Whether it can be used to filter historical alarms
                     * 
                     */
                    void SetCanFilterHistory(const bool& _canFilterHistory);

                    /**
                     * 判断参数 CanFilterHistory 是否已赋值
                     * @return CanFilterHistory 是否已赋值
                     * 
                     */
                    bool CanFilterHistoryHasBeenSet() const;

                    /**
                     * 获取Whether it can be used as an aggregate dimension
                     * @return CanGroupBy Whether it can be used as an aggregate dimension
                     * 
                     */
                    bool GetCanGroupBy() const;

                    /**
                     * 设置Whether it can be used as an aggregate dimension
                     * @param _canGroupBy Whether it can be used as an aggregate dimension
                     * 
                     */
                    void SetCanGroupBy(const bool& _canGroupBy);

                    /**
                     * 判断参数 CanGroupBy 是否已赋值
                     * @return CanGroupBy 是否已赋值
                     * 
                     */
                    bool CanGroupByHasBeenSet() const;

                    /**
                     * 获取Whether it must be used as an aggregate dimension
                     * @return MustGroupBy Whether it must be used as an aggregate dimension
                     * 
                     */
                    bool GetMustGroupBy() const;

                    /**
                     * 设置Whether it must be used as an aggregate dimension
                     * @param _mustGroupBy Whether it must be used as an aggregate dimension
                     * 
                     */
                    void SetMustGroupBy(const bool& _mustGroupBy);

                    /**
                     * 判断参数 MustGroupBy 是否已赋值
                     * @return MustGroupBy 是否已赋值
                     * 
                     */
                    bool MustGroupByHasBeenSet() const;

                    /**
                     * 获取The key to be replaced on the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShowValueReplace The key to be replaced on the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShowValueReplace() const;

                    /**
                     * 设置The key to be replaced on the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _showValueReplace The key to be replaced on the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShowValueReplace(const std::string& _showValueReplace);

                    /**
                     * 判断参数 ShowValueReplace 是否已赋值
                     * @return ShowValueReplace 是否已赋值
                     * 
                     */
                    bool ShowValueReplaceHasBeenSet() const;

                private:

                    /**
                     * Dimension key ID displayed on the backend
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Dimension key name displayed on the frontend
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether it is required
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * List of supported operators
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * Whether multiple items can be selected
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * Whether it can be modified after creation
                     */
                    bool m_isMutable;
                    bool m_isMutableHasBeenSet;

                    /**
                     * Whether it is displayed to users
                     */
                    bool m_isVisible;
                    bool m_isVisibleHasBeenSet;

                    /**
                     * Whether it can be used to filter policies
                     */
                    bool m_canFilterPolicy;
                    bool m_canFilterPolicyHasBeenSet;

                    /**
                     * Whether it can be used to filter historical alarms
                     */
                    bool m_canFilterHistory;
                    bool m_canFilterHistoryHasBeenSet;

                    /**
                     * Whether it can be used as an aggregate dimension
                     */
                    bool m_canGroupBy;
                    bool m_canGroupByHasBeenSet;

                    /**
                     * Whether it must be used as an aggregate dimension
                     */
                    bool m_mustGroupBy;
                    bool m_mustGroupByHasBeenSet;

                    /**
                     * The key to be replaced on the frontend
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_showValueReplace;
                    bool m_showValueReplaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_
