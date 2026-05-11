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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskHeadTailResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskSegmentResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskFaceResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrWordsResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrFullTextResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskAsrTranslateResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrFullTextResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
<li>AsrTranslateRecognition: Speech translation recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>HeadTailRecognition: Video start and end recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     * @return Type Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>AsrTranslateRecognition: Speech translation recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>HeadTailRecognition: Video start and end recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>AsrTranslateRecognition: Speech translation recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>HeadTailRecognition: Video start and end recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     * @param _type Task type. Valid values:
<li>FaceRecognition: face recognition.</li>
<li>AsrWordsRecognition: speech keyword recognition.</li>
<li>OcrWordsRecognition: text keyword recognition.</li>
<li>AsrFullTextRecognition: full speech recognition.</li>
<li>AsrTranslateRecognition: Speech translation recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>HeadTailRecognition: Video start and end recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
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
                     * 获取Video opening and closing credits recognition result when Type is
HeadTailRecognition.
                     * @return HeadTailTask Video opening and closing credits recognition result when Type is
HeadTailRecognition.
                     * 
                     */
                    AiRecognitionTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置Video opening and closing credits recognition result when Type is
HeadTailRecognition.
                     * @param _headTailTask Video opening and closing credits recognition result when Type is
HeadTailRecognition.
                     * 
                     */
                    void SetHeadTailTask(const AiRecognitionTaskHeadTailResult& _headTailTask);

                    /**
                     * 判断参数 HeadTailTask 是否已赋值
                     * @return HeadTailTask 是否已赋值
                     * 
                     */
                    bool HeadTailTaskHasBeenSet() const;

                    /**
                     * 获取Video splitting recognition result, which is valid when Type is
Valid at SegmentRecognition.
                     * @return SegmentTask Video splitting recognition result, which is valid when Type is
Valid at SegmentRecognition.
                     * 
                     */
                    AiRecognitionTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置Video splitting recognition result, which is valid when Type is
Valid at SegmentRecognition.
                     * @param _segmentTask Video splitting recognition result, which is valid when Type is
Valid at SegmentRecognition.
                     * 
                     */
                    void SetSegmentTask(const AiRecognitionTaskSegmentResult& _segmentTask);

                    /**
                     * 判断参数 SegmentTask 是否已赋值
                     * @return SegmentTask 是否已赋值
                     * 
                     */
                    bool SegmentTaskHasBeenSet() const;

                    /**
                     * 获取Face recognition result, which is valid when Type is 
FaceRecognition.
                     * @return FaceTask Face recognition result, which is valid when Type is 
FaceRecognition.
                     * 
                     */
                    AiRecognitionTaskFaceResult GetFaceTask() const;

                    /**
                     * 设置Face recognition result, which is valid when Type is 
FaceRecognition.
                     * @param _faceTask Face recognition result, which is valid when Type is 
FaceRecognition.
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
                     * 获取Speech keyword recognition result when Type is
Valid at AsrWordsRecognition.
                     * @return AsrWordsTask Speech keyword recognition result when Type is
Valid at AsrWordsRecognition.
                     * 
                     */
                    AiRecognitionTaskAsrWordsResult GetAsrWordsTask() const;

                    /**
                     * 设置Speech keyword recognition result when Type is
Valid at AsrWordsRecognition.
                     * @param _asrWordsTask Speech keyword recognition result when Type is
Valid at AsrWordsRecognition.
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
                     * 获取Full speech recognition result. When Type is
Set to AsrFullTextRecognition, this parameter takes effect.
                     * @return AsrFullTextTask Full speech recognition result. When Type is
Set to AsrFullTextRecognition, this parameter takes effect.
                     * 
                     */
                    AiRecognitionTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置Full speech recognition result. When Type is
Set to AsrFullTextRecognition, this parameter takes effect.
                     * @param _asrFullTextTask Full speech recognition result. When Type is
Set to AsrFullTextRecognition, this parameter takes effect.
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
                     * 获取Voice translation result. Valid when Type is AsrTranslateRecognition.
                     * @return AsrTranslateTask Voice translation result. Valid when Type is AsrTranslateRecognition.
                     * 
                     */
                    AiRecognitionTaskAsrTranslateResult GetAsrTranslateTask() const;

                    /**
                     * 设置Voice translation result. Valid when Type is AsrTranslateRecognition.
                     * @param _asrTranslateTask Voice translation result. Valid when Type is AsrTranslateRecognition.
                     * 
                     */
                    void SetAsrTranslateTask(const AiRecognitionTaskAsrTranslateResult& _asrTranslateTask);

                    /**
                     * 判断参数 AsrTranslateTask 是否已赋值
                     * @return AsrTranslateTask 是否已赋值
                     * 
                     */
                    bool AsrTranslateTaskHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition result when Type is
Valid at OcrWordsRecognition.
                     * @return OcrWordsTask Text keyword recognition result when Type is
Valid at OcrWordsRecognition.
                     * 
                     */
                    AiRecognitionTaskOcrWordsResult GetOcrWordsTask() const;

                    /**
                     * 设置Text keyword recognition result when Type is
Valid at OcrWordsRecognition.
                     * @param _ocrWordsTask Text keyword recognition result when Type is
Valid at OcrWordsRecognition.
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
                     * 获取Full text recognition result. When Type is
OcrFullTextRecognition.
                     * @return OcrFullTextTask Full text recognition result. When Type is
OcrFullTextRecognition.
                     * 
                     */
                    AiRecognitionTaskOcrFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置Full text recognition result. When Type is
OcrFullTextRecognition.
                     * @param _ocrFullTextTask Full text recognition result. When Type is
OcrFullTextRecognition.
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
                     * 获取Object recognition result, which is valid when Type is
Valid at ObjectRecognition.
                     * @return ObjectTask Object recognition result, which is valid when Type is
Valid at ObjectRecognition.
                     * 
                     */
                    AiRecognitionTaskObjectResult GetObjectTask() const;

                    /**
                     * 设置Object recognition result, which is valid when Type is
Valid at ObjectRecognition.
                     * @param _objectTask Object recognition result, which is valid when Type is
Valid at ObjectRecognition.
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
<li>AsrTranslateRecognition: Speech translation recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
<li>HeadTailRecognition: Video start and end recognition,</li>
<li>ObjectRecognition: Object recognition.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Video opening and closing credits recognition result when Type is
HeadTailRecognition.
                     */
                    AiRecognitionTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * Video splitting recognition result, which is valid when Type is
Valid at SegmentRecognition.
                     */
                    AiRecognitionTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

                    /**
                     * Face recognition result, which is valid when Type is 
FaceRecognition.
                     */
                    AiRecognitionTaskFaceResult m_faceTask;
                    bool m_faceTaskHasBeenSet;

                    /**
                     * Speech keyword recognition result when Type is
Valid at AsrWordsRecognition.
                     */
                    AiRecognitionTaskAsrWordsResult m_asrWordsTask;
                    bool m_asrWordsTaskHasBeenSet;

                    /**
                     * Full speech recognition result. When Type is
Set to AsrFullTextRecognition, this parameter takes effect.
                     */
                    AiRecognitionTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * Voice translation result. Valid when Type is AsrTranslateRecognition.
                     */
                    AiRecognitionTaskAsrTranslateResult m_asrTranslateTask;
                    bool m_asrTranslateTaskHasBeenSet;

                    /**
                     * Text keyword recognition result when Type is
Valid at OcrWordsRecognition.
                     */
                    AiRecognitionTaskOcrWordsResult m_ocrWordsTask;
                    bool m_ocrWordsTaskHasBeenSet;

                    /**
                     * Full text recognition result. When Type is
OcrFullTextRecognition.
                     */
                    AiRecognitionTaskOcrFullTextResult m_ocrFullTextTask;
                    bool m_ocrFullTextTaskHasBeenSet;

                    /**
                     * Object recognition result, which is valid when Type is
Valid at ObjectRecognition.
                     */
                    AiRecognitionTaskObjectResult m_objectTask;
                    bool m_objectTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_
