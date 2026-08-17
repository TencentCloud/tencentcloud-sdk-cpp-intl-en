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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskFaceSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Face Recognition result
                */
                class AiRecognitionTaskFaceResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskFaceResultItem();
                    ~AiRecognitionTaskFaceResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identification ID of the figure.
                     * @return Id Unique identification ID of the figure.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique identification ID of the figure.
                     * @param _id Unique identification ID of the figure.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Figure library type, indicates which figure library the recognized figure comes from.
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * @return Type Figure library type, indicates which figure library the recognized figure comes from.
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Figure library type, indicates which figure library the recognized figure comes from.
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     * @param _type Figure library type, indicates which figure library the recognized figure comes from.
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
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
                     * 获取Figure name.
                     * @return Name Figure name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Figure name.
                     * @param _name Figure name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Result set of segments that contain people.
                     * @return SegmentSet Result set of segments that contain people.
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Result set of segments that contain people.
                     * @param _segmentSet Result set of segments that contain people.
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取Gender
<li>Male: man</li>
<li>Female: woman.</li>
                     * @return Gender Gender
<li>Male: man</li>
<li>Female: woman.</li>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender
<li>Male: man</li>
<li>Female: woman.</li>
                     * @param _gender Gender
<li>Male: man</li>
<li>Female: woman.</li>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Date of birth of a person.
                     * @return Birthday Date of birth of a person.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth of a person.
                     * @param _birthday Date of birth of a person.
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取Occupation or position.
                     * @return Profession Occupation or position.
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置Occupation or position.
                     * @param _profession Occupation or position.
                     * 
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取Graduation institution of the person.
                     * @return SchoolOfGraduation Graduation institution of the person.
                     * 
                     */
                    std::string GetSchoolOfGraduation() const;

                    /**
                     * 设置Graduation institution of the person.
                     * @param _schoolOfGraduation Graduation institution of the person.
                     * 
                     */
                    void SetSchoolOfGraduation(const std::string& _schoolOfGraduation);

                    /**
                     * 判断参数 SchoolOfGraduation 是否已赋值
                     * @return SchoolOfGraduation 是否已赋值
                     * 
                     */
                    bool SchoolOfGraduationHasBeenSet() const;

                    /**
                     * 获取Figure description.
                     * @return Abstract Figure description.
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置Figure description.
                     * @param _abstract Figure description.
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取Birthplace or place of origin of a person.
                     * @return PlaceOfBirth Birthplace or place of origin of a person.
                     * 
                     */
                    std::string GetPlaceOfBirth() const;

                    /**
                     * 设置Birthplace or place of origin of a person.
                     * @param _placeOfBirth Birthplace or place of origin of a person.
                     * 
                     */
                    void SetPlaceOfBirth(const std::string& _placeOfBirth);

                    /**
                     * 判断参数 PlaceOfBirth 是否已赋值
                     * @return PlaceOfBirth 是否已赋值
                     * 
                     */
                    bool PlaceOfBirthHasBeenSet() const;

                    /**
                     * 获取Person type:
<li>Politician: official.</li>
<li>Artist: artist.</li>
                     * @return PersonType Person type:
<li>Politician: official.</li>
<li>Artist: artist.</li>
                     * 
                     */
                    std::string GetPersonType() const;

                    /**
                     * 设置Person type:
<li>Politician: official.</li>
<li>Artist: artist.</li>
                     * @param _personType Person type:
<li>Politician: official.</li>
<li>Artist: artist.</li>
                     * 
                     */
                    void SetPersonType(const std::string& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取Sensitivity labeling:
<li>NORMAL: Normal;</li>
<li>Sensitive: sensitive.</li>
                     * @return Remark Sensitivity labeling:
<li>NORMAL: Normal;</li>
<li>Sensitive: sensitive.</li>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sensitivity labeling:
<li>NORMAL: Normal;</li>
<li>Sensitive: sensitive.</li>
                     * @param _remark Sensitivity labeling:
<li>NORMAL: Normal;</li>
<li>Sensitive: sensitive.</li>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Screenshot link
                     * @return Url Screenshot link
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Screenshot link
                     * @param _url Screenshot link
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Unique identification ID of the figure.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Figure library type, indicates which figure library the recognized figure comes from.
<li>Default: default figure library;</li>
<li>UserDefine: user-defined character library.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Figure name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Result set of segments that contain people.
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Gender
<li>Male: man</li>
<li>Female: woman.</li>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Date of birth of a person.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Occupation or position.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * Graduation institution of the person.
                     */
                    std::string m_schoolOfGraduation;
                    bool m_schoolOfGraduationHasBeenSet;

                    /**
                     * Figure description.
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * Birthplace or place of origin of a person.
                     */
                    std::string m_placeOfBirth;
                    bool m_placeOfBirthHasBeenSet;

                    /**
                     * Person type:
<li>Politician: official.</li>
<li>Artist: artist.</li>
                     */
                    std::string m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * Sensitivity labeling:
<li>NORMAL: Normal;</li>
<li>Sensitive: sensitive.</li>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Screenshot link
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
