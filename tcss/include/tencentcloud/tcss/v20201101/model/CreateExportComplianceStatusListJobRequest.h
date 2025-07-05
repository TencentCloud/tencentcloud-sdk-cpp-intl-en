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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateExportComplianceStatusListJob request structure.
                */
                class CreateExportComplianceStatusListJobRequest : public AbstractModel
                {
                public:
                    CreateExportComplianceStatusListJobRequest();
                    ~CreateExportComplianceStatusListJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type of the information to be exported
                     * @return AssetType Asset type of the information to be exported
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type of the information to be exported
                     * @param _assetType Asset type of the information to be exported
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
                     * 获取Export by check item or asset. Valid values: `true` (export by asset); `false` (export by check item).
                     * @return ExportByAsset Export by check item or asset. Valid values: `true` (export by asset); `false` (export by check item).
                     * 
                     */
                    bool GetExportByAsset() const;

                    /**
                     * 设置Export by check item or asset. Valid values: `true` (export by asset); `false` (export by check item).
                     * @param _exportByAsset Export by check item or asset. Valid values: `true` (export by asset); `false` (export by check item).
                     * 
                     */
                    void SetExportByAsset(const bool& _exportByAsset);

                    /**
                     * 判断参数 ExportByAsset 是否已赋值
                     * @return ExportByAsset 是否已赋值
                     * 
                     */
                    bool ExportByAssetHasBeenSet() const;

                    /**
                     * 获取Valid values: `true` (export all); `false` (export based on the `IdList`).
                     * @return ExportAll Valid values: `true` (export all); `false` (export based on the `IdList`).
                     * 
                     */
                    bool GetExportAll() const;

                    /**
                     * 设置Valid values: `true` (export all); `false` (export based on the `IdList`).
                     * @param _exportAll Valid values: `true` (export all); `false` (export based on the `IdList`).
                     * 
                     */
                    void SetExportAll(const bool& _exportAll);

                    /**
                     * 判断参数 ExportAll 是否已赋值
                     * @return ExportAll 是否已赋值
                     * 
                     */
                    bool ExportAllHasBeenSet() const;

                    /**
                     * 获取List of IDs of assets or check items to be exported, which is determined by the value of `ExportByAsset`.
                     * @return IdList List of IDs of assets or check items to be exported, which is determined by the value of `ExportByAsset`.
                     * 
                     */
                    std::vector<uint64_t> GetIdList() const;

                    /**
                     * 设置List of IDs of assets or check items to be exported, which is determined by the value of `ExportByAsset`.
                     * @param _idList List of IDs of assets or check items to be exported, which is determined by the value of `ExportByAsset`.
                     * 
                     */
                    void SetIdList(const std::vector<uint64_t>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * Asset type of the information to be exported
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Export by check item or asset. Valid values: `true` (export by asset); `false` (export by check item).
                     */
                    bool m_exportByAsset;
                    bool m_exportByAssetHasBeenSet;

                    /**
                     * Valid values: `true` (export all); `false` (export based on the `IdList`).
                     */
                    bool m_exportAll;
                    bool m_exportAllHasBeenSet;

                    /**
                     * List of IDs of assets or check items to be exported, which is determined by the value of `ExportByAsset`.
                     */
                    std::vector<uint64_t> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_
