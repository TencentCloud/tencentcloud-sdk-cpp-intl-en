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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FaceConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/OcrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/OcrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/AsrFullTextConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/AsrWordsConfigureInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/TranslateConfigureInfoForUpdate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyAIRecognitionTemplate request structure.
                */
                class ModifyAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAIRecognitionTemplateRequest();
                    ~ModifyAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of a video content recognition template.
                     * @return Definition Unique identifier of a video content recognition template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of a video content recognition template.
                     * @param _definition Unique identifier of a video content recognition template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Video content recognition template name, length limited to 64 characters.
                     * @return Name Video content recognition template name, length limited to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Video content recognition template name, length limited to 64 characters.
                     * @param _name Video content recognition template name, length limited to 64 characters.
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
                     * 获取Video Content Recognition template description, length limited to 256 characters.
                     * @return Comment Video Content Recognition template description, length limited to 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Video Content Recognition template description, length limited to 256 characters.
                     * @param _comment Video Content Recognition template description, length limited to 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Face Recognition Control Parameter.
                     * @return FaceConfigure Face Recognition Control Parameter.
                     * 
                     */
                    FaceConfigureInfoForUpdate GetFaceConfigure() const;

                    /**
                     * 设置Face Recognition Control Parameter.
                     * @param _faceConfigure Face Recognition Control Parameter.
                     * 
                     */
                    void SetFaceConfigure(const FaceConfigureInfoForUpdate& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     * 
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Text Full-text Recognition Control Parameters.
                     * @return OcrFullTextConfigure Text Full-text Recognition Control Parameters.
                     * 
                     */
                    OcrFullTextConfigureInfoForUpdate GetOcrFullTextConfigure() const;

                    /**
                     * 设置Text Full-text Recognition Control Parameters.
                     * @param _ocrFullTextConfigure Text Full-text Recognition Control Parameters.
                     * 
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfoForUpdate& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition control parameters.
                     * @return OcrWordsConfigure Text keyword recognition control parameters.
                     * 
                     */
                    OcrWordsConfigureInfoForUpdate GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control parameters.
                     * @param _ocrWordsConfigure Text keyword recognition control parameters.
                     * 
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfoForUpdate& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     * 
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Voice full-text recognition control parameters.
                     * @return AsrFullTextConfigure Voice full-text recognition control parameters.
                     * 
                     */
                    AsrFullTextConfigureInfoForUpdate GetAsrFullTextConfigure() const;

                    /**
                     * 设置Voice full-text recognition control parameters.
                     * @param _asrFullTextConfigure Voice full-text recognition control parameters.
                     * 
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfoForUpdate& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Voice keyword recognition control parameters.
                     * @return AsrWordsConfigure Voice keyword recognition control parameters.
                     * 
                     */
                    AsrWordsConfigureInfoForUpdate GetAsrWordsConfigure() const;

                    /**
                     * 设置Voice keyword recognition control parameters.
                     * @param _asrWordsConfigure Voice keyword recognition control parameters.
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfoForUpdate& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Voice translation control parameters.
                     * @return TranslateConfigure Voice translation control parameters.
                     * 
                     */
                    TranslateConfigureInfoForUpdate GetTranslateConfigure() const;

                    /**
                     * 设置Voice translation control parameters.
                     * @param _translateConfigure Voice translation control parameters.
                     * 
                     */
                    void SetTranslateConfigure(const TranslateConfigureInfoForUpdate& _translateConfigure);

                    /**
                     * 判断参数 TranslateConfigure 是否已赋值
                     * @return TranslateConfigure 是否已赋值
                     * 
                     */
                    bool TranslateConfigureHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of a video content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Video content recognition template name, length limited to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Video Content Recognition template description, length limited to 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Face Recognition Control Parameter.
                     */
                    FaceConfigureInfoForUpdate m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Text Full-text Recognition Control Parameters.
                     */
                    OcrFullTextConfigureInfoForUpdate m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control parameters.
                     */
                    OcrWordsConfigureInfoForUpdate m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Voice full-text recognition control parameters.
                     */
                    AsrFullTextConfigureInfoForUpdate m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Voice keyword recognition control parameters.
                     */
                    AsrWordsConfigureInfoForUpdate m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Voice translation control parameters.
                     */
                    TranslateConfigureInfoForUpdate m_translateConfigure;
                    bool m_translateConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
