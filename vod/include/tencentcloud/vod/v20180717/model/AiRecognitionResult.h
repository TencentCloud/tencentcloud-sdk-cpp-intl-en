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
                * 
                */
                class AiRecognitionResult : public AbstractModel
                {
                public:
                    AiRecognitionResult();
                    ~AiRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * @return HeadTailTask 
                     * 
                     */
                    AiRecognitionTaskHeadTailResult GetHeadTailTask() const;

                    /**
                     * 设置
                     * @param _headTailTask 
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
                     * 获取
                     * @return SegmentTask 
                     * 
                     */
                    AiRecognitionTaskSegmentResult GetSegmentTask() const;

                    /**
                     * 设置
                     * @param _segmentTask 
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
                     * @return AsrTranslateTask 
                     * 
                     */
                    AiRecognitionTaskAsrTranslateResult GetAsrTranslateTask() const;

                    /**
                     * 设置
                     * @param _asrTranslateTask 
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
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskHeadTailResult m_headTailTask;
                    bool m_headTailTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskSegmentResult m_segmentTask;
                    bool m_segmentTaskHasBeenSet;

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
                    AiRecognitionTaskAsrTranslateResult m_asrTranslateTask;
                    bool m_asrTranslateTaskHasBeenSet;

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
                    AiRecognitionTaskObjectResult m_objectTask;
                    bool m_objectTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONRESULT_H_
