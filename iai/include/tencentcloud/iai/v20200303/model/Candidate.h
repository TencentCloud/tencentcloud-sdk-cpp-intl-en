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
                * The most similar candidate identified
                */
                class Candidate : public AbstractModel
                {
                public:
                    Candidate();
                    ~Candidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Person ID.
                     * @return PersonId Person ID.
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID.
                     * @param _personId Person ID.
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Face ID.
-Valid only in the API response of SearchFaces/SearchFacesReturnsByGroup.
-Person search class interfaces use the fusion feature method for retrieval. This field is meaningless.
                     * @return FaceId Face ID.
-Valid only in the API response of SearchFaces/SearchFacesReturnsByGroup.
-Person search class interfaces use the fusion feature method for retrieval. This field is meaningless.
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置Face ID.
-Valid only in the API response of SearchFaces/SearchFacesReturnsByGroup.
-Person search class interfaces use the fusion feature method for retrieval. This field is meaningless.
                     * @param _faceId Face ID.
-Valid only in the API response of SearchFaces/SearchFacesReturnsByGroup.
-Person search class interfaces use the fusion feature method for retrieval. This field is meaningless.
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取Match score of the candidate. 
-In a face base library of 10,000 faces, a false acceptance rate of 1% corresponds to a score of 70 points, 0.1% corresponds to 80 points, and 0.01% corresponds to 90 points.
-For a face base library of 100,000, a false acceptance rate of 1% corresponds to a score of 80 points, 0.1% corresponds to 90 points, and 0.01% corresponds to 100 points.
-With a face base library of 300,000, a false acceptance rate of 1% corresponds to a score of 85, and a false acceptance rate of 0.1% corresponds to a score of 95.
-Generally, a score of around 80 applies to most scenarios. It is advisable not to exceed 90. You can choose a suitable score according to the actual situation.
                     * @return Score Match score of the candidate. 
-In a face base library of 10,000 faces, a false acceptance rate of 1% corresponds to a score of 70 points, 0.1% corresponds to 80 points, and 0.01% corresponds to 90 points.
-For a face base library of 100,000, a false acceptance rate of 1% corresponds to a score of 80 points, 0.1% corresponds to 90 points, and 0.01% corresponds to 100 points.
-With a face base library of 300,000, a false acceptance rate of 1% corresponds to a score of 85, and a false acceptance rate of 0.1% corresponds to a score of 95.
-Generally, a score of around 80 applies to most scenarios. It is advisable not to exceed 90. You can choose a suitable score according to the actual situation.
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置Match score of the candidate. 
-In a face base library of 10,000 faces, a false acceptance rate of 1% corresponds to a score of 70 points, 0.1% corresponds to 80 points, and 0.01% corresponds to 90 points.
-For a face base library of 100,000, a false acceptance rate of 1% corresponds to a score of 80 points, 0.1% corresponds to 90 points, and 0.01% corresponds to 100 points.
-With a face base library of 300,000, a false acceptance rate of 1% corresponds to a score of 85, and a false acceptance rate of 0.1% corresponds to a score of 95.
-Generally, a score of around 80 applies to most scenarios. It is advisable not to exceed 90. You can choose a suitable score according to the actual situation.
                     * @param _score Match score of the candidate. 
-In a face base library of 10,000 faces, a false acceptance rate of 1% corresponds to a score of 70 points, 0.1% corresponds to 80 points, and 0.01% corresponds to 90 points.
-For a face base library of 100,000, a false acceptance rate of 1% corresponds to a score of 80 points, 0.1% corresponds to 90 points, and 0.01% corresponds to 100 points.
-With a face base library of 300,000, a false acceptance rate of 1% corresponds to a score of 85, and a false acceptance rate of 0.1% corresponds to a score of 95.
-Generally, a score of around 80 applies to most scenarios. It is advisable not to exceed 90. You can choose a suitable score according to the actual situation.
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Person name.
                     * @return PersonName Person name.
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Person name.
                     * @param _personName Person name.
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Gender of personnel.
                     * @return Gender Gender of personnel.
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置Gender of personnel.
                     * @param _gender Gender of personnel.
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取List of person libraries containing this person and the content of the description field.
                     * @return PersonGroupInfos List of person libraries containing this person and the content of the description field.
                     * 
                     */
                    std::vector<PersonGroupInfo> GetPersonGroupInfos() const;

                    /**
                     * 设置List of person libraries containing this person and the content of the description field.
                     * @param _personGroupInfos List of person libraries containing this person and the content of the description field.
                     * 
                     */
                    void SetPersonGroupInfos(const std::vector<PersonGroupInfo>& _personGroupInfos);

                    /**
                     * 判断参数 PersonGroupInfos 是否已赋值
                     * @return PersonGroupInfos 是否已赋值
                     * 
                     */
                    bool PersonGroupInfosHasBeenSet() const;

                private:

                    /**
                     * Person ID.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Face ID.
-Valid only in the API response of SearchFaces/SearchFacesReturnsByGroup.
-Person search class interfaces use the fusion feature method for retrieval. This field is meaningless.
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * Match score of the candidate. 
-In a face base library of 10,000 faces, a false acceptance rate of 1% corresponds to a score of 70 points, 0.1% corresponds to 80 points, and 0.01% corresponds to 90 points.
-For a face base library of 100,000, a false acceptance rate of 1% corresponds to a score of 80 points, 0.1% corresponds to 90 points, and 0.01% corresponds to 100 points.
-With a face base library of 300,000, a false acceptance rate of 1% corresponds to a score of 85, and a false acceptance rate of 0.1% corresponds to a score of 95.
-Generally, a score of around 80 applies to most scenarios. It is advisable not to exceed 90. You can choose a suitable score according to the actual situation.
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Person name.
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Gender of personnel.
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * List of person libraries containing this person and the content of the description field.
                     */
                    std::vector<PersonGroupInfo> m_personGroupInfos;
                    bool m_personGroupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CANDIDATE_H_
