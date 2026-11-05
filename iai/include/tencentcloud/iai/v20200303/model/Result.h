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
                * Recognition result of the human face
                */
                class Result : public AbstractModel
                {
                public:
                    Result();
                    ~Result() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The most similar candidate identified.
                     * @return Candidates The most similar candidate identified.
                     * 
                     */
                    std::vector<Candidate> GetCandidates() const;

                    /**
                     * 设置The most similar candidate identified.
                     * @param _candidates The most similar candidate identified.
                     * 
                     */
                    void SetCandidates(const std::vector<Candidate>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                    /**
                     * 获取Face bounding box position detected.
                     * @return FaceRect Face bounding box position detected.
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置Face bounding box position detected.
                     * @param _faceRect Face bounding box position detected.
                     * 
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取Status return code of the detected face image.
- 0 indicates normal. 
-1601 indicates the image quality control requirement is not met. At this point, the Candidate content is empty.
                     * @return RetCode Status return code of the detected face image.
- 0 indicates normal. 
-1601 indicates the image quality control requirement is not met. At this point, the Candidate content is empty.
                     * 
                     */
                    int64_t GetRetCode() const;

                    /**
                     * 设置Status return code of the detected face image.
- 0 indicates normal. 
-1601 indicates the image quality control requirement is not met. At this point, the Candidate content is empty.
                     * @param _retCode Status return code of the detected face image.
- 0 indicates normal. 
-1601 indicates the image quality control requirement is not met. At this point, the Candidate content is empty.
                     * 
                     */
                    void SetRetCode(const int64_t& _retCode);

                    /**
                     * 判断参数 RetCode 是否已赋值
                     * @return RetCode 是否已赋值
                     * 
                     */
                    bool RetCodeHasBeenSet() const;

                private:

                    /**
                     * The most similar candidate identified.
                     */
                    std::vector<Candidate> m_candidates;
                    bool m_candidatesHasBeenSet;

                    /**
                     * Face bounding box position detected.
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * Status return code of the detected face image.
- 0 indicates normal. 
-1601 indicates the image quality control requirement is not met. At this point, the Candidate content is empty.
                     */
                    int64_t m_retCode;
                    bool m_retCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_RESULT_H_
