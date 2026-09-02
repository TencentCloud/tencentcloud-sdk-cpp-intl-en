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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBCATEGORY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineCategory.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline system subcategory (including all its built-in detection item ID list).
                */
                class BaselineSubCategory : public AbstractModel
                {
                public:
                    BaselineSubCategory();
                    ~BaselineSubCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Basic information of the subcategory.</p>
                     * @return Category <p>Basic information of the subcategory.</p>
                     * 
                     */
                    BaselineCategory GetCategory() const;

                    /**
                     * 设置<p>Basic information of the subcategory.</p>
                     * @param _category <p>Basic information of the subcategory.</p>
                     * 
                     */
                    void SetCategory(const BaselineCategory& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * <p>Basic information of the subcategory.</p>
                     */
                    BaselineCategory m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBCATEGORY_H_
