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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/Conditions.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * Information about assessment items
                */
                class Strategies : public AbstractModel
                {
                public:
                    Strategies();
                    ~Strategies() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StrategyId Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategyId Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Assessment item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Assessment item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Assessment item name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Assessment item name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Assessment item description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Desc Assessment item description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Assessment item description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _desc Assessment item description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Product ID corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Product Product ID corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Product ID corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _product Product ID corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Product name corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductDesc Product name corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置Product name corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productDesc Product name corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取Optimization suggestions for the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Repair Optimization suggestions for the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRepair() const;

                    /**
                     * 设置Optimization suggestions for the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _repair Optimization suggestions for the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepair(const std::string& _repair);

                    /**
                     * 判断参数 Repair 是否已赋值
                     * @return Repair 是否已赋值
                     * 
                     */
                    bool RepairHasBeenSet() const;

                    /**
                     * 获取Category ID of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupId Category ID of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置Category ID of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupId Category ID of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Category name of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupName Category name of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Category name of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupName Category name of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Risk list of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Conditions Risk list of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Conditions> GetConditions() const;

                    /**
                     * 设置Risk list of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _conditions Risk list of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConditions(const std::vector<Conditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * Assessment item ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Assessment item name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Assessment item description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Product ID corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Product name corresponding to the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * Optimization suggestions for the assessment item
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_repair;
                    bool m_repairHasBeenSet;

                    /**
                     * Category ID of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Category name of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Risk list of the assessment item 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Conditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_
