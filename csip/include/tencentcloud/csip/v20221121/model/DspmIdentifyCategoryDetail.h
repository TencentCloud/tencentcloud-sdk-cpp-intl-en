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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCATEGORYDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCATEGORYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyRuleDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm data identification result category details
                */
                class DspmIdentifyCategoryDetail : public AbstractModel
                {
                public:
                    DspmIdentifyCategoryDetail();
                    ~DspmIdentifyCategoryDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category id
                     * @return CategoryId Category id
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置Category id
                     * @param _categoryId Category id
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
                     * 获取Category name
                     * @return CategoryName Category name
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置Category name
                     * @param _categoryName Category name
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
                     * 获取Data item collection
                     * @return RuleSet Data item collection
                     * 
                     */
                    std::vector<DspmIdentifyRuleDetail> GetRuleSet() const;

                    /**
                     * 设置Data item collection
                     * @param _ruleSet Data item collection
                     * 
                     */
                    void SetRuleSet(const std::vector<DspmIdentifyRuleDetail>& _ruleSet);

                    /**
                     * 判断参数 RuleSet 是否已赋值
                     * @return RuleSet 是否已赋值
                     * 
                     */
                    bool RuleSetHasBeenSet() const;

                private:

                    /**
                     * Category id
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Category name
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * Data item collection
                     */
                    std::vector<DspmIdentifyRuleDetail> m_ruleSet;
                    bool m_ruleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYCATEGORYDETAIL_H_
