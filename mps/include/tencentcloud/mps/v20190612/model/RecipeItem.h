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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image set information.
                */
                class RecipeItem : public AbstractModel
                {
                public:
                    RecipeItem();
                    ~RecipeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sub-image type.</p><p>Enumeration values:</p><ul><li>hero: product hero image.</li><li>detail: product details image.</li><li>selling: core selling point image.</li><li>atmosphere: scene atmosphere image.</li><li>angles: multiple-angle image.</li><li>scene: usage scenario image.</li></ul>
                     * @return Theme <p>Sub-image type.</p><p>Enumeration values:</p><ul><li>hero: product hero image.</li><li>detail: product details image.</li><li>selling: core selling point image.</li><li>atmosphere: scene atmosphere image.</li><li>angles: multiple-angle image.</li><li>scene: usage scenario image.</li></ul>
                     * 
                     */
                    std::string GetTheme() const;

                    /**
                     * 设置<p>Sub-image type.</p><p>Enumeration values:</p><ul><li>hero: product hero image.</li><li>detail: product details image.</li><li>selling: core selling point image.</li><li>atmosphere: scene atmosphere image.</li><li>angles: multiple-angle image.</li><li>scene: usage scenario image.</li></ul>
                     * @param _theme <p>Sub-image type.</p><p>Enumeration values:</p><ul><li>hero: product hero image.</li><li>detail: product details image.</li><li>selling: core selling point image.</li><li>atmosphere: scene atmosphere image.</li><li>angles: multiple-angle image.</li><li>scene: usage scenario image.</li></ul>
                     * 
                     */
                    void SetTheme(const std::string& _theme);

                    /**
                     * 判断参数 Theme 是否已赋值
                     * @return Theme 是否已赋值
                     * 
                     */
                    bool ThemeHasBeenSet() const;

                    /**
                     * 获取<p>Number of corresponding sub-images.</p><p>Value range: 1 to 4.</p><p>Unit: image.</p><p>Each type can have up to 4 sub-images. The total number of sub-images must be within the range of 4 to 12.</p>
                     * @return Num <p>Number of corresponding sub-images.</p><p>Value range: 1 to 4.</p><p>Unit: image.</p><p>Each type can have up to 4 sub-images. The total number of sub-images must be within the range of 4 to 12.</p>
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置<p>Number of corresponding sub-images.</p><p>Value range: 1 to 4.</p><p>Unit: image.</p><p>Each type can have up to 4 sub-images. The total number of sub-images must be within the range of 4 to 12.</p>
                     * @param _num <p>Number of corresponding sub-images.</p><p>Value range: 1 to 4.</p><p>Unit: image.</p><p>Each type can have up to 4 sub-images. The total number of sub-images must be within the range of 4 to 12.</p>
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * <p>Sub-image type.</p><p>Enumeration values:</p><ul><li>hero: product hero image.</li><li>detail: product details image.</li><li>selling: core selling point image.</li><li>atmosphere: scene atmosphere image.</li><li>angles: multiple-angle image.</li><li>scene: usage scenario image.</li></ul>
                     */
                    std::string m_theme;
                    bool m_themeHasBeenSet;

                    /**
                     * <p>Number of corresponding sub-images.</p><p>Value range: 1 to 4.</p><p>Unit: image.</p><p>Each type can have up to 4 sub-images. The total number of sub-images must be within the range of 4 to 12.</p>
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECIPEITEM_H_
