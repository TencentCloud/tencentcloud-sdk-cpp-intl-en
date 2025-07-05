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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImageFromFamily request structure.
                */
                class DescribeImageFromFamilyRequest : public AbstractModel
                {
                public:
                    DescribeImageFromFamilyRequest();
                    ~DescribeImageFromFamilyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image family
                     * @return ImageFamily Image family
                     * 
                     */
                    std::string GetImageFamily() const;

                    /**
                     * 设置Image family
                     * @param _imageFamily Image family
                     * 
                     */
                    void SetImageFamily(const std::string& _imageFamily);

                    /**
                     * 判断参数 ImageFamily 是否已赋值
                     * @return ImageFamily 是否已赋值
                     * 
                     */
                    bool ImageFamilyHasBeenSet() const;

                private:

                    /**
                     * Image family
                     */
                    std::string m_imageFamily;
                    bool m_imageFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGEFROMFAMILYREQUEST_H_
