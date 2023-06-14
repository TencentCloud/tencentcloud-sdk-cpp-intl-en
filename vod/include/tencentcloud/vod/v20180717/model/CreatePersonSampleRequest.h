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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取Name of a sample. Length limit: 20 characters.
                     * @return Name Name of a sample. Length limit: 20 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of a sample. Length limit: 20 characters.
                     * @param _name Name of a sample. Length limit: 20 characters.
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
                     * 获取Usage of a sample. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2.
                     * @return Usages Usage of a sample. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2.
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置Usage of a sample. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2.
                     * @param _usages Usage of a sample. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2.
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
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param _subAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
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
                     * 获取Description of a sample. Length limit: 1024 characters.
                     * @return Description Description of a sample. Length limit: 1024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of a sample. Length limit: 1024 characters.
                     * @param _description Description of a sample. Length limit: 1024 characters.
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
                     * 获取String generated after the sample image is encoded by [Base64](https://tools.ietf.org/html/rfc4648). Only JPEG and PNG images are supported. Array length limit: 5 images.
Note: the image must be a relatively clear full-face photo of a person and has a resolution of no less than 200 x 200.
                     * @return FaceContents String generated after the sample image is encoded by [Base64](https://tools.ietf.org/html/rfc4648). Only JPEG and PNG images are supported. Array length limit: 5 images.
Note: the image must be a relatively clear full-face photo of a person and has a resolution of no less than 200 x 200.
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置String generated after the sample image is encoded by [Base64](https://tools.ietf.org/html/rfc4648). Only JPEG and PNG images are supported. Array length limit: 5 images.
Note: the image must be a relatively clear full-face photo of a person and has a resolution of no less than 200 x 200.
                     * @param _faceContents String generated after the sample image is encoded by [Base64](https://tools.ietf.org/html/rfc4648). Only JPEG and PNG images are supported. Array length limit: 5 images.
Note: the image must be a relatively clear full-face photo of a person and has a resolution of no less than 200 x 200.
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
                     * 获取Tags of a sample
<li>Array length limit: 20 tags</li>
<li>Length limit of a tag: 128 characters</li>
                     * @return Tags Tags of a sample
<li>Array length limit: 20 tags</li>
<li>Length limit of a tag: 128 characters</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tags of a sample
<li>Array length limit: 20 tags</li>
<li>Length limit of a tag: 128 characters</li>
                     * @param _tags Tags of a sample
<li>Array length limit: 20 tags</li>
<li>Length limit of a tag: 128 characters</li>
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
                     * Name of a sample. Length limit: 20 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Usage of a sample. Valid values:
1. Recognition: used for content recognition; equivalent to `Recognition.Face`
2. Review: used for inappropriate information recognition; equivalent to `Review.Face`
3. All: equivalent to 1+2.
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Description of a sample. Length limit: 1024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * String generated after the sample image is encoded by [Base64](https://tools.ietf.org/html/rfc4648). Only JPEG and PNG images are supported. Array length limit: 5 images.
Note: the image must be a relatively clear full-face photo of a person and has a resolution of no less than 200 x 200.
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                    /**
                     * Tags of a sample
<li>Array length limit: 20 tags</li>
<li>Length limit of a tag: 128 characters</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLEREQUEST_H_
