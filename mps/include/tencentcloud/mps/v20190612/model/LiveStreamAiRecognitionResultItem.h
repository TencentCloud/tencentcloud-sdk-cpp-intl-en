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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamFaceRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAsrWordsRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamOcrWordsRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAsrFullTextRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamOcrFullTextRecognitionResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * AI-based live stream recognition result
                */
                class LiveStreamAiRecognitionResultItem : public AbstractModel
                {
                public:
                    LiveStreamAiRecognitionResultItem();
                    ~LiveStreamAiRecognitionResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Result type. Valid values:
<li>FaceRecognition: face recognition,</li>
<li>AsrWordsRecognition: speech keyword recognition,</li>
<li>OcrWordsRecognition: text keyword recognition,</li>
<li>AsrFullTextRecognition: full speech recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
                     * @return Type Result type. Valid values:
<li>FaceRecognition: face recognition,</li>
<li>AsrWordsRecognition: speech keyword recognition,</li>
<li>OcrWordsRecognition: text keyword recognition,</li>
<li>AsrFullTextRecognition: full speech recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Result type. Valid values:
<li>FaceRecognition: face recognition,</li>
<li>AsrWordsRecognition: speech keyword recognition,</li>
<li>OcrWordsRecognition: text keyword recognition,</li>
<li>AsrFullTextRecognition: full speech recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
                     * @param Type Result type. Valid values:
<li>FaceRecognition: face recognition,</li>
<li>AsrWordsRecognition: speech keyword recognition,</li>
<li>OcrWordsRecognition: text keyword recognition,</li>
<li>AsrFullTextRecognition: full speech recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
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
                     * @return FaceRecognitionResultSet Face recognition result, which is valid when `Type` is
`FaceRecognition`.
                     */
                    std::vector<LiveStreamFaceRecognitionResult> GetFaceRecognitionResultSet() const;

                    /**
                     * 设置Face recognition result, which is valid when `Type` is
`FaceRecognition`.
                     * @param FaceRecognitionResultSet Face recognition result, which is valid when `Type` is
`FaceRecognition`.
                     */
                    void SetFaceRecognitionResultSet(const std::vector<LiveStreamFaceRecognitionResult>& _faceRecognitionResultSet);

                    /**
                     * 判断参数 FaceRecognitionResultSet 是否已赋值
                     * @return FaceRecognitionResultSet 是否已赋值
                     */
                    bool FaceRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Speech keyword recognition result, which is valid when `Type` is
`AsrWordsRecognition`.
                     * @return AsrWordsRecognitionResultSet Speech keyword recognition result, which is valid when `Type` is
`AsrWordsRecognition`.
                     */
                    std::vector<LiveStreamAsrWordsRecognitionResult> GetAsrWordsRecognitionResultSet() const;

                    /**
                     * 设置Speech keyword recognition result, which is valid when `Type` is
`AsrWordsRecognition`.
                     * @param AsrWordsRecognitionResultSet Speech keyword recognition result, which is valid when `Type` is
`AsrWordsRecognition`.
                     */
                    void SetAsrWordsRecognitionResultSet(const std::vector<LiveStreamAsrWordsRecognitionResult>& _asrWordsRecognitionResultSet);

                    /**
                     * 判断参数 AsrWordsRecognitionResultSet 是否已赋值
                     * @return AsrWordsRecognitionResultSet 是否已赋值
                     */
                    bool AsrWordsRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Text keyword recognition result, which is valid when `Type` is
`OcrWordsRecognition`.
                     * @return OcrWordsRecognitionResultSet Text keyword recognition result, which is valid when `Type` is
`OcrWordsRecognition`.
                     */
                    std::vector<LiveStreamOcrWordsRecognitionResult> GetOcrWordsRecognitionResultSet() const;

                    /**
                     * 设置Text keyword recognition result, which is valid when `Type` is
`OcrWordsRecognition`.
                     * @param OcrWordsRecognitionResultSet Text keyword recognition result, which is valid when `Type` is
`OcrWordsRecognition`.
                     */
                    void SetOcrWordsRecognitionResultSet(const std::vector<LiveStreamOcrWordsRecognitionResult>& _ocrWordsRecognitionResultSet);

                    /**
                     * 判断参数 OcrWordsRecognitionResultSet 是否已赋值
                     * @return OcrWordsRecognitionResultSet 是否已赋值
                     */
                    bool OcrWordsRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Full speech recognition result, which is valid when `Type` is
`AsrFullTextRecognition`.
                     * @return AsrFullTextRecognitionResultSet Full speech recognition result, which is valid when `Type` is
`AsrFullTextRecognition`.
                     */
                    std::vector<LiveStreamAsrFullTextRecognitionResult> GetAsrFullTextRecognitionResultSet() const;

                    /**
                     * 设置Full speech recognition result, which is valid when `Type` is
`AsrFullTextRecognition`.
                     * @param AsrFullTextRecognitionResultSet Full speech recognition result, which is valid when `Type` is
`AsrFullTextRecognition`.
                     */
                    void SetAsrFullTextRecognitionResultSet(const std::vector<LiveStreamAsrFullTextRecognitionResult>& _asrFullTextRecognitionResultSet);

                    /**
                     * 判断参数 AsrFullTextRecognitionResultSet 是否已赋值
                     * @return AsrFullTextRecognitionResultSet 是否已赋值
                     */
                    bool AsrFullTextRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Full text recognition result, which is valid when `Type` is
`OcrFullTextRecognition`.
                     * @return OcrFullTextRecognitionResultSet Full text recognition result, which is valid when `Type` is
`OcrFullTextRecognition`.
                     */
                    std::vector<LiveStreamOcrFullTextRecognitionResult> GetOcrFullTextRecognitionResultSet() const;

                    /**
                     * 设置Full text recognition result, which is valid when `Type` is
`OcrFullTextRecognition`.
                     * @param OcrFullTextRecognitionResultSet Full text recognition result, which is valid when `Type` is
`OcrFullTextRecognition`.
                     */
                    void SetOcrFullTextRecognitionResultSet(const std::vector<LiveStreamOcrFullTextRecognitionResult>& _ocrFullTextRecognitionResultSet);

                    /**
                     * 判断参数 OcrFullTextRecognitionResultSet 是否已赋值
                     * @return OcrFullTextRecognitionResultSet 是否已赋值
                     */
                    bool OcrFullTextRecognitionResultSetHasBeenSet() const;

                private:

                    /**
                     * Result type. Valid values:
<li>FaceRecognition: face recognition,</li>
<li>AsrWordsRecognition: speech keyword recognition,</li>
<li>OcrWordsRecognition: text keyword recognition,</li>
<li>AsrFullTextRecognition: full speech recognition,</li>
<li>OcrFullTextRecognition: full text recognition.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Face recognition result, which is valid when `Type` is
`FaceRecognition`.
                     */
                    std::vector<LiveStreamFaceRecognitionResult> m_faceRecognitionResultSet;
                    bool m_faceRecognitionResultSetHasBeenSet;

                    /**
                     * Speech keyword recognition result, which is valid when `Type` is
`AsrWordsRecognition`.
                     */
                    std::vector<LiveStreamAsrWordsRecognitionResult> m_asrWordsRecognitionResultSet;
                    bool m_asrWordsRecognitionResultSetHasBeenSet;

                    /**
                     * Text keyword recognition result, which is valid when `Type` is
`OcrWordsRecognition`.
                     */
                    std::vector<LiveStreamOcrWordsRecognitionResult> m_ocrWordsRecognitionResultSet;
                    bool m_ocrWordsRecognitionResultSetHasBeenSet;

                    /**
                     * Full speech recognition result, which is valid when `Type` is
`AsrFullTextRecognition`.
                     */
                    std::vector<LiveStreamAsrFullTextRecognitionResult> m_asrFullTextRecognitionResultSet;
                    bool m_asrFullTextRecognitionResultSetHasBeenSet;

                    /**
                     * Full text recognition result, which is valid when `Type` is
`OcrFullTextRecognition`.
                     */
                    std::vector<LiveStreamOcrFullTextRecognitionResult> m_ocrFullTextRecognitionResultSet;
                    bool m_ocrFullTextRecognitionResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMAIRECOGNITIONRESULTITEM_H_
