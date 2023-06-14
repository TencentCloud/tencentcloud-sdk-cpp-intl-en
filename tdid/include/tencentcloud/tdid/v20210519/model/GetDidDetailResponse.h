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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDDETAILRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDDETAILRESPONSE_H_

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
                * GetDidDetail response structure.
                */
                class GetDidDetailResponse : public AbstractModel
                {
                public:
                    GetDidDetailResponse();
                    ~GetDidDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The DID.
                     * @return Did The DID.
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The public key.
                     * @return PublicKey The public key.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Whether the DID is a certified authority.
                     * @return AuthorityState Whether the DID is a certified authority.
                     * 
                     */
                    int64_t GetAuthorityState() const;

                    /**
                     * 判断参数 AuthorityState 是否已赋值
                     * @return AuthorityState 是否已赋值
                     * 
                     */
                    bool AuthorityStateHasBeenSet() const;

                    /**
                     * 获取The consortium ID.
                     * @return ConsortiumId The consortium ID.
                     * 
                     */
                    int64_t GetConsortiumId() const;

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     * 
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取The consortium name.
                     * @return ConsortiumName The consortium name.
                     * 
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     * 
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取The group ID.
                     * @return GroupId The group ID.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The BCOS resource ID.
                     * @return ResChainId The BCOS resource ID.
                     * 
                     */
                    std::string GetResChainId() const;

                    /**
                     * 判断参数 ResChainId 是否已赋值
                     * @return ResChainId 是否已赋值
                     * 
                     */
                    bool ResChainIdHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * The DID.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The public key.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Whether the DID is a certified authority.
                     */
                    int64_t m_authorityState;
                    bool m_authorityStateHasBeenSet;

                    /**
                     * The consortium ID.
                     */
                    int64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * The consortium name.
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * The group ID.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The BCOS resource ID.
                     */
                    std::string m_resChainId;
                    bool m_resChainIdHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDDETAILRESPONSE_H_
