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
                * Face recognition result
                */
                class AiRecognitionTaskFaceResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskFaceResultItem();
                    ~AiRecognitionTaskFaceResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of a figure.
                     * @return Id Unique ID of a figure.
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of a figure.
                     * @param Id Unique ID of a figure.
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     * @return Type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     * @param Type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Name of a figure.
                     * @return Name Name of a figure.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a figure.
                     * @param Name Name of a figure.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Result set of segments that contain a figure.
                     * @return SegmentSet Result set of segments that contain a figure.
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Result set of segments that contain a figure.
                     * @param SegmentSet Result set of segments that contain a figure.
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取The person’s gender.
<li>Male</li>
<li>Female</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Gender The person’s gender.
<li>Male</li>
<li>Female</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetGender() const;

                    /**
                     * 设置The person’s gender.
<li>Male</li>
<li>Female</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Gender The person’s gender.
<li>Male</li>
<li>Female</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取The person’s birth date.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Birthday The person’s birth date.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置The person’s birth date.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Birthday The person’s birth date.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取The person’s job or job title.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Profession The person’s job or job title.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置The person’s job or job title.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Profession The person’s job or job title.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取The college the person graduated from.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SchoolOfGraduation The college the person graduated from.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetSchoolOfGraduation() const;

                    /**
                     * 设置The college the person graduated from.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param SchoolOfGraduation The college the person graduated from.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetSchoolOfGraduation(const std::string& _schoolOfGraduation);

                    /**
                     * 判断参数 SchoolOfGraduation 是否已赋值
                     * @return SchoolOfGraduation 是否已赋值
                     */
                    bool SchoolOfGraduationHasBeenSet() const;

                    /**
                     * 获取The person’s profile.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Abstract The person’s profile.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置The person’s profile.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Abstract The person’s profile.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取The person’s place of birth.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PlaceOfBirth The person’s place of birth.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetPlaceOfBirth() const;

                    /**
                     * 设置The person’s place of birth.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param PlaceOfBirth The person’s place of birth.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetPlaceOfBirth(const std::string& _placeOfBirth);

                    /**
                     * 判断参数 PlaceOfBirth 是否已赋值
                     * @return PlaceOfBirth 是否已赋值
                     */
                    bool PlaceOfBirthHasBeenSet() const;

                    /**
                     * 获取Whether the person is a politician or artist.
<li>Politician</li>
<li>Artist</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PersonType Whether the person is a politician or artist.
<li>Politician</li>
<li>Artist</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetPersonType() const;

                    /**
                     * 设置Whether the person is a politician or artist.
<li>Politician</li>
<li>Artist</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param PersonType Whether the person is a politician or artist.
<li>Politician</li>
<li>Artist</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetPersonType(const std::string& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取Sensitivity
<li>Normal</li>
<li>Sensitive</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Remark Sensitivity
<li>Normal</li>
<li>Sensitive</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sensitivity
<li>Normal</li>
<li>Sensitive</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Remark Sensitivity
<li>Normal</li>
<li>Sensitive</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The screenshot URL.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Url The screenshot URL.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The screenshot URL.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param Url The screenshot URL.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a figure.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Name of a figure.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Result set of segments that contain a figure.
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * The person’s gender.
<li>Male</li>
<li>Female</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * The person’s birth date.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * The person’s job or job title.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * The college the person graduated from.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_schoolOfGraduation;
                    bool m_schoolOfGraduationHasBeenSet;

                    /**
                     * The person’s profile.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * The person’s place of birth.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_placeOfBirth;
                    bool m_placeOfBirthHasBeenSet;

                    /**
                     * Whether the person is a politician or artist.
<li>Politician</li>
<li>Artist</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * Sensitivity
<li>Normal</li>
<li>Sensitive</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The screenshot URL.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
