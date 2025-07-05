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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_

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
                * Trend information of security events at runtime
                */
                class ImageRiskTendencyInfo : public AbstractModel
                {
                public:
                    ImageRiskTendencyInfo();
                    ~ImageRiskTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of trends
                     * @return ImageRiskSet List of trends
                     * 
                     */
                    std::vector<RunTimeTendencyInfo> GetImageRiskSet() const;

                    /**
                     * 设置List of trends
                     * @param _imageRiskSet List of trends
                     * 
                     */
                    void SetImageRiskSet(const std::vector<RunTimeTendencyInfo>& _imageRiskSet);

                    /**
                     * 判断参数 ImageRiskSet 是否已赋值
                     * @return ImageRiskSet 是否已赋值
                     * 
                     */
                    bool ImageRiskSetHasBeenSet() const;

                    /**
                     * 获取Risk type:
`IRT_VULNERABILITY`: Vulnerability.
`IRT_MALWARE_VIRUS`: Virus and trojan.
`IRT_RISK`: Sensitive data.
                     * @return ImageRiskType Risk type:
`IRT_VULNERABILITY`: Vulnerability.
`IRT_MALWARE_VIRUS`: Virus and trojan.
`IRT_RISK`: Sensitive data.
                     * 
                     */
                    std::string GetImageRiskType() const;

                    /**
                     * 设置Risk type:
`IRT_VULNERABILITY`: Vulnerability.
`IRT_MALWARE_VIRUS`: Virus and trojan.
`IRT_RISK`: Sensitive data.
                     * @param _imageRiskType Risk type:
`IRT_VULNERABILITY`: Vulnerability.
`IRT_MALWARE_VIRUS`: Virus and trojan.
`IRT_RISK`: Sensitive data.
                     * 
                     */
                    void SetImageRiskType(const std::string& _imageRiskType);

                    /**
                     * 判断参数 ImageRiskType 是否已赋值
                     * @return ImageRiskType 是否已赋值
                     * 
                     */
                    bool ImageRiskTypeHasBeenSet() const;

                private:

                    /**
                     * List of trends
                     */
                    std::vector<RunTimeTendencyInfo> m_imageRiskSet;
                    bool m_imageRiskSetHasBeenSet;

                    /**
                     * Risk type:
`IRT_VULNERABILITY`: Vulnerability.
`IRT_MALWARE_VIRUS`: Virus and trojan.
`IRT_RISK`: Sensitive data.
                     */
                    std::string m_imageRiskType;
                    bool m_imageRiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGERISKTENDENCYINFO_H_
