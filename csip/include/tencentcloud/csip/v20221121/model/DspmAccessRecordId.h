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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORDID_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORDID_H_

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
                * Dspm access management record Id
                */
                class DspmAccessRecordId : public AbstractModel
                {
                public:
                    DspmAccessRecordId();
                    ~DspmAccessRecordId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source IP
                     * @return SourceIp Source IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Source IP
                     * @param _sourceIp Source IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取Asset list
                     * @return AssetId Asset list
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置Asset list
                     * @param _assetId Asset list
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
                     * 获取Region of the asset
                     * @return Region Region of the asset
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the asset
                     * @param _region Region of the asset
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Asset account
                     * @return Account Asset account
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Asset account
                     * @param _account Asset account
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Host address
                     * @return Host Host address
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host address
                     * @param _host Host address
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

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

                private:

                    /**
                     * Source IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * Asset list
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * Region of the asset
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Asset account
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Host address
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Recording time
                     */
                    std::string m_recordTime;
                    bool m_recordTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMACCESSRECORDID_H_
