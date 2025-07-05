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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstanceFamilyItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Static configurations of the reserved instance.
                */
                class ReservedInstanceConfigInfoItem : public AbstractModel
                {
                public:
                    ReservedInstanceConfigInfoItem();
                    ~ReservedInstanceConfigInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Abbreviation name of the instance type.
                     * @return Type Abbreviation name of the instance type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Abbreviation name of the instance type.
                     * @param _type Abbreviation name of the instance type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Full name of the instance type.
                     * @return TypeName Full name of the instance type.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Full name of the instance type.
                     * @param _typeName Full name of the instance type.
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

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
                     * 获取List of instance families.
                     * @return InstanceFamilies List of instance families.
                     * 
                     */
                    std::vector<ReservedInstanceFamilyItem> GetInstanceFamilies() const;

                    /**
                     * 设置List of instance families.
                     * @param _instanceFamilies List of instance families.
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<ReservedInstanceFamilyItem>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                private:

                    /**
                     * Abbreviation name of the instance type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Full name of the instance type.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Priority.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * List of instance families.
                     */
                    std::vector<ReservedInstanceFamilyItem> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_
