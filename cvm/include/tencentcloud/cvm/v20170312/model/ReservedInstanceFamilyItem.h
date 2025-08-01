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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEFAMILYITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEFAMILYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstanceTypeItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RI-related instance family.
                */
                class ReservedInstanceFamilyItem : public AbstractModel
                {
                public:
                    ReservedInstanceFamilyItem();
                    ~ReservedInstanceFamilyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance family.
                     * @return InstanceFamily Instance family.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance family.
                     * @param _instanceFamily Instance family.
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取Priority.
                     * @return Order Priority.
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Priority.
                     * @param _order Priority.
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取List of instance types.
                     * @return InstanceTypes List of instance types.
                     * 
                     */
                    std::vector<ReservedInstanceTypeItem> GetInstanceTypes() const;

                    /**
                     * 设置List of instance types.
                     * @param _instanceTypes List of instance types.
                     * 
                     */
                    void SetInstanceTypes(const std::vector<ReservedInstanceTypeItem>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                private:

                    /**
                     * Instance family.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Priority.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * List of instance types.
                     */
                    std::vector<ReservedInstanceTypeItem> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCEFAMILYITEM_H_
