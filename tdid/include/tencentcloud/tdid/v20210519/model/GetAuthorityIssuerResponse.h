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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_

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
                * GetAuthorityIssuer response structure.
                */
                class GetAuthorityIssuerResponse : public AbstractModel
                {
                public:
                    GetAuthorityIssuerResponse();
                    ~GetAuthorityIssuerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The authority name.
                     * @return Name The authority name.
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The blockchain network ID.
                     * @return ClusterId The blockchain network ID.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The blockchain group ID.
                     * @return GroupId The blockchain group ID.
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The DID of the authority.
                     * @return Did The DID of the authority.
                     */
                    std::string GetDid() const;

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取The registration time.
                     * @return RegisterTime The registration time.
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取The recognition time.
                     * @return RecognizeTime The recognition time.
                     */
                    std::string GetRecognizeTime() const;

                    /**
                     * 判断参数 RecognizeTime 是否已赋值
                     * @return RecognizeTime 是否已赋值
                     */
                    bool RecognizeTimeHasBeenSet() const;

                private:

                    /**
                     * The authority name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The blockchain network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The blockchain group ID.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The DID of the authority.
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The registration time.
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * The recognition time.
                     */
                    std::string m_recognizeTime;
                    bool m_recognizeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITYISSUERRESPONSE_H_
