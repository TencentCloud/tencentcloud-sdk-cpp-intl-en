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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleFaceOperation.h>
#include <tencentcloud/mps/v20190612/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取Image ID
                     * @return PersonId Image ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Image ID
                     * @param _personId Image ID
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
                     * 获取Name. Length limit: 128 characters.
                     * @return Name Name. Length limit: 128 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name. Length limit: 128 characters.
                     * @param _name Name. Length limit: 128 characters.
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
                     * 获取Description. Length limit: 1,024 characters.
                     * @return Description Description. Length limit: 1,024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. Length limit: 1,024 characters.
                     * @param _description Description. Length limit: 1,024 characters.
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
                     * 获取Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: used for content recognition and inappropriate information recognition; equivalent to 1+2
                     * @return Usages Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: used for content recognition and inappropriate information recognition; equivalent to 1+2
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: used for content recognition and inappropriate information recognition; equivalent to 1+2
                     * @param _usages Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: used for content recognition and inappropriate information recognition; equivalent to 1+2
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
                     * 获取Information of operations on facial features
                     * @return FaceOperationInfo Information of operations on facial features
                     * 
                     */
                    AiSampleFaceOperation GetFaceOperationInfo() const;

                    /**
                     * 设置Information of operations on facial features
                     * @param _faceOperationInfo Information of operations on facial features
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
                     * 获取Tag operation information.
                     * @return TagOperationInfo Tag operation information.
                     * 
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置Tag operation information.
                     * @param _tagOperationInfo Tag operation information.
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
                     * Image ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Name. Length limit: 128 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description. Length limit: 1,024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: used for content recognition and inappropriate information recognition; equivalent to 1+2
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Information of operations on facial features
                     */
                    AiSampleFaceOperation m_faceOperationInfo;
                    bool m_faceOperationInfoHasBeenSet;

                    /**
                     * Tag operation information.
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
