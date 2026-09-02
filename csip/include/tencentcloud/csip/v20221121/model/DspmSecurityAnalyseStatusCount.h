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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetTypeCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm asset security analysis status statistics
                */
                class DspmSecurityAnalyseStatusCount : public AbstractModel
                {
                public:
                    DspmSecurityAnalyseStatusCount();
                    ~DspmSecurityAnalyseStatusCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of activations enabled for asset security analysis
                     * @return OpenCount Number of activations enabled for asset security analysis
                     * 
                     */
                    int64_t GetOpenCount() const;

                    /**
                     * 设置Number of activations enabled for asset security analysis
                     * @param _openCount Number of activations enabled for asset security analysis
                     * 
                     */
                    void SetOpenCount(const int64_t& _openCount);

                    /**
                     * 判断参数 OpenCount 是否已赋值
                     * @return OpenCount 是否已赋值
                     * 
                     */
                    bool OpenCountHasBeenSet() const;

                    /**
                     * 获取Number of activations being enabled for asset security analysis
                     * @return OpeningCount Number of activations being enabled for asset security analysis
                     * 
                     */
                    int64_t GetOpeningCount() const;

                    /**
                     * 设置Number of activations being enabled for asset security analysis
                     * @param _openingCount Number of activations being enabled for asset security analysis
                     * 
                     */
                    void SetOpeningCount(const int64_t& _openingCount);

                    /**
                     * 判断参数 OpeningCount 是否已赋值
                     * @return OpeningCount 是否已赋值
                     * 
                     */
                    bool OpeningCountHasBeenSet() const;

                    /**
                     * 获取Number of assets whose security analysis is being disabled
                     * @return ClosingCount Number of assets whose security analysis is being disabled
                     * 
                     */
                    int64_t GetClosingCount() const;

                    /**
                     * 设置Number of assets whose security analysis is being disabled
                     * @param _closingCount Number of assets whose security analysis is being disabled
                     * 
                     */
                    void SetClosingCount(const int64_t& _closingCount);

                    /**
                     * 判断参数 ClosingCount 是否已赋值
                     * @return ClosingCount 是否已赋值
                     * 
                     */
                    bool ClosingCountHasBeenSet() const;

                    /**
                     * 获取Number of activations not enabled for asset security analysis
                     * @return CloseCount Number of activations not enabled for asset security analysis
                     * 
                     */
                    int64_t GetCloseCount() const;

                    /**
                     * 设置Number of activations not enabled for asset security analysis
                     * @param _closeCount Number of activations not enabled for asset security analysis
                     * 
                     */
                    void SetCloseCount(const int64_t& _closeCount);

                    /**
                     * 判断参数 CloseCount 是否已赋值
                     * @return CloseCount 是否已赋值
                     * 
                     */
                    bool CloseCountHasBeenSet() const;

                    /**
                     * 获取Asset security analysis status statistics grouped by asset type
                     * @return AssetTypeCountSet Asset security analysis status statistics grouped by asset type
                     * 
                     */
                    std::vector<DspmAssetTypeCount> GetAssetTypeCountSet() const;

                    /**
                     * 设置Asset security analysis status statistics grouped by asset type
                     * @param _assetTypeCountSet Asset security analysis status statistics grouped by asset type
                     * 
                     */
                    void SetAssetTypeCountSet(const std::vector<DspmAssetTypeCount>& _assetTypeCountSet);

                    /**
                     * 判断参数 AssetTypeCountSet 是否已赋值
                     * @return AssetTypeCountSet 是否已赋值
                     * 
                     */
                    bool AssetTypeCountSetHasBeenSet() const;

                private:

                    /**
                     * Number of activations enabled for asset security analysis
                     */
                    int64_t m_openCount;
                    bool m_openCountHasBeenSet;

                    /**
                     * Number of activations being enabled for asset security analysis
                     */
                    int64_t m_openingCount;
                    bool m_openingCountHasBeenSet;

                    /**
                     * Number of assets whose security analysis is being disabled
                     */
                    int64_t m_closingCount;
                    bool m_closingCountHasBeenSet;

                    /**
                     * Number of activations not enabled for asset security analysis
                     */
                    int64_t m_closeCount;
                    bool m_closeCountHasBeenSet;

                    /**
                     * Asset security analysis status statistics grouped by asset type
                     */
                    std::vector<DspmAssetTypeCount> m_assetTypeCountSet;
                    bool m_assetTypeCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMSECURITYANALYSESTATUSCOUNT_H_
