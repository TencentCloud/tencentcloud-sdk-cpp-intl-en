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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CloneViralProduct.h>
#include <tencentcloud/mps/v20190612/model/CloneViralAIGC.h>
#include <tencentcloud/mps/v20190612/model/CloneViralContent.h>
#include <tencentcloud/mps/v20190612/model/CloneViralPersona.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CloneViral request structure.
                */
                class CloneViralRequest : public AbstractModel
                {
                public:
                    CloneViralRequest();
                    ~CloneViralRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Viral video Url</p>
                     * @return VideoUrl <p>Viral video Url</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>Viral video Url</p>
                     * @param _videoUrl <p>Viral video Url</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>Product information</p>
                     * @return Product <p>Product information</p>
                     * 
                     */
                    CloneViralProduct GetProduct() const;

                    /**
                     * 设置<p>Product information</p>
                     * @param _product <p>Product information</p>
                     * 
                     */
                    void SetProduct(const CloneViralProduct& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>AIGC video-related parameters</p>
                     * @return AIGCParam <p>AIGC video-related parameters</p>
                     * 
                     */
                    CloneViralAIGC GetAIGCParam() const;

                    /**
                     * 设置<p>AIGC video-related parameters</p>
                     * @param _aIGCParam <p>AIGC video-related parameters</p>
                     * 
                     */
                    void SetAIGCParam(const CloneViralAIGC& _aIGCParam);

                    /**
                     * 判断参数 AIGCParam 是否已赋值
                     * @return AIGCParam 是否已赋值
                     * 
                     */
                    bool AIGCParamHasBeenSet() const;

                    /**
                     * 获取<p>Content/style-related parameters</p>
                     * @return ContentParam <p>Content/style-related parameters</p>
                     * 
                     */
                    CloneViralContent GetContentParam() const;

                    /**
                     * 设置<p>Content/style-related parameters</p>
                     * @param _contentParam <p>Content/style-related parameters</p>
                     * 
                     */
                    void SetContentParam(const CloneViralContent& _contentParam);

                    /**
                     * 判断参数 ContentParam 是否已赋值
                     * @return ContentParam 是否已赋值
                     * 
                     */
                    bool ContentParamHasBeenSet() const;

                    /**
                     * 获取<p>Model appearance</p>
                     * @return Persona <p>Model appearance</p>
                     * 
                     */
                    CloneViralPersona GetPersona() const;

                    /**
                     * 设置<p>Model appearance</p>
                     * @param _persona <p>Model appearance</p>
                     * 
                     */
                    void SetPersona(const CloneViralPersona& _persona);

                    /**
                     * 判断参数 Persona 是否已赋值
                     * @return Persona 是否已赋值
                     * 
                     */
                    bool PersonaHasBeenSet() const;

                private:

                    /**
                     * <p>Viral video Url</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>Product information</p>
                     */
                    CloneViralProduct m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>AIGC video-related parameters</p>
                     */
                    CloneViralAIGC m_aIGCParam;
                    bool m_aIGCParamHasBeenSet;

                    /**
                     * <p>Content/style-related parameters</p>
                     */
                    CloneViralContent m_contentParam;
                    bool m_contentParamHasBeenSet;

                    /**
                     * <p>Model appearance</p>
                     */
                    CloneViralPersona m_persona;
                    bool m_personaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVIRALREQUEST_H_
