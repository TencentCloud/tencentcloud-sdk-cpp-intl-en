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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskFaceResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrWordsResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskAsrFullTextResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskOcrWordsResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskOcrFullTextResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskTransTextResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskObjectResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Intelligent recognition result.
                */
                class AiRecognitionResult : public AbstractModel
                {
                public:
                    AiRecognitionResult();
                    ~AiRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>TransTextRecognition: speech translation</li>
                     * @return Type Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>TransTextRecognition: speech translation</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>TransTextRecognition: speech translation</li>
                     * @param _type Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>TransTextRecognition: speech translation</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return FaceTask 
                     * 
                     */
                    AiRecognitionTaskFaceResult GetFaceTask() const;

                    /**
                     * 设置
                     * @param _faceTask 
                     * 
                     */
                    void SetFaceTask(const AiRecognitionTaskFaceResult& _faceTask);

                    /**
                     * 判断参数 FaceTask 是否已赋值
                     * @return FaceTask 是否已赋值
                     * 
                     */
                    bool FaceTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AsrWordsTask 
                     * 
                     */
                    AiRecognitionTaskAsrWordsResult GetAsrWordsTask() const;

                    /**
                     * 设置
                     * @param _asrWordsTask 
                     * 
                     */
                    void SetAsrWordsTask(const AiRecognitionTaskAsrWordsResult& _asrWordsTask);

                    /**
                     * 判断参数 AsrWordsTask 是否已赋值
                     * @return AsrWordsTask 是否已赋值
                     * 
                     */
                    bool AsrWordsTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return AsrFullTextTask 
                     * 
                     */
                    AiRecognitionTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置
                     * @param _asrFullTextTask 
                     * 
                     */
                    void SetAsrFullTextTask(const AiRecognitionTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return OcrWordsTask 
                     * 
                     */
                    AiRecognitionTaskOcrWordsResult GetOcrWordsTask() const;

                    /**
                     * 设置
                     * @param _ocrWordsTask 
                     * 
                     */
                    void SetOcrWordsTask(const AiRecognitionTaskOcrWordsResult& _ocrWordsTask);

                    /**
                     * 判断参数 OcrWordsTask 是否已赋值
                     * @return OcrWordsTask 是否已赋值
                     * 
                     */
                    bool OcrWordsTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return OcrFullTextTask 
                     * 
                     */
                    AiRecognitionTaskOcrFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置
                     * @param _ocrFullTextTask 
                     * 
                     */
                    void SetOcrFullTextTask(const AiRecognitionTaskOcrFullTextResult& _ocrFullTextTask);

                    /**
                     * 判断参数 OcrFullTextTask 是否已赋值
                     * @return OcrFullTextTask 是否已赋值
                     * 
                     */
                    bool OcrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TransTextTask 
                     * 
                     */
                    AiRecognitionTaskTransTextResult GetTransTextTask() const;

                    /**
                     * 设置
                     * @param _transTextTask 
                     * 
                     */
                    void SetTransTextTask(const AiRecognitionTaskTransTextResult& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return ObjectTask 
                     * 
                     */
                    AiRecognitionTaskObjectResult GetObjectTask() const;

                    /**
                     * 设置
                     * @param _objectTask 
                     * 
                     */
                    void SetObjectTask(const AiRecognitionTaskObjectResult& _objectTask);

                    /**
                     * 判断参数 ObjectTask 是否已赋值
                     * @return ObjectTask 是否已赋值
                     * 
                     */
                    bool ObjectTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>TransTextRecognition: speech translation</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskFaceResult m_faceTask;
                    bool m_faceTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskAsrWordsResult m_asrWordsTask;
                    bool m_asrWordsTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskOcrWordsResult m_ocrWordsTask;
                    bool m_ocrWordsTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskOcrFullTextResult m_ocrFullTextTask;
                    bool m_ocrFullTextTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskTransTextResult m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskObjectResult m_objectTask;
                    bool m_objectTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONRESULT_H_
