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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEMPSECRET4UPLOADFILE2COSREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEMPSECRET4UPLOADFILE2COSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeTempSecret4UploadFile2Cos request structure.
                */
                class DescribeTempSecret4UploadFile2CosRequest : public AbstractModel
                {
                public:
                    DescribeTempSecret4UploadFile2CosRequest();
                    ~DescribeTempSecret4UploadFile2CosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service name
                     * @return BusinessName Service name
                     * 
                     */
                    std::string GetBusinessName() const;

                    /**
                     * 设置Service name
                     * @param _businessName Service name
                     * 
                     */
                    void SetBusinessName(const std::string& _businessName);

                    /**
                     * 判断参数 BusinessName 是否已赋值
                     * @return BusinessName 是否已赋值
                     * 
                     */
                    bool BusinessNameHasBeenSet() const;

                    /**
                     * 获取File suffix
                     * @return Suffix File suffix
                     * 
                     */
                    std::string GetSuffix() const;

                    /**
                     * 设置File suffix
                     * @param _suffix File suffix
                     * 
                     */
                    void SetSuffix(const std::string& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     * 
                     */
                    bool SuffixHasBeenSet() const;

                private:

                    /**
                     * Service name
                     */
                    std::string m_businessName;
                    bool m_businessNameHasBeenSet;

                    /**
                     * File suffix
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEMPSECRET4UPLOADFILE2COSREQUEST_H_
