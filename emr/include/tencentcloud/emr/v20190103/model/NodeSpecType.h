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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECTYPE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecFamily.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Node model type.
                */
                class NodeSpecType : public AbstractModel
                {
                public:
                    NodeSpecType();
                    ~NodeSpecType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model series.
                     * @return Type Model series.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Model series.
                     * @param _type Model series.
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
                     * 获取Model series name.
                     * @return TypeName Model series name.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Model series name.
                     * @param _typeName Model series name.
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
                     * 获取Order.
                     * @return Order Order.
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Order.
                     * @param _order Order.
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
                     * 获取InstanceFamily array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceFamilies InstanceFamily array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeSpecFamily> GetInstanceFamilies() const;

                    /**
                     * 设置InstanceFamily array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceFamilies InstanceFamily array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<NodeSpecFamily>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                private:

                    /**
                     * Model series.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Model series name.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Order.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * InstanceFamily array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeSpecFamily> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECTYPE_H_
