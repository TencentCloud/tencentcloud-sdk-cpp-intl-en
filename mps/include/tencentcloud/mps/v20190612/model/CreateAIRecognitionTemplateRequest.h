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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FaceConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrWordsConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrWordsConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TranslateConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAIRecognitionTemplate request structure.
                */
                class CreateAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    CreateAIRecognitionTemplateRequest();
                    ~CreateAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


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
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置Face Recognition Control Parameter.
                     * @param _faceConfigure Face Recognition Control Parameter.
                     * 
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     * 
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取Full Text Recognition Control Parameter.
                     * @return OcrFullTextConfigure Full Text Recognition Control Parameter.
                     * 
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置Full Text Recognition Control Parameter.
                     * @param _ocrFullTextConfigure Full Text Recognition Control Parameter.
                     * 
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition control.
                     * @return OcrWordsConfigure Text keyword recognition control.
                     * 
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置Text keyword recognition control.
                     * @param _ocrWordsConfigure Text keyword recognition control.
                     * 
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     * 
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Speech Full-text Recognition Control Parameter.
                     * @return AsrFullTextConfigure Speech Full-text Recognition Control Parameter.
                     * 
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置Speech Full-text Recognition Control Parameter.
                     * @param _asrFullTextConfigure Speech Full-text Recognition Control Parameter.
                     * 
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

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
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置Voice keyword recognition control parameters.
                     * @param _asrWordsConfigure Voice keyword recognition control parameters.
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

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
                    TranslateConfigureInfo GetTranslateConfigure() const;

                    /**
                     * 设置Voice translation control parameters.
                     * @param _translateConfigure Voice translation control parameters.
                     * 
                     */
                    void SetTranslateConfigure(const TranslateConfigureInfo& _translateConfigure);

                    /**
                     * 判断参数 TranslateConfigure 是否已赋值
                     * @return TranslateConfigure 是否已赋值
                     * 
                     */
                    bool TranslateConfigureHasBeenSet() const;

                private:

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
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * Full Text Recognition Control Parameter.
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * Text keyword recognition control.
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * Speech Full-text Recognition Control Parameter.
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * Voice keyword recognition control parameters.
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * Voice translation control parameters.
                     */
                    TranslateConfigureInfo m_translateConfigure;
                    bool m_translateConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
