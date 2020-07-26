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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEPERSON_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEPERSON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleFaceInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI-based sample management - figure information.
                */
                class AiSamplePerson : public AbstractModel
                {
                public:
                    AiSamplePerson();
                    ~AiSamplePerson() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Figure ID.
                     * @return PersonId Figure ID.
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Figure ID.
                     * @param PersonId Figure ID.
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Figure name.
                     * @return Name Figure name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Figure name.
                     * @param Name Figure name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Figure description.
                     * @return Description Figure description.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Figure description.
                     * @param Description Figure description.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Face information.
                     * @return FaceInfoSet Face information.
                     */
                    std::vector<AiSampleFaceInfo> GetFaceInfoSet() const;

                    /**
                     * 设置Face information.
                     * @param FaceInfoSet Face information.
                     */
                    void SetFaceInfoSet(const std::vector<AiSampleFaceInfo>& _faceInfoSet);

                    /**
                     * 判断参数 FaceInfoSet 是否已赋值
                     * @return FaceInfoSet 是否已赋值
                     */
                    bool FaceInfoSetHasBeenSet() const;

                    /**
                     * 获取Figure tag.
                     * @return TagSet Figure tag.
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置Figure tag.
                     * @param TagSet Figure tag.
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Use case.
                     * @return UsageSet Use case.
                     */
                    std::vector<std::string> GetUsageSet() const;

                    /**
                     * 设置Use case.
                     * @param UsageSet Use case.
                     */
                    void SetUsageSet(const std::vector<std::string>& _usageSet);

                    /**
                     * 判断参数 UsageSet 是否已赋值
                     * @return UsageSet 是否已赋值
                     */
                    bool UsageSetHasBeenSet() const;

                    /**
                     * 获取Creation time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return CreateTime Creation time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param CreateTime Creation time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return UpdateTime Last modified time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param UpdateTime Last modified time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Figure ID.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Figure name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Figure description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Face information.
                     */
                    std::vector<AiSampleFaceInfo> m_faceInfoSet;
                    bool m_faceInfoSetHasBeenSet;

                    /**
                     * Figure tag.
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Use case.
                     */
                    std::vector<std::string> m_usageSet;
                    bool m_usageSetHasBeenSet;

                    /**
                     * Creation time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEPERSON_H_
