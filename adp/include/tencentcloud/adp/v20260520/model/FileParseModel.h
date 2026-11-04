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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SupportedFileType.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document parsing model parameters
                */
                class FileParseModel : public AbstractModel
                {
                public:
                    FileParseModel();
                    ~FileParseModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model alias
                     * @return Alias Model alias
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Model alias
                     * @param _alias Model alias
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Model description
                     * @return Description Model description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Model description
                     * @param _description Model description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Enhanced mode
                     * @return EnhancementMode Enhanced mode
                     * 
                     */
                    std::string GetEnhancementMode() const;

                    /**
                     * 设置Enhanced mode
                     * @param _enhancementMode Enhanced mode
                     * 
                     */
                    void SetEnhancementMode(const std::string& _enhancementMode);

                    /**
                     * 判断参数 EnhancementMode 是否已赋值
                     * @return EnhancementMode 是否已赋值
                     * 
                     */
                    bool EnhancementModeHasBeenSet() const;

                    /**
                     * 获取Unique ID of a model
                     * @return ModelId Unique ID of a model
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置Unique ID of a model
                     * @param _modelId Unique ID of a model
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Model type
                     * @return ModelProviderType Model type
                     * 
                     */
                    std::string GetModelProviderType() const;

                    /**
                     * 设置Model type
                     * @param _modelProviderType Model type
                     * 
                     */
                    void SetModelProviderType(const std::string& _modelProviderType);

                    /**
                     * 判断参数 ModelProviderType 是否已赋值
                     * @return ModelProviderType 是否已赋值
                     * 
                     */
                    bool ModelProviderTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable formula enhancement
                     * @return EnableFormulaEnhancement Whether to enable formula enhancement
                     * 
                     */
                    bool GetEnableFormulaEnhancement() const;

                    /**
                     * 设置Whether to enable formula enhancement
                     * @param _enableFormulaEnhancement Whether to enable formula enhancement
                     * 
                     */
                    void SetEnableFormulaEnhancement(const bool& _enableFormulaEnhancement);

                    /**
                     * 判断参数 EnableFormulaEnhancement 是否已赋值
                     * @return EnableFormulaEnhancement 是否已赋值
                     * 
                     */
                    bool EnableFormulaEnhancementHasBeenSet() const;

                    /**
                     * 获取Whether to enable LLM enhancement
                     * @return EnableLLMEnhancement Whether to enable LLM enhancement
                     * 
                     */
                    bool GetEnableLLMEnhancement() const;

                    /**
                     * 设置Whether to enable LLM enhancement
                     * @param _enableLLMEnhancement Whether to enable LLM enhancement
                     * 
                     */
                    void SetEnableLLMEnhancement(const bool& _enableLLMEnhancement);

                    /**
                     * 判断参数 EnableLLMEnhancement 是否已赋值
                     * @return EnableLLMEnhancement 是否已赋值
                     * 
                     */
                    bool EnableLLMEnhancementHasBeenSet() const;

                    /**
                     * 获取Whether to output an HTML table
                     * @return OutputHtmlTable Whether to output an HTML table
                     * 
                     */
                    bool GetOutputHtmlTable() const;

                    /**
                     * 设置Whether to output an HTML table
                     * @param _outputHtmlTable Whether to output an HTML table
                     * 
                     */
                    void SetOutputHtmlTable(const bool& _outputHtmlTable);

                    /**
                     * 判断参数 OutputHtmlTable 是否已赋值
                     * @return OutputHtmlTable 是否已赋值
                     * 
                     */
                    bool OutputHtmlTableHasBeenSet() const;

                    /**
                     * 获取Supported file type list
                     * @return SupportedFileList Supported file type list
                     * 
                     */
                    std::vector<SupportedFileType> GetSupportedFileList() const;

                    /**
                     * 设置Supported file type list
                     * @param _supportedFileList Supported file type list
                     * 
                     */
                    void SetSupportedFileList(const std::vector<SupportedFileType>& _supportedFileList);

                    /**
                     * 判断参数 SupportedFileList 是否已赋值
                     * @return SupportedFileList 是否已赋值
                     * 
                     */
                    bool SupportedFileListHasBeenSet() const;

                private:

                    /**
                     * Model alias
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Model description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Enhanced mode
                     */
                    std::string m_enhancementMode;
                    bool m_enhancementModeHasBeenSet;

                    /**
                     * Unique ID of a model
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Model type
                     */
                    std::string m_modelProviderType;
                    bool m_modelProviderTypeHasBeenSet;

                    /**
                     * Whether to enable formula enhancement
                     */
                    bool m_enableFormulaEnhancement;
                    bool m_enableFormulaEnhancementHasBeenSet;

                    /**
                     * Whether to enable LLM enhancement
                     */
                    bool m_enableLLMEnhancement;
                    bool m_enableLLMEnhancementHasBeenSet;

                    /**
                     * Whether to output an HTML table
                     */
                    bool m_outputHtmlTable;
                    bool m_outputHtmlTableHasBeenSet;

                    /**
                     * Supported file type list
                     */
                    std::vector<SupportedFileType> m_supportedFileList;
                    bool m_supportedFileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_FILEPARSEMODEL_H_
