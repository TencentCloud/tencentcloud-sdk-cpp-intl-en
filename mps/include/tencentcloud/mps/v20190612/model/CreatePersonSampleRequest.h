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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreatePersonSample request structure.
                */
                class CreatePersonSampleRequest : public AbstractModel
                {
                public:
                    CreatePersonSampleRequest();
                    ~CreatePersonSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of an image. Length limit: 20 characters
                     * @return Name Name of an image. Length limit: 20 characters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of an image. Length limit: 20 characters
                     * @param _name Name of an image. Length limit: 20 characters
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
                     * 获取Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2
                     * @return Usages Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2
                     * @param _usages Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2
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
                     * 获取Image description. Length limit: 1,024 characters
                     * @return Description Image description. Length limit: 1,024 characters
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Image description. Length limit: 1,024 characters
                     * @param _description Image description. Length limit: 1,024 characters
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
                     * 获取[Base64](https://tools.ietf.org/html/rfc4648) string converted from an image. Only JPEG and PNG images are supported. Array length limit: 5 images
Note: the image must be a relatively clear facial feature photo of one person with a size of at least 200 x 200 pixels.
                     * @return FaceContents [Base64](https://tools.ietf.org/html/rfc4648) string converted from an image. Only JPEG and PNG images are supported. Array length limit: 5 images
Note: the image must be a relatively clear facial feature photo of one person with a size of at least 200 x 200 pixels.
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置[Base64](https://tools.ietf.org/html/rfc4648) string converted from an image. Only JPEG and PNG images are supported. Array length limit: 5 images
Note: the image must be a relatively clear facial feature photo of one person with a size of at least 200 x 200 pixels.
                     * @param _faceContents [Base64](https://tools.ietf.org/html/rfc4648) string converted from an image. Only JPEG and PNG images are supported. Array length limit: 5 images
Note: the image must be a relatively clear facial feature photo of one person with a size of at least 200 x 200 pixels.
                     * 
                     */
                    void SetFaceContents(const std::vector<std::string>& _faceContents);

                    /**
                     * 判断参数 FaceContents 是否已赋值
                     * @return FaceContents 是否已赋值
                     * 
                     */
                    bool FaceContentsHasBeenSet() const;

                    /**
                     * 获取Image tag
<li>Array length limit: 20 tags</li>
<li>Tag length limit: 128 characters</li>
                     * @return Tags Image tag
<li>Array length limit: 20 tags</li>
<li>Tag length limit: 128 characters</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Image tag
<li>Array length limit: 20 tags</li>
<li>Tag length limit: 128 characters</li>
                     * @param _tags Image tag
<li>Array length limit: 20 tags</li>
<li>Tag length limit: 128 characters</li>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Name of an image. Length limit: 20 characters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Image usage. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Image description. Length limit: 1,024 characters
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * [Base64](https://tools.ietf.org/html/rfc4648) string converted from an image. Only JPEG and PNG images are supported. Array length limit: 5 images
Note: the image must be a relatively clear facial feature photo of one person with a size of at least 200 x 200 pixels.
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                    /**
                     * Image tag
<li>Array length limit: 20 tags</li>
<li>Tag length limit: 128 characters</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLEREQUEST_H_
