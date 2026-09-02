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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSYSTEMCATEGORYCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSYSTEMCATEGORYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicySubCategoryConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Hit configuration of detection items under the parent classification dimension in a system policy.
                */
                class BaselinePolicySystemCategoryConf : public AbstractModel
                {
                public:
                    BaselinePolicySystemCategoryConf();
                    ~BaselinePolicySystemCategoryConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>System parent category ID.</p>
                     * @return CategoryID <p>System parent category ID.</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>System parent category ID.</p>
                     * @param _categoryID <p>System parent category ID.</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Whether to select all subcategories under this parent category. true: select all; false: take effect based on SubCategoryConfList details.</p>
                     * @return AllSelect <p>Whether to select all subcategories under this parent category. true: select all; false: take effect based on SubCategoryConfList details.</p>
                     * 
                     */
                    bool GetAllSelect() const;

                    /**
                     * 设置<p>Whether to select all subcategories under this parent category. true: select all; false: take effect based on SubCategoryConfList details.</p>
                     * @param _allSelect <p>Whether to select all subcategories under this parent category. true: select all; false: take effect based on SubCategoryConfList details.</p>
                     * 
                     */
                    void SetAllSelect(const bool& _allSelect);

                    /**
                     * 判断参数 AllSelect 是否已赋值
                     * @return AllSelect 是否已赋值
                     * 
                     */
                    bool AllSelectHasBeenSet() const;

                    /**
                     * 获取<p>Sub-category configuration list. When AllSelect=false, this detail takes effect.</p>
                     * @return SubCategoryConfList <p>Sub-category configuration list. When AllSelect=false, this detail takes effect.</p>
                     * 
                     */
                    std::vector<BaselinePolicySubCategoryConf> GetSubCategoryConfList() const;

                    /**
                     * 设置<p>Sub-category configuration list. When AllSelect=false, this detail takes effect.</p>
                     * @param _subCategoryConfList <p>Sub-category configuration list. When AllSelect=false, this detail takes effect.</p>
                     * 
                     */
                    void SetSubCategoryConfList(const std::vector<BaselinePolicySubCategoryConf>& _subCategoryConfList);

                    /**
                     * 判断参数 SubCategoryConfList 是否已赋值
                     * @return SubCategoryConfList 是否已赋值
                     * 
                     */
                    bool SubCategoryConfListHasBeenSet() const;

                private:

                    /**
                     * <p>System parent category ID.</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>Whether to select all subcategories under this parent category. true: select all; false: take effect based on SubCategoryConfList details.</p>
                     */
                    bool m_allSelect;
                    bool m_allSelectHasBeenSet;

                    /**
                     * <p>Sub-category configuration list. When AllSelect=false, this detail takes effect.</p>
                     */
                    std::vector<BaselinePolicySubCategoryConf> m_subCategoryConfList;
                    bool m_subCategoryConfListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSYSTEMCATEGORYCONF_H_
