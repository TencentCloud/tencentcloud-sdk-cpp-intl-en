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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AIOptimizeModel.h>
#include <tencentcloud/adp/v20260520/model/FileParseModel.h>
#include <tencentcloud/adp/v20260520/model/GenerateModel.h>
#include <tencentcloud/adp/v20260520/model/MultiModalQAModel.h>
#include <tencentcloud/adp/v20260520/model/MultiModalUnderstandingModel.h>
#include <tencentcloud/adp/v20260520/model/PromptRewriteModel.h>
#include <tencentcloud/adp/v20260520/model/ThinkModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Model configuration
                */
                class AppModelConfig : public AbstractModel
                {
                public:
                    AppModelConfig();
                    ~AppModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI one-click optimization model
                     * @return AiOptimizeModel AI one-click optimization model
                     * 
                     */
                    AIOptimizeModel GetAiOptimizeModel() const;

                    /**
                     * 设置AI one-click optimization model
                     * @param _aiOptimizeModel AI one-click optimization model
                     * 
                     */
                    void SetAiOptimizeModel(const AIOptimizeModel& _aiOptimizeModel);

                    /**
                     * 判断参数 AiOptimizeModel 是否已赋值
                     * @return AiOptimizeModel 是否已赋值
                     * 
                     */
                    bool AiOptimizeModelHasBeenSet() const;

                    /**
                     * 获取Real-time file parsing model
                     * @return FileParseModel Real-time file parsing model
                     * 
                     */
                    FileParseModel GetFileParseModel() const;

                    /**
                     * 设置Real-time file parsing model
                     * @param _fileParseModel Real-time file parsing model
                     * 
                     */
                    void SetFileParseModel(const FileParseModel& _fileParseModel);

                    /**
                     * 判断参数 FileParseModel 是否已赋值
                     * @return FileParseModel 是否已赋值
                     * 
                     */
                    bool FileParseModelHasBeenSet() const;

                    /**
                     * 获取Generate model configuration
                     * @return GenerateModel Generate model configuration
                     * 
                     */
                    GenerateModel GetGenerateModel() const;

                    /**
                     * 设置Generate model configuration
                     * @param _generateModel Generate model configuration
                     * 
                     */
                    void SetGenerateModel(const GenerateModel& _generateModel);

                    /**
                     * 判断参数 GenerateModel 是否已赋值
                     * @return GenerateModel 是否已赋值
                     * 
                     */
                    bool GenerateModelHasBeenSet() const;

                    /**
                     * 获取Multimodal QA model
                     * @return MultiModalQaModel Multimodal QA model
                     * 
                     */
                    MultiModalQAModel GetMultiModalQaModel() const;

                    /**
                     * 设置Multimodal QA model
                     * @param _multiModalQaModel Multimodal QA model
                     * 
                     */
                    void SetMultiModalQaModel(const MultiModalQAModel& _multiModalQaModel);

                    /**
                     * 判断参数 MultiModalQaModel 是否已赋值
                     * @return MultiModalQaModel 是否已赋值
                     * 
                     */
                    bool MultiModalQaModelHasBeenSet() const;

                    /**
                     * 获取Multimodal understanding model
                     * @return MultiModalUnderstandingModel Multimodal understanding model
                     * 
                     */
                    MultiModalUnderstandingModel GetMultiModalUnderstandingModel() const;

                    /**
                     * 设置Multimodal understanding model
                     * @param _multiModalUnderstandingModel Multimodal understanding model
                     * 
                     */
                    void SetMultiModalUnderstandingModel(const MultiModalUnderstandingModel& _multiModalUnderstandingModel);

                    /**
                     * 判断参数 MultiModalUnderstandingModel 是否已赋值
                     * @return MultiModalUnderstandingModel 是否已赋值
                     * 
                     */
                    bool MultiModalUnderstandingModelHasBeenSet() const;

                    /**
                     * 获取Prompt rewrite model
                     * @return PromptRewriteModel Prompt rewrite model
                     * 
                     */
                    PromptRewriteModel GetPromptRewriteModel() const;

                    /**
                     * 设置Prompt rewrite model
                     * @param _promptRewriteModel Prompt rewrite model
                     * 
                     */
                    void SetPromptRewriteModel(const PromptRewriteModel& _promptRewriteModel);

                    /**
                     * 判断参数 PromptRewriteModel 是否已赋值
                     * @return PromptRewriteModel 是否已赋值
                     * 
                     */
                    bool PromptRewriteModelHasBeenSet() const;

                    /**
                     * 获取Thinking model configuration
                     * @return ThinkModel Thinking model configuration
                     * 
                     */
                    ThinkModel GetThinkModel() const;

                    /**
                     * 设置Thinking model configuration
                     * @param _thinkModel Thinking model configuration
                     * 
                     */
                    void SetThinkModel(const ThinkModel& _thinkModel);

                    /**
                     * 判断参数 ThinkModel 是否已赋值
                     * @return ThinkModel 是否已赋值
                     * 
                     */
                    bool ThinkModelHasBeenSet() const;

                private:

                    /**
                     * AI one-click optimization model
                     */
                    AIOptimizeModel m_aiOptimizeModel;
                    bool m_aiOptimizeModelHasBeenSet;

                    /**
                     * Real-time file parsing model
                     */
                    FileParseModel m_fileParseModel;
                    bool m_fileParseModelHasBeenSet;

                    /**
                     * Generate model configuration
                     */
                    GenerateModel m_generateModel;
                    bool m_generateModelHasBeenSet;

                    /**
                     * Multimodal QA model
                     */
                    MultiModalQAModel m_multiModalQaModel;
                    bool m_multiModalQaModelHasBeenSet;

                    /**
                     * Multimodal understanding model
                     */
                    MultiModalUnderstandingModel m_multiModalUnderstandingModel;
                    bool m_multiModalUnderstandingModelHasBeenSet;

                    /**
                     * Prompt rewrite model
                     */
                    PromptRewriteModel m_promptRewriteModel;
                    bool m_promptRewriteModelHasBeenSet;

                    /**
                     * Thinking model configuration
                     */
                    ThinkModel m_thinkModel;
                    bool m_thinkModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMODELCONFIG_H_
