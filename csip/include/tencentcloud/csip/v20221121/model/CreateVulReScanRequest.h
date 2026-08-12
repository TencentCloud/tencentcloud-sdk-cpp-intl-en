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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULRESCANREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULRESCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateVulReScan request structure.
                */
                class CreateVulReScanRequest : public AbstractModel
                {
                public:
                    CreateVulReScanRequest();
                    ~CreateVulReScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Vulnerability ID</p>
                     * @return VulId <p>Vulnerability ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID</p>
                     * @param _vulId <p>Vulnerability ID</p>
                     * 
                     */
                    void SetVulId(const std::vector<uint64_t>& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>Patch Number</p>
                     * @return KbNo <p>Patch Number</p>
                     * 
                     */
                    std::vector<std::string> GetKbNo() const;

                    /**
                     * 设置<p>Patch Number</p>
                     * @param _kbNo <p>Patch Number</p>
                     * 
                     */
                    void SetKbNo(const std::vector<std::string>& _kbNo);

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Asset list</p>
                     * @return AssetList <p>Asset list</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>Asset list</p>
                     * @param _assetList <p>Asset list</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                private:

                    /**
                     * <p>Vulnerability ID</p>
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Patch Number</p>
                     */
                    std::vector<std::string> m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Asset list</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULRESCANREQUEST_H_
