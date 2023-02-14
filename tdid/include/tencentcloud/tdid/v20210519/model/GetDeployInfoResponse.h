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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetDeployInfo response structure.
                */
                class GetDeployInfoResponse : public AbstractModel
                {
                public:
                    GetDeployInfoResponse();
                    ~GetDeployInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The CNS address of the contract.
                     * @return Hash The CNS address of the contract.
                     */
                    std::string GetHash() const;

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取The main group ID of the contract.
                     * @return GroupId The main group ID of the contract.
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The DID of the organization that deployed the contract.
                     * @return DeployDid The DID of the organization that deployed the contract.
                     */
                    std::string GetDeployDid() const;

                    /**
                     * 判断参数 DeployDid 是否已赋值
                     * @return DeployDid 是否已赋值
                     */
                    bool DeployDidHasBeenSet() const;

                    /**
                     * 获取The TDID SDK version.
                     * @return SdkVersion The TDID SDK version.
                     */
                    std::string GetSdkVersion() const;

                    /**
                     * 判断参数 SdkVersion 是否已赋值
                     * @return SdkVersion 是否已赋值
                     */
                    bool SdkVersionHasBeenSet() const;

                    /**
                     * 获取The TDID contract version.
                     * @return ContractVersion The TDID contract version.
                     */
                    std::string GetContractVersion() const;

                    /**
                     * 判断参数 ContractVersion 是否已赋值
                     * @return ContractVersion 是否已赋值
                     */
                    bool ContractVersionHasBeenSet() const;

                    /**
                     * 获取The blockchain node version.
                     * @return BlockVersion The blockchain node version.
                     */
                    std::string GetBlockVersion() const;

                    /**
                     * 判断参数 BlockVersion 是否已赋值
                     * @return BlockVersion 是否已赋值
                     */
                    bool BlockVersionHasBeenSet() const;

                    /**
                     * 获取The IP address of the blockchain node.
                     * @return BlockIp The IP address of the blockchain node.
                     */
                    std::string GetBlockIp() const;

                    /**
                     * 判断参数 BlockIp 是否已赋值
                     * @return BlockIp 是否已赋值
                     */
                    bool BlockIpHasBeenSet() const;

                    /**
                     * 获取The address of the DID contract.
                     * @return DidAddress The address of the DID contract.
                     */
                    std::string GetDidAddress() const;

                    /**
                     * 判断参数 DidAddress 是否已赋值
                     * @return DidAddress 是否已赋值
                     */
                    bool DidAddressHasBeenSet() const;

                    /**
                     * 获取The address of the claim protocol type (CPT) contract.
                     * @return CptAddress The address of the claim protocol type (CPT) contract.
                     */
                    std::string GetCptAddress() const;

                    /**
                     * 判断参数 CptAddress 是否已赋值
                     * @return CptAddress 是否已赋值
                     */
                    bool CptAddressHasBeenSet() const;

                    /**
                     * 获取The address of the authority.
                     * @return AuthorityAddress The address of the authority.
                     */
                    std::string GetAuthorityAddress() const;

                    /**
                     * 判断参数 AuthorityAddress 是否已赋值
                     * @return AuthorityAddress 是否已赋值
                     */
                    bool AuthorityAddressHasBeenSet() const;

                    /**
                     * 获取The evidence contract address.
                     * @return EvidenceAddress The evidence contract address.
                     */
                    std::string GetEvidenceAddress() const;

                    /**
                     * 判断参数 EvidenceAddress 是否已赋值
                     * @return EvidenceAddress 是否已赋值
                     */
                    bool EvidenceAddressHasBeenSet() const;

                    /**
                     * 获取The contract address of the specific issuer.
                     * @return SpecificAddress The contract address of the specific issuer.
                     */
                    std::string GetSpecificAddress() const;

                    /**
                     * 判断参数 SpecificAddress 是否已赋值
                     * @return SpecificAddress 是否已赋值
                     */
                    bool SpecificAddressHasBeenSet() const;

                    /**
                     * 获取The chain ID.
                     * @return ChainId The chain ID.
                     */
                    std::string GetChainId() const;

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     */
                    bool ChainIdHasBeenSet() const;

                private:

                    /**
                     * The CNS address of the contract.
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * The main group ID of the contract.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The DID of the organization that deployed the contract.
                     */
                    std::string m_deployDid;
                    bool m_deployDidHasBeenSet;

                    /**
                     * The TDID SDK version.
                     */
                    std::string m_sdkVersion;
                    bool m_sdkVersionHasBeenSet;

                    /**
                     * The TDID contract version.
                     */
                    std::string m_contractVersion;
                    bool m_contractVersionHasBeenSet;

                    /**
                     * The blockchain node version.
                     */
                    std::string m_blockVersion;
                    bool m_blockVersionHasBeenSet;

                    /**
                     * The IP address of the blockchain node.
                     */
                    std::string m_blockIp;
                    bool m_blockIpHasBeenSet;

                    /**
                     * The address of the DID contract.
                     */
                    std::string m_didAddress;
                    bool m_didAddressHasBeenSet;

                    /**
                     * The address of the claim protocol type (CPT) contract.
                     */
                    std::string m_cptAddress;
                    bool m_cptAddressHasBeenSet;

                    /**
                     * The address of the authority.
                     */
                    std::string m_authorityAddress;
                    bool m_authorityAddressHasBeenSet;

                    /**
                     * The evidence contract address.
                     */
                    std::string m_evidenceAddress;
                    bool m_evidenceAddressHasBeenSet;

                    /**
                     * The contract address of the specific issuer.
                     */
                    std::string m_specificAddress;
                    bool m_specificAddressHasBeenSet;

                    /**
                     * The chain ID.
                     */
                    std::string m_chainId;
                    bool m_chainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDEPLOYINFORESPONSE_H_
