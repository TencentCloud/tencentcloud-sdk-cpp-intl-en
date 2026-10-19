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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos-associated ak asset information
                */
                class CosAkAssetInfo : public AbstractModel
                {
                public:
                    CosAkAssetInfo();
                    ~CosAkAssetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
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
                     * 获取ak id
                     * @return AkId ak id
                     * 
                     */
                    std::string GetAkId() const;

                    /**
                     * 设置ak id
                     * @param _akId ak id
                     * 
                     */
                    void SetAkId(const std::string& _akId);

                    /**
                     * 判断参数 AkId 是否已赋值
                     * @return AkId 是否已赋值
                     * 
                     */
                    bool AkIdHasBeenSet() const;

                    /**
                     * 获取ak name
                     * @return AkName ak name
                     * 
                     */
                    std::string GetAkName() const;

                    /**
                     * 设置ak name
                     * @param _akName ak name
                     * 
                     */
                    void SetAkName(const std::string& _akName);

                    /**
                     * 判断参数 AkName 是否已赋值
                     * @return AkName 是否已赋值
                     * 
                     */
                    bool AkNameHasBeenSet() const;

                    /**
                     * 获取ak remark
                     * @return AkRemark ak remark
                     * 
                     */
                    std::string GetAkRemark() const;

                    /**
                     * 设置ak remark
                     * @param _akRemark ak remark
                     * 
                     */
                    void SetAkRemark(const std::string& _akRemark);

                    /**
                     * 判断参数 AkRemark 是否已赋值
                     * @return AkRemark 是否已赋值
                     * 
                     */
                    bool AkRemarkHasBeenSet() const;

                    /**
                     * 获取uin associated with the ak
                     * @return AkOwnerUin uin associated with the ak
                     * 
                     */
                    std::string GetAkOwnerUin() const;

                    /**
                     * 设置uin associated with the ak
                     * @param _akOwnerUin uin associated with the ak
                     * 
                     */
                    void SetAkOwnerUin(const std::string& _akOwnerUin);

                    /**
                     * 判断参数 AkOwnerUin 是否已赋值
                     * @return AkOwnerUin 是否已赋值
                     * 
                     */
                    bool AkOwnerUinHasBeenSet() const;

                    /**
                     * 获取ak type. 1: primary. 2: sub
                     * @return AkOwnerType ak type. 1: primary. 2: sub
                     * 
                     */
                    int64_t GetAkOwnerType() const;

                    /**
                     * 设置ak type. 1: primary. 2: sub
                     * @param _akOwnerType ak type. 1: primary. 2: sub
                     * 
                     */
                    void SetAkOwnerType(const int64_t& _akOwnerType);

                    /**
                     * 判断参数 AkOwnerType 是否已赋值
                     * @return AkOwnerType 是否已赋值
                     * 
                     */
                    bool AkOwnerTypeHasBeenSet() const;

                    /**
                     * 获取ak account name
                     * @return AkOwnerName ak account name
                     * 
                     */
                    std::string GetAkOwnerName() const;

                    /**
                     * 设置ak account name
                     * @param _akOwnerName ak account name
                     * 
                     */
                    void SetAkOwnerName(const std::string& _akOwnerName);

                    /**
                     * 判断参数 AkOwnerName 是否已赋值
                     * @return AkOwnerName 是否已赋值
                     * 
                     */
                    bool AkOwnerNameHasBeenSet() const;

                    /**
                     * 获取ak main account name
                     * @return AkMainOwnerName ak main account name
                     * 
                     */
                    std::string GetAkMainOwnerName() const;

                    /**
                     * 设置ak main account name
                     * @param _akMainOwnerName ak main account name
                     * 
                     */
                    void SetAkMainOwnerName(const std::string& _akMainOwnerName);

                    /**
                     * 判断参数 AkMainOwnerName 是否已赋值
                     * @return AkMainOwnerName 是否已赋值
                     * 
                     */
                    bool AkMainOwnerNameHasBeenSet() const;

                    /**
                     * 获取ak-associated bucket collection
                     * @return AkRelBucketSet ak-associated bucket collection
                     * 
                     */
                    std::vector<std::string> GetAkRelBucketSet() const;

                    /**
                     * 设置ak-associated bucket collection
                     * @param _akRelBucketSet ak-associated bucket collection
                     * 
                     */
                    void SetAkRelBucketSet(const std::vector<std::string>& _akRelBucketSet);

                    /**
                     * 判断参数 AkRelBucketSet 是否已赋值
                     * @return AkRelBucketSet 是否已赋值
                     * 
                     */
                    bool AkRelBucketSetHasBeenSet() const;

                    /**
                     * 获取ak associated alarm collection
                     * @return AkRelAlarmSet ak associated alarm collection
                     * 
                     */
                    std::vector<CosRiskInfo> GetAkRelAlarmSet() const;

                    /**
                     * 设置ak associated alarm collection
                     * @param _akRelAlarmSet ak associated alarm collection
                     * 
                     */
                    void SetAkRelAlarmSet(const std::vector<CosRiskInfo>& _akRelAlarmSet);

                    /**
                     * 判断参数 AkRelAlarmSet 是否已赋值
                     * @return AkRelAlarmSet 是否已赋值
                     * 
                     */
                    bool AkRelAlarmSetHasBeenSet() const;

                    /**
                     * 获取Number of IPs associated with Ak
                     * @return AkRelIpCount Number of IPs associated with Ak
                     * 
                     */
                    uint64_t GetAkRelIpCount() const;

                    /**
                     * 设置Number of IPs associated with Ak
                     * @param _akRelIpCount Number of IPs associated with Ak
                     * 
                     */
                    void SetAkRelIpCount(const uint64_t& _akRelIpCount);

                    /**
                     * 判断参数 AkRelIpCount 是否已赋值
                     * @return AkRelIpCount 是否已赋值
                     * 
                     */
                    bool AkRelIpCountHasBeenSet() const;

                    /**
                     * 获取ak status. 0: disabled. 1: enabled.
                     * @return AkStatus ak status. 0: disabled. 1: enabled.
                     * 
                     */
                    int64_t GetAkStatus() const;

                    /**
                     * 设置ak status. 0: disabled. 1: enabled.
                     * @param _akStatus ak status. 0: disabled. 1: enabled.
                     * 
                     */
                    void SetAkStatus(const int64_t& _akStatus);

                    /**
                     * 判断参数 AkStatus 是否已赋值
                     * @return AkStatus 是否已赋值
                     * 
                     */
                    bool AkStatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTimestamp Creation time.
                     * 
                     */
                    uint64_t GetCreateTimestamp() const;

                    /**
                     * 设置Creation time.
                     * @param _createTimestamp Creation time.
                     * 
                     */
                    void SetCreateTimestamp(const uint64_t& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取Last access time
                     * @return LastAccessTimestamp Last access time
                     * 
                     */
                    uint64_t GetLastAccessTimestamp() const;

                    /**
                     * 设置Last access time
                     * @param _lastAccessTimestamp Last access time
                     * 
                     */
                    void SetLastAccessTimestamp(const uint64_t& _lastAccessTimestamp);

                    /**
                     * 判断参数 LastAccessTimestamp 是否已赋值
                     * @return LastAccessTimestamp 是否已赋值
                     * 
                     */
                    bool LastAccessTimestampHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * ak id
                     */
                    std::string m_akId;
                    bool m_akIdHasBeenSet;

                    /**
                     * ak name
                     */
                    std::string m_akName;
                    bool m_akNameHasBeenSet;

                    /**
                     * ak remark
                     */
                    std::string m_akRemark;
                    bool m_akRemarkHasBeenSet;

                    /**
                     * uin associated with the ak
                     */
                    std::string m_akOwnerUin;
                    bool m_akOwnerUinHasBeenSet;

                    /**
                     * ak type. 1: primary. 2: sub
                     */
                    int64_t m_akOwnerType;
                    bool m_akOwnerTypeHasBeenSet;

                    /**
                     * ak account name
                     */
                    std::string m_akOwnerName;
                    bool m_akOwnerNameHasBeenSet;

                    /**
                     * ak main account name
                     */
                    std::string m_akMainOwnerName;
                    bool m_akMainOwnerNameHasBeenSet;

                    /**
                     * ak-associated bucket collection
                     */
                    std::vector<std::string> m_akRelBucketSet;
                    bool m_akRelBucketSetHasBeenSet;

                    /**
                     * ak associated alarm collection
                     */
                    std::vector<CosRiskInfo> m_akRelAlarmSet;
                    bool m_akRelAlarmSetHasBeenSet;

                    /**
                     * Number of IPs associated with Ak
                     */
                    uint64_t m_akRelIpCount;
                    bool m_akRelIpCountHasBeenSet;

                    /**
                     * ak status. 0: disabled. 1: enabled.
                     */
                    int64_t m_akStatus;
                    bool m_akStatusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    uint64_t m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * Last access time
                     */
                    uint64_t m_lastAccessTimestamp;
                    bool m_lastAccessTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSAKASSETINFO_H_
