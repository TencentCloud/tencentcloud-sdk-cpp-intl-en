/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Release Q&A.
                */
                class ReleaseQA : public AbstractModel
                {
                public:
                    ReleaseQA();
                    ~ReleaseQA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Question.
                     * @return Question Question.
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置Question.
                     * @param _question Question.
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Status.
                     * @return Action Status.
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置Status.
                     * @param _action Status.
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Status description.
                     * @return ActionDesc Status description.
                     * 
                     */
                    std::string GetActionDesc() const;

                    /**
                     * 设置Status description.
                     * @param _actionDesc Status description.
                     * 
                     */
                    void SetActionDesc(const std::string& _actionDesc);

                    /**
                     * 判断参数 ActionDesc 是否已赋值
                     * @return ActionDesc 是否已赋值
                     * 
                     */
                    bool ActionDescHasBeenSet() const;

                    /**
                     * 获取Source, 1: documentation generation; 2: batch import; 3: manual addition.
                     * @return Source Source, 1: documentation generation; 2: batch import; 3: manual addition.
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置Source, 1: documentation generation; 2: batch import; 3: manual addition.
                     * @param _source Source, 1: documentation generation; 2: batch import; 3: manual addition.
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Source description.
                     * @return SourceDesc Source description.
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置Source description.
                     * @param _sourceDesc Source description.
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取Filename.
                     * @return FileName Filename.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename.
                     * @param _fileName Filename.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Document type.
                     * @return FileType Document type.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Document type.
                     * @param _fileType Document type.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return Message Reason for failure
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Reason for failure
                     * @param _message Reason for failure
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Release status.
                     * @return ReleaseStatus Release status.
                     * 
                     */
                    uint64_t GetReleaseStatus() const;

                    /**
                     * 设置Release status.
                     * @param _releaseStatus Release status.
                     * 
                     */
                    void SetReleaseStatus(const uint64_t& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取Q&A ID.
                     * @return QaBizId Q&A ID.
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置Q&A ID.
                     * @param _qaBizId Q&A ID.
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取Document business ID.
                     * @return DocBizId Document business ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document business ID.
                     * @param _docBizId Document business ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                private:

                    /**
                     * Question.
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Status.
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Status description.
                     */
                    std::string m_actionDesc;
                    bool m_actionDescHasBeenSet;

                    /**
                     * Source, 1: documentation generation; 2: batch import; 3: manual addition.
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Source description.
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * Filename.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Document type.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Release status.
                     */
                    uint64_t m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * Q&A ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Document business ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RELEASEQA_H_
