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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeUserSAMLConfig response structure.
                */
                class DescribeUserSAMLConfigResponse : public AbstractModel
                {
                public:
                    DescribeUserSAMLConfigResponse();
                    ~DescribeUserSAMLConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SAML metadata document.
                     * @return SAMLMetadata SAML metadata document.
                     * 
                     */
                    std::string GetSAMLMetadata() const;

                    /**
                     * 判断参数 SAMLMetadata 是否已赋值
                     * @return SAMLMetadata 是否已赋值
                     * 
                     */
                    bool SAMLMetadataHasBeenSet() const;

                    /**
                     * 获取Status. `0`: not set, `1`: enabled, `2`: disabled.
                     * @return Status Status. `0`: not set, `1`: enabled, `2`: disabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * SAML metadata document.
                     */
                    std::string m_sAMLMetadata;
                    bool m_sAMLMetadataHasBeenSet;

                    /**
                     * Status. `0`: not set, `1`: enabled, `2`: disabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEUSERSAMLCONFIGRESPONSE_H_
