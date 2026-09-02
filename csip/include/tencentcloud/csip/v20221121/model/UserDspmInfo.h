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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_

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
                * Account dspm information
                */
                class UserDspmInfo : public AbstractModel
                {
                public:
                    UserDspmInfo();
                    ~UserDspmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APPID
                     * @return AppID APPID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置APPID
                     * @param _appID APPID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取UIN
                     * @return Uin UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置UIN
                     * @param _uin UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取Number of database assets under the account
                     * @return AssetNum Number of database assets under the account
                     * 
                     */
                    int64_t GetAssetNum() const;

                    /**
                     * 设置Number of database assets under the account
                     * @param _assetNum Number of database assets under the account
                     * 
                     */
                    void SetAssetNum(const int64_t& _assetNum);

                    /**
                     * 判断参数 AssetNum 是否已赋值
                     * @return AssetNum 是否已赋值
                     * 
                     */
                    bool AssetNumHasBeenSet() const;

                    /**
                     * 获取Number of security analysis database assets enabled under the account
                     * @return UsedAssetNum Number of security analysis database assets enabled under the account
                     * 
                     */
                    int64_t GetUsedAssetNum() const;

                    /**
                     * 设置Number of security analysis database assets enabled under the account
                     * @param _usedAssetNum Number of security analysis database assets enabled under the account
                     * 
                     */
                    void SetUsedAssetNum(const int64_t& _usedAssetNum);

                    /**
                     * 判断参数 UsedAssetNum 是否已赋值
                     * @return UsedAssetNum 是否已赋值
                     * 
                     */
                    bool UsedAssetNumHasBeenSet() const;

                    /**
                     * 获取Whether it is shared. 1: shared; 2: not shared
                     * @return IsShared Whether it is shared. 1: shared; 2: not shared
                     * 
                     */
                    int64_t GetIsShared() const;

                    /**
                     * 设置Whether it is shared. 1: shared; 2: not shared
                     * @param _isShared Whether it is shared. 1: shared; 2: not shared
                     * 
                     */
                    void SetIsShared(const int64_t& _isShared);

                    /**
                     * 判断参数 IsShared 是否已赋值
                     * @return IsShared 是否已赋值
                     * 
                     */
                    bool IsSharedHasBeenSet() const;

                    /**
                     * 获取Whether to purchase separately. 1: separate purchase; 2: not purchased separately
                     * @return IsSelfBuy Whether to purchase separately. 1: separate purchase; 2: not purchased separately
                     * 
                     */
                    int64_t GetIsSelfBuy() const;

                    /**
                     * 设置Whether to purchase separately. 1: separate purchase; 2: not purchased separately
                     * @param _isSelfBuy Whether to purchase separately. 1: separate purchase; 2: not purchased separately
                     * 
                     */
                    void SetIsSelfBuy(const int64_t& _isSelfBuy);

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取Quota source account
                     * @return ShareFromAppID Quota source account
                     * 
                     */
                    int64_t GetShareFromAppID() const;

                    /**
                     * 设置Quota source account
                     * @param _shareFromAppID Quota source account
                     * 
                     */
                    void SetShareFromAppID(const int64_t& _shareFromAppID);

                    /**
                     * 判断参数 ShareFromAppID 是否已赋值
                     * @return ShareFromAppID 是否已赋值
                     * 
                     */
                    bool ShareFromAppIDHasBeenSet() const;

                    /**
                     * 获取Cloud type (0: Tencent Cloud; 1: Amazon Web Services; 2: Microsoft Azure; 3: Google Cloud; 4: Alibaba Cloud; 5: Huawei Cloud)
                     * @return CloudType Cloud type (0: Tencent Cloud; 1: Amazon Web Services; 2: Microsoft Azure; 3: Google Cloud; 4: Alibaba Cloud; 5: Huawei Cloud)
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置Cloud type (0: Tencent Cloud; 1: Amazon Web Services; 2: Microsoft Azure; 3: Google Cloud; 4: Alibaba Cloud; 5: Huawei Cloud)
                     * @param _cloudType Cloud type (0: Tencent Cloud; 1: Amazon Web Services; 2: Microsoft Azure; 3: Google Cloud; 4: Alibaba Cloud; 5: Huawei Cloud)
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取Whether the account is isolated
                     * @return IsIsolating Whether the account is isolated
                     * 
                     */
                    bool GetIsIsolating() const;

                    /**
                     * 设置Whether the account is isolated
                     * @param _isIsolating Whether the account is isolated
                     * 
                     */
                    void SetIsIsolating(const bool& _isIsolating);

                    /**
                     * 判断参数 IsIsolating 是否已赋值
                     * @return IsIsolating 是否已赋值
                     * 
                     */
                    bool IsIsolatingHasBeenSet() const;

                    /**
                     * 获取Whether data clearing is underway
                     * @return IsDataCleaning Whether data clearing is underway
                     * 
                     */
                    bool GetIsDataCleaning() const;

                    /**
                     * 设置Whether data clearing is underway
                     * @param _isDataCleaning Whether data clearing is underway
                     * 
                     */
                    void SetIsDataCleaning(const bool& _isDataCleaning);

                    /**
                     * 判断参数 IsDataCleaning 是否已赋值
                     * @return IsDataCleaning 是否已赋值
                     * 
                     */
                    bool IsDataCleaningHasBeenSet() const;

                private:

                    /**
                     * APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Account nickname
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * Number of database assets under the account
                     */
                    int64_t m_assetNum;
                    bool m_assetNumHasBeenSet;

                    /**
                     * Number of security analysis database assets enabled under the account
                     */
                    int64_t m_usedAssetNum;
                    bool m_usedAssetNumHasBeenSet;

                    /**
                     * Whether it is shared. 1: shared; 2: not shared
                     */
                    int64_t m_isShared;
                    bool m_isSharedHasBeenSet;

                    /**
                     * Whether to purchase separately. 1: separate purchase; 2: not purchased separately
                     */
                    int64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * Quota source account
                     */
                    int64_t m_shareFromAppID;
                    bool m_shareFromAppIDHasBeenSet;

                    /**
                     * Cloud type (0: Tencent Cloud; 1: Amazon Web Services; 2: Microsoft Azure; 3: Google Cloud; 4: Alibaba Cloud; 5: Huawei Cloud)
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * Whether the account is isolated
                     */
                    bool m_isIsolating;
                    bool m_isIsolatingHasBeenSet;

                    /**
                     * Whether data clearing is underway
                     */
                    bool m_isDataCleaning;
                    bool m_isDataCleaningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
