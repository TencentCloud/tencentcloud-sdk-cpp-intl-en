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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_RESULT_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_RESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/Candidate.h>
#include <tencentcloud/iai/v20200303/model/FaceRect.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Face recognition result
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Most matching candidate recognized
                     * @return Candidates Most matching candidate recognized
                     */
                    std::vector<Candidate> GetCandidates() const;

                    /**
                     * 设置Most matching candidate recognized
                     * @param Candidates Most matching candidate recognized
                     */
                    void SetCandidates(const std::vector<Candidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     */
                    bool CandidatesHasBeenSet() const;

                    /**
                     * 获取Position of detected face frame
                     * @return FaceRect Position of detected face frame
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置Position of detected face frame
                     * @param FaceRect Position of detected face frame
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取The status return code for the face image detected. Valid values: `0` - normal; `-1601` - the image does not meet the quality requirements, in which case `Candidate` is empty; `-1604` - the face similarity is not higher than `FaceMatchThreshold`.
                     * @return RetCode The status return code for the face image detected. Valid values: `0` - normal; `-1601` - the image does not meet the quality requirements, in which case `Candidate` is empty; `-1604` - the face similarity is not higher than `FaceMatchThreshold`.
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置The status return code for the face image detected. Valid values: `0` - normal; `-1601` - the image does not meet the quality requirements, in which case `Candidate` is empty; `-1604` - the face similarity is not higher than `FaceMatchThreshold`.
                     * @param RetCode The status return code for the face image detected. Valid values: `0` - normal; `-1601` - the image does not meet the quality requirements, in which case `Candidate` is empty; `-1604` - the face similarity is not higher than `FaceMatchThreshold`.
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * Most matching candidate recognized
                     */
                    std::vector<Candidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                    /**
                     * Position of detected face frame
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * The status return code for the face image detected. Valid values: `0` - normal; `-1601` - the image does not meet the quality requirements, in which case `Candidate` is empty; `-1604` - the face similarity is not higher than `FaceMatchThreshold`.
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_RESULT_H_
