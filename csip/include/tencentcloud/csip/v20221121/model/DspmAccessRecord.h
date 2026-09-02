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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDbAsset.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetAccount.h>
#include <tencentcloud/csip/v20221121/model/DspmIp.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm access record
                */
                class DspmAccessRecord : public AbstractModel
                {
                public:
                    DspmAccessRecord();
                    ~DspmAccessRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Asset information
                     * @return Asset Asset information
                     * 
                     */
                    DspmDbAsset GetAsset() const;

                    /**
                     * 设置Asset information
                     * @param _asset Asset information
                     * 
                     */
                    void SetAsset(const DspmDbAsset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return Accounts Account
                     * 
                     */
                    std::vector<DspmAssetAccount> GetAccounts() const;

                    /**
                     * 设置Account
                     * @param _accounts Account
                     * 
                     */
                    void SetAccounts(const std::vector<DspmAssetAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Source ip information
                     * @return SourceIpList Source ip information
                     * 
                     */
                    std::vector<DspmIp> GetSourceIpList() const;

                    /**
                     * 设置Source ip information
                     * @param _sourceIpList Source ip information
                     * 
                     */
                    void SetSourceIpList(const std::vector<DspmIp>& _sourceIpList);

                    /**
                     * 判断参数 SourceIpList 是否已赋值
                     * @return SourceIpList 是否已赋值
                     * 
                     */
                    bool SourceIpListHasBeenSet() const;

                    /**
                     * 获取Recording time
                     * @return RecordTime Recording time
                     * 
                     */
                    std::string GetRecordTime() const;

                    /**
                     * 设置Recording time
                     * @param _recordTime Recording time
                     * 
                     */
                    void SetRecordTime(const std::string& _recordTime);

                    /**
                     * 判断参数 RecordTime 是否已赋值
                     * @return RecordTime 是否已赋值
                     * 
                     */
                    bool RecordTimeHasBeenSet() const;

                    /**
                     * 获取Number of successful logins
                     * @return LoginSuccessCount Number of successful logins
                     * 
                     */
                    int64_t GetLoginSuccessCount() const;

                    /**
                     * 设置Number of successful logins
                     * @param _loginSuccessCount Number of successful logins
                     * 
                     */
                    void SetLoginSuccessCount(const int64_t& _loginSuccessCount);

                    /**
                     * 判断参数 LoginSuccessCount 是否已赋值
                     * @return LoginSuccessCount 是否已赋值
                     * 
                     */
                    bool LoginSuccessCountHasBeenSet() const;

                    /**
                     * 获取Login failure count
                     * @return LoginFailedCount Login failure count
                     * 
                     */
                    int64_t GetLoginFailedCount() const;

                    /**
                     * 设置Login failure count
                     * @param _loginFailedCount Login failure count
                     * 
                     */
                    void SetLoginFailedCount(const int64_t& _loginFailedCount);

                    /**
                     * 判断参数 LoginFailedCount 是否已赋值
                     * @return LoginFailedCount 是否已赋值
                     * 
                     */
                    bool LoginFailedCountHasBeenSet() const;

                private:

                    /**
                     * Asset information
                     */
                    DspmDbAsset m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * Account
                     */
                    std::vector<DspmAssetAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Source ip information
                     */
                    std::vector<DspmIp> m_sourceIpList;
                    bool m_sourceIpListHasBeenSet;

                    /**
                     * Recording time
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                    /**
                     * Number of successful logins
                     */
                    int64_t m_loginSuccessCount;
                    bool m_loginSuccessCountHasBeenSet;

                    /**
                     * Login failure count
                     */
                    int64_t m_loginFailedCount;
                    bool m_loginFailedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORD_H_
