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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The input parameters for creating a credential.
                */
                class FunctionArg : public AbstractModel
                {
                public:
                    FunctionArg();
                    ~FunctionArg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The claim protocol type (CPT) ID.
                     * @return CptId The claim protocol type (CPT) ID.
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置The claim protocol type (CPT) ID.
                     * @param CptId The claim protocol type (CPT) ID.
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取The DID of the issuer.
                     * @return Issuer The DID of the issuer.
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置The DID of the issuer.
                     * @param Issuer The DID of the issuer.
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取The expiration time.
                     * @return ExpirationDate The expiration time.
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置The expiration time.
                     * @param ExpirationDate The expiration time.
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取The claim.
                     * @return ClaimJson The claim.
                     */
                    std::string GetClaimJson() const;

                    /**
                     * 设置The claim.
                     * @param ClaimJson The claim.
                     */
                    void SetClaimJson(const std::string& _claimJson);

                    /**
                     * 判断参数 ClaimJson 是否已赋值
                     * @return ClaimJson 是否已赋值
                     */
                    bool ClaimJsonHasBeenSet() const;

                private:

                    /**
                     * The claim protocol type (CPT) ID.
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * The DID of the issuer.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * The expiration time.
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * The claim.
                     */
                    std::string m_claimJson;
                    bool m_claimJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_FUNCTIONARG_H_
