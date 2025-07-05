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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/Proof.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The credential verification parameters.
                */
                class VerifyFunctionArg : public AbstractModel
                {
                public:
                    VerifyFunctionArg();
                    ~VerifyFunctionArg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The claim protocol type (CPT) ID.
                     * @return CptId The claim protocol type (CPT) ID.
                     * 
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 设置The claim protocol type (CPT) ID.
                     * @param _cptId The claim protocol type (CPT) ID.
                     * 
                     */
                    void SetCptId(const uint64_t& _cptId);

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     * 
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取The issuer DID.
                     * @return Issuer The issuer DID.
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置The issuer DID.
                     * @param _issuer The issuer DID.
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取The expiration time.
                     * @return ExpirationDate The expiration time.
                     * 
                     */
                    int64_t GetExpirationDate() const;

                    /**
                     * 设置The expiration time.
                     * @param _expirationDate The expiration time.
                     * 
                     */
                    void SetExpirationDate(const int64_t& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取The claim.
                     * @return ClaimJson The claim.
                     * 
                     */
                    std::string GetClaimJson() const;

                    /**
                     * 设置The claim.
                     * @param _claimJson The claim.
                     * 
                     */
                    void SetClaimJson(const std::string& _claimJson);

                    /**
                     * 判断参数 ClaimJson 是否已赋值
                     * @return ClaimJson 是否已赋值
                     * 
                     */
                    bool ClaimJsonHasBeenSet() const;

                    /**
                     * 获取The time when the credential was issued.
                     * @return IssuanceDate The time when the credential was issued.
                     * 
                     */
                    int64_t GetIssuanceDate() const;

                    /**
                     * 设置The time when the credential was issued.
                     * @param _issuanceDate The time when the credential was issued.
                     * 
                     */
                    void SetIssuanceDate(const int64_t& _issuanceDate);

                    /**
                     * 判断参数 IssuanceDate 是否已赋值
                     * @return IssuanceDate 是否已赋值
                     * 
                     */
                    bool IssuanceDateHasBeenSet() const;

                    /**
                     * 获取The context.
                     * @return Context The context.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置The context.
                     * @param _context The context.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取The ID.
                     * @return Id The ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The ID.
                     * @param _id The ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The signature.
                     * @return Proof The signature.
                     * 
                     */
                    Proof GetProof() const;

                    /**
                     * 设置The signature.
                     * @param _proof The signature.
                     * 
                     */
                    void SetProof(const Proof& _proof);

                    /**
                     * 判断参数 Proof 是否已赋值
                     * @return Proof 是否已赋值
                     * 
                     */
                    bool ProofHasBeenSet() const;

                    /**
                     * 获取The type.
                     * @return Type The type.
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置The type.
                     * @param _type The type.
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * The claim protocol type (CPT) ID.
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * The issuer DID.
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * The expiration time.
                     */
                    int64_t m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * The claim.
                     */
                    std::string m_claimJson;
                    bool m_claimJsonHasBeenSet;

                    /**
                     * The time when the credential was issued.
                     */
                    int64_t m_issuanceDate;
                    bool m_issuanceDateHasBeenSet;

                    /**
                     * The context.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * The ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The signature.
                     */
                    Proof m_proof;
                    bool m_proofHasBeenSet;

                    /**
                     * The type.
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_VERIFYFUNCTIONARG_H_
