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
                * AI product image parameter configuration.
                */
                class ProductImageConfig : public AbstractModel
                {
                public:
                    ProductImageConfig();
                    ~ProductImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Prompt content for image generation background. if this field is default, inspiration is automatically generated internally.
                     * @return Prompt Prompt content for image generation background. if this field is default, inspiration is automatically generated internally.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置Prompt content for image generation background. if this field is default, inspiration is automatically generated internally.
                     * @param _prompt Prompt content for image generation background. if this field is default, inspiration is automatically generated internally.
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
                     * 获取Prevent the model from generating image prompts.
                     * @return NegativePrompt Prevent the model from generating image prompts.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Prevent the model from generating image prompts.
                     * @param _negativePrompt Prevent the model from generating image prompts.
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
                     * 获取Product description describes in detail, helping generate images that meet requirements.
                     * @return ProductDesc Product description describes in detail, helping generate images that meet requirements.
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置Product description describes in detail, helping generate images that meet requirements.
                     * @param _productDesc Product description describes in detail, helping generate images that meet requirements.
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
                     * 获取Special requirements. if any, import them through this field.
                     * @return MoreRequirement Special requirements. if any, import them through this field.
                     * 
                     */
                    std::string GetMoreRequirement() const;

                    /**
                     * 设置Special requirements. if any, import them through this field.
                     * @param _moreRequirement Special requirements. if any, import them through this field.
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
                     * 获取Specifies the number of images to generate. defaults to 1 if left empty. valid value: 10.
                     * @return OutputImageCount Specifies the number of images to generate. defaults to 1 if left empty. valid value: 10.
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置Specifies the number of images to generate. defaults to 1 if left empty. valid value: 10.
                     * @param _outputImageCount Specifies the number of images to generate. defaults to 1 if left empty. valid value: 10.
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
                     * Prompt content for image generation background. if this field is default, inspiration is automatically generated internally.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Prevent the model from generating image prompts.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Product description describes in detail, helping generate images that meet requirements.
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * Special requirements. if any, import them through this field.
                     */
                    std::string m_moreRequirement;
                    bool m_moreRequirementHasBeenSet;

                    /**
                     * Specifies the number of images to generate. defaults to 1 if left empty. valid value: 10.
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
