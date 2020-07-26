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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONADDRESSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetFunctionAddress response structure.
                */
                class GetFunctionAddressResponse : public AbstractModel
                {
                public:
                    GetFunctionAddressResponse();
                    ~GetFunctionAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Cos address of the function
                     * @return Url Cos address of the function
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取SHA256 code of the function
                     * @return CodeSha256 SHA256 code of the function
                     */
                    std::string GetCodeSha256() const;

                    /**
                     * 判断参数 CodeSha256 是否已赋值
                     * @return CodeSha256 是否已赋值
                     */
                    bool CodeSha256HasBeenSet() const;

                private:

                    /**
                     * Cos address of the function
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * SHA256 code of the function
                     */
                    std::string m_codeSha256;
                    bool m_codeSha256HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONADDRESSRESPONSE_H_
