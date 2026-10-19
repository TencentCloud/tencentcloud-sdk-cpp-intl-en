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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYCATEGORYDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYCATEGORYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyRuleDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos Data recognition result category details
                */
                class CosIdentifyCategoryDetail : public AbstractModel
                {
                public:
                    CosIdentifyCategoryDetail();
                    ~CosIdentifyCategoryDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Category id</p>
                     * @return CategoryId <p>Category id</p>
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置<p>Category id</p>
                     * @param _categoryId <p>Category id</p>
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>Category name</p>
                     * @return CategoryName <p>Category name</p>
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置<p>Category name</p>
                     * @param _categoryName <p>Category name</p>
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取<p>Data item collection.</p>
                     * @return RuleSet <p>Data item collection.</p>
                     * @deprecated
                     */
                    std::vector<CosIdentifyRuleDetail> GetRuleSet() const;

                    /**
                     * 设置<p>Data item collection.</p>
                     * @param _ruleSet <p>Data item collection.</p>
                     * @deprecated
                     */
                    void SetRuleSet(const std::vector<CosIdentifyRuleDetail>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * @deprecated
                     */
                    bool RuleSetHasBeenSet() const;

                private:

                    /**
                     * <p>Category id</p>
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>Category name</p>
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * <p>Data item collection.</p>
                     */
                    std::vector<CosIdentifyRuleDetail> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYCATEGORYDETAIL_H_
