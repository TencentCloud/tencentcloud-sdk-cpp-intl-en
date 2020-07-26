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
                     * 获取Name. Length limit: 128 characters.
                     * @return Name Name. Length limit: 128 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name. Length limit: 128 characters.
                     * @param Name Name. Length limit: 128 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description. Length limit: 1,024 characters.
                     * @return Description Description. Length limit: 1,024 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. Length limit: 1,024 characters.
                     * @param Description Description. Length limit: 1,024 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Figure use case. Valid values:
1. Recognition: it is used for content recognition and equivalent to `Recognition.Face`.
2. Review: it is used for content audit and equivalent to `Review.Face`.
3. All: it is used for content recognition and content audit and equivalent to 1+2 above.
                     * @return Usages Figure use case. Valid values:
1. Recognition: it is used for content recognition and equivalent to `Recognition.Face`.
2. Review: it is used for content audit and equivalent to `Review.Face`.
3. All: it is used for content recognition and content audit and equivalent to 1+2 above.
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置Figure use case. Valid values:
1. Recognition: it is used for content recognition and equivalent to `Recognition.Face`.
2. Review: it is used for content audit and equivalent to `Review.Face`.
3. All: it is used for content recognition and content audit and equivalent to 1+2 above.
                     * @param Usages Figure use case. Valid values:
1. Recognition: it is used for content recognition and equivalent to `Recognition.Face`.
2. Review: it is used for content audit and equivalent to `Review.Face`.
3. All: it is used for content recognition and content audit and equivalent to 1+2 above.
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取Face operation information.
                     * @return FaceOperationInfo Face operation information.
                     */
                    AiSampleFaceOperation GetFaceOperationInfo() const;

                    /**
                     * 设置Face operation information.
                     * @param FaceOperationInfo Face operation information.
                     */
                    void SetFaceOperationInfo(const AiSampleFaceOperation& _faceOperationInfo);

                    /**
                     * 判断参数 FaceOperationInfo 是否已赋值
                     * @return FaceOperationInfo 是否已赋值
                     */
                    bool FaceOperationInfoHasBeenSet() const;

                    /**
                     * 获取Tag operation information.
                     * @return TagOperationInfo Tag operation information.
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置Tag operation information.
                     * @param TagOperationInfo Tag operation information.
                     */
                    void SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo);

                    /**
                     * 判断参数 TagOperationInfo 是否已赋值
                     * @return TagOperationInfo 是否已赋值
                     */
                    bool TagOperationInfoHasBeenSet() const;

                    /**
                     * 获取[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @return SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置[Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     * @param SubAppId [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * Figure ID.
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
                     * Figure use case. Valid values:
1. Recognition: it is used for content recognition and equivalent to `Recognition.Face`.
2. Review: it is used for content audit and equivalent to `Review.Face`.
3. All: it is used for content recognition and content audit and equivalent to 1+2 above.
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Face operation information.
                     */
                    AiSampleFaceOperation m_faceOperationInfo;
                    bool m_faceOperationInfoHasBeenSet;

                    /**
                     * Tag operation information.
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                    /**
                     * [Subapplication](/document/product/266/14574) ID in VOD. If you need to access a resource in a subapplication, enter the subapplication ID in this field; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYPERSONSAMPLEREQUEST_H_
