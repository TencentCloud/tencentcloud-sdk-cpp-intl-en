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
                * AI sample management, figure information.
                */
                class AiSamplePerson : public AbstractModel
                {
                public:
                    AiSamplePerson();
                    ~AiSamplePerson() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Figure ID.</p>
                     * @return PersonId <p>Figure ID.</p>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>Figure ID.</p>
                     * @param _personId <p>Figure ID.</p>
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
                     * 获取<p>Figure name.</p>
                     * @return Name <p>Figure name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Figure name.</p>
                     * @param _name <p>Figure name.</p>
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
                     * 获取<p>Face information.</p>
                     * @return FaceInfoSet <p>Face information.</p>
                     * 
                     */
                    std::vector<AiSampleFaceInfo> GetFaceInfoSet() const;

                    /**
                     * 设置<p>Face information.</p>
                     * @param _faceInfoSet <p>Face information.</p>
                     * 
                     */
                    void SetFaceInfoSet(const std::vector<AiSampleFaceInfo>& _faceInfoSet);

                    /**
                     * 判断参数 FaceInfoSet 是否已赋值
                     * @return FaceInfoSet 是否已赋值
                     * 
                     */
                    bool FaceInfoSetHasBeenSet() const;

                    /**
                     * 获取<p>Figure tag.</p>
                     * @return TagSet <p>Figure tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置<p>Figure tag.</p>
                     * @param _tagSet <p>Figure tag.</p>
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取<p>Application scenarios.</p>
                     * @return UsageSet <p>Application scenarios.</p>
                     * 
                     */
                    std::vector<std::string> GetUsageSet() const;

                    /**
                     * 设置<p>Application scenarios.</p>
                     * @param _usageSet <p>Application scenarios.</p>
                     * 
                     */
                    void SetUsageSet(const std::vector<std::string>& _usageSet);

                    /**
                     * 判断参数 UsageSet 是否已赋值
                     * @return UsageSet 是否已赋值
                     * 
                     */
                    bool UsageSetHasBeenSet() const;

                    /**
                     * 获取<p>Creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Last modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Figure ID.</p>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>Figure name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Character description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Face information.</p>
                     */
                    std::vector<AiSampleFaceInfo> m_faceInfoSet;
                    bool m_faceInfoSetHasBeenSet;

                    /**
                     * <p>Figure tag.</p>
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>Application scenarios.</p>
                     */
                    std::vector<std::string> m_usageSet;
                    bool m_usageSetHasBeenSet;

                    /**
                     * <p>Creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEPERSON_H_
