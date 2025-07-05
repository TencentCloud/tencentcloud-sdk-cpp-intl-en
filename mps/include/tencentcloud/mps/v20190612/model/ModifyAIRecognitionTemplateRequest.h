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
                     * 获取Unique ID of a video content recognition template.
                     * @return Definition Unique ID of a video content recognition template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique ID of a video content recognition template.
                     * @param _definition Unique ID of a video content recognition template.
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
                     * 获取Name of a video content recognition template. Length limit: 64 characters.
                     * @return Name Name of a video content recognition template. Length limit: 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a video content recognition template. Length limit: 64 characters.
                     * @param _name Name of a video content recognition template. Length limit: 64 characters.
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
                     * 获取Description of a video content recognition template. Length limit: 256 characters.
                     * @return Comment Description of a video content recognition template. Length limit: 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description of a video content recognition template. Length limit: 256 characters.
                     * @param _comment Description of a video content recognition template. Length limit: 256 characters.
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
                     * 获取Face recognition control parameter.
                     * @return FaceConfigure Face recognition control parameter.
                     * 
                     */
                    FaceConfigureInfoForUpdate GetFaceConfigure() const;

                    /**
                     * 设置Face recognition control parameter.
                     * @param _faceConfigure Face recognition control parameter.
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
                     * 获取Full text recognition control parameter.
                     * @return OcrFullTextConfigure Full text recognition control parameter.
                     * 
                     */
                    OcrFullTextConfigureInfoForUpdate GetOcrFullTextConfigure() const;

                    /**
                     * 设置Full text recognition control parameter.
                     * @param _ocrFullTextConfigure Full text recognition control parameter.
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
                     * 获取Text keyword recognition control parameter.
                     * @return OcrWordsConfigure Text keyword recognition control parameter.
                     * 
                     */
                    OcrWordsConfigureInfoForUpdate GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control parameter.
                     * @param _ocrWordsConfigure Text keyword recognition control parameter.
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
                     * 获取Full speech recognition control parameter.
                     * @return AsrFullTextConfigure Full speech recognition control parameter.
                     * 
                     */
                    AsrFullTextConfigureInfoForUpdate GetAsrFullTextConfigure() const;

                    /**
                     * 设置Full speech recognition control parameter.
                     * @param _asrFullTextConfigure Full speech recognition control parameter.
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
                     * 获取Speech keyword recognition control parameter.
                     * @return AsrWordsConfigure Speech keyword recognition control parameter.
                     * 
                     */
                    AsrWordsConfigureInfoForUpdate GetAsrWordsConfigure() const;

                    /**
                     * 设置Speech keyword recognition control parameter.
                     * @param _asrWordsConfigure Speech keyword recognition control parameter.
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfoForUpdate& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a video content recognition template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Name of a video content recognition template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of a video content recognition template. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Face recognition control parameter.
                     */
                    FaceConfigureInfoForUpdate m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Full text recognition control parameter.
                     */
                    OcrFullTextConfigureInfoForUpdate m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control parameter.
                     */
                    OcrWordsConfigureInfoForUpdate m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Full speech recognition control parameter.
                     */
                    AsrFullTextConfigureInfoForUpdate m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Speech keyword recognition control parameter.
                     */
                    AsrWordsConfigureInfoForUpdate m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYAIRECOGNITIONTEMPLATEREQUEST_H_
