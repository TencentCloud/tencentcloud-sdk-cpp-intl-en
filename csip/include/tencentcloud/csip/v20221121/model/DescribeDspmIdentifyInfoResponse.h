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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmIdentifyCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyInfo response structure.
                */
                class DescribeDspmIdentifyInfoResponse : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyInfoResponse();
                    ~DescribeDspmIdentifyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity ID
                     * @return IdentifyId Identity ID
                     * 
                     */
                    std::string GetIdentifyId() const;

                    /**
                     * 判断参数 IdentifyId 是否已赋值
                     * @return IdentifyId 是否已赋值
                     * 
                     */
                    bool IdentifyIdHasBeenSet() const;

                    /**
                     * 获取Identity statistical information
                     * @return IdentifyCount Identity statistical information
                     * 
                     */
                    std::vector<DspmIdentifyCount> GetIdentifyCount() const;

                    /**
                     * 判断参数 IdentifyCount 是否已赋值
                     * @return IdentifyCount 是否已赋值
                     * 
                     */
                    bool IdentifyCountHasBeenSet() const;

                    /**
                     * 获取Application count
                     * @return ApplyOrderCount Application count
                     * 
                     */
                    int64_t GetApplyOrderCount() const;

                    /**
                     * 判断参数 ApplyOrderCount 是否已赋值
                     * @return ApplyOrderCount 是否已赋值
                     * 
                     */
                    bool ApplyOrderCountHasBeenSet() const;

                    /**
                     * 获取Number of approval forms
                     * @return ApproveOrderCount Number of approval forms
                     * 
                     */
                    int64_t GetApproveOrderCount() const;

                    /**
                     * 判断参数 ApproveOrderCount 是否已赋值
                     * @return ApproveOrderCount 是否已赋值
                     * 
                     */
                    bool ApproveOrderCountHasBeenSet() const;

                    /**
                     * 获取Approved count
                     * @return ApproveHistoryCount Approved count
                     * 
                     */
                    int64_t GetApproveHistoryCount() const;

                    /**
                     * 判断参数 ApproveHistoryCount 是否已赋值
                     * @return ApproveHistoryCount 是否已赋值
                     * 
                     */
                    bool ApproveHistoryCountHasBeenSet() const;

                    /**
                     * 获取Total number of assets
                     * @return AssetCount Total number of assets
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取Total number of cloud accounts
                     * @return UinAccountCount Total number of cloud accounts
                     * 
                     */
                    int64_t GetUinAccountCount() const;

                    /**
                     * 判断参数 UinAccountCount 是否已赋值
                     * @return UinAccountCount 是否已赋值
                     * 
                     */
                    bool UinAccountCountHasBeenSet() const;

                private:

                    /**
                     * Identity ID
                     */
                    std::string m_identifyId;
                    bool m_identifyIdHasBeenSet;

                    /**
                     * Identity statistical information
                     */
                    std::vector<DspmIdentifyCount> m_identifyCount;
                    bool m_identifyCountHasBeenSet;

                    /**
                     * Application count
                     */
                    int64_t m_applyOrderCount;
                    bool m_applyOrderCountHasBeenSet;

                    /**
                     * Number of approval forms
                     */
                    int64_t m_approveOrderCount;
                    bool m_approveOrderCountHasBeenSet;

                    /**
                     * Approved count
                     */
                    int64_t m_approveHistoryCount;
                    bool m_approveHistoryCountHasBeenSet;

                    /**
                     * Total number of assets
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * Total number of cloud accounts
                     */
                    int64_t m_uinAccountCount;
                    bool m_uinAccountCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYINFORESPONSE_H_
