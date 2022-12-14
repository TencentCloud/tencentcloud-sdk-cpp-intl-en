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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGEPROCESSINGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGEPROCESSINGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateImageProcessingTemplate request structure.
                */
                class CreateImageProcessingTemplateRequest : public AbstractModel
                {
                public:
                    CreateImageProcessingTemplateRequest();
                    ~CreateImageProcessingTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     * @return Operations An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    std::vector<ImageOperation> GetOperations() const;

                    /**
                     * 设置An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     * @param Operations An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    void SetOperations(const std::vector<ImageOperation>& _operations);

                    /**
                     * 判断参数 Operations 是否已赋值
                     * @return Operations 是否已赋值
                     */
                    bool OperationsHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The name of the image processing template. Length limit: 64 characters.
                     * @return Name The name of the image processing template. Length limit: 64 characters.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The name of the image processing template. Length limit: 64 characters.
                     * @param Name The name of the image processing template. Length limit: 64 characters.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The template description. Length limit: 256 characters.
                     * @return Comment The template description. Length limit: 256 characters.
                     */
                    std::string GetComment() const;

                    /**
                     * 设置The template description. Length limit: 256 characters.
                     * @param Comment The template description. Length limit: 256 characters.
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * An array of image processing operations. The operations will be performed in the specified order.
<li>Length limit: 3.</li>
                     */
                    std::vector<ImageOperation> m_operations;
                    bool m_operationsHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The name of the image processing template. Length limit: 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The template description. Length limit: 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGEPROCESSINGTEMPLATEREQUEST_H_
