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
                     * @return StrategyId Assessment item ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Assessment item ID
                     * @param _strategyId Assessment item ID
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
                     * 获取Assessment item name.
                     * @return Name Assessment item name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Assessment item name.
                     * @param _name Assessment item name.
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
                     * 获取Assessment item description.
                     * @return Desc Assessment item description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Assessment item description.
                     * @param _desc Assessment item description.
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
                     * 获取Product ID corresponding to the assessment item.
                     * @return Product Product ID corresponding to the assessment item.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Product ID corresponding to the assessment item.
                     * @param _product Product ID corresponding to the assessment item.
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
                     * 获取Assessment item corresponding product name.
                     * @return ProductDesc Assessment item corresponding product name.
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置Assessment item corresponding product name.
                     * @param _productDesc Assessment item corresponding product name.
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
                     * 获取Specifies optimization suggestions for the assessment item.
                     * @return Repair Specifies optimization suggestions for the assessment item.
                     * 
                     */
                    std::string GetRepair() const;

                    /**
                     * 设置Specifies optimization suggestions for the assessment item.
                     * @param _repair Specifies optimization suggestions for the assessment item.
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
                     * 获取Assessment item category ID.
                     * @return GroupId Assessment item category ID.
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置Assessment item category ID.
                     * @param _groupId Assessment item category ID.
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
                     * 获取Specifies the category name of the assessment item.
                     * @return GroupName Specifies the category name of the assessment item.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Specifies the category name of the assessment item.
                     * @param _groupName Specifies the category name of the assessment item.
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
                     * 获取Specifies the evaluation item risk list.
                     * @return Conditions Specifies the evaluation item risk list.
                     * 
                     */
                    std::vector<Conditions> GetConditions() const;

                    /**
                     * 设置Specifies the evaluation item risk list.
                     * @param _conditions Specifies the evaluation item risk list.
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
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Assessment item name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Assessment item description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Product ID corresponding to the assessment item.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Assessment item corresponding product name.
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * Specifies optimization suggestions for the assessment item.
                     */
                    std::string m_repair;
                    bool m_repairHasBeenSet;

                    /**
                     * Assessment item category ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Specifies the category name of the assessment item.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Specifies the evaluation item risk list.
                     */
                    std::vector<Conditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_
