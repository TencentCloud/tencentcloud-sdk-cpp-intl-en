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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendSummaryForUpdate.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendAsrForUpdate.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendFaceRecognitionForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyLLMComprehendTemplate request structure.
                */
                class ModifyLLMComprehendTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLLMComprehendTemplateRequest();
                    ~ModifyLLMComprehendTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
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
                     * 获取
                     * @return Model 
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置
                     * @param _model 
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取
                     * @return Summary 
                     * 
                     */
                    LLMComprehendSummaryForUpdate GetSummary() const;

                    /**
                     * 设置
                     * @param _summary 
                     * 
                     */
                    void SetSummary(const LLMComprehendSummaryForUpdate& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取
                     * @return Asr 
                     * 
                     */
                    LLMComprehendAsrForUpdate GetAsr() const;

                    /**
                     * 设置
                     * @param _asr 
                     * 
                     */
                    void SetAsr(const LLMComprehendAsrForUpdate& _asr);

                    /**
                     * 判断参数 Asr 是否已赋值
                     * @return Asr 是否已赋值
                     * 
                     */
                    bool AsrHasBeenSet() const;

                    /**
                     * 获取
                     * @return FaceRecognition 
                     * 
                     */
                    LLMComprehendFaceRecognitionForUpdate GetFaceRecognition() const;

                    /**
                     * 设置
                     * @param _faceRecognition 
                     * 
                     */
                    void SetFaceRecognition(const LLMComprehendFaceRecognitionForUpdate& _faceRecognition);

                    /**
                     * 判断参数 FaceRecognition 是否已赋值
                     * @return FaceRecognition 是否已赋值
                     * 
                     */
                    bool FaceRecognitionHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 
                     */
                    LLMComprehendSummaryForUpdate m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 
                     */
                    LLMComprehendAsrForUpdate m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * 
                     */
                    LLMComprehendFaceRecognitionForUpdate m_faceRecognition;
                    bool m_faceRecognitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_
