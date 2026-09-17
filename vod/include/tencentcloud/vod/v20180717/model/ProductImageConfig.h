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
                * 
                */
                class ProductImageConfig : public AbstractModel
                {
                public:
                    ProductImageConfig();
                    ~ProductImageConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Prompt 
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置
                     * @param _prompt 
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
                     * 获取
                     * @return NegativePrompt 
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置
                     * @param _negativePrompt 
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
                     * 获取
                     * @return ProductDesc 
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置
                     * @param _productDesc 
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
                     * 获取
                     * @return MoreRequirement 
                     * 
                     */
                    std::string GetMoreRequirement() const;

                    /**
                     * 设置
                     * @param _moreRequirement 
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
                     * 获取
                     * @return OutputImageCount 
                     * 
                     */
                    uint64_t GetOutputImageCount() const;

                    /**
                     * 设置
                     * @param _outputImageCount 
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
                     * 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_moreRequirement;
                    bool m_moreRequirementHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_outputImageCount;
                    bool m_outputImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PRODUCTIMAGECONFIG_H_
