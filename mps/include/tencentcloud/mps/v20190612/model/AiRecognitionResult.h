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
<li>FaceRecognition: Face recognition,</li>
<li>AsrWordsRecognition: Speech keyword recognition,</li>
<li>OcrWordsRecognition: Text keyword recognition,</li>
<li>AsrFullTextRecognition: Full speech recognition,</li>
<li>OcrFullTextRecognition: Full text recognition,</li>
<li>HeadTailRecognition: Video opening and ending credits recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     * @return Type Task type. Valid values:
<li>FaceRecognition: Face recognition,</li>
<li>AsrWordsRecognition: Speech keyword recognition,</li>
<li>OcrWordsRecognition: Text keyword recognition,</li>
<li>AsrFullTextRecognition: Full speech recognition,</li>
<li>OcrFullTextRecognition: Full text recognition,</li>
<li>HeadTailRecognition: Video opening and ending credits recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>FaceRecognition: Face recognition,</li>
<li>AsrWordsRecognition: Speech keyword recognition,</li>
<li>OcrWordsRecognition: Text keyword recognition,</li>
<li>AsrFullTextRecognition: Full speech recognition,</li>
<li>OcrFullTextRecognition: Full text recognition,</li>
<li>HeadTailRecognition: Video opening and ending credits recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     * @param Type Task type. Valid values:
<li>FaceRecognition: Face recognition,</li>
<li>AsrWordsRecognition: Speech keyword recognition,</li>
<li>OcrWordsRecognition: Text keyword recognition,</li>
<li>AsrFullTextRecognition: Full speech recognition,</li>
<li>OcrFullTextRecognition: Full text recognition,</li>
<li>HeadTailRecognition: Video opening and ending credits recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FaceTask Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskFaceResult GetFaceTask() const;

                    /**
                     * 设置Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param FaceTask Face recognition result, which is valid when `Type` is 
 `FaceRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFaceTask(const AiRecognitionTaskFaceResult& _faceTask);

                    /**
                     * 判断参数 FaceTask 是否已赋值
                     * @return FaceTask 是否已赋值
                     */
                    bool FaceTaskHasBeenSet() const;

                    /**
                     * 获取Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrWordsTask Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskAsrWordsResult GetAsrWordsTask() const;

                    /**
                     * 设置Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AsrWordsTask Speech keyword recognition result, which is valid when `Type` is
 `AsrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrWordsTask(const AiRecognitionTaskAsrWordsResult& _asrWordsTask);

                    /**
                     * 判断参数 AsrWordsTask 是否已赋值
                     * @return AsrWordsTask 是否已赋值
                     */
                    bool AsrWordsTaskHasBeenSet() const;

                    /**
                     * 获取Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AsrFullTextTask Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AsrFullTextTask Full speech recognition result, which is valid when `Type` is
 `AsrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAsrFullTextTask(const AiRecognitionTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrWordsTask Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskOcrWordsResult GetOcrWordsTask() const;

                    /**
                     * 设置Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OcrWordsTask Text keyword recognition result, which is valid when `Type` is
 `OcrWordsRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrWordsTask(const AiRecognitionTaskOcrWordsResult& _ocrWordsTask);

                    /**
                     * 判断参数 OcrWordsTask 是否已赋值
                     * @return OcrWordsTask 是否已赋值
                     */
                    bool OcrWordsTaskHasBeenSet() const;

                    /**
                     * 获取Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OcrFullTextTask Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiRecognitionTaskOcrFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OcrFullTextTask Full text recognition result, which is valid when `Type` is
 `OcrFullTextRecognition`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOcrFullTextTask(const AiRecognitionTaskOcrFullTextResult& _ocrFullTextTask);

                    /**
                     * 判断参数 OcrFullTextTask 是否已赋值
                     * @return OcrFullTextTask 是否已赋值
                     */
                    bool OcrFullTextTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>FaceRecognition: Face recognition,</li>
<li>AsrWordsRecognition: Speech keyword recognition,</li>
<li>OcrWordsRecognition: Text keyword recognition,</li>
<li>AsrFullTextRecognition: Full speech recognition,</li>
<li>OcrFullTextRecognition: Full text recognition,</li>
<li>HeadTailRecognition: Video opening and ending credits recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONRESULT_H_
