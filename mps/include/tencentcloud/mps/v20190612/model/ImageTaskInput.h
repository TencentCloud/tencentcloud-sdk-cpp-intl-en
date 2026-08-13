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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageEncodeConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEnhanceConfig.h>
#include <tencentcloud/mps/v20190612/model/ImageEraseConfig.h>
#include <tencentcloud/mps/v20190612/model/AiPosterSuiteConfig.h>
#include <tencentcloud/mps/v20190612/model/AiCutoutConfig.h>
#include <tencentcloud/mps/v20190612/model/AiExpansionConfig.h>
#include <tencentcloud/mps/v20190612/model/AiStoryboardConfig.h>
#include <tencentcloud/mps/v20190612/model/UnderstandImageConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Image task input parameters
                */
                class ImageTaskInput : public AbstractModel
                {
                public:
                    ImageTaskInput();
                    ~ImageTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Image encoding configuration.</p>
                     * @return EncodeConfig <p>Image encoding configuration.</p>
                     * 
                     */
                    ImageEncodeConfig GetEncodeConfig() const;

                    /**
                     * 设置<p>Image encoding configuration.</p>
                     * @param _encodeConfig <p>Image encoding configuration.</p>
                     * 
                     */
                    void SetEncodeConfig(const ImageEncodeConfig& _encodeConfig);

                    /**
                     * 判断参数 EncodeConfig 是否已赋值
                     * @return EncodeConfig 是否已赋值
                     * 
                     */
                    bool EncodeConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image enhancement configuration.</p>
                     * @return EnhanceConfig <p>Image enhancement configuration.</p>
                     * 
                     */
                    ImageEnhanceConfig GetEnhanceConfig() const;

                    /**
                     * 设置<p>Image enhancement configuration.</p>
                     * @param _enhanceConfig <p>Image enhancement configuration.</p>
                     * 
                     */
                    void SetEnhanceConfig(const ImageEnhanceConfig& _enhanceConfig);

                    /**
                     * 判断参数 EnhanceConfig 是否已赋值
                     * @return EnhanceConfig 是否已赋值
                     * 
                     */
                    bool EnhanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image erasing configuration.</p>
                     * @return EraseConfig <p>Image erasing configuration.</p>
                     * 
                     */
                    ImageEraseConfig GetEraseConfig() const;

                    /**
                     * 设置<p>Image erasing configuration.</p>
                     * @param _eraseConfig <p>Image erasing configuration.</p>
                     * 
                     */
                    void SetEraseConfig(const ImageEraseConfig& _eraseConfig);

                    /**
                     * 判断参数 EraseConfig 是否已赋值
                     * @return EraseConfig 是否已赋值
                     * 
                     */
                    bool EraseConfigHasBeenSet() const;

                    /**
                     * 获取<p>AI image set configuration.</p>
                     * @return AiPosterSuiteConfig <p>AI image set configuration.</p>
                     * 
                     */
                    AiPosterSuiteConfig GetAiPosterSuiteConfig() const;

                    /**
                     * 设置<p>AI image set configuration.</p>
                     * @param _aiPosterSuiteConfig <p>AI image set configuration.</p>
                     * 
                     */
                    void SetAiPosterSuiteConfig(const AiPosterSuiteConfig& _aiPosterSuiteConfig);

                    /**
                     * 判断参数 AiPosterSuiteConfig 是否已赋值
                     * @return AiPosterSuiteConfig 是否已赋值
                     * 
                     */
                    bool AiPosterSuiteConfigHasBeenSet() const;

                    /**
                     * 获取<p>Ai image cutout configuration</p>
                     * @return AiCutoutConfig <p>Ai image cutout configuration</p>
                     * 
                     */
                    AiCutoutConfig GetAiCutoutConfig() const;

                    /**
                     * 设置<p>Ai image cutout configuration</p>
                     * @param _aiCutoutConfig <p>Ai image cutout configuration</p>
                     * 
                     */
                    void SetAiCutoutConfig(const AiCutoutConfig& _aiCutoutConfig);

                    /**
                     * 判断参数 AiCutoutConfig 是否已赋值
                     * @return AiCutoutConfig 是否已赋值
                     * 
                     */
                    bool AiCutoutConfigHasBeenSet() const;

                    /**
                     * 获取<p>Ai Image Expansion Configuration</p>
                     * @return AiExpansionConfig <p>Ai Image Expansion Configuration</p>
                     * 
                     */
                    AiExpansionConfig GetAiExpansionConfig() const;

                    /**
                     * 设置<p>Ai Image Expansion Configuration</p>
                     * @param _aiExpansionConfig <p>Ai Image Expansion Configuration</p>
                     * 
                     */
                    void SetAiExpansionConfig(const AiExpansionConfig& _aiExpansionConfig);

                    /**
                     * 判断参数 AiExpansionConfig 是否已赋值
                     * @return AiExpansionConfig 是否已赋值
                     * 
                     */
                    bool AiExpansionConfigHasBeenSet() const;

                    /**
                     * 获取<p>Ai storyboard deconstruction configuration</p>
                     * @return AiStoryboardConfig <p>Ai storyboard deconstruction configuration</p>
                     * 
                     */
                    AiStoryboardConfig GetAiStoryboardConfig() const;

                    /**
                     * 设置<p>Ai storyboard deconstruction configuration</p>
                     * @param _aiStoryboardConfig <p>Ai storyboard deconstruction configuration</p>
                     * 
                     */
                    void SetAiStoryboardConfig(const AiStoryboardConfig& _aiStoryboardConfig);

                    /**
                     * 判断参数 AiStoryboardConfig 是否已赋值
                     * @return AiStoryboardConfig 是否已赋值
                     * 
                     */
                    bool AiStoryboardConfigHasBeenSet() const;

                    /**
                     * 获取<p>Image understanding configuration.</p>
                     * @return UnderstandImageConfig <p>Image understanding configuration.</p>
                     * 
                     */
                    UnderstandImageConfig GetUnderstandImageConfig() const;

                    /**
                     * 设置<p>Image understanding configuration.</p>
                     * @param _understandImageConfig <p>Image understanding configuration.</p>
                     * 
                     */
                    void SetUnderstandImageConfig(const UnderstandImageConfig& _understandImageConfig);

                    /**
                     * 判断参数 UnderstandImageConfig 是否已赋值
                     * @return UnderstandImageConfig 是否已赋值
                     * 
                     */
                    bool UnderstandImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Image encoding configuration.</p>
                     */
                    ImageEncodeConfig m_encodeConfig;
                    bool m_encodeConfigHasBeenSet;

                    /**
                     * <p>Image enhancement configuration.</p>
                     */
                    ImageEnhanceConfig m_enhanceConfig;
                    bool m_enhanceConfigHasBeenSet;

                    /**
                     * <p>Image erasing configuration.</p>
                     */
                    ImageEraseConfig m_eraseConfig;
                    bool m_eraseConfigHasBeenSet;

                    /**
                     * <p>AI image set configuration.</p>
                     */
                    AiPosterSuiteConfig m_aiPosterSuiteConfig;
                    bool m_aiPosterSuiteConfigHasBeenSet;

                    /**
                     * <p>Ai image cutout configuration</p>
                     */
                    AiCutoutConfig m_aiCutoutConfig;
                    bool m_aiCutoutConfigHasBeenSet;

                    /**
                     * <p>Ai Image Expansion Configuration</p>
                     */
                    AiExpansionConfig m_aiExpansionConfig;
                    bool m_aiExpansionConfigHasBeenSet;

                    /**
                     * <p>Ai storyboard deconstruction configuration</p>
                     */
                    AiStoryboardConfig m_aiStoryboardConfig;
                    bool m_aiStoryboardConfigHasBeenSet;

                    /**
                     * <p>Image understanding configuration.</p>
                     */
                    UnderstandImageConfig m_understandImageConfig;
                    bool m_understandImageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGETASKINPUT_H_
