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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Dspm asset statistics by type
                */
                class DspmAssetTypeCount : public AbstractModel
                {
                public:
                    DspmAssetTypeCount();
                    ~DspmAssetTypeCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset type
                     * @return AssetType Asset type
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
                     * @param _assetType Asset type
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

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

                private:

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMASSETTYPECOUNT_H_
