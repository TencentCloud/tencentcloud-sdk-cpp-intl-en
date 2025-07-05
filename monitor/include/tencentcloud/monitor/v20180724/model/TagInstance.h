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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Instance tag information of the alarm policy
                */
                class TagInstance : public AbstractModel
                {
                public:
                    TagInstance();
                    ~TagInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Key Tag key
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Tag key
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _key Tag key
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Tag value
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Value Tag value
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Tag value
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _value Tag value
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return InstanceSum Number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置Number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _instanceSum Number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     * 
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取Service type, for example, CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ServiceType Service type, for example, CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type, for example, CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _serviceType Service type, for example, CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Region ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _regionId Region ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Binding status. 2: bound; 1: binding
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BindingStatus Binding status. 2: bound; 1: binding
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBindingStatus() const;

                    /**
                     * 设置Binding status. 2: bound; 1: binding
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _bindingStatus Binding status. 2: bound; 1: binding
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBindingStatus(const int64_t& _bindingStatus);

                    /**
                     * 判断参数 BindingStatus 是否已赋值
                     * @return BindingStatus 是否已赋值
                     * 
                     */
                    bool BindingStatusHasBeenSet() const;

                    /**
                     * 获取Tag status. 2: existent; 1: nonexistent
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TagStatus Tag status. 2: existent; 1: nonexistent
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTagStatus() const;

                    /**
                     * 设置Tag status. 2: existent; 1: nonexistent
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _tagStatus Tag status. 2: existent; 1: nonexistent
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagStatus(const int64_t& _tagStatus);

                    /**
                     * 判断参数 TagStatus 是否已赋值
                     * @return TagStatus 是否已赋值
                     * 
                     */
                    bool TagStatusHasBeenSet() const;

                private:

                    /**
                     * Tag key
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Tag value
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Number of instances
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * Service type, for example, CVM
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Region ID
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Binding status. 2: bound; 1: binding
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_bindingStatus;
                    bool m_bindingStatusHasBeenSet;

                    /**
                     * Tag status. 2: existent; 1: nonexistent
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_tagStatus;
                    bool m_tagStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_
