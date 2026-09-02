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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSETID_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSETID_H_

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
                * Database asset Id information
                */
                class DspmDbAssetId : public AbstractModel
                {
                public:
                    DspmDbAssetId();
                    ~DspmDbAssetId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset instance ID.
                     * @return AssetId Asset instance ID.
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset instance ID.
                     * @param _assetId Asset instance ID.
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

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
                     * 获取Asset name
                     * @return Name Asset name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Asset name
                     * @param _name Asset name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Asset record id
                     * @return Id Asset record id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Asset record id
                     * @param _id Asset record id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取app id of the account that owns the asset
                     * @return AppId app id of the account that owns the asset
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置app id of the account that owns the asset
                     * @param _appId app id of the account that owns the asset
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Account nickname
                     * @return NickName Account nickname
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置Account nickname
                     * @param _nickName Account nickname
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取Account uin of the asset owner
                     * @return Uin Account uin of the asset owner
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin of the asset owner
                     * @param _uin Account uin of the asset owner
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * Asset instance ID.
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Asset type
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Asset record id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * app id of the account that owns the asset
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Account uin of the asset owner
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBASSETID_H_
