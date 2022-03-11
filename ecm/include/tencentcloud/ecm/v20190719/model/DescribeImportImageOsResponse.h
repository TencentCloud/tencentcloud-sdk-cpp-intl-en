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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ImageOsList.h>
#include <tencentcloud/ecm/v20190719/model/OsVersion.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeImportImageOs response structure.
                */
                class DescribeImportImageOsResponse : public AbstractModel
                {
                public:
                    DescribeImportImageOsResponse();
                    ~DescribeImportImageOsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported OS types of imported images.
                     * @return ImportImageOsListSupported Supported OS types of imported images.
                     */
                    ImageOsList GetImportImageOsListSupported() const;

                    /**
                     * 判断参数 ImportImageOsListSupported 是否已赋值
                     * @return ImportImageOsListSupported 是否已赋值
                     */
                    bool ImportImageOsListSupportedHasBeenSet() const;

                    /**
                     * 获取Supported OS versions of imported images.
                     * @return ImportImageOsVersionSet Supported OS versions of imported images.
                     */
                    std::vector<OsVersion> GetImportImageOsVersionSet() const;

                    /**
                     * 判断参数 ImportImageOsVersionSet 是否已赋值
                     * @return ImportImageOsVersionSet 是否已赋值
                     */
                    bool ImportImageOsVersionSetHasBeenSet() const;

                private:

                    /**
                     * Supported OS types of imported images.
                     */
                    ImageOsList m_importImageOsListSupported;
                    bool m_importImageOsListSupportedHasBeenSet;

                    /**
                     * Supported OS versions of imported images.
                     */
                    std::vector<OsVersion> m_importImageOsVersionSet;
                    bool m_importImageOsVersionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEIMPORTIMAGEOSRESPONSE_H_
