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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleFaceOperation.h>
#include <tencentcloud/vod/v20180717/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyPersonSample request structure.
                */
                class ModifyPersonSampleRequest : public AbstractModel
                {
                public:
                    ModifyPersonSampleRequest();
                    ~ModifyPersonSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return PersonId 
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置
                     * @param _personId 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Description 
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param _description 
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
                     * 获取
                     * @return Usages 
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置
                     * @param _usages 
                     * 
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取
                     * @return FaceOperationInfo 
                     * 
                     */
                    AiSampleFaceOperation GetFaceOperationInfo() const;

                    /**
                     * 设置
                     * @param _faceOperationInfo 
                     * 
                     */
                    void SetFaceOperationInfo(const AiSampleFaceOperation& _faceOperationInfo);

                    /**
                     * 判断参数 FaceOperationInfo 是否已赋值
                     * @return FaceOperationInfo 是否已赋值
                     * 
                     */
                    bool FaceOperationInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return TagOperationInfo 
                     * 
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置
                     * @param _tagOperationInfo 
                     * 
                     */
                    void SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo);

                    /**
                     * 判断参数 TagOperationInfo 是否已赋值
                     * @return TagOperationInfo 是否已赋值
                     * 
                     */
                    bool TagOperationInfoHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 
                     */
                    AiSampleFaceOperation m_faceOperationInfo;
                    bool m_faceOperationInfoHasBeenSet;

                    /**
                     * 
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
