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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECFAMILY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECFAMILY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSpecInstanceType.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Instance specification family.
                */
                class NodeSpecFamily : public AbstractModel
                {
                public:
                    NodeSpecFamily();
                    ~NodeSpecFamily() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance specification.
                     * @return InstanceFamily Instance specification.
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置Instance specification.
                     * @param _instanceFamily Instance specification.
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
                     * 获取Instance specification name.
                     * @return FamilyName Instance specification name.
                     * 
                     */
                    std::string GetFamilyName() const;

                    /**
                     * 设置Instance specification name.
                     * @param _familyName Instance specification name.
                     * 
                     */
                    void SetFamilyName(const std::string& _familyName);

                    /**
                     * 判断参数 FamilyName 是否已赋值
                     * @return FamilyName 是否已赋值
                     * 
                     */
                    bool FamilyNameHasBeenSet() const;

                    /**
                     * 获取Sorting order.
                     * @return Order Sorting order.
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Sorting order.
                     * @param _order Sorting order.
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
                    std::vector<NodeSpecInstanceType> GetInstanceTypes() const;

                    /**
                     * 设置List of instance types.
                     * @param _instanceTypes List of instance types.
                     * 
                     */
                    void SetInstanceTypes(const std::vector<NodeSpecInstanceType>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                private:

                    /**
                     * Instance specification.
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * Instance specification name.
                     */
                    std::string m_familyName;
                    bool m_familyNameHasBeenSet;

                    /**
                     * Sorting order.
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * List of instance types.
                     */
                    std::vector<NodeSpecInstanceType> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODESPECFAMILY_H_
