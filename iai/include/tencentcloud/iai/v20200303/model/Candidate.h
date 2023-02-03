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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CANDIDATE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CANDIDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonGroupInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Most matching candidate recognized
                */
                class Candidate : public AbstractModel
                {
                public:
                    Candidate();
                    ~Candidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Person ID
                     * @return PersonId Person ID
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID
                     * @param PersonId Person ID
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Face ID, which is valid only when returned by the `SearchFaces` or `SearchFacesReturnsByGroup` API. User search APIs use facial feature fusion to search for users, for which this field is meaningless.
                     * @return FaceId Face ID, which is valid only when returned by the `SearchFaces` or `SearchFacesReturnsByGroup` API. User search APIs use facial feature fusion to search for users, for which this field is meaningless.
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置Face ID, which is valid only when returned by the `SearchFaces` or `SearchFacesReturnsByGroup` API. User search APIs use facial feature fusion to search for users, for which this field is meaningless.
                     * @param FaceId Face ID, which is valid only when returned by the `SearchFaces` or `SearchFacesReturnsByGroup` API. User search APIs use facial feature fusion to search for users, for which this field is meaningless.
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取Match score of candidate. 

In a face base library containing 10,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 70, 80, and 90, respectively;
In a face base library containing 100,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 80, 90, and 100, respectively;
In a face base library containing 300,000 faces, the 1% and 0.1% FARs correspond to scores of 85 and 95, respectively.

Generally, the score of 80 is suitable for most scenarios. We recommend choosing an appropriate score based on the actual situation, preferably no more than 90.
                     * @return Score Match score of candidate. 

In a face base library containing 10,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 70, 80, and 90, respectively;
In a face base library containing 100,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 80, 90, and 100, respectively;
In a face base library containing 300,000 faces, the 1% and 0.1% FARs correspond to scores of 85 and 95, respectively.

Generally, the score of 80 is suitable for most scenarios. We recommend choosing an appropriate score based on the actual situation, preferably no more than 90.
                     */
                    double GetScore() const;

                    /**
                     * 设置Match score of candidate. 

In a face base library containing 10,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 70, 80, and 90, respectively;
In a face base library containing 100,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 80, 90, and 100, respectively;
In a face base library containing 300,000 faces, the 1% and 0.1% FARs correspond to scores of 85 and 95, respectively.

Generally, the score of 80 is suitable for most scenarios. We recommend choosing an appropriate score based on the actual situation, preferably no more than 90.
                     * @param Score Match score of candidate. 

In a face base library containing 10,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 70, 80, and 90, respectively;
In a face base library containing 100,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 80, 90, and 100, respectively;
In a face base library containing 300,000 faces, the 1% and 0.1% FARs correspond to scores of 85 and 95, respectively.

Generally, the score of 80 is suitable for most scenarios. We recommend choosing an appropriate score based on the actual situation, preferably no more than 90.
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Person name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PersonName Person name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Person name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PersonName Person name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Person gender
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Gender Person gender
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置Person gender
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Gender Person gender
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取List of groups containing this person and their description fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PersonGroupInfos List of groups containing this person and their description fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PersonGroupInfo> GetPersonGroupInfos() const;

                    /**
                     * 设置List of groups containing this person and their description fields
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PersonGroupInfos List of groups containing this person and their description fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPersonGroupInfos(const std::vector<PersonGroupInfo>& _personGroupInfos);

                    /**
                     * 判断参数 PersonGroupInfos 是否已赋值
                     * @return PersonGroupInfos 是否已赋值
                     */
                    bool PersonGroupInfosHasBeenSet() const;

                private:

                    /**
                     * Person ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Face ID, which is valid only when returned by the `SearchFaces` or `SearchFacesReturnsByGroup` API. User search APIs use facial feature fusion to search for users, for which this field is meaningless.
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * Match score of candidate. 

In a face base library containing 10,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 70, 80, and 90, respectively;
In a face base library containing 100,000 faces, the 1%, 0.1%, and 0.01% FARs correspond to scores of 80, 90, and 100, respectively;
In a face base library containing 300,000 faces, the 1% and 0.1% FARs correspond to scores of 85 and 95, respectively.

Generally, the score of 80 is suitable for most scenarios. We recommend choosing an appropriate score based on the actual situation, preferably no more than 90.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Person name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Person gender
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * List of groups containing this person and their description fields
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PersonGroupInfo> m_personGroupInfos;
                    bool m_personGroupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CANDIDATE_H_
