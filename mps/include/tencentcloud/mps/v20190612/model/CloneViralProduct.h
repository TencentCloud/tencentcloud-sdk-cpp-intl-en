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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPRODUCT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPRODUCT_H_

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
                * Product information of hit product clone
                */
                class CloneViralProduct : public AbstractModel
                {
                public:
                    CloneViralProduct();
                    ~CloneViralProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Product image</p>
                     * @return Images <p>Product image</p>
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置<p>Product image</p>
                     * @param _images <p>Product image</p>
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取<p>Product name</p>
                     * @return Name <p>Product name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Product name</p>
                     * @param _name <p>Product name</p>
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
                     * 获取<p>Product description</p>
                     * @return Description <p>Product description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Product description</p>
                     * @param _description <p>Product description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Product image</p>
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>Product name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Product description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALPRODUCT_H_
