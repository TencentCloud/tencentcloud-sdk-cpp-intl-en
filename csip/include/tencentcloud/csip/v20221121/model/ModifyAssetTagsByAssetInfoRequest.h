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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSBYASSETINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSBYASSETINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTagModifyAssetItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetTagsByAssetInfo request structure.
                */
                class ModifyAssetTagsByAssetInfoRequest : public AbstractModel
                {
                public:
                    ModifyAssetTagsByAssetInfoRequest();
                    ~ModifyAssetTagsByAssetInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id.</p>
                     * @return MemberId <p>Group account member id.</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id.</p>
                     * @param _memberId <p>Group account member id.</p>
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
                     * @return Assets <p>Asset list</p>
                     * 
                     */
                    std::vector<AssetTagModifyAssetItem> GetAssets() const;

                    /**
                     * 设置<p>Asset list</p>
                     * @param _assets <p>Asset list</p>
                     * 
                     */
                    void SetAssets(const std::vector<AssetTagModifyAssetItem>& _assets);

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取<p>Tag ID list</p>
                     * @return TagIDs <p>Tag ID list</p>
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置<p>Tag ID list</p>
                     * @param _tagIDs <p>Tag ID list</p>
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取<p>Operation type</p>
                     * @return OperationType <p>Operation type</p>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>Operation type</p>
                     * @param _operationType <p>Operation type</p>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id.</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Asset list</p>
                     */
                    std::vector<AssetTagModifyAssetItem> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * <p>Tag ID list</p>
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * <p>Operation type</p>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSBYASSETINFOREQUEST_H_
