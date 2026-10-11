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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanAsset request structure.
                */
                class ScanAssetRequest : public AbstractModel
                {
                public:
                    ScanAssetRequest();
                    ~ScanAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset fingerprint type id list
                     * @return AssetTypeIds Asset fingerprint type id list
                     * 
                     */
                    std::vector<uint64_t> GetAssetTypeIds() const;

                    /**
                     * 设置Asset fingerprint type id list
                     * @param _assetTypeIds Asset fingerprint type id list
                     * 
                     */
                    void SetAssetTypeIds(const std::vector<uint64_t>& _assetTypeIds);

                    /**
                     * 判断参数 AssetTypeIds 是否已赋值
                     * @return AssetTypeIds 是否已赋值
                     * 
                     */
                    bool AssetTypeIdsHasBeenSet() const;

                    /**
                     * 获取Quuid list
                     * @return Quuids Quuid list
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Quuid list
                     * @param _quuids Quuid list
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Asset fingerprint type id list
                     */
                    std::vector<uint64_t> m_assetTypeIds;
                    bool m_assetTypeIdsHasBeenSet;

                    /**
                     * Quuid list
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_
