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
                     * 获取Material name. Length limit: 20 characters.
                     * @return Name Material name. Length limit: 20 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Material name. Length limit: 20 characters.
                     * @param _name Material name. Length limit: 20 characters.
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
                     * 获取Material application scenario. Available values:
1. Recognition: for content recognition, equivalent to Recognition.Face.
2. Review: for inappropriate content, equivalent to Review.Face.
3. All: include all of the above, equivalent to 1+2.
                     * @return Usages Material application scenario. Available values:
1. Recognition: for content recognition, equivalent to Recognition.Face.
2. Review: for inappropriate content, equivalent to Review.Face.
3. All: include all of the above, equivalent to 1+2.
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置Material application scenario. Available values:
1. Recognition: for content recognition, equivalent to Recognition.Face.
2. Review: for inappropriate content, equivalent to Review.Face.
3. All: include all of the above, equivalent to 1+2.
                     * @param _usages Material application scenario. Available values:
1. Recognition: for content recognition, equivalent to Recognition.Face.
2. Review: for inappropriate content, equivalent to Review.Face.
3. All: include all of the above, equivalent to 1+2.
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
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
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
                     * 获取Material description. Length limit: 1024 characters.
                     * @return Description Material description. Length limit: 1024 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Material description. Length limit: 1024 characters.
                     * @param _description Material description. Length limit: 1024 characters.
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
                     * 获取Material image encoded as a Base64 (https://tools.ietf.org/html/rfc4648) string. Only jpeg and png image formats are supported. Array length limit: 5 images.
Note: The image must be a single portrait with clear facial features, with pixels not less than 200×200.
                     * @return FaceContents Material image encoded as a Base64 (https://tools.ietf.org/html/rfc4648) string. Only jpeg and png image formats are supported. Array length limit: 5 images.
Note: The image must be a single portrait with clear facial features, with pixels not less than 200×200.
                     * 
                     */
                    std::vector<std::string> GetFaceContents() const;

                    /**
                     * 设置Material image encoded as a Base64 (https://tools.ietf.org/html/rfc4648) string. Only jpeg and png image formats are supported. Array length limit: 5 images.
Note: The image must be a single portrait with clear facial features, with pixels not less than 200×200.
                     * @param _faceContents Material image encoded as a Base64 (https://tools.ietf.org/html/rfc4648) string. Only jpeg and png image formats are supported. Array length limit: 5 images.
Note: The image must be a single portrait with clear facial features, with pixels not less than 200×200.
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
                     * 获取Material tag
<li>Array length limit: 20 tags;</li>
<li>Single tag length limited to 128 characters.</li>
                     * @return Tags Material tag
<li>Array length limit: 20 tags;</li>
<li>Single tag length limited to 128 characters.</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Material tag
<li>Array length limit: 20 tags;</li>
<li>Single tag length limited to 128 characters.</li>
                     * @param _tags Material tag
<li>Array length limit: 20 tags;</li>
<li>Single tag length limited to 128 characters.</li>
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
                     * Material name. Length limit: 20 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Material application scenario. Available values:
1. Recognition: for content recognition, equivalent to Recognition.Face.
2. Review: for inappropriate content, equivalent to Review.Face.
3. All: include all of the above, equivalent to 1+2.
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who activate VOD on or after December 25, 2023, this field must be set to the app ID when accessing resources in VOD applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Material description. Length limit: 1024 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Material image encoded as a Base64 (https://tools.ietf.org/html/rfc4648) string. Only jpeg and png image formats are supported. Array length limit: 5 images.
Note: The image must be a single portrait with clear facial features, with pixels not less than 200×200.
                     */
                    std::vector<std::string> m_faceContents;
                    bool m_faceContentsHasBeenSet;

                    /**
                     * Material tag
<li>Array length limit: 20 tags;</li>
<li>Single tag length limited to 128 characters.</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEPERSONSAMPLEREQUEST_H_
