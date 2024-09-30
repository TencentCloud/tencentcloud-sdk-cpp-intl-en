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
                     * 获取The task type. Valid values:
<li>FaceRecognition: Face recognition</li>
<li>AsrWordsRecognition: Speech keyword recognition</li>
<li>OcrWordsRecognition: Text keyword recognition</li>
<li>AsrFullTextRecognition: Full speech recognition</li>
<li>OcrFullTextRecognition: Full text recognition</li>
<li>TransTextRecognition: Speech translation</li>
                     * @return Type The task type. Valid values:
<li>FaceRecognition: Face recognition</li>
<li>AsrWordsRecognition: Speech keyword recognition</li>
<li>OcrWordsRecognition: Text keyword recognition</li>
<li>AsrFullTextRecognition: Full speech recognition</li>
<li>OcrFullTextRecognition: Full text recognition</li>
<li>TransTextRecognition: Speech translation</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The task type. Valid values:
<li>FaceRecognition: Face recognition</li>
<li>AsrWordsRecognition: Speech keyword recognition</li>
<li>OcrWordsRecognition: Text keyword recognition</li>
<li>AsrFullTextRecognition: Full speech recognition</li>
<li>OcrFullTextRecognition: Full text recognition</li>
<li>TransTextRecognition: Speech translation</li>
                     * @param _type The task type. Valid values:
<li>FaceRecognition: Face recognition</li>
<li>AsrWordsRecognition: Speech keyword recognition</li>
<li>OcrWordsRecognition: Text keyword recognition</li>
<li>AsrFullTextRecognition: Full speech recognition</li>
<li>OcrFullTextRecognition: Full text recognition</li>
<li>TransTextRecognition: Speech translation</li>
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
                     * 获取Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceTask Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskFaceResult GetFaceTask() const;

                    /**
                     * 设置Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _faceTask Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrWordsTask Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskAsrWordsResult GetAsrWordsTask() const;

                    /**
                     * 设置Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrWordsTask Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrFullTextTask Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _asrFullTextTask Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrWordsTask Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskOcrWordsResult GetOcrWordsTask() const;

                    /**
                     * 设置Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ocrWordsTask Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrFullTextTask Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskOcrFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ocrFullTextTask Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The translation result. This parameter is valid only if `Type` is
 `TransTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TransTextTask The translation result. This parameter is valid only if `Type` is
 `TransTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskTransTextResult GetTransTextTask() const;

                    /**
                     * 设置The translation result. This parameter is valid only if `Type` is
 `TransTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transTextTask The translation result. This parameter is valid only if `Type` is
 `TransTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Object recognition result, which is valid when Type is

ObjectRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectTask Object recognition result, which is valid when Type is

ObjectRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiRecognitionTaskObjectResult GetObjectTask() const;

                    /**
                     * 设置Object recognition result, which is valid when Type is

ObjectRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectTask Object recognition result, which is valid when Type is

ObjectRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The task type. Valid values:
<li>FaceRecognition: Face recognition</li>
<li>AsrWordsRecognition: Speech keyword recognition</li>
<li>OcrWordsRecognition: Text keyword recognition</li>
<li>AsrFullTextRecognition: Full speech recognition</li>
<li>OcrFullTextRecognition: Full text recognition</li>
<li>TransTextRecognition: Speech translation</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskFaceResult m_faceTask;
                    bool m_faceTaskHasBeenSet;

                    /**
                     * Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskAsrWordsResult m_asrWordsTask;
                    bool m_asrWordsTaskHasBeenSet;

                    /**
                     * Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskOcrWordsResult m_ocrWordsTask;
                    bool m_ocrWordsTaskHasBeenSet;

                    /**
                     * Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskOcrFullTextResult m_ocrFullTextTask;
                    bool m_ocrFullTextTaskHasBeenSet;

                    /**
                     * The translation result. This parameter is valid only if `Type` is
 `TransTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskTransTextResult m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * Object recognition result, which is valid when Type is

ObjectRecognition.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskObjectResult m_objectTask;
                    bool m_objectTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONRESULT_H_
