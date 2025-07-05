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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeTendencyInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Vulnerability trend information
                */
                class VulTendencyInfo : public AbstractModel
                {
                public:
                    VulTendencyInfo();
                    ~VulTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of vulnerability trends
                     * @return VulSet List of vulnerability trends
                     * 
                     */
                    std::vector<RunTimeTendencyInfo> GetVulSet() const;

                    /**
                     * 设置List of vulnerability trends
                     * @param _vulSet List of vulnerability trends
                     * 
                     */
                    void SetVulSet(const std::vector<RunTimeTendencyInfo>& _vulSet);

                    /**
                     * 判断参数 VulSet 是否已赋值
                     * @return VulSet 是否已赋值
                     * 
                     */
                    bool VulSetHasBeenSet() const;

                    /**
                     * 获取Image type affected by vulnerabilities:
`LOCAL`: Local image.
`REGISTRY`: Repository image.
                     * @return ImageType Image type affected by vulnerabilities:
`LOCAL`: Local image.
`REGISTRY`: Repository image.
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置Image type affected by vulnerabilities:
`LOCAL`: Local image.
`REGISTRY`: Repository image.
                     * @param _imageType Image type affected by vulnerabilities:
`LOCAL`: Local image.
`REGISTRY`: Repository image.
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                private:

                    /**
                     * List of vulnerability trends
                     */
                    std::vector<RunTimeTendencyInfo> m_vulSet;
                    bool m_vulSetHasBeenSet;

                    /**
                     * Image type affected by vulnerabilities:
`LOCAL`: Local image.
`REGISTRY`: Repository image.
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULTENDENCYINFO_H_
