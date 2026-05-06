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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TermBase.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * List of characters.
                */
                class Speakers : public AbstractModel
                {
                public:
                    Speakers();
                    ~Speakers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Unique character ID.</p>
                     * @return SpeakerId <p>Unique character ID.</p>
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置<p>Unique character ID.</p>
                     * @param _speakerId <p>Unique character ID.</p>
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                    /**
                     * 获取<p>Bound voice ID.</p>
                     * @return VoiceId <p>Bound voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Bound voice ID.</p>
                     * @param _voiceId <p>Bound voice ID.</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Gender: male/female. Default: male.</p>
                     * @return Gender <p>Gender: male/female. Default: male.</p>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>Gender: male/female. Default: male.</p>
                     * @param _gender <p>Gender: male/female. Default: male.</p>
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
                     * 获取<p>Age segment: child/teenager/youth/middle_aged/senior. Default: youth.</p>
                     * @return AgeGroup <p>Age segment: child/teenager/youth/middle_aged/senior. Default: youth.</p>
                     * 
                     */
                    std::string GetAgeGroup() const;

                    /**
                     * 设置<p>Age segment: child/teenager/youth/middle_aged/senior. Default: youth.</p>
                     * @param _ageGroup <p>Age segment: child/teenager/youth/middle_aged/senior. Default: youth.</p>
                     * 
                     */
                    void SetAgeGroup(const std::string& _ageGroup);

                    /**
                     * 判断参数 AgeGroup 是否已赋值
                     * @return AgeGroup 是否已赋值
                     * 
                     */
                    bool AgeGroupHasBeenSet() const;

                    /**
                     * 获取<p>Character description.</p>
                     * @return Description <p>Character description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Character description.</p>
                     * @param _description <p>Character description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Glossary of character names.</p>
                     * @return NameTerms <p>Glossary of character names.</p>
                     * 
                     */
                    std::vector<TermBase> GetNameTerms() const;

                    /**
                     * 设置<p>Glossary of character names.</p>
                     * @param _nameTerms <p>Glossary of character names.</p>
                     * 
                     */
                    void SetNameTerms(const std::vector<TermBase>& _nameTerms);

                    /**
                     * 判断参数 NameTerms 是否已赋值
                     * @return NameTerms 是否已赋值
                     * 
                     */
                    bool NameTermsHasBeenSet() const;

                private:

                    /**
                     * <p>Unique character ID.</p>
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                    /**
                     * <p>Bound voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Gender: male/female. Default: male.</p>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>Age segment: child/teenager/youth/middle_aged/senior. Default: youth.</p>
                     */
                    std::string m_ageGroup;
                    bool m_ageGroupHasBeenSet;

                    /**
                     * <p>Character description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Glossary of character names.</p>
                     */
                    std::vector<TermBase> m_nameTerms;
                    bool m_nameTermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SPEAKERS_H_
