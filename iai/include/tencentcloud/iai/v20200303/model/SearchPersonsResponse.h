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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/Result.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * SearchPersons response structure.
                */
                class SearchPersonsResponse : public AbstractModel
                {
                public:
                    SearchPersonsResponse();
                    ~SearchPersonsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Recognition result.
                     * @return Results Recognition result.
                     * 
                     */
                    std::vector<Result> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取Number of the persons included in searched groups. If the quality of all faces in the input image does not meet the requirement, 0 will be returned.
                     * @return PersonNum Number of the persons included in searched groups. If the quality of all faces in the input image does not meet the requirement, 0 will be returned.
                     * 
                     */
                    uint64_t GetPersonNum() const;

                    /**
                     * 判断参数 PersonNum 是否已赋值
                     * @return PersonNum 是否已赋值
                     * 
                     */
                    bool PersonNumHasBeenSet() const;

                    /**
                     * 获取Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FaceModelVersion Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                private:

                    /**
                     * Recognition result.
                     */
                    std::vector<Result> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * Number of the persons included in searched groups. If the quality of all faces in the input image does not meet the requirement, 0 will be returned.
                     */
                    uint64_t m_personNum;
                    bool m_personNumHasBeenSet;

                    /**
                     * Algorithm model version used for face recognition.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSRESPONSE_H_
