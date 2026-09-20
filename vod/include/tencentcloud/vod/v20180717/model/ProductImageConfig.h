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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Parameter configuration for AI product image generation
                */
                class ProductImageConfig : public AbstractModel
                {
                public:
                    ProductImageConfig();
                    ~ProductImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prompt for image generation background. If this field is default, inspiration is generated automatically.
                     * @return Prompt Prompt for image generation background. If this field is default, inspiration is generated automatically.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt for image generation background. If this field is default, inspiration is generated automatically.
                     * @param _prompt Prompt for image generation background. If this field is default, inspiration is generated automatically.
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取Prompt content used to prevent the model from generating images.
                     * @return NegativePrompt Prompt content used to prevent the model from generating images.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Prompt content used to prevent the model from generating images.
                     * @param _negativePrompt Prompt content used to prevent the model from generating images.
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取A detailed product description helps generate images that better meet requirements.
                     * @return ProductDesc A detailed product description helps generate images that better meet requirements.
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置A detailed product description helps generate images that better meet requirements.
                     * @param _productDesc A detailed product description helps generate images that better meet requirements.
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
                     * 获取Special requirements. If any, input them through this field.
                     * @return MoreRequirement Special requirements. If any, input them through this field.
                     * 
                     */
                    std::string GetMoreRequirement() const;

                    /**
                     * 设置Special requirements. If any, input them through this field.
                     * @param _moreRequirement Special requirements. If any, input them through this field.
                     * 
                     */
                    void SetMoreRequirement(const std::string& _moreRequirement);

                    /**
                     * 判断参数 MoreRequirement 是否已赋值
                     * @return MoreRequirement 是否已赋值
                     * 
                     */
                    bool MoreRequirementHasBeenSet() const;

                    /**
                     * 获取Number of images expected to be generated. Default value: 1. Maximum valid value: 10.
                     * @return OutputImageCount Number of images expected to be generated. Default value: 1. Maximum valid value: 10.
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置Number of images expected to be generated. Default value: 1. Maximum valid value: 10.
                     * @param _outputImageCount Number of images expected to be generated. Default value: 1. Maximum valid value: 10.
                     * 
                     */
                    void SetOutputImageCount(const uint64_t& _outputImageCount);

                    /**
                     * 判断参数 OutputImageCount 是否已赋值
                     * @return OutputImageCount 是否已赋值
                     * 
                     */
                    bool OutputImageCountHasBeenSet() const;

                private:

                    /**
                     * Prompt for image generation background. If this field is default, inspiration is generated automatically.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Prompt content used to prevent the model from generating images.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * A detailed product description helps generate images that better meet requirements.
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * Special requirements. If any, input them through this field.
                     */
                    std::string m_moreRequirement;
                    bool m_moreRequirementHasBeenSet;

                    /**
                     * Number of images expected to be generated. Default value: 1. Maximum valid value: 10.
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
