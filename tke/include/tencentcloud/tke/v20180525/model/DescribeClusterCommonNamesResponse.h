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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/CommonName.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterCommonNames response structure.
                */
                class DescribeClusterCommonNamesResponse : public AbstractModel
                {
                public:
                    DescribeClusterCommonNamesResponse();
                    ~DescribeClusterCommonNamesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The CommonName in the certificate of the client corresponding to the sub-account UIN
                     * @return CommonNames The CommonName in the certificate of the client corresponding to the sub-account UIN
                     * 
                     */
                    std::vector<CommonName> GetCommonNames() const;

                    /**
                     * 判断参数 CommonNames 是否已赋值
                     * @return CommonNames 是否已赋值
                     * 
                     */
                    bool CommonNamesHasBeenSet() const;

                private:

                    /**
                     * The CommonName in the certificate of the client corresponding to the sub-account UIN
                     */
                    std::vector<CommonName> m_commonNames;
                    bool m_commonNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERCOMMONNAMESRESPONSE_H_
