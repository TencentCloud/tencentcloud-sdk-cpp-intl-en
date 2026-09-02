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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STOPVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STOPVULSCANTASKREQUEST_H_

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
                * StopVulScanTask request structure.
                */
                class StopVulScanTaskRequest : public AbstractModel
                {
                public:
                    StopVulScanTaskRequest();
                    ~StopVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return Id <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _id <p>Task ID.</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>Assets of stop scanning instance_id</p>
                     * @return AssetList <p>Assets of stop scanning instance_id</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>Assets of stop scanning instance_id</p>
                     * @param _assetList <p>Assets of stop scanning instance_id</p>
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
                     * <p>Task ID.</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Assets of stop scanning instance_id</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STOPVULSCANTASKREQUEST_H_
