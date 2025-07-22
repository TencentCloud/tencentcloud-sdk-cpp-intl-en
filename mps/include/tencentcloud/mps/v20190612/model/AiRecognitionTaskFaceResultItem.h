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
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of a figure.
                     * @param _id Unique ID of a figure.
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
                     * 获取Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     * @return Type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
                     * @param _type Figure library type, indicating to which figure library the recognized figure belongs:
<li>Default: Default figure library;</li>
<li>UserDefine: Custom figure library.</li>
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
                     * 获取Name of a figure.
                     * @return Name Name of a figure.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a figure.
                     * @param _name Name of a figure.
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
                     * 获取Result set of segments that contain a figure.
                     * @return SegmentSet Result set of segments that contain a figure.
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置Result set of segments that contain a figure.
                     * @param _segmentSet Result set of segments that contain a figure.
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
                     * 获取Gender of the person.
<Li>Male: man.</li>.
<Li>Female: specifies the woman.</li>.
                     * @return Gender Gender of the person.
<Li>Male: man.</li>.
<Li>Female: specifies the woman.</li>.
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置Gender of the person.
<Li>Male: man.</li>.
<Li>Female: specifies the woman.</li>.
                     * @param _gender Gender of the person.
<Li>Male: man.</li>.
<Li>Female: specifies the woman.</li>.
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
                     * 获取Date of birth.
                     * @return Birthday Date of birth.
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置Date of birth.
                     * @param _birthday Date of birth.
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
                     * 获取Occupation or position of a person.
                     * @return Profession Occupation or position of a person.
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置Occupation or position of a person.
                     * @param _profession Occupation or position of a person.
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
                     * 获取Specifies the graduation institution of the person.
                     * @return SchoolOfGraduation Specifies the graduation institution of the person.
                     * 
                     */
                    std::string GetSchoolOfGraduation() const;

                    /**
                     * 设置Specifies the graduation institution of the person.
                     * @param _schoolOfGraduation Specifies the graduation institution of the person.
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
                     * 获取Description of the person.
                     * @return Abstract Description of the person.
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置Description of the person.
                     * @param _abstract Description of the person.
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
                     * 获取Specifies the birthplace or place of origin.
                     * @return PlaceOfBirth Specifies the birthplace or place of origin.
                     * 
                     */
                    std::string GetPlaceOfBirth() const;

                    /**
                     * 设置Specifies the birthplace or place of origin.
                     * @param _placeOfBirth Specifies the birthplace or place of origin.
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
                     * 获取Person type.
<Li>Politician: specifies the official.</li>.
<Li>Artist: specifies the artist.</li>.
                     * @return PersonType Person type.
<Li>Politician: specifies the official.</li>.
<Li>Artist: specifies the artist.</li>.
                     * 
                     */
                    std::string GetPersonType() const;

                    /**
                     * 设置Person type.
<Li>Politician: specifies the official.</li>.
<Li>Artist: specifies the artist.</li>.
                     * @param _personType Person type.
<Li>Politician: specifies the official.</li>.
<Li>Artist: specifies the artist.</li>.
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
                     * 获取Sensitivity labeling.
<Li>Normal: specifies the scaling group is normal.</li>.
<Li>Sensitive: specifies sensitivity.</li>.
                     * @return Remark Sensitivity labeling.
<Li>Normal: specifies the scaling group is normal.</li>.
<Li>Sensitive: specifies sensitivity.</li>.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Sensitivity labeling.
<Li>Normal: specifies the scaling group is normal.</li>.
<Li>Sensitive: specifies sensitivity.</li>.
                     * @param _remark Sensitivity labeling.
<Li>Normal: specifies the scaling group is normal.</li>.
<Li>Sensitive: specifies sensitivity.</li>.
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
                     * 获取Specifies the screenshot link.
                     * @return Url Specifies the screenshot link.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Specifies the screenshot link.
                     * @param _url Specifies the screenshot link.
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
                     * Gender of the person.
<Li>Male: man.</li>.
<Li>Female: specifies the woman.</li>.
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Date of birth.
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * Occupation or position of a person.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * Specifies the graduation institution of the person.
                     */
                    std::string m_schoolOfGraduation;
                    bool m_schoolOfGraduationHasBeenSet;

                    /**
                     * Description of the person.
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * Specifies the birthplace or place of origin.
                     */
                    std::string m_placeOfBirth;
                    bool m_placeOfBirthHasBeenSet;

                    /**
                     * Person type.
<Li>Politician: specifies the official.</li>.
<Li>Artist: specifies the artist.</li>.
                     */
                    std::string m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * Sensitivity labeling.
<Li>Normal: specifies the scaling group is normal.</li>.
<Li>Sensitive: specifies sensitivity.</li>.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Specifies the screenshot link.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
